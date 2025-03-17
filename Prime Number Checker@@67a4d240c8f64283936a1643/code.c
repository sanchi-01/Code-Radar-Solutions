#include <stdio.h>
#include <math.h>
int isPrime(int a){
    for(int i=2;i<sqrt(a);i++){
        if(a%i==0){
            printf("0\n");
        }
        else{
            printf("0\n");
        }
    }
}
int main(){
    int n;
    scanf("%d",&n);
    while(n--){
        scanf("%d\n",&num);
        printf("%d\n",isPrime(num));
    }
    return 0;
}