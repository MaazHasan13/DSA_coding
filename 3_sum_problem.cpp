#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;

bool sum_3(int arr[],int n,int target){
    sort(arr,arr+n);

    for(int i=0;i<n-2;i++){
        int start = i+1;
        int end = n-1;
        while(start<end){
            int ans = arr[i] + arr[start] + arr[end];
            if(ans==target){
                return true;

            }
            else if(ans>target)
            end--;
            else
            start++;
        }
    }
    return false ;

    }
int main(){
    int arr[6] = {1,4,45,6,10,8};

    cout<<sum_3(arr,6,24);


}