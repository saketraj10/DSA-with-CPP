#include<iostream>
using namespace std;

int main(){
    int x,y;
    cout<<"Enter the first number: "<<endl;
    cin>>x;
    cout<<"Enter the second number: "<<endl;
    cin>>y;
    int *p1=&x;
    int *p2=&y;
    int ans;
    int *pans=&ans;
    
    *pans= (*p1) * (*p2);

    cout<<*pans;
}