


#include <iostream>
using namespace std;
int main() {
    
   int n;
   
   cin>> n;
//   int nst=1;
//   int nsp=n-2;
   for(int row=1;row<=n;row++){
       for(int col=1;col<=n;col++){
         if(row==col || row+col==10 || row==1 || col==1 || col==n || row==n){
            cout<<"*  ";  
         }else{
             cout<<"   ";
         }
          
       }
       cout<<endl;
   }

    return 0;
}