#include <iostream>
using std::cout;
using std::endl;

int main() {
    int array[] = { 5, 3, 7, 1, 9, 2 };

    int size = sizeof(array) / sizeof(array[0]);

    int minElement = array[0];
    int maxElement = array[0];

    for (int i = 1; i < size; ++i) {
        if (array[i] < minElement) {
            minElement = array[i];
        }
        if (array[i] > maxElement) {
            maxElement = array[i];
        }
    }

    cout << "Min element " << minElement << endl;
    cout << "Max element " << maxElement << endl;

    return 0;
}