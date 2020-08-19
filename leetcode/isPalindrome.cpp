#include <iostream>

using namespace std;
int reverse(int x){
    int result = 0;
    while(x!=0){
        result = result*10 + x%10;
        x /= 10;
    }
    return result;
}
bool isPalindrom(int x){
    if(x<0){
        return false;
    }
    else{
        if(reverse(x)==x){
            return true ;
        }
        else{
            return false;
        }
    }
}

int main(){
    if(isPalindrom(121)){
        cout<<"TRue";
    }
    else{
        cout<<"False";
    }

}