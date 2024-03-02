#include<iostream>
#include<string>
using namespace std;
class poly
{
    int n1,n2,x,x2,i,*a,*b,maxsize;
    public:
    poly(int maxsize,int n1,int n2){
        this->maxsize=maxsize;
        this->n1=n1;
        this->n2=n2;
        this->a=new int[maxsize];
        this->b=new int[n2];
        for(i=0;i<n1;i++){
            cout<<"Enter coefficient of "<<i+1<<"degree"<<endl;
            cin>>x;
            *(a+i)=x;
        }
        cout<<"SECOND EQN"<<endl;
        for(i=0;i<n2;i++){
            cout<<"Enter coefficient of "<<i+1<<"degree"<<endl;
            cin>>x2;
            *(b+i)=x2;
        }
    }
    void show()
    {
        int i;
        for(i=0;i<n1;i++){
            if(a[i]!=0){
                cout<<'('<<a[i]<<"x^"<<i+1<<')';
                if(i!=n1-1){
                    cout<<"+";
            }}
        }
    }
    void add()
    {
        if(n2>n1){
            int d=n1;
            n1=n2;
            for(i=d;i<n2;i++)
            {
                a[i]=0;
            }
            cout<<"Exce"<<endl;
        }
        // for(i=0;i<x2;i++){
        //     cout<<"Enter coefficient of "<<i+1<<" degree ";
        //     cin>>x3;
        //     b[i]=x3;
        // }
        for(i=0;i<n2;i++){

            a[i]=a[i]+b[i];
        }
    }
    void sub()
    {
        if(n2>n1){
            n1=n2;
            for(i=n1;i<n2;i++)
            {
                a[i]=0;
            }
            cout<<"Exce"<<endl;
        }
        // for(i=0;i<x2;i++){
        //     cout<<"Enter coefficient of "<<i+1<<" degree ";
        //     cin>>x3;
        //     b[i]=x3;
        // }
        for(i=0;i<n2;i++){
            a[i]=a[i]-b[i];
        }
    }

};
int main()
{
    int y,n1,n2;
    cout<<"Enter degree of first equation:";
    cin>>n1;
    cout<<"Enter degree of second equation:";
    cin>>n2;
    string ch;
    poly obj(10,n1,n2);  
    cout<<"DO U WANT TO PERFORM ANY OPERATION(Y/N)"<<endl;
    cin>>ch;
    while(ch=="y"|| ch=="Y"){
        cout<<"1.for addition"<<endl<<"2.for subtraction"<<endl;
        cin>>y;
        if(y==1){
            obj.add();
            cout<<"Added result"<<endl;
            obj.show();
        }
        if(y==2){
            obj.sub();
            cout<<endl<<"SUBTRACTION"<<endl;
            obj.show();}
        cout<<"DO U WANT TO CONTINUE:";
        cin>>ch;
    }
}