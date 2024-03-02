#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter no of elements:";
    cin>>n;
    int a[n+1],i,x;
    for (i=0;i<n;i++){
        cin>>x;
        a[i]=x;
    }
    a[n]=0;
    int b[n-1];
    for(i=0;i<n-1;i++){
        b[i]=abs(a[i+1]-a[i]);
    }
    for (i=0;i<n-1;i++){
        if(i==n-2){
            cout<<b[i];
        }
        else{
            cout<<b[i]<<",";
        }
    }
    cout<<endl;
    int max=0;
    for(i=0;i<n-2;i++){
        int c=1;
        while(b[i]==b[i+1]){
            c=c+1;
            i=i+1;
        }
        if(c>max){
            max=c;
        }
    }
    cout<<max<<endl;
    
}