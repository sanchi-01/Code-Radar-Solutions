#include <stdio.h>
int main() {
    int n1,n2,n3,sum;
    scanf("%d %d %d",&n1,&n2,&n3);
    sum=n1+n2+n3;
    float avg;
    avg=sum/3.0;
    printf("Average: %.2f",avg );
    return 0;
}