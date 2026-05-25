#include <iostream>
using namespace std;

class Solution {
public:

    int hammingWeight(int n) {

        int count = 0;

        while(n > 0) {

            if(n & 1) {
                count++;
            }

            n = n >> 1;
        }

        return count;
    }
};

int main() {

    Solution obj;

    int ans = obj.hammingWeight(11);

    cout << ans;

    return 0;
}