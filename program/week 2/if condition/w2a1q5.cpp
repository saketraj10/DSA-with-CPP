#include<iostream>
using namespace std;
int main(){
    int side1, side2, side3;
    cout<<"Enter the first side of triangle: "<<endl;
    cin>>side1;
    cout<<"Enter the second side of triangle: "<<endl;
    cin>>side2;
    cout<<"Enter the third side of triangle: "<<endl;
    cin>>side3;

    if(side1 == side2 == side3)
    {
        cout<<"This is an equilateral triangle."<<endl;
    }
    else if(side1 == side2 || side1 == side3 || side2 == side3){
        cout<<"This is an Isosceles triangle."<<endl;
    }
    else{
        cout<<"This is scalene triangle.";
    }
}