#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;

    int arr [n][m];
    for (int  i = 0; i <n; i++)
    {
    for (int  j = 0; j <m; j++)
    {
    cin>>arr[i][j];
    }
    
    }
    int toe=n*m;
   int  count=0;
    int minr=0;
    int minc=0;
    int maxc=m-1;
     int maxr=n-1;
     while (count<=toe){
        //left wall
        for (int i = minr,j=minc; i <maxr; i++)
        {
            cout<<arr[i][j]<<endl;
            count++;
        }
        //bottom wall
        for (int  i = minc,j=maxr; i <maxc; i++)
        {
          cout<<arr[i][j]<<endl; 
          count++;
        }

        //right wall
        for (int i = maxr,j=maxc; i >minr; i++)
        {
        cout<<arr[i][j]<<endl;
        count++;
        }
        //top wall
        for (int i = maxc,j=minr; i > minc; i++)
        {
            cout<<arr[i][j]<<endl;
            count++;
        }
        
        
        
     }

    
    

return 0;
}