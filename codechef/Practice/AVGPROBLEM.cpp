// Problem: AVGPROBLEM
// Platform: codechef
// Language: C++​
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/AVGPROBLEM
// Solved on: 2026-09-18T15:47:14.582Z

#include <bits/stdc++.h>
using namespace std;

int main() {
	int a;
	cin >> a;
	int c, d, e;
	while(a--){
	    cin >> c >> d >> e;
	    double average = (c + d) / 2.0;
	    if(average > e){
	        cout << "YES" << endl;
	    } else{
	        cout << "NO" << endl;
	    }
	}
	return 0;

}
