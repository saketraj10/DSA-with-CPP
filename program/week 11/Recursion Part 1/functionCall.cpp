#include<iostream>
using namespace std;
void gun(){
    return;
    cout<<"hello raj"<<endl;
}
void fun(){
    cout<<"hello saket"<<endl;
    gun();
    return;
}
int main(){
    fun();

    return 0;
}