#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n,k,total=0;
    vector<int> vi;
    cin >> n >> k;
    for(int i=0; i<n; i++)
    {
        int t;
        cin >> t;
        vi.push_back(t);
    }
    for(int i=0; i<n; i++)
    {
        if(vi[i]>=vi[k-1]&&vi[i]>0)
            total++;
    }
    cout << total;
    return 0;
}


