#include <iostream>
using namespace std;

int main() {
    
    int arr[] = {3,4,5,1,2};
    int n = 5;

    int count = 0;

    for(int i = 0; i < n; i++) {
        if(arr[i] > arr[(i+1) % n]) {
            count++;
        }
    }

    if(count <= 1)
        cout << "True";
    else
        cout << "False";

    return 0;
}