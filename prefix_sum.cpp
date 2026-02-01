#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n = 6;
    int arr[n] = {2,4,5,6,20,10};
    
    vector<int>prefix(n);
    prefix[0] = arr[0];
    for(int i=1;i<n;i++){
        prefix[i] = prefix[i-1]+arr[i];
    }

    for(int i=0;i<n;i++){
        cout<<prefix[i]<<" ";
    }
}