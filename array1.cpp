#include<iostream>
using namespace std;
int main()
{
    int a[5][8]={{1,0,0,0,0,0,2,0},{0,0,0,0,0,0,2,0},{0,0,6,0,0,0,2,1},{1,0,0,9,0,0,4,0},{0,0,0,7,0,0,0,0}};
    int i,j,b[3][10],c=0;
    for(i=0;i<5;i++){
        for(j=0;j<8;j++){
            if(a[i][j]!=0){
                b[0][c]=i;
                b[1][c]=j;
                b[2][c]=a[i][j];
                c++;
            }
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<10;j++){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
}