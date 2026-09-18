// Problem: CHEFSCORE
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CHEFSCORE
// Solved on: 2026-09-18T16:09:04.146Z

#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cin >> a;
    int b, c, d;
    while(a--){
        cin >> b >> c >> d;
        if(d % c == 0){
            cout << "YES" << endl;
        }
        else{
        cout << "NO" << endl;}
    }
}
