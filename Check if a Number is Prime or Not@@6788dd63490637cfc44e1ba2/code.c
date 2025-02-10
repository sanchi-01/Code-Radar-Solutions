#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int counter=0;
    for(int i=2;i<=n;i++){
        if(n%i==0){
            counter=1;
        }
    }
    if(counter==0){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
    return 0;

}