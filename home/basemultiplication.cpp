///question==2;
#include <iostream>
using namespace std;

int main(){
    int nst=1;
    int nsp=4;

    for (int  row = 1; row <=9; row++)
    {
        for (int  sp = 1; sp <= nsp; sp++)
        {
            cout<<"  ";
        }
        for (int  st = 1; st <= nst; st++)
        {
            cout<<"*   ";
        }
        cout<<""<<endl;
        if(row<5){
            nst=nst+1;
            nsp=nsp-1;
        }
        else{
            nst=nst-1;
            nsp=nsp+1;
        }
        
    }
    return 0;
    
}
