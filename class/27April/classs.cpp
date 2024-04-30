//class questions
//questions=1;

#include <iostream>
using namespace std;

int main() {
    int* arr=new int(5);
    arr[0]=10;
    arr[1]=20;
    arr[2]=30;
    arr[3]=40;
    arr[4]=50;
    cout<<arr[1]<<endl;
    cout<<arr[4]<<endl;
    // cout<<arr[6]<<endl;
       cout<<sizeof(arr)<<endl;
    

    return 0;
}

///question=2;


#include <iostream>
using namespace std;

int main() {
  int n;
  cin>>n;
  int* arr=new int[5];
  for(int i=0;i<n;i++){
      cin>>arr[i];
  }
  for(int j=0;j<n;j++){
      cout<<arr[j]<<endl;
      
  }

    return 0;
}

//question=3;


#include <iostream>
using namespace std;

int main() {
int size;
cin>>size;
int* arr=new int[size];
for(int i=0;i<size;i++){
    cin>>arr[i];
}
for(int j=0;j<size;j++){
        cout<<arr[j]<<endl;

}
    

    return 0;;
    
}

///question==4;====>> when you have to find some value in an array;;

#include <iostream>
using namespace std;
int ls(int* arr1,int tar,int size){
    for(int i=0;i<size;i++){
        if(arr1[i]==tar){
            return i;
        }
        return -1;
    }
}
int main() {
int size;
cin>>size;

int* arr=new int[size];
for( int i=0;i<size;i++){
    cin>>arr[i];
}
int  ans=ls(arr,40,size);
cout<<ans<<endl;
    return 0;
}


