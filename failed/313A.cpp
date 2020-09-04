#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> vi; 
    if(n>=0){
        cout<<n<<endl;
    }
    else{
        string t = to_string(n);
        for(int i = 0;i<t.length();i++){
            vi.push_back(stoi(t.erase(i)));
        }
        cout << *(min_element(begin(vi),end(vi)));
    }
}