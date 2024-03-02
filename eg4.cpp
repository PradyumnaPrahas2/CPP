#include<iostream>
using namespace std;
int main(){
    int a[]={1,2,3,4,5};
    int j,k,i,n=5,max=0;
    for(i=0;i<n;i++)
    {
        for(j=n-1;j>=i;j--)
        {
            cout<<"[";
            for(k=i;k<=j;k++)
            {
                if(k==j){
                    cout<<a[k];
                }
                else{
                    cout<<a[k]<<',';
                }

            }
            cout<<"]";
            cout<<endl;
        }
    }
}