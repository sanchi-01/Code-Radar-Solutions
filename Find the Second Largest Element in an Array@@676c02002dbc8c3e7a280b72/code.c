

#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int peak = arr[0];
    int sec_peak = arr[0]; 

    
    for (int i = 1; i < n; i++) {
        if (arr[i] > peak){
            sec_peak=peak;
            peak = arr[i];
        }
        if(arr[i]<peak && arr[i]>sec_peak){
            sec_peak=arr[i];
        }
      
        
    }
    printf("%d",sec_peak);
    return 0;
}


