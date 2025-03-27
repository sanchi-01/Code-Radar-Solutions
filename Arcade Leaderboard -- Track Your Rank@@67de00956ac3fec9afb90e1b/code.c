// Your code here..

int trackPlayerRanks(int ranked,int n,int player,int m,int result){
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(player[i]==ranked[j]){
               return j;
            }
            else if(player[i]<ranked[j]){
                return j+1;
            }
            else{
               return j-1;
            }
        }
    }
}