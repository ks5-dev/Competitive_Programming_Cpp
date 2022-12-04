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
    int compare = t;
    if (t < 4)
    {
        cout << "-1" << endl;
        return 0;
    }
    int cnt_4 = 0;
    int cnt_7 = 0;
	if(t >= 7){
        cnt_7 = t/7;
        t = t%7;
    }
    if ((0 <  t && t < 4) || t%4 != 0){
        // cout << "huh \n";
        while(t%4!=0){
        t += 7;
        if(t > compare){
            t -= 7;
            break;
        }
        cnt_7 -= 1;
        }
    }
    if(t >=  4){
        cnt_4 = t / 4;
        t = t%4;
    }
    if (t == 0){
        cout << string(cnt_4, '4') << string(cnt_7, '7') << endl;
    }
    else{
        cout << "-1" << endl;
        //cout << t << endl;
    }
}
