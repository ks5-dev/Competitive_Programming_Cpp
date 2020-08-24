#include <iostream>
using namespace std;
int main(){
    int n,t;
    cin >> n >> t;
    char inp[52];
    cin >> inp;
    for(int j=0;j<t;j++){
        for(int i = 0;i<n-1;i++){
            if(inp[i]=='B'&& inp[i+1]=='G'){
                inp[i]='G';
                inp[i+1] = 'B';
                i++;
            }
        }
    } 
    cout << inp <<endl;
}