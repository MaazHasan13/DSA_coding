#include<iostream>
using namespace std;
int main(){
    int arr[10] = {2,0,3,4,0,5,6,0,11,9};

 int j=0;
 for(int i=0;i<10;i++){
    if(arr[i]!=0){
        arr[j]=arr[i];
        j++;
    }
 }

 while(j<10){
    arr[j]=0;
    j++;
 }

    

cout<<"print array:"<<endl;
    for( j=0;j<10;j++){
        cout<<arr[j]<<" ";
    }
}