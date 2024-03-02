#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Task
{
    private:
    vector<string> l;
    public:
    Task()
    {
        l.push_back("sleep");
        l.push_back("Have dinner");
        l.push_back("Have Snacks");
        l.push_back("Rest in the afternoon");
        l.push_back("Have lunch");
        l.push_back("Brush teeth");
        l.push_back("Get up in the morning");
    }
    int getindex(string ref){
        for(int i=0;i<l.size();i++){
            if(l[i]==ref){
                cout<<i<<endl;
                return i;
            }
        }
    }

};
class BT{
    public:
        string a[20];
        int top;
    public:
        BT(string root)
        {
            // a=new int[size];
            a[0]=root;
            top=0;
        }
        void setLeft(int rootIndex, string element)
        {
            a[(rootIndex*2)+1]=element;
            top++;
        }
        void setRight(int rootIndex, string element)
        {
            a[(rootIndex*2)+2]=element;
            top++;
        }
        int getParentIndex(int childIndex)
        {
            return (childIndex-1)/2;
        }
        void deletefromtree()
        {
            Task c;
            cout<<a[0]<<endl;
            for(int i=0;i<top;i++){
                if(c.getindex(a[(i*2)+1])>c.getindex(a[(i*2)+2])){
                    a[i]=a[(i*2)+1];
                    i=i*2;
                }
                else{
                    a[i]=a[(i*2)+2];
                    i=i*2+1;
                }
            }
            top--;
        }
        void insert(string element)
        {
            int index=top+1;
            top++;
            a[index]=element;
            while(index>0)
            {
                int pi=getParentIndex(index);
                if(a[pi]>a[index])
                {
                    swap(pi,index);
                    index=pi;
                }
                else
                {
                    break;
                }
            }
        }
        void swap(int i, int j)
        {
            string t=a[i];
            a[i]=a[j];
            a[j]=t;
        }
        int size()
        {
            return top;
        }

        void printTree()
        {
            for(int i=0;i<=top;i++)
            {
                cout<<a[i]<<endl;
            }
            cout<<endl;
        }

};

int main()
{
    BT* b=new BT("Get up in the morning");
    b->setLeft(0,"Have Snacks");
    b->setRight(0,"Brush teeth");
    b->setLeft(1,"sleep");
    b->setRight(1,"Have dinner");
    b->setLeft(2,"Rest in the afternoon");
    b->setRight(2,"Have lunch");
    // b->printTree();
    // b->insert(0);
    // b->insert(1);
    // b->printTree();
    // b->deletefromtree();
    // cout<<" modified:-"<<endl;
    b->printTree();
    while(b->size()>0){
        // cout<<"now size is"<<b->size()<<endl;
        b->deletefromtree();
        
    }
    // cout<<"Size: "<<b->size()+1<<endl;
    // cout<<"Parent Index: "<<b->getParentIndex(6);
}