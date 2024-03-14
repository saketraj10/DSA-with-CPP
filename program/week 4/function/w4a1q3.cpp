#include<iostream>
using namespace std;
void oddno(int a, int b){
    if(a>b){
        oddno(b,a);
    }
    for(int i=a; i<=b; i++){
    if(i%2!=0){
    cout<<i<<" ";
    }
    }
    cout<<endl;
}
int main(){
    int a,b;
    cout<<"Enter a value: "<<endl;
    cin>>a;
    cout<<"Enter b value: "<<endl;
    cin>>b;
    
    
    oddno(a,b);

}