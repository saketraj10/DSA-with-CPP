#include<iostream>
using namespace std;
void firstandlast(int &a){
    int last = a%10;
    cout<<last<<endl;
    while(a>=10){
        a /=10;
    }
    cout<<a;
}
int main(){
    int n;
    cout<<"Enter the integer number: "<<endl;
    cin>>n;
    firstandlast(n);
}