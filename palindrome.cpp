#include<iostream>
using namespace std;

class palindrome{
    public:
        void palind(int x){
            

            long reverse=0;
            int copy=x;
            while(x>0){
                reverse=(reverse*10)+(x%10);
                x/=10;
            }
            if(reverse==copy){
                cout<<"Palindrome";
            }
            else if(x<0){
                cout<<"Not Plaindrome";
            }
            else{
                cout<<"Not Palindrome";
            }
        };
        
};

int main(){
    int x;
    cout<<"Enter the number you want to check palindorme : ";
    cin>>x;
    palindrome n;
    n.palind(x);
}