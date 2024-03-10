#include<iostream>
using namespace std;
int main(){
    int l, b, area, perimeter;
    cout<<"Enter the length of rectangle"<<endl;
    cin>>l;
    cout<<"Enter the breadth of rectangle"<<endl;
    cin>>b;
    area = l * b;
    perimeter = 2 * (l+b);

    if(area>perimeter){
        cout<<"Area is greater than perimeter."<<endl;
    }
    else{
        cout<<"Perimeter is greater than area."<<endl;
    }
}