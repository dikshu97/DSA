// //vector

// //how to create a vector

// #include <iostream>
// using namespace std;
// #include <vector>

// int main(){
//     vector<int>arr{10,20,30,40,50,60,70};
//     //size
//   cout<<arr.size()<<endl;
//   //capacity
//   cout<<arr.capacity()<<endl;
// }
//pushback and pop functions

#include <iostream>
using namespace std;
#include <vector>

int main(){
vector<int>array(10,-1);
for(int i=0;i<array.size();i++){
    cout<<array[i]<<endl;
}
  //size
  cout<<array.size()<<endl;
  //capacity
  cout<<array.capacity()<<endl;

  array.push_back(20);
   cout<<"__________________________________"<<endl;
   for(int i=0;i<array.size();i++){
    cout<<array[i]<<endl;
}
  //size
  cout<<array.size()<<endl;
  //capacity
  cout<<array.capacity()<<endl;
  array.pop_back();
   cout<<"__________________________________"<<endl;
   for(int i=0;i<array.size();i++){
    cout<<array[i]<<endl;
}
  //size
  cout<<array.size()<<endl;
  //capacity
  cout<<array.capacity()<<endl;
}