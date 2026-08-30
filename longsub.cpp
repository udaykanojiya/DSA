#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>> s;
    unordered_map<char,int> mp;
    // int res=0;
    // int left=0;
    // for(int right =0; right<s.size();right++){
    //     if(mp.find(s[right])!=mp.end() && mp[s[right]]>=left){
    //         left=mp[s[right]]+1;
    //     }
    //     mp[s[right]]=right;
    //     res=max(res,right-left+1);
    // }
   
    // cout<<res;
    for(auto x : s){
        mp[x]++;
    }
    for(auto x : mp){
        cout<<x.first<<" "<<x.second<<endl;
    }
    return 0;
}