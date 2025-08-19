#include<iostream>
using namespace std;
bool isPalindrome(int x){
    int digits;
    int original=x;
    int rev=0;
    bool flag=false;
    if(x<0) return flag;
    while(x>0){
        digits=x%10;
        rev=rev*10+digits;
        x=x/10;
    }
    if(rev==original) flag=true;
    else flag=false;
    return flag; 
}
int main(){
    int x;
    cout<<"Enter number: ";
    cin>>x;
    bool result=isPalindrome(x);
    if(result) cout<<"Given number is a Palindrome!";
    else cout<<"Given number is not a Palindrome!";
    return 0;
}
