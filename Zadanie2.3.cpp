#include <iostream>
using std::cout;
using std::endl;

int main() {
    const int rows = 3; 
    const int cols = 3; 
    int matrix[rows][cols] = { {1, 2, 3},
                               {4, 5, 6},
                               {7, 8, 9} }; 

    int lowerBound = 3; 
    int upperBound = 7; 

    
    cout << "We are looking for elements in the range [" << lowerBound << ", " << upperBound << "]" << endl;

    
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (matrix[i][j] >= lowerBound && matrix[i][j] <= upperBound) {
                cout << "Element " << matrix[i][j] << " is in the given range at the position [" << i << "][" << j << "]" << endl;
            }
        }
    }

    return 0;
}
