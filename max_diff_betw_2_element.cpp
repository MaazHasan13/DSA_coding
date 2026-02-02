#include<iostream>
#include<climits>
using namespace std;

int max_diff(int arr[], int n){
        int ans = 0;
        int prev_diff = 0;
   
    for(int i=0;i<n;i++){
        int max_ele = INT_MIN;
        for(int j=i+1;j<n;j++){
            if(arr[j]>max_ele){
                max_ele = arr[j];
            }
            prev_diff = max_ele-arr[i];
        }
        ans = max(ans,prev_diff);
    }
    return ans;
}

int main(){
    int arr[8] = {9,5,8,12,2,3,7,4};
    cout<<max_diff(arr,8);

}