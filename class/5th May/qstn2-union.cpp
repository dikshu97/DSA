//question==1;
// a=[1,4,5,7,9];
//  b=[2,,6,10,12]
//question is to =>> aub=[1,2,3,45,6,7,8,9]

//sizeof(a)/sizeof(int);===>20/4===>5;
//sizeof(b)/sizeof(int);===>16/4===>4 ;
#include <iostream>
using namespace std;
#include <vector>
int main(){
int a[]={1,4,5,7,9};
int b[]={2,6,10,12};
vector<int>ans;
for(int i=0;i<sizeof(a)/sizeof(int);i++){
    ans.push_back(a[i]);
}
for(int i=0;i<sizeof(b)/sizeof(int);i++){
    ans.push_back(b[i]);
}
for (int i=0;i<ans.size();i++){
    cout<<ans[i]<<"  "<<endl;
}
}
