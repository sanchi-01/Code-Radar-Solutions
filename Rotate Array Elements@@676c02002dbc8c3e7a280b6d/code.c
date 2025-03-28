// Your code here...
#include <stdio.h>
int main(){
    int n,k;
    int arr[100];
    scanf("%d",&n);
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    int temp[n];
    for(int i=0;i<k;i++){
        temp[i]=arr[n-k+1];
    }
    for(int i=n-1;i>=k;i--){
        arr[i]=arr[i-k];
    }
    for(int i=0;i<k;i++){
        arr[i]=temp[i];
    }
    for(int i=0;i<n,i++){
    printf("%d\n",arr[i]);
    }
    return 0;
 }