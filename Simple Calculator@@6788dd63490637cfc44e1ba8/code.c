#include <stdio.h>
int main() {
    char ch;
    int a,b;
    scanf("%d %d %c",&a,&b,&ch);
    switch(ch){
        case '+':
        printf("%d",a+b);
        break;
        case '-':
        printf("%d",a-b);
        break;
        case '*':
        printf("%d",a*b);
        break;
        case '/':
        if(b==0){
            printf("error");
        }
        else{
            printf("%d",a/b);
        }
        break;
        default:
        printf("error");
        break;
       
    }
    return 0;
}