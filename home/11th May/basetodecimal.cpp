//anybase to decimal
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