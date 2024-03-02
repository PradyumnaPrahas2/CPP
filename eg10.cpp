#include<iostream>
#include<string>
using namespace std;
int* func(string s,int i,int a[],int j){
    if(s[i+1]=='\0'){
        return a;
    }
    if(s[i]=='o' && s[i]==s[i+1]){
        a[j]=i;
        j=j+1;
        i=i+1;
    }
    i=i+1;
    return func(s,i,a,j);
}
int func2(string s,int i,int a[],int j){
    if(s[i+1]=='\0'){
        return j;
    }
    if(s[i]=='o' && s[i]==s[i+1]){
        a[j]=i;
        j=j+1;
        i=i+1;
    }
    i=i+1;
    return func2(s,i,a,j);
}
int main()
{
    string s="Hellooooooocloogoo";
    string s2="kmit",s3="";
    int a[100],i,*rs;
    rs=func(s,0,a,0);
    i=func2(s,0,a,0);
    int k=0;
    for(i=0;i<s.length();i++){
        if(a[k]==i){
            s3=s3+s2;
            k++;
            i++;
        }
        else{
            s3=s3+s[i];
        }
    }
    cout<<s<<endl;
    cout<<s3;
}