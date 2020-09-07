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
	int t,cnt;
	cin >> t;
	while(t--){
        int a;
        cnt = 0;
        cin >> a;
        for(int i = 1;i<=a/2+1;i++){
            if(a%i==0){
                cnt += 1;
            }
        }
        cout << cnt + 1 << endl; ;	
	}
}
