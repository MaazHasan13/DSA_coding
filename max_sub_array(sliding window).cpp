#include<iostream>
using namespace std;
int main(){
    int arr[7] = {5,3,-1,2,3,6,9};
    int n = 7;
    int sum = 0;
    int max_sum = 0;
    int k=3;
    // for(int i=0;i<=n-3;i++){
    //     sum = 0;
    //     for(int j=i;j<=i+2;j++){
    //         sum = sum + arr[j];
           
    //         max_sum = max(sum,max_sum);
    //     }
    // }
    int j=0;
    int i=0;
    while(j<n){
        sum = sum + arr[j];
        if(j-i+1<k)
        j++;

        else if(j-i+1 == k){
            max_sum = max(max_sum,sum);
            sum = sum-arr[i];
            j++;
            i++;
        }

    }

    cout<<max_sum;
}