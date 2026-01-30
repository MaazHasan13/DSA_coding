#include<iostream>
using namespace std;
int main(){
    int arr[] = {5,4,3,6,8,9};
    for(int i=0;i<6;i++){
        for(int j=0;j<=i;j++){
            cout<<arr[j];
        }
        cout<<endl;
    }
}