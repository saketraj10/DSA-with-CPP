#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter the x co-ordinates: "<<endl;
    cin>>x;
    cout<<"Enter the y co-ordinates: "<<endl;
    cin>>y;

    if(x == 0 && y == 0){
        cout<<"the point lies on the origin."<<endl;
    }
    else if(x == 0){
        cout<<"the point lies on the y - axis."<<endl;
    }
    else if(y == 0){
        cout<<"the point lies on the x - axis."<<endl;
    }
    
}