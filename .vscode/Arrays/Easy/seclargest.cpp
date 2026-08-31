#include<bits/stdc++.h>
using namespace std;    


int main(){
    int max, secmax;
    int arr[10] = {12, 28, 13, 84, 52, 16, 72, 18, 59,84};
    if(arr[0] > arr[1]){
        max = arr[0];
        secmax = arr[1];
    }
    else{
        max = arr[1];
        secmax = arr[0];
    }
    for(int i = 2; i < 10; i++){
        if(arr[i] > max){
            secmax = max;
            max = arr[i];
        }
        else if(arr[i] > secmax && arr[i] != max){
            secmax = arr[i];
        }
    }
    cout << "The largest element in the array is: " << max << endl;
    cout << "The second largest element in the array is: " << secmax << endl;
    return 0;
}