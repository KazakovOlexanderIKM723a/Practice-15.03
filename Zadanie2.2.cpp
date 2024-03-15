#include <iostream>
using std::cout;
using std::endl;

int main() {
    const int size = 3; 
    int matrix[size][size] = { {13, 2, 21},
                               {99, 61, 57},
                               {71, 8, 322} };

    int mainDiagonalSum = 0;
    int secondaryDiagonalSum = 0;

    for (int i = 0; i < size; ++i) {
        mainDiagonalSum += matrix[i][i];
    }

    for (int i = 0; i < size; ++i) {
        secondaryDiagonalSum += matrix[i][size - 1 - i];
    }

    cout << "The sum of elements on main diagonal: " << mainDiagonalSum << endl;
    cout << "The sum of elements on side diagonal: " << secondaryDiagonalSum << endl;

    return 0;
}