#include<iostream>
using namespace std;

int main(){
    int size,sum=0;
    cout<<" Enter the size : ";
    cin>>size;
    int *a=new int[size];
    for(int i=1;i<=size;i++)
    {
        a[i-1]=i;
        sum=sum+a[i-1];
    }
    cout<<" Sum is :"<<sum;
    delete[] a;
} 
