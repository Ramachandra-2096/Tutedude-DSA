#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter total number of elements ";
    cin>>n;
    int *arr=new int[n];
    cout<<"\nEnter elemets :\t";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    cout<<"Sum is equal to :"<<sum;
    delete[] arr;
    return 0;
}