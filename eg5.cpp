#include<iostream>
#include<string>
using namespace std;
int main()
{
    string l;
    cout<<"Enter a string: ";
    cin>>l;
    int n=l.size();
    int i,j,c=0;
    string b[1000],s2;
    for(i=0;i<n;i++){
        string s="";
        for(j=i;j<n;j++){
            s=s+l[j];
        }
        b[c]=s;
        c=c+1;
        for(j=i+1;j<n;j++){
            s2=l[i];
            s2=s2+l[j];
            b[c]=s2;
            c=c+1;
        }
        b[c]=l[i];
        c=c+1;
    }
    b[c]=" ";
    for(i=0;i<c;i++){
        cout<<b[i]<<endl;
    }
    
}