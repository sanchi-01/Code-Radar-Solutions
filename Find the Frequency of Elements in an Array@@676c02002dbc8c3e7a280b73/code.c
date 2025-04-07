#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int count=0;
    for(int j=0;j<n;j++){
    for(int i=0;i<n;i++){
        if(arr[i]==arr[i+1]){
            count++;
            break;
           }
  
     
    }
      printf("%d %d\n",arr[j],count);
    
    }
    return 0;
}
