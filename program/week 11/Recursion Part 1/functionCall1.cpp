#include<iostream>
using namespace std;
void fun(){
    cout<<"hello saket"<<endl;
    fun();
}
int main(){
    fun();

    return 0;
}