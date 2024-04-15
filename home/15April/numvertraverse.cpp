//prime number;;
#include <iostream>
using namespace std;

int main() {
    
    int num;
    cin>>num;
    int nof=0;
    
    for(int div=1;div<=num;div++){
        if(num%div==0){
            nof++;
        }
    }
    if(nof>2){
        cout<<"not prime numbwr"<<num<<endl;
    }else{
        cout<<"prime number"<<num<<endl;
    }

    return 0;
}


//quetion-2; prime number;


#include <iostream>
using namespace std;

int main() {
    
    int num;
    cin>>num;
    int nof=0;
    
    for(int div=2;div<=num-1;div++){
        if(num%div==0){
            nof++;
            break;
        }
    }
    if(nof==0){
        cout<<"prime numbwr"<<num<<endl;
    }else{
        cout<<" not prime number"<<num<<endl;
    }

    return 0;
}


//question;; 3; prime number

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    
    int num;
    cin>>num;
    int nof=0;
    
    for(int div=2;div*div<=num-1;div++){
        if(num%div==0){
            nof++;
            break;
        }
    }
    if(nof==0){
        cout<<"prime numbwr"<<num<<endl;
    }else{
        cout<<" not prime number"<<num<<endl;
    }

    return 0;
}


//question==4; prime number;


#include <iostream>
using namespace std;

int main() {
    
    int num;
    cin>>num;

    
   for(int num=1;num<=300;num++){
       if(num==1){
           continue;
       }
         int nof=0;
         for(int div=2;div*div<=num;div++){
            if(num%div==0){
                nof++;
                continue;
            } 
         }
         if(nof==0){
             cout<<" not prome numbwers"<<num<<endl;
         } else{
             cout<<"prime numbers"<<num<<endl;
         }
   }
    return 0;
}



//question==5;; sum;

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;


int main() {
    
    int sum=0;
    for(int num=1;num<=50;num++){
        sum=sum+num;
        
    }
    cout<<sum<<endl;

    return 0;
}


//question==6; 