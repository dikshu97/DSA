//decimal to base
//question==>(289)10==()8

 #include <iostream>
 using namespace std;
 int decimaltobase(int num,int b){
   int ans=0;
   int power=1;
   while (num>0)
   {
    num=num/2;
    int r=num%2;
    ans=ans+(r*power);
     power=power*10;
   }
   return ans; 
 }
 int main(){
    int ans=decimaltobase(289,10);
    cout<<ans<<endl;
    return 0;
 }