// Your code here...

#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int peak = arr[0];
    int sec_peak = arr[0]; // Initialize to -1 or a very small value that doesn't conflict with array data

    // Find the peak (maximum element)
    for (int i = 1; i < n; i++) {
        if (arr[i] > peak) {
            peak = arr[i];
        }
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] > sec_peak && arr[i] != peak) {
            sec_peak = arr[i];
        }
    }

    printf("%d\n", sec_peak); 
    
    return 0;
}


