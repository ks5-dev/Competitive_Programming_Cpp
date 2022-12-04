#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(){
    int t;
    cin >> t;
    map<string,int> mp;
    while(t--){
        string inp;
        cin >> inp;
        if(mp.count(inp)== 0){
            cout<< "OK"<<"\n";
            mp[inp]=1;
        }
        else{
            cout<<inp + to_string(mp[inp]++)<<"\n";
        }
    }
}