#include<iostream>
using namespace std;

int main(){
    int arr[5] = {10,20,30,40,50};
    int k;
    cout<<"ROTATE NO : ";
    cin>>k;

    for(int i=0;i<5;i++){
        int j=i+1;
            arr[j]=arr[i];
        
    }
}