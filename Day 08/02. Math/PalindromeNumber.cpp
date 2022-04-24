#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

class Solution {
public:
    ll reverse(int x) {
        ll rev = 0;
        while(x != 0) {
            int digit = x % 10;
            rev = (rev * 10) + digit;
            x /= 10;
        }
        return rev;
    }

    // Time Complexity = O(log N) .. same as reverse() function
    // Space Complexity = O(1)

    bool isPalindrome(int x) {
        ll rev = reverse(x);
        if(rev == x  &&  x >= 0) {
            return true;
        }
        return false;
    }
};

int main() {
    int n;
    cin >> n;
    Solution solve;
    bool ans = solve.isPalindrome(n);
    cout << (ans == true ? "true" : "false") << endl;
    return 0;
}