#include<iostream>
using namespace std;
class statarray
{
    int capacity;
    int m;
    int *a;
    public:
    statarray(int capacity,int m,int a[]){
        this->capacity=capacity;
        this->m=m;
        this->a=new int[capacity];
    }
    void push(int x){
        if(m>=capacity){
            cout<<"Stack Array is full cant add ele"<<endl;
        }
        else{
            a[m]=x;
            m++;
        }
    }
    void printl(){
        int i;
        for(i=0;i<m;i++){
            cout<<a[i]<<" ";
        }
    }
    void peek(){
        if(m<=0){
            cout<<"no elements r present in the array"<<endl;
        }
        else{
            cout<<endl<<a[m-1]<<endl;
        }
    }
    void pop()
    {
        cout<<a[m-1]<<"has been removed"<<endl;
        m--;
    }
};
int main()
{
    int capacity=4,m=0,a[]={};
    statarray obj(capacity,m,a);
    obj.push(6);
    obj.push(9);
    obj.push(1);
    obj.push(8);
    obj.push(7);
    obj.printl();
    obj.peek();
    obj.pop();
    obj.pop();
    obj.pop();
    obj.printl();
}