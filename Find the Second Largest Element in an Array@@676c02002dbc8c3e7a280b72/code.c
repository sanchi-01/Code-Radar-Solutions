

#include <stdio.h>
#include<limits.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int peak = INT_MIN;
    int sec_peak = INT_MIN; 

    
    for (int i = 1; i < n; i++) {
        if (arr[i] > peak){
            sec_peak=peak;
            peak = arr[i];
        }
        else if(arr[i]<peak && arr[i]>sec_peak){
            sec_peak=arr[i];
        } 
    }
    if(sec_peak==INT_MIN){
        printf("-1");
    }else{
        printf("%d",sec_peak);
    }
    printf("%d",sec_peak);
    return 0;
}


