#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>>str;
    int size = str.size();
    // cout<<size<<endl;
    // string org = str;
    // reverse(str.begin(), str.end());
    for(int i=0,j=size-1;i<size/2;i++,j--){

        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    cout<<str<<endl;

    // reverse(str.begin(), str.end());
    // if(str==org){
    //     cout<<"Palindrome"<<endl;
    // }
    // else{
    //     cout<<"Not Palindrome"<<endl;
    // }

    // while
    // cout<<str<<endl;
    // cout<<*str.begin()<<endl;
    // cout<<str[0]<<endl;
    // sort(str.begin(), str.end());
    // do{
    //     cout<<str<<endl;

    // }while(next_permutation(str.begin(),str.end()));
    // int y = 1;
    // for(int i=0,j=size-1;i<size/2;i++,j--){
    
    //     if(str[i]!=str[j]){
    //         y=0;
    //         break;
    //     }

    // }
    // if(y==1){
    //     cout<<"Palindrome"<<endl;
    // }
    // else{
    //     cout<<"Not Palindrome"<<endl;
    // }
    return 0;
}