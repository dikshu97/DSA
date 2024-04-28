
#include <iostream>
using namespace std;


int  mybaseaddition(int num1,int num2,int b ){
    int ans=0;
int carry=0;
int power=1;

while(num1!=0){
    int ld1=num1%10;
    int ld2=num2%10;
    int sum=ld1+ld2+carry;
    carry=sum/b;
    int r=sum%b;
    ans=ans+(r*power);
    power=power*10;
    
    
    num1=num1/10;
    num2=num2/10;
}
return ans;
}


///subtraction

#include <iostream>
using namespace std;
int anybasesubtraction(int num1,int num2,int b){
    int power=1;
    int ans =0;
    int borrow=0;
    while(num1>0){
        int ld1=num1%10;
        int ld2=num2%10;
        int sub=(borrow+ld1)-ld2;
        if (sub>=0)
        {
            borrow=0;
        }
        else
        {
            sub=sub+b;
            borrow=1;
        }
        
        
        
    }
}

int main() {
    // Write C++ code here
    std::cout << "Try programiz.pro";

    return 0;
}

int main() {
    int ans =mybaseaddition(147,456,8);
    cout<<ans<<endl;
    

    return 0;
}

