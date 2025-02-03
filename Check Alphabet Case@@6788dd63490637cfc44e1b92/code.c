#include <stdio.h>
int main() {
    char ch;
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z' || ch>='a' && ch<='z'){
    if(ch>='A' && ch<='Z'){
        printf("Uppercase");
    }
    else{
        printf("Lowercase");
    }
    }
    else{
        printf("Not an alphabet");
    }
    return 0;
}