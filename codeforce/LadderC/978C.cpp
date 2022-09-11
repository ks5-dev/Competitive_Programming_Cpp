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
#include <climits>
#define pb push_back
#define mp make_pair
#define vi vector<int>
#define lli long long int

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    lli f, k, sum, bi;
    f= k= sum = 0;
	cin >> n >> m;
    lli a[200000];
	for(int i=0;i < n; i++){
        cin >> a[i];
        sum+= a[i];
        a[i] = sum;
	}
    int start = 0;
    for(int j=0; j<m; j++){
        cin >> bi;
        for(int i = start; i < sizeof(a)/sizeof(*a); i++){
            if (bi<=a[i]){
                if(i ==0){
                    f = 1;
                    k = bi;
                    cout << f << " " << k << endl;
                    break;
                }
            f = i + 1;
            k = bi - a[i-1];
            cout << f << " " << k << endl;
            start = i; 
            break;
            }
        }
    }
}