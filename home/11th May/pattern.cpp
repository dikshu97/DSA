#include <iostream>
using namespace std;


int main(){
    int n;
    cin>>n;
    int nst=1;
    int nsp=n/2;
    for (int row = 1; row <n; row++)
    {
        for (int  sp = 1; sp < nsp; sp++)
        {
            cout<<" ";
        }
        for (int st = 1; st < nst; st++)
        {
            cout<<"* ";
        }
        cout<<"\n";

        if (row<n/2)
        {
            nst=nst+1;
            nsp=nsp-1;
        }else
        {
            nst=nst-1;
            nsp=nsp+1;
        }
        
        
        
        
    }
    
    return 0;
}