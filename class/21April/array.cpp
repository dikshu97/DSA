
//array intro
//question==1;
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;


int main() {
    int arr[5];
    arr[0]=10;
    arr[1]=20;
    arr[2]=30;
    arr[3]=40;
    arr[4]=50;
    for(int idx=0;idx<sizeof(arr)/sizeof(int);idx++){
        cout<<arr[idx]<<endl;
    }
    return 0;
}

//question==2==
#include <iostream>
using namespace std;


int main() {
 
int* arr=new int[5];
for(int idx=0;idx<5;idx++){
    cin>>arr[idx];
}
for(int i=0;i<5;i++){
    cout<<arr[i]<<endl;
}
    return 0;
}