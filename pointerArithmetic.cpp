#include<iostream>
using namespace std;

int main(){
    int a=10;
    int *aptr = &a;
    // cout<<aptr<<endl;
    // aptr++;
    // cout<<aptr<<endl;
    // aptr--;
    // cout<<aptr<<endl;
    // aptr=aptr+3;
    // cout<<(aptr-3)<<endl;
    int *aptr2 = aptr+3;
    cout<<aptr<<endl;
    cout<<aptr2<<endl;

    cout<<aptr2-aptr<<endl;
    cout<<(aptr2>aptr)<<endl;
    cout<<(aptr2<aptr)<<endl;
    cout<<(aptr2==aptr)<<endl;
    return 0; 
}