#include <iostream>
using namespace std;

int findSmallest(int arr[], int size) {
    int smallest = arr[0]; // Assume first element is smallest
    for (int i = 1; i < size; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i]; // Update if a smaller element is found
        }
    }
    return smallest;
}

int main() {
    int arr[] = {5, 2, 8, 1, 4, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    cout << "Smallest number: " << findSmallest(arr, size) << endl;
    
    return 0;
}
