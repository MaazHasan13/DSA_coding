#include<iostream>
using namespace std;
int main(){
    int n=5;
    int arr[n] = {2,7,11,15,27};

    int target = 22;
    for(int i=0;i<n-1;i++){
        int x = target-arr[i];
        int high=n-1;
        int low = i+1;
        while(low<high){
            int mid = (high+low)/2;
            if(arr[mid]==x){
                cout<<arr[mid]<<","<<arr[i]<<endl;
                break;
            }
            else if(arr[mid]<x){
                low = mid+1;
            }
            else{
                high = mid -1;
            }
        }
    }
}