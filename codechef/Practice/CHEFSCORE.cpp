// Problem: CHEFSCORE
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CHEFSCORE
// Solved on: 2026-09-19T16:33:38.187Z

#include <bits/stdc++.h>

using namespace std;

int main() {
    int a;
    cin >> a;
    int b, c, d;
    while (a--) {
        cin >> b >> c >> d;
        if(d % c == 0 && d <= b * c){
            cout << "YES" << endl;
        } else{
            cout << "NO" << endl;
        }
    }
}