#include<iostream>
#include<vector>
#include<limits>
#include<algorithm>
using namespace std;
int main(){
    int n;
cin >> n;

vector<int> nums;
for(int i = 0; i < n; i++){
    int x;
    cin >> x;
    nums.push_back(x);
}

    sort(nums.begin(),nums.end());

    cout<<"Sorted array: ";

    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }

    int target = 45;


    //main logic....
    //using binary search
    for(int i=0;i<n-1;i++){
        int ans = target + nums[i];
    
    int low = i+1;
    int high = n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(ans == nums[mid]){
            cout<<endl;
            cout<<nums[i]<<" "<<nums[mid];
            return 0;
        }
        else if(nums[mid]<ans){
            low = mid+1;
        }
        else{
            high=mid-1;
        }

    }
}



}