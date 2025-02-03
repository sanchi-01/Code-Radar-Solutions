#include <stdio.h>
int main() {
    int cost_price,selling_price;
    scanf("%d %d",&cost_price,&selling_price);
    if(selling_price>cost_price){
        printf("Profit");
    }
    else if(selling_price==cost_price){
        printf("No Profit No Loss");
    }
    else{
        printf("Loss");
    }
    return 0;
}