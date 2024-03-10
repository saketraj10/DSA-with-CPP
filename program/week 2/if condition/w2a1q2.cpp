#include<iostream>
using namespace std;
int main(){
    float r,area, circumference;
    cout<<"Enter the radius of circle: "<<endl;
    cin>>r;
    area = 3.14*r*r;
    circumference = 2*3.14*r;
    if(area>circumference){
        cout<<"Area is greater than circumference."<<endl;
    }
    else{
        cout<<"Circumference is greater than area."<<endl;
    }
}