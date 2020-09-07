#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include <algorithm>
#include <stack>
#include <map>
#include <set>
#include <cmath>
#include <sstream>
#include <cassert>
#define pb push_back
#define mp make_pair

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	string dna;
    cin >> dna;
    int cur = 1,total=1;
    for(int i = 0; i <dna.length()-1;i++){
        if(dna[i] == dna[i+1]){
            cur += 1;
            total = max(total,cur);
        }
        else{
            cur = 1;
        }
    }
    cout << total << endl;
}
