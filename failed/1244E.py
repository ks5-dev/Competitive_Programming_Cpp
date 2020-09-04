def main():
    result = 0
    a,b = map(int,input().split())
    c = list(map(int,input().split()))
    c = sorted(c)
    if all(element == c[0] for element in c):
        print(0)
    else:
        for i in range(b+1):
            c[-1]=max(c) -1
        print(c[-1]-c[0]-1)

main()
