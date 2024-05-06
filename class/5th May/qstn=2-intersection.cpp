///intersecton of both arrays ==>>same values in both array


#include <iostream>
using namespace std;
#include <vector>
int main(){
    int a[]={1,2,4,2,3,5,6,7};
    int b[]={2,4,5,3,9,11,23};
    vector<int>ans;
    for(int i=0;i<sizeof(a)/sizeof(int);i++){
        int element =a[i];
        for(int j=0;j<sizeof(b)/sizeof(int);j++){
            if(element==b[j]){                   ///if there is a duplicate value in th array
                   ans.push_back(a[i]);      
            b[j]=1; 
            }
        
            
        }
    }
for(auto value:ans){
    cout<<value<<endl;
}
}
