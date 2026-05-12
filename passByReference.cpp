#include<iostream>
using namespace std;

// void func(int arr[]){
//     arr[0]=1000;
// }

void printArr(int nums[], int n){
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
}

int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(int);
    // cout<<*arr<<endl;
    // func(arr); // passing array name is eq. to passing the pointer
    // cout<<arr[0]<<endl;
    printArr(arr,n);
    return 0;
}