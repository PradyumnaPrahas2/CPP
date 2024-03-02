#include<iostream>
#include<string>
using namespace std;
int* getindices(string s,int i,int a[],int j)
{
    if(s[i+1]=='\0'){
        return a;
    }
    if(s[i]=='o' && s[i]==s[i+1] ){
        a[j]=i;
        j++;
        i++;
    }
    i++;
    return getindices(s,i,a,j);
}
int main()
{
    string s="Helloooookmitoogooolw";
    string s2="kmit",s3="";
    int a[100],*h,i,k=0;
    h=getindices(s,0,a,0);
    for(i=0;i<s.length();i++)
    {
        if(a[k]==i){
            s3+=s2;
            k++;
            i++;
        }
        else{
            s3+=s[i];
        }
    }
    cout<<s3;
}