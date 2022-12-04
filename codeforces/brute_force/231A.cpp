#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    int score = 0;
    while(n--){
        int a,b,c;
        vector<int> vi;
        cin >> a >> b >> c;
        vi.push_back(a);vi.push_back(b);vi.push_back(c);
        if(count(vi.begin(),vi.end(),1) >= 2){
            score += 1;
        }
    }
    cout << score ;
}