#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,0,1,0,1,0};
    int i=0;
    int j=5;
    while(j>i){
        if(arr[i]==1 && arr[j]==0){
            swap(arr[i],arr[j]);
            i++,j--;
        }
        else if(arr[i]==0){
            i++;
        }
        else if (arr[j]==1){
            j--;
        }
        
    }
    for(int i=0;i<=5;i++){
        cout<<arr[i]<<" ";
    }

}