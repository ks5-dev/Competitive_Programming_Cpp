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
	int t;
	cin >> t;
    if (t<=3 && t >1){
        cout << "NO SOLUTION";
        return 0;
    }
    if (t%2 != 0 ){
        for(int i = t-1;i>=2;i-=2){
            cout << i << " ";
        }
        cout << t << " ";
        for(int i = t-2;i>=1;i-=2){
            cout << i << " ";
        }
    }
    else{
        for(int i = t-2;i>=2;i-=2){
            cout << i << " ";
        }
        cout << t << " "; 
        for(int i = 1;i <= t-1; i+=2){
            cout << i << " ";
        }
    }
}