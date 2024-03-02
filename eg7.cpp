#include<iostream>
using namespace std;
int firstocc(int a[],int n,int index){
    if(index==n){
        return -1;
    }
    if(a[index]==2){
        return index;
    }
    return firstocc(a,n,index+1);
    
}
int lastocc(int a[],int n,int index){
    if(index==-1){
        return -1;
    }
    if(a[index]==2){
        return index;
    }
    return lastocc(a,n,index-1);
    // cout<<a[index]<<endl;
}
int main()
{
    int a[]={1,2,4,6,2,8};
    int n=sizeof(a)/sizeof(int);
    int x,y;
    cout<<"first occurrence is"<<endl;
    x=firstocc(a,n,0);
    cout<<x<<endl;
    cout<<"last occurrence is"<<endl;
    y=lastocc(a,n,n);
    cout<<y<<endl;
}