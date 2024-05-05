#include <iostream>
using namespace std;
int main(){


int n;
cin>>n;
int m;
cin>>m;                ///array n/m


int arr [n][m];
for (int  i = 0; i < n; i++)
{
for (int  j = 0; j <m; j++)
{
    cin>>arr[i][j];
}
for(int i=0;i<n;i++){
    for (int  j = 0; j < m; i++)
    {
      cout<<arr[i][j]<<endl;
    }
    
    cout<<endl;

}


}




    return 0;
} 