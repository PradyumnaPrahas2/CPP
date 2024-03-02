#include<iostream>
using namespace std;
int partition(int a[],int low,int high){
    int pivot=a[high];
    int i=low-1;
    for(int j=low;j<high;j++){
        if(a[j]<pivot){
            i++;
            swap(a[i],a[j]);
        }
    }
    swap(a[i+1],a[high]);
    return i+1;
}
void quick_sort(int a[],int low,int high){
    if(low<high){
        int pi=partition(a,low,high);
        quick_sort(a,low,pi-1);
        quick_sort(a,pi+1,high);
    }
}
void merge(int a[],int l,int m,int r){
    int n1=m-l+1;
    int n2=r-m;
    int *la=new int[n1];
    int *ra=new int[n2];
    for(int i=0;i<n1;i++){
        la[i]=a[l+i];
    }
    for(int i=0;i<n2;i++){
        ra[i]=a[m+1+i];
    }
    int i=0,j=0,k=l;
    while(i<n1 && j<n2){
        if(la[i]<=ra[j]){
            a[k]=la[i];
            i++;
        }
        else{
            a[k]=ra[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        a[k]=la[i];
        i++;
        k++;
    }
    while(j<n2){
        a[k]=ra[j];
        j++;k++;
    }
}
void merge_sort(int a[],int low,int high){
    if(low>=high){
        return;
    }
    int mid=(high+low)/2;
    merge_sort(a,low,mid);
    merge_sort(a,mid+1,high);
    merge(a,low,mid,high);
}
int main()
{
    int arr[8]={10,201,29,3999,46,199,1,4};
    int arr2[8]={10,201,29,3999,46,199,1,4};
    cout<<"Original Array:-"<<endl;
    for(int i=0;i<8;i++){
        cout<<arr[i]<<" ";
    }
    quick_sort(arr,0,8);
    cout<<endl<<"Sorted Array(QUICK SORT):-"<<endl;
    for(int i=0;i<8;i++){
        cout<<arr[i]<<" ";
    }
    merge_sort(arr2,0,7);
    cout<<endl<<"Sorted Array(MERGE SORT):-"<<endl;
    for(int i=0;i<8;i++){
        cout<<arr2[i]<<" ";
    }
    
}