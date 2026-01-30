#include<iostream>
using namespace std;
int main(){
    int arr[5] = {10,50,70,10,50};
    int count = 0;
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if(arr[i]==arr[j]){
                
                count++;
            }
        }
    }
    cout<<"array contain duplicate : "<<count;
}