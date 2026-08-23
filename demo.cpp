// #include <iostream>
#include<bits/stdc++.h>
using namespace std;

int sum(int a, int b, char c){
    switch(c){
        case '+': return a+b;
                  break;
        case '-': return a-b;
                  break;
        case '*': return a*b;
                  break;
        case '/': return a/b;
                  break;
        default: cout<<"Invalid operator"<<endl;
                  return -999;
    }
}

int main() {
   char c;
   cout << "Enter a character: " <<endl;
   cin>>c;
   int a, b;
   cout<< "Enter two numbers: "<<endl;
   cin>>a>>b;
   int result = sum(a,b,c);
   cout<<"the result is: "<<result<<endl;
    return 0;
}