#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        n--;
        cout << (int) pow(2.0,(double)n*n)%98777<<endl;
    }
}