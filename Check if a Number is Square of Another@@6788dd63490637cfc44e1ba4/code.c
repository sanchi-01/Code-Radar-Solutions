#include <stdio.h>
int main() {
    int sq,num;
    scanf("%d %d",&sq,&num);
    if(sq==num*num){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}