#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int x,y,z;
        cin >> x >> y >> z;
        vector<int> vi;
        vi.push_back(x);vi.push_back(y);vi.push_back(z);
        sort(vi.begin(),vi.end());
        if(vi[1]!=vi[2]){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << "\n"<<to_string(vi[0]) + " "+ to_string(vi[0])+ " "+ to_string(vi[2]) +"\n";
        }
    }
}