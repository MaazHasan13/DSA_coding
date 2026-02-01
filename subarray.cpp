#include<iostream>
using namespace std;
int main(){
    int arr[5] = {10,20,30,40,50};
    // int size;
    // cin>>size;

    
    for(int s=0;s<5;s++){
        for(int e = s;e<5-3+s;e++){
            for(int k=s;k<=e;k++){
                cout<<arr[k]<<" ";
            }
            cout<<endl;
        }
    }
}