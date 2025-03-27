// Your code here..

int trackPlayerRanks(ranked,n,player,m,result){
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(player[i]==ranked[j]){
                printf("%d\n",j);
            }
            else if(player[i]<ranked[j]){
                 printf("%d\n",j+1);
            }
            else{
                printf("%d\n",j-1);
            }
        }
    }
}