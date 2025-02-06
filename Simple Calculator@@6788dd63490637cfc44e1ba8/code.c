#include <stdio.h>
int main() {
    char ch;
    int a,b;
    scanf("%d %d %c",&a,&b,&ch);
    switch(a,b){
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
        printf("%d",a/b);
        break;
       
    }
    return 0;
}