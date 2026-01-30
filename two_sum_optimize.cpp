#include<iostream>
using namespace std;
int main(){
    int arr[5] = {2,7,11,15,25};
    int target = 22;
    int i=0;
    int j=4;
    while(i<j){
        int ans = arr[i]+arr[j];
        if(ans == target){
            cout<<"matched"<<" "<<arr[i]<<","<<arr[j];
            break;
        }
        else if(ans>target){
            j--;
        }
        else{
            i++;
        }
    }
}