//pair-sum in an array

#include <iostream>
using namespace std;
#include <vector>
int main(){
    int a[]={1,2,4,7,8,6,4};
    // int b[]={2,4,5,3,9,11,23};
    int target=8;
    for(int i=0;i<sizeof(a)/sizeof(int);i++){
        int element =a[i];
        for(int j=i+1;j<sizeof(a)/sizeof(int);j++){
            if(element+a[j]==target){
             cout<<a[i]<<a[j]<<"  "<<endl;   
            }
        }
    }
    
   
}
