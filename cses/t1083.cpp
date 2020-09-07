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
	long long t,cur = 0;
	cin >> t;
    long long i = t-1;
	while(i--){
        int a;
        cin >> a;
        cur += a;
	}
    long long sum = (t*(t+1))/2;
    cout << sum - cur << endl;
}
