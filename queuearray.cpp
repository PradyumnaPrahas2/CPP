#include<iostream>
using namespace std;
class queuearray
{
    int capacity;
    int m;
    int *a;
    public:
    queuearray(int capacity,int m,int a[])
    {
        this->capacity=capacity;
        this->m=m;
        this->a=new int[capacity];
    }
    void printl()
    {
        for(int i=0;i<m;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    void pop()
    {
        cout<<a[m-1]<<" has been removed"<<endl;
        m--;
    }
    void peek(){
        cout<<a[m-1]<<endl;
    }
    void push(int x){
        if(m>capacity){
            cout<<"Queue is full"<<endl;
        }
        else{
        if(m==0){
            a[m]=x;
            m++;
        }
        else{
            m++;
            for(int i=m;i>0;i--){
                a[i]=a[i-1];
            }
            a[0]=x;
        }
        }
    }
};
int main()
{
    int capacity=4,m=0,a[]={};
    queuearray obj(capacity,m,a);
    obj.push(6);
    obj.push(7);
    obj.push(9);
    obj.push(100);
    obj.push(11);
    obj.push(3);
    obj.printl();
    obj.peek();
    obj.pop();
    obj.printl();
}