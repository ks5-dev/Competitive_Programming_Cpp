#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,a,b,c;
        bool exist = false;
        cin >> n;
        
        for(int i=2;i<n;i++){
            if(n%i==0){
                a = i;
                for(int j = 3;j<a;j++){
                    if(a%j==0){
                        b = j;
                        c = (n/a)/b;
                        if(c >= 2){
                            exist =true;
                            break;
                        }
                        else{continue;}
                    }
                }
            }
        }
        if(exist){
             cout <<"YES"<<"\n"<<a<<" "<<b<<" "<<c<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
        }
    }
}