// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int subtraction(int num1,int num2,int base){
    int borrow=0;
    int ans=0;
    int power=1;
    while(num1>0){
        int ld1=num1%10;
           int ld2=num2%10;
           
           
           num1=num1/10;
            num2=num2/10;
            
            int sub=(ld1-borrow)-ld2;
            if(sub>=0){
                borrow=0;
            }else{
                sub=sub+base;
                borrow=1;
            }
            ans=ans+(sub*power);
            power=power*10;
    }
    return ans;
            
}

int main() {
int ans=subtraction(237,77,8);
   cout<<ans<<endl;


    return 0;
}


