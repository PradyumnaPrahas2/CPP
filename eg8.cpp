#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s="tuesday..";
    string s2="tuesday.";
    int i;
    s2[0]=s2[0]-32;
    for(i=0;i<s.length();i++){
        if(s[i]>=97 || s[i]<122){
            s[i]=s[i]-32;
        }
    }
    cout<<s2<<endl;
    cout<<s<<endl;
}