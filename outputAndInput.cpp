#include<iostream>
using namespace std;

int main(){
    //output
    // int arr[5]={7,5,2,1,3};
    // int n = sizeof(arr)/sizeof(int);
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    // return 0;

    //input
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }
    cout<<endl;
    return 0;
}