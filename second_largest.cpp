#include<iostream>
#include<climits>
using namespace std;

int main(){
    int arr[5] = {10,100,35,89,98};
    int mx = INT_MIN;
    int smx = INT_MIN;
    for(int i=0;i<5;i++){
        mx = max(mx,arr[i]);

    }
    for(int i=0;i<5;i++){
        if(arr[i]>smx && arr[i]!=mx){
            smx = arr[i];
        }
    }
    cout<<smx;
}