#include <iostream>
using std::cout;
using std::endl;

int main() {
    
    int array[] = { 1, 15, 10, 228, 302 };

    int size = sizeof(array) / sizeof(array[0]);

    int sum = 0;

    for (int i = 0; i < size; ++i) {
        sum += array[i];
    }

    cout << "The sum of array elements: " << sum << endl;

    return 0;
}