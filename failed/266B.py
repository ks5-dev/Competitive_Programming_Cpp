def main():
    n,t = map(int,input().split())
    initial = input()
    inp = [i for i in initial]
    while t> 0:
        for i in range(len(inp)-2):
            if inp[i] =="B" and inp[i+1]=="G":
                inp[i],inp[i+1] =inp[i+1],[i]
                t-=1
    print(inp)

main()
