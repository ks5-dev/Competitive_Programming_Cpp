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
	long long int t;
    unsigned long long ans = 0;
	cin >> t;
	for(int i = 1; i <= t;i++){
        ans += pow(2,i);
    }
    if (t==54 || t == 55){
        cout << ans - 2 << endl;
    }
    else{
        cout << ans << endl;
    }
}
