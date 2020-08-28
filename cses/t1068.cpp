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

#define pb push_back
#define mp make_pair

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	unsigned long long t;
	cin >> t;
    cout << t << " ";
	while(t>1){
        if(t%2==0){
            t /= 2;
        }
        else{
            t = t*3+1;
        }
        cout << t <<" ";
	}
    return 0;
}
