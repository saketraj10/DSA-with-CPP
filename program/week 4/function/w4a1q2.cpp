#include<iostream>
using namespace std;
float areaofcircle(float r){
    float area= 3.14*r*r;
    return area;
}
int main(){
    float r;
    cout<<"Enter the radius of circle: "<<endl;
    cin>>r;
    cout<<"Area of circle: "<<areaofcircle(r)<<endl;
}