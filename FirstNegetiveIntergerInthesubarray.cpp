#include<iostream>
using namespace std;
int main(){
    int i=0;
    int k=3;
    int j=k;
    int arr[] = {12,-1,-7,8,-15,30,16,28};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<n;
    while(j<n){
        
        for(i=0;i<j;i++){
            if(arr[i]<0){
                cout<<arr[i]<<endl;
                break;
            }
        }
         i++;
    if(j<n){
        j=j+3;

    }
    else{
        j=n-1;
    }
    }
   
}