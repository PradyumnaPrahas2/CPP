#include<iostream>
#include<string>
using namespace std;
// string* substring(string s,string a[],int l,int i,int j){
//     // if(i==l){
//     //     return a;
//     // }
//     // if(s[i]=' '){
//     //     j=j+1;
//     // }
//     // cout<<s[i]<<endl;
//     // i=i+1;
//     // substring(s,a,s.length(),i,j);
//     // cout<<"kkakk";
//     if(s[i]==' ' || i>l){
//         cout<<endl;
//         cout<<a[j];
//         j=j+1;
//     }
//     if(i>l){
//         return a;
//     }
//     cout<<s[i];
//     a[j]=a[j]+s[i];
//     i=i+1;
//     string *x;
//     x=substring(s,a,s.length(),i,j);
//     return x;
// }
int rev(string s,int l,int i){
    if(i>=l){
        return 1;
    }
    rev(s,s.length(),i+1);
    cout<<s[i];
}
int main()
{
    string s="PRADYUMNA PRAHAS RE",t;
    string a[]={"","",""};
    int i,j=0;
    cout<<s<<endl;
    rev(s,s.length(),-1);
    for(i=0;i<s.length()+1;i++){
        if(s[i]==' '){
            j=j+1;
        }
        else{
        a[j]=a[j]+s[i];}
    }
    // cout<<endl;
    for(i=0;i<3;i++){
        t=a[i];
        rev(t,t.length(),-1);
        cout<<" ";
    }
    //cout<<s<<endl;
}