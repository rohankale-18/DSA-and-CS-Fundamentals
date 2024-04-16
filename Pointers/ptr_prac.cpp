#include<bits/stdc++.h>
#define int long long

using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


// Pointers in array
    // int arr[5]={1,2,3,4,5};
    // int *p=arr;
    // cout<<"1) *p = " <<*p<<endl;
    // cout<<"2) *p+1 = " <<*p+1<<endl;
    // cout<<"3) *(p+1) = " <<*(p+1)<<endl;
    // cout<<"4) p = " <<p<<endl;
    // cout<<"5) p+1 = " <<p+1<<endl;
    // for(int i=0;i<5;i++){
    //     cout<<arr[i]<<" ";
    // }cout<<endl;
    // for(int i=0;i<5;i++){
    //     cout<<i[arr]<<" ";
    // }cout<<endl;


// Copying pointers
    // int a=5;
    // int *x=&a;
    // int *q = x;

    // cout<<x<<" "<<q<<endl;
    // cout<<*x<<" "<<*q<<endl;

// Double pointers

    int i=5;
    int * p = &i;
    int ** p2 = &p;

    // output: 5
    cout<< i <<endl;             
    cout<< *p <<endl;
    cout<< **p2 <<endl;

    // output : same address
    cout<< &i <<endl;
    cout<< p <<endl;
    cout<< *p2 <<endl;

    return 0;
}