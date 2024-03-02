#include<iostream>
using namespace std;
int issorted(int a[],int n){
    if(n==0){
        return true;
    }
    bool i;
    i=issorted(a+1,n-1);
    cout<< a[0]<<" ";
}
int main()
{
    int a[]={19,13,14,15,16},n;
    int x;
    n=sizeof(a)/sizeof(int);
    x=issorted(a,n);
    return 0;
}