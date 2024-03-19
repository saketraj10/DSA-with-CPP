#include<iostream>
using namespace std;
void print(int n){
    //base case
    if(n==0) 
    return;
    //work
    cout<<n<<endl;
    //call
    print(n-1);
}
int main(){
    print(4);
}