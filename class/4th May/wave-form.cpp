//wave form

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;

    int arr [n][m];
    for (int  i = 0; i < n; i++)
    {
    for (int  j = 0; j <m; j++)
    {
        cin>>arr[i][j];
    }
    
    }
    //print the output as wave form
    
        for (int j = 0; j <sizeof(arr[0])/sizeof(int);j++)
        {
         if (j%2!=0)
         {
            for (int i = n-1; i < 0; i--)
            {
                cout<<arr[i][j]<<endl;
            }
            
         }else{
            for(int i=0;i<n;i++){
                cout<<arr[i][j]<<endl;
            }
         }
         
        }
        
    
    
    return 0;

}