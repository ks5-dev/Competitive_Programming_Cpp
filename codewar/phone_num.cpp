#include <iostream>
#include <string>

using namespace std;
string sol(const int arr [10]){
    string ans="(";
    for(int i =0 ;i<2;i++){
        ans += to_string(arr[i]);
    }
    ans+=") ";
    for(int i=3;i<6;i++){
        ans+= to_string(arr[i]);
    }
    ans+="-";
    for(int i=6;i<9;i++){
        ans+= to_string(arr[i]);
    }
    return ans;
}

