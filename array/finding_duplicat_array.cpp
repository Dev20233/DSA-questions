#include <iostream>
#include <set>
using namespace std;

int main() {
    
    int arr[] = {1,1,2,2,3};
    int n = 5;

    set<int> s;  // unique elements store karega

    // step 1: insert into set
    for(int i = 0; i < n; i++) {
        s.insert(arr[i]);  // duplicates ignore ho jayenge
    }

    // step 2: copy back to array (optional)
    int i = 0;
    for(auto it : s) {
        arr[i] = it;
        i++;
    }

    // step 3: print result
    cout << "Unique elements: ";
    for(int j = 0; j < i; j++) {
        cout << arr[j] << " ";
    }

    cout << "\nCount: " << s.size();

    return 0;
}