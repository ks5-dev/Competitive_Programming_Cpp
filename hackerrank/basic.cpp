#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

void vector_sort(){
    vector<long long> vi;
    long long int i,n,x;
    cin>>n;
    for(i=0;i<n;i++){ 
    cin>>x;
    vi.push_back(x);
    }

    sort(vi.begin(),vi.end());

    for(i=0;i<n;i++){
    cout<<vi[i]<<" ";
    }
    cout<<endl;
}

int main(){
    return 0;
}