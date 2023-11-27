#include <iostream>
using namespace std;
int main() {
    int baseAddress = 100;
    int rowSize = 10;
    int columnSize = 15;
    int elementSize = 1; 
    int rowIndex = 8;
    int columnIndex = 6;

    int address = baseAddress + (columnSize * (rowIndex + (columnIndex * rowSize))) * elementSize;

    cout << "Address of arr[8][6] in column-major order: " << address;

    return 0;
}
