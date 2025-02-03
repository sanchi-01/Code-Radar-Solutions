#include <stdio.h>
int main() {
    int age,cit;
    scanf("%d %d",&age,&cit);
    if(age<18){
        printf("Not Eligible");
    }
    else{
        if(cit==1){
            printf("Eligible");
        }
        else{
            printf("Not Eligible");
        }
    }
    return 0;
}