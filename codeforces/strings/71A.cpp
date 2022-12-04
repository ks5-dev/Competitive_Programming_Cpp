#include <iostream>
#include <string>
using namespace std;

int main(){
    int t;
    cin>> t;
    while(t--){
        string s;
        cin >> s;
        if(s.length() <= 10){
            cout << s <<endl;
        }
        else{
            cout << s[0] << s.size()-2 << s.back() << endl;
        }
    }
}