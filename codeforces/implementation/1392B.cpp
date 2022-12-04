#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        vector<int> vi;
        int n;long long k;
        cin >> n >> k;
        int inp;
        for(int i = 0; i<n;i++){
            cin >> inp;
            vi.push_back(inp); 
        }
        if(k>1){
            k = 2+k%2;
        }
        for(int i =0 ; i< k;i++){
            int mx = -1000000000;
            for(int i = 0; i < n; i++) {
				mx = max(mx, vi[i]);
			}
			for(int i = 0; i < n; i++) {
				vi[i] = mx - vi[i];
			}
        }
        for(int i = 0;i<vi.size();i++){
            cout<< vi[i] <<" ";
        }
        cout<<"\n";
    }
}