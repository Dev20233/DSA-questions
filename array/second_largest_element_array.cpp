#include <iostream>
#include <climits>
using namespace std;

int secondLargest(int arr[], int n) {
    
    int largest = INT_MIN; // ye ek tarah se sbse chota possible hoskta jisse hum comapre krte hai
    int second = INT_MIN;  //  naam change
    
    for(int i = 0; i < n; i++) {
        
        if(arr[i] > largest) {
            second = largest;
            largest = arr[i];
        }
        else if(arr[i] > second && arr[i] != largest) { // 
            second = arr[i];
        }
    }
    
    return second;
}

int main() {
    int arr[] = {4, 2, 7, 7, 5};
    int n = 5;

    cout << "Second Largest: " << secondLargest(arr, n);

    return 0;
}