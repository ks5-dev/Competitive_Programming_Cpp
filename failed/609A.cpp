#include <iostream>
#include <string>
using namespace std;
int main(void)
{
    int n,m;
    cin >> n;
    cin >> m;
    int size =0;
    int cnt = 0;
    while(n--){
        int a;
        cin >> a;
        while(!(size >=m)){
            size += a;
            cout << size<<"\n";
            cnt++;
        }
    }
    cout << cnt ;
}