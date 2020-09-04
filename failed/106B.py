import sys
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
    speed = ram = hdd = cost = []
    n = inp()
    ch = []
    cost = {}
    for _ in range(n):
        tmp = linp()
        ch.append(tmp)
    for i in range(0,n-1):
        if ch[i][0]<ch[i+1][0] and ch[i][1]<ch[i+1][1] and ch[i][2]<ch[i+1][2]:
            cost[i+1]=ch[i+1][3]
            if i in cost:
                cost.pop(i)
    print(cost)
main()
