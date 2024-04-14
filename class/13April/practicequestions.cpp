// //question =1; traingle
#include <iostream>
    using namespace std;
int main() {
    
    int n;
    cin>> n;


    
for(int row=1;row<=n;row++){
    for(int st=1;st<=row;st++){
         cout<<"* ";
    }
  cout<<"\n"<<endl;
}





    return 0;
}


// //question =2; traingle


#include <iostream>
    using namespace std;
int main() {
   
   int n;
   cin>>n;
  
   for(int row=1;row<=n;row++){
       for(int st=1;st<=n-row+1;st++){
           cout<<"*";
       }
      
       cout<<"\n";
   }
 

    return 0;
}

// //question=3;  triangle;

#include <iostream>
    using namespace std;
int main() {
    
   int n;
   cin>>n;
   int nsp=n-1;
   int nst=1;
  
  for(int row=1;row<=n;row++){
      for(int sp=1;sp<=nsp;sp++){
          cout<<" ";
      }
        for(int st=1;st<=nst;st++){
          cout<<"*";
      }  
      cout<<"\n";
      
      nsp=nsp-1;
      nst=nst+1;
  }
 

    return 0;
}


// //question =4; triangle;


#include <iostream>
    using namespace std;
int main() {
    
   int n;
   cin>>n;
   int nsp=n-1;
   int nst=1;
  
  for(int row=1;row<=n;row++){
    for(int sp=1;sp<=nsp;sp++){
        cout<<" ";
    }
     for(int st=1;st<=nst;st++){
        cout<<"* ";
    }
    cout<<"\n";
    
    nsp=nsp-1;
    nst=nst+2;
    
    
  }
 

    return 0;
}


// //question=5; diamond;
 
#include <iostream>
    using namespace std;
int main() {
    
   int n;
   cin>>n;
   int nsp=n/2;
   int nst=1;
  
  for(int row=1;row<=n;row++){
 for(int sp=1;sp<=nsp;sp++){
     cout<<"  ";
 }
  for(int st=1;st<=nst;st++){
     cout<<"* ";
 }
    cout<<"\n";
    
    if(row<n/2+1){
   nsp=nsp-1;
   nst=nst+2;
    }  
    
    else{
        nsp=nsp+1;
        nst=nst-2;
    }
    
    
    
  }
 

    return 0;
}


// //question=6; slanting line;

#include <iostream>
    using namespace std;
int main() {
   int n;
   cin>>n;
  int nsp=n-1;
  int nst=1;
  
  for(int row=1;row<=n;row++){
      for(int sp=1;sp<=nsp;sp++){
          cout<<" ";
      }
      for(int st=1;st<=nst;st++){
          cout<<"*";
      }
      cout<<"\n";
      nst=nst;
      nsp=nsp-1;
  }
    return 0;
}



//question=7; cross;


#include <iostream>
    using namespace std;
int main() {
    
   int n;
   cin>>n;
//   int nsp=n-1;
//   int nst=1;
  
  for(int row=1;row<=n;row++){
      for(int col=1;col<=n;col++){
          if(row==col || row+col==n+1){
              cout<<"* ";
          } else{
              cout<<" ";
          }
          
      }cout<<"\n";
  }
    return 0;
}


//question=8 ; arrow;


#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int nsp=n/2;
    int nst=1;
    
    for(int row=1;row<=n;row++){
        for(int sp=1;sp<=nsp;sp++){
            if(row==n/2+1){
                cout<<"* ";
            }else{
              cout<<"  ";  
            }
            
        }
        for(int st=1;st<=nst;st++){
            cout<<"* ";
        }
        cout<<"\n";
        
        if(row<n/2+1){
        
            nst=nst+1;
        }else{
            
            nst=nst-1;
        }
    }

    return 0;
}



//question:10;;    hourglass;

#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int nsp=n-1;
    int nst=5;
    
    for(int row=1;row<=n;row++){
        
         for(int sp=1;sp<=nsp;sp++){
         cout<<"  ";  
           }
           for(int st=1;st<=nst;st++){
               cout<<"* ";
           }
       
        cout<<"\n";
        
        if(row<n/2+1){
            nsp=nsp+1;
            nst=nst-2;
        } else{
            nst=nst+2;
            nsp=nsp-1;
        }
    }

    return 0;
}


