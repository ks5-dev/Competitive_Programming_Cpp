#include <iostream>
#include <vector>
using namespace std;
int main(){
    int t;
    while(cin>>t){
        int first= 0;int second =0;
        int inp;
        for(int i = 0;i<t;i++){
            cin >> inp;
            first += inp;
        }
        for(int i =0;i<t;i++){
            cin >> inp;
            second += inp;
        }
        if(!(second<= first)){
            cout<<"NO"<<"\n";
        }
        else{
            cout<<"YES"<<"\n";
        }

    }
}