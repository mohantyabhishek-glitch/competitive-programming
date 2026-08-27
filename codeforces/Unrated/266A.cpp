// Problem: Status - Codeforces
// Platform: codeforces
// Language: C++17
// Verdict: Accepted
// URL: https://codeforces.com/problemset/status?my=on
// Solved on: 2026-08-27T12:41:50.110Z

#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    string s;
    cin >> s;

    int removals = 0;
    for (int i = 0; i < n - 1; i++) {
        if (s[i] == s[i + 1]) {
            removals++;
        }
    }

    cout << removals << "\n";
    return 0;
}