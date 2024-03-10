#include<iostream>
using namespace std;
int main(){
    float x1,y1,x2,y2,x3,y3, slope1, slope2;
    cout<<"Enter the first point (x1,y1): "<<endl;
    cin>>x1>>y1;
    cout<<"Enter the second point (x2,y2): "<<endl;
    cin>>x2>>y2;
    cout<<"Enter the third point (x3,y3): "<<endl;
    cin>>x3>>y3;

    slope1 = (y2 - y1)/(x2 - x1);
    slope2 = (y3 - y1)/(x3 - x1);

    if(slope1 == slope2){
        cout<<"All 3 points lie on the same line."<<endl;
    }
    else{
        cout<<"All 3 points not lie on the same line."<<endl;
    }
}