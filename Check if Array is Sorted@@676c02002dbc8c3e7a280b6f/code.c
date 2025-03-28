// Your code here...
#include <stdio.h>
int main(){
    int n,arr[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int temp[n];
    for(int i=0;i<n;i++){
        temp[i]=arr[i];
    }
    for(int i=0;i<n-1;i++){
        int(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]==temp[i]){
            printf("Sorted");
        }
        else{
            printf("Not Sorted");
        }
    }
}