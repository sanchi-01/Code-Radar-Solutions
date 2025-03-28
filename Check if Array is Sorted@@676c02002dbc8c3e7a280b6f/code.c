// Your code here...
#include <stdio.h>
  int checkSorted(int n, int arr[100],int temp[n]){
    for(int i=0;i<n;i++){
        if(arr[i]==temp[i]){
           return 1;
        }
        else{
            return 0;
        }
    }
    }
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
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;
            }
        }
    }
    if(checkSorted(n,arr,temp)){
        printf("Sorted");
    }
    else{
        printf("Not Sorted");
    }
  
}