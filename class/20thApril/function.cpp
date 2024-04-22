//decimaltoanybase

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int decimaltoanybase(int num,int base){
    int ans=0;
    int power=1;
    while(num>0){
        int r=num%base;
           num=num/base;
        ans=ans+(r*power);
        power=power*10;
     
        
    }
    return ans;
}

int main() {
    
int ans=decimaltoanybase(234,2);
cout<<ans<<endl;
    return 0;
}

//anybasetodecimal


#include <iostream>
using namespace std;

int anybasetodecimal(int num,int base){
    int ans=0;
    int power=1;
    while(num>0){
        int r=num%base;
          ans=ans+(r*power);
        power=power*base;
           num=num/10;
      
     
        
    }
    return ans;
}

int main() {
    
int ans=anybasetodecimal(11101010,2);
cout<<ans<<endl;
    return 0;
}

//question--3;;-------anybaseaddtion;;


// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int mybaseaddition(int num1,int num2,int base){
    int ans=0;
   int power=1;
    int carry=0;
    while(num1>0 || num2>0 || carry>0){
        int ld1=num1%10;
          int ld2=num2%10;
          int sum=ld1+ld2+carry;
          
          carry=sum/base;
          int r=sum%base;
          ans=ans+(r*power);
          power=power*10;
          
          
          
          num1=num1/10;
          num2=num2/10;
    }
    return ans;
}

int main() {
    int ans= mybaseaddition(345,453,8);
    cout<<ans<<endl;

    return 0;
}


