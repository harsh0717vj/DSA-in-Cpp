#include<iostream>
#include<string>
using namespace std;
class Book{
    public:
    string name;
    int price;
    int page;
    int CountBooks(Book books[],int n,int p){
        int count=0;
        for(int i=0;i<n;i++){
            if(books[i].price<p) count++;
        }
        return count;
    }
    bool isBookPresent(Book books[],int n,string title){
        for(int i=0;i<n;i++){
            if(books[i].name==title) return true;
        }
        return false;
    }
};
int main(){
    Book books[4];
    books[0]={"COA",290,200};
    books[1]={"DAA",300,310};
    books[2]={"DLE",350,210};
    books[3]={"DM",500,720};
    Book obj;
    cout<<obj.CountBooks(books,4,1000)<<endl;
    cout<<obj.isBookPresent(books,4,"DAA");
    return 0;
}
