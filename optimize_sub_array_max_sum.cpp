#include<iostream>
#include<climits>
using namespace std;

int max_sub_arr_sum(int arr[],int n){
    int max_sum = INT_MIN;
    int sum = 0;
    for(int i=0;i<n;i++){
        
        sum+=arr[i];

        if(sum<0){
            sum =0;
        }

        max_sum = max(sum,max_sum);
    } 
    return max_sum;
}
int main(){
    int arr[4] ={-4,-6,-2,-8};
    cout<<max_sub_arr_sum(arr,4);

}