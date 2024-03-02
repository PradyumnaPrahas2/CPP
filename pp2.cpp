#include<iostream>
#include<list>
#include<vector>
using namespace std;
class Graph
{
    private:
    int size;
    int **a;
    vector<int> *l;
    public:
    Graph(int size){
        this->size=size;
        l=new vector<int>[size];
        a=new int*[size];
        for(int i=0;i<size;i++){
            a[i]=new int[size];
        }
        for(int i=0;i<size;i++){
            for(int j=0;j<size;j++){
                a[i][j]=0;
            }
        }
    }
    void addedge(int i,int j){
        l[i].push_back(j);
        l[j].push_back(i);
        a[i][j]=1;
        a[j][i]=1;
    }
    void print_matrix(){
        for(int i=0;i<size;i++){
            for(int j=0;j<size;j++){
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    void DFS(int s){
        vector<bool> visited;
        visited.resize(size,false);
        visited[s]=true;
        list<int> stack;
        int x;
        stack.push_back(s);
        while(stack.size()!=0){
            x=stack.front();
            cout<<x<<" ";
            stack.pop_front();
            for(int val:l[x]){
                if(visited[val]==false){
                    // cout<<val<<" ";
                    stack.push_back(val);
                    visited[val]=true;
                }
            }
        }
    }
    void BFS(int s){
        vector<bool> visited;
        visited.resize(size,false);
        visited[s]=true;
        list<int> queue;
        int x;
        queue.push_back(s);
        while(queue.size()!=0){
            x=queue.back();
            cout<<x<<" ";
            queue.pop_back();
            for(int val:l[x]){
                if(visited[val]==false){
                    visited[val]=true;
                    queue.push_back(val);
                }
            }
        }
    }
    void print_graph()
    {
        int i;
        for(i=0;i<size;i++){
            cout<<i<<":";
            for(int val:l[i]){
                cout<<val<<"->";
            }
            cout<<endl;
        }
    }
};
int main()
{
    Graph g(5);
    g.addedge(0,1);
    g.addedge(0,2);
    g.addedge(1,2);
    g.addedge(3,2);
    g.addedge(4,1);
    g.print_graph();
    g.print_matrix();
    cout<<"Depth First Search:-"<<endl;
    g.DFS(0);
    cout<<endl<<"Breadth First Search:-"<<endl;
    g.BFS(0);
}