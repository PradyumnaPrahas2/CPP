#include<iostream>
#include<vector>
#include<string>
#include<list>
using namespace std;
class Graph{
    private:
    list<int> *l;
    int value;
    int **matrix;
    public:
    Graph(int val)
    {
        this->value=val;
        l= new list<int>[value];
        matrix=new int*[val];
        for(int i=0;i<value;i++){
            matrix[i]=new int[val];
        }
        for(int i=0;i<value;i++){
            for(int j=0;j<value;j++){
                matrix[i][j]=0;
            }
        }
    }
    void addEdge(int a1,int a2){
        l[a1].push_back(a2);
        l[a2].push_back(a1);
        matrix[a1][a2]=1;
        matrix[a2][a1]=1;
    }
    void adjacent_matrix(){
        for(int i=0;i<value;i++){
            for(int j=0;j<value;j++){
                cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    void DFS(int s)
    {
        vector<bool> visited;
        visited.resize(value,false);
        list<int> stack;
        visited[s]=true;
        stack.push_back(s);
        while(stack.size()!=0){
            s=stack.back();
            cout<<s<<" ";
            stack.pop_back();
            for(int val:l[s]){
                if(visited[val]==false){
                    stack.push_back(val);
                    visited[val]=true;
                }
            }
        }
    }
    void BFS(int s)
    {
        vector<bool> visited;
        visited.resize(value,false);
        list<int> queue;
        visited[s]=true;
        queue.push_back(s);
        while(queue.size()!=0){
            cout<<queue.front()<<" ";
            s=queue.front();
            queue.pop_front();
            for(int v:l[s]){
                if(visited[v]==false){
                    queue.push_back(v);
                    visited[v]=true;
                }
            }
        }
    }
    void printgraph()
    {
        int i;
        string x;
        for(i=0;i<value;i++){
            x=to_string(i);
            for(int val:l[i]){
                // cout<<"->"<<val<<"->";
                x=x+"->"+to_string(val)+"->";
            }
            cout<<x.substr(0,x.length()-2)<<endl;
            cout<<endl;
        }
    }
};
int main()
{
    Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(0, 3);
    g.addEdge(1, 3);
    g.addEdge(2, 3);
    cout<<"ADJACENCY MATRIX"<<endl;
    g.adjacent_matrix();
    g.printgraph();
    cout<<"BFS"<<endl;
    g.BFS(0);
    cout<<endl<<"DFS"<<endl;
    g.DFS(0);
    // g.adjacency_list();
}