#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    int n = s.size(), i = 0;
    string ans = "";
    while (i < n) {
        if (s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u') {
            i = i + 2;
        }
        ans += s[i];
        i++;
    }
    cout << ans << endl;
    return 0;
}
