#include <stdio.h>
int main() {
    int num,pos,mask;
    scanf("%d %d",&num,&pos);
    mask=1<<pos;
    mask=~mask;
    num=num & mask;
    printf("%d",num);
    return 0;
}