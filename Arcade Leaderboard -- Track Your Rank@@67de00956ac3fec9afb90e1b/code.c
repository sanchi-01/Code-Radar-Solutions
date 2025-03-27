// Your code here..

// int trackPlayerRanks(int ranked,int n,int player,int m,int result){
//     for(int a=0;a<m;a++){
//         for(int b=0;b<n;b++){
//             if(player[a]==ranked[b]){
//                result[a]=b+1;
//             }
//             else if(player[a]<ranked[b]){
//                 result[a]=b+2;
//             }
//             else{
//               result[a]=b-1;
//             }
//         }
//     }
// }
#include <stdio.h>

void trackPlayerRanks(int ranked[], int n, int player[], int m, int result[]) {
    int uniqueRanked[n];
    int uniqueRankCount = 0;

    // Remove duplicates from ranked and store in uniqueRanked
    uniqueRanked[uniqueRankCount++] = ranked[0];
    for (int i = 1; i < n; i++) {
        if (ranked[i] != ranked[i - 1]) {
            uniqueRanked[uniqueRankCount++] = ranked[i];
        }
    }

    for (int i = 0; i < m; i++) {
        int playerRank = 1;
        for (int j = 0; j < uniqueRankCount; j++) {
            if (player[i] < uniqueRanked[j]) {
                playerRank = j + 2;
            } else if (player[i] == uniqueRanked[j]) {
                playerRank = j + 1;
                break;
            } else {
                //player[i] > uniqueRanked[j]. Continue the loop.
            }
        }
        if(player[i] > uniqueRanked[0]){
            playerRank = 1;
        }
        result[i] = playerRank;
    }
}