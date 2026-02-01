#include<iostream>
using namespace std;

int main(){
    int n = 6;
    int arr[n] = {2,3,5,10,50,80};


    int low = 0;
    int hight = 1;
    int target = 45;
    while(hight<n){
        if(arr[hight]-arr[low]==target){
            cout<<arr[low]<<" "<<arr[hight];
            return 0 ;
        }
        else if(arr[hight]-arr[low]<target){
            hight++;
        }
        else{
            low++;
        }
    }
}