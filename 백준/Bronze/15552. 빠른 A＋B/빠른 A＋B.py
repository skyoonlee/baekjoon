import sys
n = int(sys.stdin.readline())
for _ in range(n):
    a, b = map(int, sys.stdin.readline().strip().split())
    print(a + b)