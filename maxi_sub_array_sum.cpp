#include<iostream>
using namespace std;

int max_sab_sum(int arr[],int n){
    int sum = 0;
    int max_sum = 0;
    for(int i=0;i<n;i++){
        sum = 0;
        for(int j=i;j<n;j++){
            sum = sum +arr[j];

            max_sum = max(sum,max_sum);
        }
    }
    return max_sum;
}
int main(){

    int arr[4] = {4,-6,2,8};
    cout<<max_sab_sum(arr,4);

}
