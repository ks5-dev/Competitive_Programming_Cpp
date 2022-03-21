#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;
const int N=105;

//sum of numbers with index odd minus numbers
// with index even = d

int main()
{
    int n,d,L,a[N],b[N],m1,m2;
    while(cin >> n >> d >> L)
    {
        if(n%2 == 1)//The number of parity items
        {
            m1=n/2+1;
            m2=n/2;
        }
        else m1=m2=n/2;
        
        int d1=L*m1-1*m2;//Find the range
        int d2=1*m1-L*m2;
        if(d>d1 || d<d2 )//out of range
        {
            cout << "-1" << "\n";
            return 0;
        }
        for(int i=0;i<m1;i++){//initialize all items, prepare for addition and subtraction
            a[i]=L;
        }
        for(int i=0;i<m2;i++){
            b[i]=1;
        }
        int p=0;
        d1=L*m1;
        d2=1*m2;
        while(1)
        {
            if(d1-d2 == d) break;
            while(a[p]==1) p++;
            if(p==m1) break;
            a[p]--;
            d1--;
        }
        if(p==m1)
        {
            p=0;
            while(1)
            {
                if(d1-d2 == d) break;
                while(b[p]==L) p++;
                if(p==m2) break;
                b[p]++;
                d2++;
            }
        }
        int i;
        for(i=0;i<m2;++i){
            cout << a[i] << " "<< b[i] <<" ";//Odd and even output
        }
        if(m1>m2){
            cout << a[i] ;
        }
        cout << "\n";
    }
}