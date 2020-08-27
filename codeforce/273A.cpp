#include <iostream>
#include <utility>
#include <vector>
using namespace std;
int main(){
    int n;int cash = 1;
    cin >> n;
    vector< pair<int,int> > vp;
    while(n--){
        int h,m;
        cin >> h >>m;
        vp.push_back(make_pair(h,m));
    }
    for(int i =0;i<vp.size();i++){
        if(vp[i]==vp[i+1]){
            cash += 1;
        }
    }
    cout << cash <<endl;
}