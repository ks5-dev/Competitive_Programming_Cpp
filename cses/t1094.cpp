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
void printarr(vector<int> vi){
    for(int i = 0;i< vi.size();i++){
        cout << vi[i] << " ";
    }
}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	unsigned long long t,ans = 0,cur=0;
	cin >> t;
    vector<int> vi;
	while(t--){
        int a;
        cin >> a;
        vi.emplace_back(a);
	}
    for(int i = 1;i<vi.size();i++){
        if (vi[i] < vi[i-1]){
            cur = (vi[i-1]) - vi[i];
            ans += cur;
            vi[i] += cur;
        }
    }
    cout << ans << endl;
}
