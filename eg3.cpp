#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],x,i,max=0;
    for(i=0;i<n;i++){
        cin>>x;
        a[i]=x;
        if(max<x){
            max=x;
        }

    }
    for(i=0;i<n;i++){
        cout<<a[i]<<",";

    }
    cout<<"Maximum of the array is "<<max<<endl;
}