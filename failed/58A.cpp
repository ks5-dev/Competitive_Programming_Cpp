#include <iostream>
#include <string>

using namespace std;

int main(){
    string h;
    cin >> h;
    int index = 0;
    int cnt = 0;
    for(int i =0;i<h.length();i++){
        index++;
        if(h[i]=='h'){
            cnt++;
            break;
        }
    }
    for(int i =index+1;i<h.length();i++){
        index++;
        if(h[i]=='e'){
            cnt++;
            break;
        }
    }
    for(int i =index+1;i<h.length();i++){
        index++;
        if(h[i]=='l'){
            cnt++;
            break;
        }
    }
    for(int i =index+1;i<h.length();i++){
        index++;
        if(h[i]=='l'){
            cnt++;
            break;
        }
    }
    for(int i =index+1;i<h.length();i++){
        index++;
        if(h[i]=='o'){
            cnt++;
            break;
        }
    }
    if(cnt==5){
        cout<<"YES";
    }
    else{
        cout <<cnt <<" ";
        cout<<"NO";
    }
    return 0;
}