#include <iostream>
using namespace std;

int findLargest(int arr[], int n) {
    
    int largest = arr[0];  // pehla element ko largest maan liya
    
    for(int i = 1; i < n; i++) {
        
        if(arr[i] > largest) {
            largest = arr[i];  // agar bada mila to update
        }
    }
    
    return largest;  // final largest return
}

int main() {
    int arr[] = {4, 2, 7, 1, 5};
    int n = 5;

    cout << "Largest element: " << findLargest(arr, n);

    return 0;
}