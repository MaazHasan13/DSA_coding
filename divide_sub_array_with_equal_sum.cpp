#include<iostream>
using namespace std;

int main(){
    int n = 8;
    int arr[8] = {3,4,-2,5,8,20,-10,8};
    int total_sum = 0;
    for(int i=0;i<n;i++){
        total_sum +=arr[i];
    }
    cout<<total_sum;
    int sum=0;
    for(int i=0;i<n-1;i++){
        sum = sum+arr[i];
        int ans = total_sum - sum;
        if(sum == ans){
            cout<<"hogya";
            return 0;
        }

    }
    return 0;
}