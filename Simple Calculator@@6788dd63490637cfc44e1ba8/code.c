#include <stdio.h>
int main() {
    char ch;
    int a,b;
    scanf("%d %d",&a,&b);
    scanf("%c",&ch);
    switch(ch){
        case +:
        printf("%d",a+b);
        break;
        case '-':
        printf("%d",a-b);
        break;
        case '*':
        printf("%d",a*b);
        break;
        case '/':
        printf("%d",a/b);
        break;
        default:
        printf("Enter valid operator");
        break;
    }
    return 0;
}