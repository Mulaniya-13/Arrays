#include<iostream>
using namespace std;

//Brute Force Approach(O(n^3))
// void maxSubArraySum1(int *arr,int n){
//     int maxSum=INT8_MIN;
//     for(int start=0;start<n;start++){
//         for(int end=start;end<n;end++){
//             int currSum=0;
//             for(int i=start;i<=end;i++){
//                 currSum+=arr[i];
//             }
//             cout<<currSum<<",";
//             maxSum=max(maxSum,currSum);
//         }
//         cout<<endl;
//     }
//     cout<<"Maximum SubArray Sum is = "<<maxSum<<endl;
// }

// int main(){
//     int arr[6]={2,-3,6,-5,4,2};
//     int n=sizeof(arr)/sizeof(int);

//     maxSubArraySum1(arr,n);
//     return 0;
// }

//Brute Force Approach Optimized One(O(n^2))
// void maxSubArraySum2(int *arr,int n){
//     int maxSum=INT8_MIN;
//     for(int start=0;start<n;start++){// suppose start=2
//         int currSum=0;
//         for(int end=start;end<n;end++){// Then start=2,3,4,5
//             currSum+=arr[end];
//             maxSum=max(maxSum,currSum);
//         }
//     }
//     cout<<"Maximum SubArray Sum is = "<<maxSum<<endl;
// }
// int main(){
//     int arr[6]={2,-3,6,-5,4,2};
//     int n=sizeof(arr)/sizeof(int);

//     maxSubArraySum2(arr,n);
//     return 0;
// }


//Kadane's Algorithm(O(n)) Best Approach
void maxSubArraySum3(int *arr,int n){
    int maxSum=INT8_MIN;
    int currSum=0;
    for(int i=0;i<n;i++){
        currSum+=arr[i];
        maxSum=max(maxSum,currSum);
        if(currSum<0){
            currSum=0;
        }
    }
    cout<<"MAximum SubArray Sum is = "<<maxSum<<endl;
}

int main(){
    int arr[6]={2,-3,6,-5,4,2};
    int n=sizeof(arr)/sizeof(int);

    maxSubArraySum3(arr,n);
    return 0;
}
