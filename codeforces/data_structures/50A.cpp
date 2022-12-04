#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    int a=max(m,n);
    int b=min(m,n);    
    cout << (a*b)/2;
}
