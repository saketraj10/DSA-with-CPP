#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"Enter first integer: "<<endl;
    cin>>x;
    cout<<"Enter second integer: "<<endl;
    cin>>y;
    if(x>y){
        cout<<"first number "<<x<<" is the greatest"<<endl;
    }
    else{
        cout<<"second number "<<y<<" is the greatest"<<endl;
    }
}