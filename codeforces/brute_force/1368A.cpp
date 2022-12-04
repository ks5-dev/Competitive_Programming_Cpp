#include <bits/stdc++.h>
using namespace std;

//1368a C+=
//Given 3 integers a,b,n perform b+=a or a+=b so that a or b exceeds n

int main(){
    vector<int> res;
    int t;
    cin >> t;
    while (t--){
        int a,b,n;
        cin >> a >> b >> n;
        int ans = 0;
        while (max(a, b) <= n)
        {
            if (a < b)
                a += b;
            else
                b += a;
            ans++;
        }
        res.push_back(ans);
    }
    for (auto ans : res){
        cout << ans << "\n";
    }
    return 0;
}
