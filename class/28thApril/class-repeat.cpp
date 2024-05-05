//array reverse
#include<iostream>
using namespace std;
int reverse(int* arr,int size){
    int i=0;
    int j=size-1;
    while (i<=j)
    {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    for ( int i=0;i<size;i++)
    {
        cout<<arr[i]<<endl;;
    }
    return 1;
    

    }
    
    

int main(){
    int size;
    cin>>size;


    int*  array=new int[size];
    for(int i=0;i<size;i++){
        cin>>array[i];
    }

    int ans=reverse(array,size);
    cout<<ans<<endl;
    
    
  return 0;

}