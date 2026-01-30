#include<iostream>
using namespace std;
int main(){
    int msum = 0;
    int arr[] = {1,2,4,-2,5,2,-3};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<n<<endl;
    int k = 3;
    for(int j=k;j<=n;j++){
        int sum = 0;

        for(int i=j-k;i<j;i++){
            sum+=arr[i];
        }
        msum = max(msum,sum);
    }
    cout<<msum;
}