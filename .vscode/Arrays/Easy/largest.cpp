#include<bits/stdc++.h>
using namespace std;

int main() {

    int arr[10] = {12, 28, 13, 84, 52, 16, 72, 18, 59, 10};
    int res = arr[0];
    for( auto a : arr){
        if(a > res){
            res = a;
        }
    }
    cout << "The largest element in the array is: " << res << endl;
    return 0;
}