#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int n,m;int ans = 0;
    cin >> n >> m;
    vector<int> vi;
    while(n--){
        int t;
        cin >> t;
        vi.push_back(t);
    }
    sort(vi.begin(),vi.end());
    for(int i =0;i<m;i++){
        if(vi[i]<=0){
            ans += abs(vi[i]);
        }
    }
    cout << ans <<endl;
}