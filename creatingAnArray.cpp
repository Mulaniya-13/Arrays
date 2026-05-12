#include<iostream>
using namespace std;

int main(){
    int marks[]={1,2,3};
    cout<<marks[0]<<endl; //1
    cout<<marks[1]<<endl; //2
    cout<<marks[2]<<endl; //3
    int n=sizeof(marks)/sizeof(int);
    cout<<"The size of marks is "<<n<<endl; //3
    return 0;
}