#include <iostream>
using std::cout;
using std::endl;

int main() {
    const int size = 6; 
    int array[size] = { 52, 33, 712, 14, 98, 24 }; 

    int sum = 0; 


    for (int i = 0; i < size; ++i) {
        sum += array[i];
    }


    double average = sum / (double)size;

    cout << "The average value of the elements: " << average << endl;

    return 0;
}
