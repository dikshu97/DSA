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
        
    }
    return -1;
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

//question=5;

//when you have to find the frequency of number

#include <iostream>
using namespace std;
int freq(int* arr,int tar,int size){
    int freq=0;
    for(int i=0;i<size;i++){
        if(arr[i]==tar){
            freq++;
        }
      
    }
      return freq;
}

int main() {
    int size;
    cin>>size;
    
    int* array=new int[size];
    for(int i=0;i<size;i++){
       cin>>array[i]; 
    }
    int ans=freq(array,5,size);
    cout<<ans<<endl;

    return 0;
}

//question=6
//finding maximum and minimum and span of the array


#include <iostream>
using namespace std;
int span(int* arr,int size){
    int  max=arr[0];
    int min=arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }if(arr[i]<min){
            min=arr[i];
        }
        
    }
    cout<<"maximum of tghis array is:"<<max<<endl;
        cout<<"minumum of tghis array is:"<<min<<endl;
    return max-min;
}
int main() {
 int size;
 cin>>size;
 int* array=new int[size];
 for(int i=0;i<size;i++){
     cin>>array[i];
 }
 int ans=span(array,size);
 cout<<ans<<endl;
    return 0;
}
//question==7;;
//to find the number or prime number of the array;

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int primecount(int* arr ,int size){
    int nop=0;
    
    for(int i=0;i<size;i++){
     int  num=arr[i];
     int nof=0;
     
     for(int div=2;div*div<=num;div++){
         if(num%div==0){
             nof++;
             break;
         }
     }
     if(nof==0){
         nop++;
     }
    }
    return nop;
}
int main() {
    int size;
    cin>>size;
    
    int* array=new int[size];
    for(int i=0;i<size;i++){
        cin>>array[i];
    }
    int ans=primecount(array,size);
    cout<<"number of prime number are:"<<ans<<endl;

    return 0;
}

//question==8;
//finding the number through the binary search
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int binarysearch(int* arr,int size,int tar){
    int start=0;
    int end=size-1;
    while(start<=end){
        int mid=start+end/2;
        if(arr[mid]==tar){
            return start;
        }
        else if(arr[mid]){
            start=mid+1;
        }else{
            end=mid-1;
        }
    }
    return -1;
}


int main() {
    int size;
    cin>>size;
    int* array=new int[size];
    for(int i=0;i<size;i++){
        cin>>array[i];
    }
    int target;
    cin>>target;
    int ans=binarysearch(array,size,target);
    cout<<ans<<endl;
    

    return 0;
}


//question==9;;
//



