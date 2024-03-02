#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    int b[]={10,2,14,6,5,3,19};
    n=sizeof(b)/sizeof(int);
    int a[n+1];
    for(i=0;i<n;i++){
        a[i]=b[i];
    }
    a[n]=0;
    for(i=0;i<n;i++)
    {
        int c=1,d=0;
        for(j=i-1;j>=0;j--)
        {
            if(a[i]<a[j]){
                c=0;
                break;
            }
        }
        if(a[i]>a[i+1]){
            d=1;
        }
        if(c==1 and d==1){
            cout<<"Possible:"<<a[i]<<endl;
        }
        else{
            cout<<"Not possible:"<<a[i]<<endl;
        }

    }
}