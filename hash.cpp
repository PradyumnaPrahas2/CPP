#include<iostream>
#include<list>
using namespace std;
class Hash{
    private:
    list<int> *l;
    int n;
    public:
    Hash(int bucket){
        this->n=bucket;
        l=new list<int>[n];
    }
    void addtotable(int val){
        l[val%n].push_back(val);
    }
    void printtable()
    {
        for(int i=0;i<n;i++){
            cout<<i<<"->";
            for(int value:l[i]){
                cout<<value<<"->";
            }
            cout<<endl;
        }
    }
};
int main()
{
    Hash h(8);
    cout<<"This program is an example for Open Address Collision technique called chaining"<<endl;
    h.addtotable(10);
    h.addtotable(17);
    h.addtotable(29);
    h.addtotable(8);
    h.addtotable(16);
    h.addtotable(91);
    h.addtotable(11);
    h.printtable();
}