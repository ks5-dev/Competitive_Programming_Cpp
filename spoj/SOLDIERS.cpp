#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        unsigned long long m,n;
        cin >> m >> n;
        cout << max(m*(n/2+n%2), n*(m/2+m%2)) << endl;
    }
}