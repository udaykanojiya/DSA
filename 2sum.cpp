#include<bits/stdc++.h>
using namespace std;    

int main(){
    int arr[10] = {0,1,2,3,4,5,6,7,8,9};
    int target = 10;
    int found = 0;
    for(int i=0;i<10;i++){
       if(arr[i]>target){
        break;
       }
         for(int j=i+1;j<10;j++){
                if(arr[i]+arr[j]==target){
                    cout<<i<<"="<<arr[i]<<" "<<j<<"="<<arr[j]<<endl;
                    
                    
                    found = 1;
                    goto end;

                }
         }
    }
    
    if(found==0){
        cout<<"No such pair found"<<endl;
    }
    end:
    return 0;
}