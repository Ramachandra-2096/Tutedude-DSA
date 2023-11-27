#include<iostream>
using namespace std;
int main(){
    int *arr=new int[601];
    int addr;
    for(int i=1300;i<=1900;i++)
    {
        arr[i-1300]=i;
    }
    cout<<"Array is : ";
    for(int i=0;i<=600;i++)
    {
        if(arr[i]==1700){
            addr = 1020 +((i+1)*2);
        }
    }
    cout<<"The addressof 1700 is : "<<addr;
    delete [] arr;
    return 0;
}