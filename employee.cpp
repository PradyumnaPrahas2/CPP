#include<iostream>
#include<string>
using namespace std;
class Employee
{
    int a,newsal;
    float x;
    public:
    Employee(int salary, float rating){
        a=salary;
        cout<<a<<endl;
        x=rating;
        cout<<x<<endl;
    }
    void evaluate()
    {
        newsal=a*x;
    }
    void show(){
        cout<<"Updated salary: "<<newsal;
    }
};
int main()
{
    string name;
    int ID,salary;
    float rating;
    cout<<"Input employee name:";
    cin>>name;
    cout<<"Input employee ID:";
    cin>>ID;
    cout<<"Input employee salary:";
    cin>>salary;
    cout<<"Initial salary:";
    cout<<salary;
    cout<<endl;
    cout<<"Input performance rating(0.0-1.4):";
    cin>>rating;
    Employee obj(salary,rating);
    obj.evaluate();
    obj.show();
}

