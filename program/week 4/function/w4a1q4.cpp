#include<iostream>
using namespace std;
int squareofsumofdigit(int a){
    int sum=0;
    while(a>0){
        
        sum ++;
        a /=10;
    }
    int squaresumdigit = sum*sum;
    return squaresumdigit;
}
int main(){
    int n;
    cout<<"Enter the number: "<<endl;
    cin>>n;

    cout<<squareofsumofdigit(n);

}