#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include <algorithm>
#include <stack>
#include <map>
#include <set>
#include <cmath>
#include <sstream>
#include <cassert>
#define pb push_back
#define mp make_pair

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n,m,ans=0;
	cin >> n >> m;
	vector<int> vi,used;
    map<int,int> mi;
    for(int i = 0;i<vi.size();i++){
        int c;
        cin >> c;
        vi[i] = c;
    }
    while(m--){
        int x,y;
        cin >> x >> y;
        mi[x] = y;
    }
    for(auto const& i : mi){
        if (find(used.begin(), used.end(), i.first) != used.end()){
            ans += vi[i.first-1];
            used.emplace_back(i.second);
        }
    }
    for(int i = 0;i<vi.size();i++){
        if(!(find(used.begin(), used.end(), i-1) != used.end())){
            ans += vi[i];
        }
    }
    cout << ans << endl;
}
