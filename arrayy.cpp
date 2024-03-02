#include<iostream>
#include<string>
using namespace std;
class Array
{
    int capacity;
    int value;
    string datatype;
    int *a;
    public:
    Array(int capacity,int value,int b[])
    {
        this->capacity=capacity;
        this->value=value;
        this->a=new int[capacity];
        for(int i=0;i<value;i++)
        {
            *(a+i)=b[i];
        }
    }
    Array(int capacity,int value)
    {
        this->capacity=capacity;
        this->value=value;
        this->a=new int[capacity];
        for(int i=0;i<value;i++)
        {
            *(a+i)=0;
        }
    }
    void printarray()
    {
        int i;
        for(i=0;i<value;i++){
            cout<<a[i]<<" ";
        }
    }
    void insert(int val){
        if(value>capacity){
            cout<<"Array is full";
        }
        else{
            a[value]=val;
            value++;
        }
    }

    void deletebyindex(int j){
        int k=0,i;
        for(i=0;i<value;i++){
            if(i+1==j){
                i++;
            }
            a[k]=a[i];
            k++;
        }
        value=value-1;
    }
    void searchbyele(int val){
        int i,k=0;
        for(i=0;i<value;i++){
            if(a[i]==val){
                cout<<val<<"is present at index"<<i<<endl;
                k=1;
                break;
            }
        }
        if(k==0){
            cout<<endl<<"Element is not present in the array"<<endl;
        }
    }
};
int main()
{
    int m[]={1,2,3,4,5,6};
    Array obj(15,6,m);
    obj.printarray();
    obj.insert(7);
    cout<<endl;
    obj.printarray();
    cout<<endl;
    obj.deletebyindex(3);
    obj.printarray();
    obj.searchbyele(8);
    Array obj2(15,6);
    obj2.printarray();
}