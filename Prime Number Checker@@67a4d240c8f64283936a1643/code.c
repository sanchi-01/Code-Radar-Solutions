#include <stdio.h>
#include <math.h>
int isPrime(int a){
    if(a<=1){
        return 0;
    }
    for(int i=2;i<=sqrt(a);i++){
        if(a%i==0){
            return 0;
        }
    }
       
    return 1;
        
    
}
// int main(){
//     int n;
//     scanf("%d",&n);
//     while(n--){
//         int num;
//         scanf("%d\n",&num);
//         printf("%d\n",isPrime(num));
//     }
//     return 0;
// }