#include<iostream>
using namespace std;
int main(){
    int n ;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    } 
    //int s=0,e=1;
    int target = 22;
    bool flag = false;
    
    // while(e<n){
    //     if(arr[s]+arr[e]==target){
    //         flag= true;
    //         cout<<"target matched"<<endl;
    //     }
    //     else{
    //         s++,e++;
    //     }
    // }
    

    for(int i=0;i<=n-1;i++){
        for(int j=i+1;j<=n-1;j++){
            if(arr[i]+arr[j]==target){
            flag= true;
            cout<<"target matched"<<endl;
        }
        }
    }
    if(flag==false){
        cout<<"not matched"<<endl;
    }
}