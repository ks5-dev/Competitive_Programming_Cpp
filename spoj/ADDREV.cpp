#include <iostream>

using namespace std;
int reverse(int n){
    int result = 0;
    while (n != 0)
    {
        result = (result *10) + (n%10) ;
        n /= 10;
    }
    return result;
}
int main(){
    int c;
    cin >> c;
    while (c--)
    {
        int a,b;
        cin >> a >> b ;
        cout<<reverse(reverse(a)+reverse(b))<<"\n";
    }
}