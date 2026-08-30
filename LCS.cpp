#include<bits/stdc++.h>
using namespace std;

// This code calculates the length of the Longest Common Subsequence (LCS) between two strings using dynamic programming. It initializes a 2D vector `dp` to store the lengths of LCS for substrings of `s` and `t`. The nested loops iterate through each character of both strings, updating the `dp` table based on character matches and previously computed values. Finally, it outputs the length of the LCS found at `dp[n-1][m-1]`.
// int main(){
//     string s,t;
//     cin>>s>>t;
//     int n = s.size();
//     int m = t.size();
//     vector<vector<int>> dp(n,vector<int>(m,0));
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             if(s[i]==t[j]){
//                 if(i==0 || j==0){
//                     dp[i][j] = 1;
//                 }else{
//                     dp[i][j] = dp[i-1][j-1] + 1;
//                 }
//             }else{
//                 if (i == 0 && j == 0) dp[i][j] = 0;
//                 else if (i == 0) dp[i][j] = dp[i][j-1]; // carry over from left column
//                 else if (j == 0) dp[i][j] = dp[i-1][j]; // carry over from row above
//                 else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
//             }
//         }
//     }
//     cout<<dp[n-1][m-1]<<endl;
//     return 0;
// }

int main(){
    string s,t;
    cin>>s;

    t = s;
    reverse(t.begin(),t.end());

    int n = s.size();
    int m = t.size();

    vector<vector<int>> dp(n,vector<int>(m,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(s[i]==t[j]){
                if(i==0 || j==0){
                    dp[i][j] = 1;
                }else{
                    dp[i][j] = dp[i-1][j-1] + 1;
                }
            }else{
                if (i == 0 && j == 0) dp[i][j] = 0;
                else if (i == 0) dp[i][j] = dp[i][j-1]; // carry over from left column
                else if (j == 0) dp[i][j] = dp[i-1][j]; // carry over from row above
                else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
    }
    cout<<dp[n-1][m-1]<<endl;
    return 0;
}