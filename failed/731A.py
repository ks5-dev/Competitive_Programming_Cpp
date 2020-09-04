import string
def main():
    ans = 0
    s = input()
    for i in s:
        index = string.ascii_lowercase.index(i)
        if(index>13):
            ans += 26 - index
        else :
            ans += index
        print(index)

main()
