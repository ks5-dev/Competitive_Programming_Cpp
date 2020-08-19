#include <iostream>
#include <vector>

using namespace std;
int main(){
    int t,a;
    cin >> t;
    while(t--){
        cin >> a;
        int ar;
        bool constructable = false;
        vector<int> vi;
        for(int i =0 ; i<a;i++){
            cin >> ar;
            vi.push_back(ar);
        }
        if(vi[0]+vi[1]> vi[a-1] ){
            cout<<"-1"<<"\n";
        }
        else{
            cout << "1 2 " + to_string(a)<<"\n";
        }
    }
}