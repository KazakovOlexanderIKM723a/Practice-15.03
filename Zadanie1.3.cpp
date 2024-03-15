#include <iostream>
using std::cout;
using std::endl;

int main() {
    int array[] = { 513, 31, 72, 11, 9, 25, 98, 20, 44 };
    int target = 9; 

    int size = sizeof(array) / sizeof(array[0]);

    bool found = false;

    for (int i = 0; i < size; ++i) {
        if (array[i] == target) {
            found = true;
            break;
        }
    }

    if (found) {
        std::cout << "Element " << target << " contained in the array." << std::endl;
    }
    else {
        std::cout << "Element " << target << " not contained in an array." << std::endl;
    }

    return 0;
}
