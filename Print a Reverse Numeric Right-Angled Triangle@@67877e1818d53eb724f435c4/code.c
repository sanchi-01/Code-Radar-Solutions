#include <stdio.h>
int main() {
    int rows;
    sanf("%d",&rows);
    for(int i=1;i<=rows;i++){
        for(int j=i;j<=rows;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}