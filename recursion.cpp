#include<bits/stdc++.h>
using namespace std;

int cnt = 0;

// void name(int n, int num){
//     if(n<=0 || cnt==num+1){
//         return;
//     }
//     cout<<"Uday"<<endl;
//     cnt++;
//     name(n-1,num);
// }

int a=0;
void number(int n, int num){
    if(n<=0){
        return;
    }
// a++;
// cout<<a<<endl;
number(n-1,num);
cout<<n<<endl;

}

// int a=0;
// void number(int n){
//     if(n<=0){
//         return;
//     }
// // a++;
// cout<<n<<endl;
// number(n-1);
// }


int main(){

    int x ;
    cin>>x;
    number(x,x);
    return 0;
}