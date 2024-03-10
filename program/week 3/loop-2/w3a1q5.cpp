#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter any number: "<<endl;
    cin>>n;
    int sum = 0;
    int last = 0;
    while(n>0){
        last = n%10;
        if(last%2 == 0)
        sum += last;
        // else 
        // sum += 0;

        n /= 10;
    }
    cout<<sum;
}