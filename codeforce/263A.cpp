#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int input[6][6];
    int ans;
    for(int i =0; i<5;i++){
        for(int j=0;j<5;j++){
            int inp;
            cin >> inp;
            input[i][j] = inp;
        }
    }
    for(int i = 0;i<5;i++){
        for(int j= 0;j<5;j++){
            if(input[i][j] == 1){
                ans = abs(3-(i+1)) + abs(3-(j+1));
                break;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}
