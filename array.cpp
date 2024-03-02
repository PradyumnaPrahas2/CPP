#include<iostream>
#include<string>
using namespace std;
class Array
{
    public:
        int capacity;
        int value;
        string datatype;
        int a[];
            Array(int capacity,int value,int b[])
            {
                this->capacity=capacity;
                this->value=value;
                int *a=new int[capacity];
                for(int i;i<value;i++){
                    *(a+i)=b[i];
                }
            }
        void printarray()
        {
            int i;
            for(i=0;i<value;i++){
                cout<<a[i]<<" ";
            }
        }
};
int main()
{
    int value=6;
    int a[value]={1,2,3,4,5,6};
    int capacity=15;
    Array Array(15,value,a);
    Array.printarray();
}