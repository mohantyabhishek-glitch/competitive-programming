// Problem: CodeChef Learn Problem Solving
// Platform: codechef
// Language: Python3​
// Verdict: Accepted
// URL: https://www.codechef.com/skill-test/LPYAS3/problems/LPYAS120B
// Solved on: 2026-09-18T16:45:46.179Z

N = int(input())
sum = 0
for i in range(1,N+1):
    sum += i * 3
print(sum)