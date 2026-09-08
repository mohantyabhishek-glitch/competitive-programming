// Problem: Young Physicist
// Platform: codeforces
// Contest: Codeforces Beta Round 63 (Div. 2)
// Rating/Difficulty: Codeforces Beta Round 63 (Div. 2)
// Language: Python3
// Verdict: Accepted
// URL: https://codeforces.com/contest/69/my
// Solved on: 2026-09-08T03:33:53.134Z

a = int(input())
sum_b = sum_c = sum_d = 0
for i in range(a):
    b, c, d = list(map(int, input().split()))
    sum_b += b 
    sum_c += c 
    sum_d += d 
if sum_c == 0 and sum_d == 0 and sum_b == 0 :
    print("YES")
else:
    print("NO")