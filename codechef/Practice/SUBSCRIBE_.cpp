// Problem: SUBSCRIBE_
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/SUBSCRIBE_
// Solved on: 2026-09-18T16:05:58.989Z

#include <bits/stdc++.h>
using namespace std;

int main() {
	int a;
	cin >> a;
	int c, d;
	while(a--){
	    cin >> c >> d;
	    if(c > 6){
	        double quotient = c / 6.0;
	        cout << ceil(quotient) * d << endl;
	    } else {
	        cout << d << endl;
	    }
	}

}
