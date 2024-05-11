#include <iostream>
using namespace std;
int annybaseaddition(int num1,int num2,int b){
 int carry=0;
 int power=1;
 int ans=0;

 while (num1!=0)
 {
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

int main(){
int ans=annybaseaddition(157,577,8);
cout<<"Sum of these two numbers are:"<<ans<<endl;



    return 0;
}

///anybase to decimal
#include <iostream>
using namespace std;
int anybasetodecimal(int num,int b){
int power=1;
int ans=0;
while (num>0)
{   
// int q=num/10;
int r=num%10;
ans=ans+(r*power);
power=power*10;
num=num/10;


    
}
return ans;

}
int main(){
int ans=anybasetodecimal(145,8);
cout<<ans<<endl;

}


     