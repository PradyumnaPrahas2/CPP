#include<iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
class LinkedList
{
    private:
    node *head,*last;
    public:
    LinkedList()
    {
        head=NULL;
        last=NULL;
    }
    void add_to_list(int n)
    {
        node *newNode= new node;
        newNode->data=n;
        newNode->next=NULL;
        if(head==NULL){
            head=newNode;
            last=newNode;
        }
        else{
            last->next=newNode;
            last=last->next;
        }
    }
    void print_list()
    {
        node *temp=head;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
    void delete_lastele(){
        node *temp1=head,*temp2;
        if(head==NULL){
            cout<<"List is empty!cannot delete"<<endl;
        }
        else{
        while(temp1->next!=NULL){
            temp2=temp1;
            temp1=temp1->next;
        }
        temp2->next=NULL;
        }
    }
    void delete_head(){
        if(head==NULL){
            cout<<"List is empty !"<<endl;
        }
        else{
        head=head->next;}
    }
    void insertafterpos(int val){
        node *temp= new node;
        temp->data=val;
        node *temp2=head;
        int i,f=0,i2=0;
        cout<<endl<<"Enter index:";
        cin>>i;
        while(i-1!=i2){
            temp2=temp2->next;
            i2++;
        }
        temp->next=temp2->next;
        temp2->next=temp;
    }
    void insertbeforepos(int val){
        node *temp=new node;
        temp->data=val;
        node *temp2=head;
        int i,i2=0;
        cout<<endl<<"Enter pos:";
        cin>>i;
        while(i-2>i2){
            temp2=temp2->next;
            i2++;
        }
        temp->next=temp2->next;
        temp2->next=temp;
    }
    void inserthead(int val){
        node *temp= new node;
        temp->data=val;
        temp->next=head;
        head=temp;
    }
    void deletebyele(){
        int f=0,n;
        cout<<endl<<"Enter value to be deleted:";
        cin>>n;
        node *temp=head,*temp2;
        while(temp->data!=n){
            temp2=temp;
            temp=temp->next;
        }
        temp2->next=temp->next;
        
        
    }
    void search()
    {
        int val,f=0,i=0;
        cout<<"Enter value to be searched:";
        cin>>val;
        node *temp=head;
        while(temp!=NULL){
            if(temp->data==val){
                f+=1;
                cout<<"Element found at index:"<<i<<endl;
            }
            i++;
            temp=temp->next;
        }
        if(f==0){
            cout<<"Element not found"<<endl;
        }
    }
    void odd_even(){
        node *temp=head;
        node *temp2=head;
        node *temp3= new node;
        while(temp!=NULL){
            temp3=temp;
            temp=temp->next->next;
        }
        temp2=temp2->next;
        while(temp2!=NULL){
            temp3=temp2;
            temp2=temp2->next->next;
        }
        while(temp3){
            cout<<temp3->data<<"->";
        }
    }
    void reverselist(){
        node *temp;
    }
    void sort_list()
    {
        node *temp=head;
        int s;
        node *i,*j;
        for(i=temp;i!=NULL;i=i->next){
            for(j=i->next;j!=NULL;j=j->next){
                if(i->data>j->data){
                    s=i->data;
                    i->data=j->data;
                    j->data=s;
                }
            }
        }
    }
};
int main()
{
    LinkedList l;
    l.add_to_list(5);
    l.add_to_list(7);
    l.add_to_list(3);
    l.add_to_list(9);
    l.add_to_list(10);
    l.add_to_list(3);
    l.print_list();
    cout<<endl;
    l.sort_list();
    cout<<endl;
    l.print_list();
}