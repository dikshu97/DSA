 
//palindrome === 2 pointer approach
#include <iostream>
using namespace std;
int main() {
    string name="nitin";
    int start=0;
    int end=name.length()-1;
    cout<<name.length()<<endl;
    
    while(start<=end){
        if(name[start]==name[end]){
            cout<<"palindrome"<<endl;
            break;
        }
        else{
            cout<<"palindrome not found"<<endl;
        }
        start++;
        end--;
    }
    

    return 0;
}