// Your code here..

int trackPlayerRanks(int ranked,int n,int player,int m,int result){
    for(int a=0;a<m;a++){
        for(int b=0;b<n;b++){
            if(player[a]==ranked[b]){
               result[a]=b+1;
            }
            else if(player[a]<ranked[b]){
                result[a]=b+2;
            }
            else{
              result[a]=b-1;
            }
        }
    }
}