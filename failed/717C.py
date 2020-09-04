def main():
    ans = 0
    tasks = []
    n = int(input())
    for _ in range(n):
        tasks.append(int(input()))
    tasks = sorted(tasks)
    for i in range(1,n):
        print(abs(n-i-1))
        ans=(ans+tasks[i]*tasks[abs(n-i-1)]%10007)%10007;
    print(ans);
main()
