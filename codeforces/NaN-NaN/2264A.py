// Problem: Rumb Needs a Hand
// Platform: codeforces
// Contest: Codeforces Round 1121 (Div. 2)
// Rating/Difficulty: Codeforces Round 1121 (Div. 2)
// Language: Python3
// Verdict: Accepted
// URL: https://codeforces.com/contest/2264/my
// Solved on: 2026-09-14T08:01:39.161Z

a = int(input())
for i in range(a):
    b = int(input())
    c = list(map(int,input().split()))
    d = []
    for j in range(b):
        if c[j] != j + 1:
            d.append(j + 1)
    if len(d) == 0:
        print("YES")
    else:
        e = []
        for k in d:
            e.append(c[k-1])
        if e[::-1] == d:
            print("YES")
        else:
            print("NO")
        
            