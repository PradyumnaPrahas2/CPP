#include<iostream>
#include<list>
#include<string>
#include<vector>
using namespace std;
struct node{
    int data;
    node* next;
};
class Graph
{
    private:
    int vertices;
    list<int> *l;
    int **mat;
    string *finalmatrix;
    public:
    Graph(int V)
    {
        this->vertices=V;
        l= new list<int>[vertices];
        finalmatrix=new string[vertices];
        mat= new int*[vertices];
        for(int i=0;i<vertices;i++){
            mat[i]=new int[vertices];
        }
        for(int i=0;i<vertices;i++){
            for(int j=0;j<vertices;j++){
                mat[i][j]=0;
            }
        }

    }
    void addedge(int x,int y){
        l[x].push_back(y);
        l[y].push_back(x);
        mat[x][y]=1;
        mat[y][x]=1;
    }
    void printadjmat()
    {
        for(int i=0;i<vertices;i++){
            for(int j=0;j<vertices;j++){
                cout<<mat[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    void adjlist()
    {
        for(int i=0;i<vertices;i++){
            cout<<i<<" "<<finalmatrix[i]<<endl;
        }
    }
    void answer(int s){
        vector<bool> visited;
        visited.resize(vertices,false);
        visited[s]=true;
        list<int> stack;
        // stack.push_back(s);
        vector<bool> visited2;
        visited2.resize(vertices,false);
        visited2[s]=true;
        int x;
        cout<<s<<" ";
        for(int c:l[s]){
            if(visited2[c]==false){
                cout<<c<<" ";
                visited2[c]=true;
            }
            for(int val:l[c]){
                if(visited[val]==false){
                    if(visited2[val]==false){
                        cout<<val<<" ";
                        visited2[val]=true;
                    }
                }
            }
            // while(stack.size()!=0){
            //     x=stack.back();
            //     if(visited[x]==false){
            //         cout<<x<<" ";
            //     }
            //     stack.pop_back();
            //     for(int val:l[x]){
            //         if(visited[val]==false){
            //             stack.push_back(val);
            //             visited[val]=true;
            //         }
            //     }
            // }
        }
    }
    void printgraph()
    {
        // int mat[vertices][vertices]={0};
        string ans;
        for(int i=0;i<vertices;i++){
            cout<<"Vertex "<<i<<"->";
            ans="";
            for (int val:l[i]){
                // mat[i][val]=1;
                ans=ans+to_string(val)+"->";
                cout<<val<<" ";
            }
            finalmatrix[i]=ans;
            cout<<endl;
        }
    }
};
int main()
{
    Graph f(6);
    f.addedge(0,1);
    f.addedge(0,2);
    f.addedge(2,4);
    f.addedge(1,4);
    f.addedge(1,3);
    f.addedge(4,5);
    f.addedge(3,5);
    f.printgraph();
    cout<<"Adjacent Matrix:-"<<endl;
    f.printadjmat();
    cout<<"Adjacent List:-"<<endl;
    f.adjlist();
    cout<<"ANSWER"<<endl;
    f.answer(4);
}