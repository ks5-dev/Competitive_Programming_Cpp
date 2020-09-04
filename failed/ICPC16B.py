import sys
from itertools import combinations
input = sys.stdin.readline

def inp():
    return int(input())
def minp():
    return map(int,input().split())
def linp():
    return list(map(int,input().split()))
def inpsl():
    return list(input().split())
def write(s):
    sys.stdout.write(s+" ")


def main():
    for _ in range(inp()):
        a = inp()
        li = linp()
        cnt = 0
        ex = len(list(combinations(li,2)))
        for i in range(0,a-1):
            for j in range(i,a-1):
                if li[i]*li[j] in li:
                    cnt += 1
                if j == a-1:
                    break
        if cnt == ex:
            print("yes")
        else:
            print("no")
            print(cnt)
main()
