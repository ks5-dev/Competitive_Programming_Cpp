#include <iostream>
#include <string>
using namespace std;
int main(void)
{
    string s;
    cin>>s;
    s = '_' + s;
    int len = s.length() - 1;
    int cnt = 0;
    for (int i = 1;i + i <= len;++i)
        if (s[i] != s[len - i + 1])
            ++cnt;
    if ((len <= 1 && (len&1)) || cnt == 1){
        cout << "YES"<<"\n";
    }
    else{ 
        cout << "NO"<<"\n";
    }
    return 0;
}