// Problem: Nearly Lucky Number
// Platform: codeforces
// Language: C++17
// Verdict: Accepted
// URL: https://codeforces.com/submissions/MohantyshekAbhi_
// Solved on: 2026-09-11T04:14:58.329Z

#include<bits/stdc++.h>
using namespace std;
 
int main() {
    long long n;
    cin >> n;
    int count = 0;
    while(n != 0){
        int d = n % 10;
        if(d==4 || d==7) count++;
        n = n / 10;
    }
    if(count == 4 || count == 7){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
  return 0;
}