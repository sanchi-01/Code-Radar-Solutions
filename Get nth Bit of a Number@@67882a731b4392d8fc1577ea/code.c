#include <stdio.h>
int main() {
    int num,pos,mask;
    scanf("%d %d",&num,&pos);
    mask=1<<pos;
    if(num & mask){
        printf("1");
    }
    else{
        printf("0");
    }
    return 0;
}