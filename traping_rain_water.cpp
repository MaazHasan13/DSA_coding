#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;

int trapping_water(int arr[],int n){
    //extra array..

    vector <int>v(n);
    int left = arr[0];
    int ans = 0;
    int max_ele = INT_MIN;
    int right = 0;
    for(int i=0;i<n;i++){
        int curr = arr[i];
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[j+1]){
                max_ele = arr[j+1];
                 right = max_ele;

                 if(curr == max_ele){
                    right = arr[i+1];
                 }
            
        

            if(left == curr){
                ans = 0;
                v.push_back(ans);

            }
         else if(left>curr<right){
                 ans = left - curr;
                 v.push_back(ans);
            }

            }
        }
    }
    int sum = 0;
    for(int i=0;i<n;i++){
        sum+=v[i];
    }
    return sum;
}


int main(){

}