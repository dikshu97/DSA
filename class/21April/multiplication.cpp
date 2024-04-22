// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int mybasemultiplication(int n1,int n2,int b){
    int ans=0;
    int carry=0;
    int power=1;
    while(n1>0){
        int ld1=n1%10;
        // int ld2=n2%10;
     
        
        int multi=(ld1*n2)+carry;
        //   cout<<multi<<endl;
        int r=multi%b;
        //  cout<<r<<endl;
        carry=multi/b;
        //   cout<<carry<<endl;
        ans=ans+(r*power);
          
        power=power*10;
  
        
        n1=n1/10;
        // n2=n2/10;
      
    }
    return ans;
}

int main() {
  int ans=mybasemultiplication(145,6,8);
  cout<<ans<<endl;

    return 0;
}