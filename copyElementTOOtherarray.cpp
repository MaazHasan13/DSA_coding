#include<iostream>
#include<climits>
#include<algorithm>
#include<iterator>
using namespace std;

int main(){
    int a1[] = {10,20,30,40,50};
    // int a2[5];
    // for(int i=0;i<5;i++){
    //     for(int j=4;j=0;j--){
    //         a2[j]=a1[i];
    //     }
    // }
    // for(int i=0;i<5;i++){
    //     cout<<a2[i]<<"  ";
    int i=0;
    int j=4;
    while(i<j){
        swap(a1[i],a1[j]);
        i++,j--;
    }
    for(int i=0;i<5;i++){
         cout<<a1[i]<<"  ";
    }
}
