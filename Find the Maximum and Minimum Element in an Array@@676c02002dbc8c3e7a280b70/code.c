#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    int peak=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>peak){
            peak=arr[i];
        }
    }
    int low=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]<low){
            low=arr[i];
        }
    }
    printf("%d %d",peak,low);
}