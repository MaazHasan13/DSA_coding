#include<iostream>
using namespace std;
int main(){
    int arr[8] = {2,3,-4,5,-6,1,-9,-8};
    int n = 8;
    int k=3;
    
    for(int i=0;i<=n-k;i++){
        for(int j=i;j<i+3;j++){
            if(arr[j]<0){
            cout<<arr[j]<<endl;
            break;
            }
        }
    }
    
}