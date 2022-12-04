#include <bits/stdc++.h>
using namespace std;
//1351b : see if we can create a square from 2 rectangles

int main(){
    vector<string> res;
    int t;
    cin >> t;
    while (t--){
        int a,b,c,d;
        cin >> a >> b;
        cin >> c >> d;
        bool ans=min(a,b)+min(c,d)==max(a,b) && max(a,b)==max(c,d);
        if (ans){
            res.push_back("YES");
        }
        else{
            res.push_back("NO");
        }
    }
    for (auto ele : res){
        cout<< ele << "\n";
    }
}
