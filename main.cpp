#include <iostream>
using namespace std;


template <typename T>
void strikeSwap(T& a, T& b) {
    int c = a;
    a = b;
    b = c;
}

void printArray(int arr[], int size) {
    for (size_t i = 0; i < size; ++i)
        cout << arr[i] << " ";
    cout << endl;
}

//O(n^2)
void bubbleSort(int arr[], const int size) {
    for (size_t i = 0; i < size; ++i) {
        for (size_t j = 0; j < size-1-i; ++j)
            if (arr[j] > arr[j + 1]) strikeSwap(arr[j], arr[j+1]);
    }
}

int main() {
    int arr[5] = { 8,6,7,9,1 };
    printArray(arr, 5);
    bubbleSort(arr, 5);
    printArray(arr, 5);
    return 0;
}
