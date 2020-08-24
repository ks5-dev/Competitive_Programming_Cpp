#include <iostream>
#include<string>
using namespace std;

int main() {
    string inp,ans;
    cin>>inp;
    for(int i=0;i<inp.length();i++){
	    if(inp[i]=='.'){
		    ans +='0';
	    }
	    if(inp[i]=='-'&&inp[i+1]=='.'){
		    ans+='1';
		    ++i;
	    }
	    if(inp[i]=='-'&&inp[i+1]=='-'){
		    ans+='2';
		    ++i;
	    }
	} 
    cout<<ans<<endl;
 	return 0;
}