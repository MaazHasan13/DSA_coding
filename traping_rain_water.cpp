#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int trapping_water(int arr[], int n) {

    if(n <= 2) return 0;

    int left_max[n], right_max[n];

    left_max[0] = 0;
    for(int i = 1; i < n; i++) {
        left_max[i] = max(left_max[i-1], arr[i-1]);
    }

    right_max[n-1] = 0;
    for(int i = n-2; i >= 0; i--) {
        right_max[i] = max(right_max[i+1], arr[i+1]);
    }

    int water = 0;
    for(int i = 0; i < n; i++) {
        int min_height = min(left_max[i], right_max[i]);
        if(min_height > arr[i]) {
            water += (min_height - arr[i]);
        }
    }

    return water;
}

int main() {
    int arr[8] = {4,2,0,5,2,6,2,3};
    int n = 8;
    cout << trapping_water(arr, n);
}
