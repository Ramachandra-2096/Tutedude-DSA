#include<iostream>
using namespace std;
int tail_recursion_factorial(int n)
{
    if(n==0||n==1)
    {
        return 1;
    }
    return n*tail_recursion_factorial(n-1);
}
int main(){
    int n=5,result;
    result =tail_recursion_factorial(n);
    cout << "Factorial of 5: " << result << endl;
}