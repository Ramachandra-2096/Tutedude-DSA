#include<iostream>
using namespace std;
int head_recursion_factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    int result = head_recursion_factorial(n - 1);
    return n * result;
}

int main() {
    int result = head_recursion_factorial(5);
    cout << "Factorial of 5: " << result << endl;
    return 0;
}
