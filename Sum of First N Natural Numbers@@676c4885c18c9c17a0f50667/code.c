#include <stdio.h>
int main() {
    int sum=0,num;
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        sum=sum+i;
    }
    printf("%d",sum);
    return 0;
}