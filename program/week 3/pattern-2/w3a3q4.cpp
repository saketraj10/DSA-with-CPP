#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no of rows: "<<endl;
    cin>>n;

    for(int i=1; i<=2*n-1; i++){
        cout<<(char)(i+64);
    }
    cout<<endl;

    for(int i=1; i<=n-1; i++){
        int a=1;
        for(int j=1; j<=n-i; j++){
            cout<<(char)(a+64);
            a++;
        }
        for(int k=1; k<=2*i-1; k++){
            cout<<" ";
            a++;
        }
        for(int l=1; l<=n-i; l++){
            cout<<(char)(a+64);
            a++;
        }
        cout<<endl;
    }
}