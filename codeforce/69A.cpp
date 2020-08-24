#include <iostream>
#include <vector>

using namespace std;

int main(){
    int t;
    cin >> t;
    vector<int> body = {0,0,0};
    while(t--){
        int a,b,c;
        cin >> a >> b >> c;
        body[0] += a;
        body[1] += b;
        body[2] += c;
    }
    if(body[0]==0 && body[1]==0 && body[2]==0){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}