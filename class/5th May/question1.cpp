//question==1;
#include <iostream>
using namespace std;
#include <vector>
int main(){
int n;
cin>> n;
vector<int>array(n);
for (int  i = 0; i <array.size(); i++)
{
    cin>>array[i];
}
for (int i = 0; i < array.size(); i++)
{
    cout<<array[i]<<"   "<<endl;
}



}
