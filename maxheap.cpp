#include<iostream>
using namespace std;

class BT{
    public:
        int a[20];
        int top;
    public:
        BT(int root)
        {
            // a=new int[size];
            a[0]=root;
            top=0;
        }
        void setLeft(int rootIndex, int element)
        {
            a[(rootIndex*2)+1]=element;
            top++;
        }
        void setRight(int rootIndex, int element)
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
            for(int i=0;i<top;i++){
                if(a[(i*2)+1]>a[(i*2)+2]){
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
        void insert(int element)
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
            int t=a[i];
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
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }

};

int main()
{
    BT* b=new BT(10);
    b->setLeft(0,5);
    b->setRight(0,9);
    b->setLeft(1,3);
    b->setRight(1,4);
    b->setLeft(2,6);
    b->setRight(2,7);
    // b->printTree();
    // b->insert(0);
    // b->insert(1);
    b->printTree();
    b->deletefromtree();
    cout<<" modified:-"<<endl;
    b->printTree();
    // cout<<"Size: "<<b->size()+1<<endl;
    // cout<<"Parent Index: "<<b->getParentIndex(6);
}