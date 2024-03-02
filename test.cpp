#include<iostream>
#define LIMIT 1000
using namespace std;
void fun(int n)
{
    int i=0;
    if(n<0){
        return ;
    }
    if(n>LIMIT){
        return ;
    }
    cout<<n<<" ";
    fun(2*n);
    cout<<n<<" ";
}
int main()
{
    bool x;
    fun(10);
    
}