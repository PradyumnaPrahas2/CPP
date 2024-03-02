#include<iostream>
using namespace std;
int fact(int num)
{
    if(num==0){
        return 1;
    }
    else{
        return num* fact(num-1);
    }
}
int main()
{
    int num,i,x;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<endl<<"multiplication table is"<<endl;
    for(i=1;i<=10;i++){
        cout<<endl<<num<<"x"<<i<<"="<<num*i<<endl;
    }
    cout<<"Factorial is";
    x=fact(num);
    cout<<x;
}