#include <bits/stdc++.h>
#include <math.h>
 
using namespace std;
void solve(){
    int n;
    cin>>n;
    map<int,int>mp;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        mp[x]++;
    }
    int maxi=0;
    for(int i=1;i<=(2*n);i++){
        int total=0;
        for(auto j : mp){
            int other=i-j.first;
            if(other>=1 && mp.count(other))
                total+=min(j.second,mp[other]);
        }
    total/=2;
            // cout<<i<<" "<<total<<"\n";
    maxi=max(maxi,total);
    }
    cout<<maxi<<"\n";
}
    int main(){
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        cout<<fixed;
        cout<<setprecision(10);
//        freopen("timber_input.txt", "r", stdin);
//        freopen("timber_output.txt", "w", stdout);
        int t=1;
        cin>>t;
        for(int i=1;i<=t;i++){
//            cout<<"Case #"<<i<<": ";
            solve();
        }
        return 0;
    }