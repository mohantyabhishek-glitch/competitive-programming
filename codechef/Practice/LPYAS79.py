// Problem: CodeChef Learn Problem Solving
// Platform: codechef
// Language: Python3​
// Verdict: Accepted
// URL: https://www.codechef.com/skill-test/LPYAS3/problems/LPYAS79
// Solved on: 2026-09-18T16:27:30.584Z

# Given dictionary
student_grades = {"Alice": 85, "Bob": 72, "Charlie": 90, "David": 65, "Eva": 88, "John": 45}

a = input()

if a in student_grades:
    print(student_grades[a])
else:
    print("Not Found")