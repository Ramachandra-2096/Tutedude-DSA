#include<iostream>
using namespace std;
int main()
{
    int num,count=0;
    cout<<"enter a number to check : ";
    cin>>num;
    for(int i=2;i<=num/2;i++)
    {
        if(num%i==0)
        {
            count =1;
            break;
        }
    }
    if(count==1)
    {
        cout<<"not prime";
    }
    else{
        cout<<"Is a prime";
    }
    return 0;
} 
//here the loop runs from 2 to n/2 times and 1/2 is a constant so the time complexity is O(n)