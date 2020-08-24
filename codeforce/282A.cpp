#include <iostream>
#include <string>
using namespace std;
int main(){
    int n;
    cin >> n;
    int ans = 0;
    while(n--){
        string t;
        cin >> t;
        if(t[0]=='+' || t[2]=='+'){
            ans++;
        }
        else if(t[0]=='-'|| t[2]=='-'){
            ans--;
        }
    }
    cout << ans << endl;
}