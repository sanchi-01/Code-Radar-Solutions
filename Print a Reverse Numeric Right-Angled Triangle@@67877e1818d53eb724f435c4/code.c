#include <stdio.h>
int main() {
    int rows;
    int a=1;
    scanf("%d",&rows);
    for(int i=1;i<=rows;i++){
        for(int j=i;j<=rows;j++){
            printf("%d ",a);
            a++;
        }
        printf("\n");
    }
    return 0;
}