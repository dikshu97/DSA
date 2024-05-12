#include <iostream>
using namespace std;

int anybasemultiplication(int num1,int num2,int b){
    int carry=0;
    int power=1;
    int ans=0;
    while (num1>0)
    {
        int ld1=num1%10;
        int ld2=num2;
        int multi=(ld1*ld2)+carry;

        carry=multi/b;
        int r=multi%b;
        ans=ans+(r*power);
        power=power*10;

        num1=num1/10;
        num2=num2;


    }
    return ans;

    
}
int main(){
    int ans=anybasemultiplication(176,6,8);
    cout<<ans<<endl;
    return 0;

}


