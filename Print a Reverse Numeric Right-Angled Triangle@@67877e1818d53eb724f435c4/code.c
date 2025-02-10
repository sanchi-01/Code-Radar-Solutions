#include <stdio.h>
int main() {
    int rows;
    scanf("%d",&rows);
    for(int i=1;i<=rows;i++){
        int a=1;
        for(int j=i;j<=rows;j++){
            printf("%d ",a);
            a++;
        }
        printf("\n");
    }
    return 0;
}