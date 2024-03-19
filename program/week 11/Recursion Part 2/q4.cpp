//Stairs path problem with 1, 2 option 
#include<iostream>
using namespace std;
int stairs(int n){
    if(n==1) return 1;
    if(n==2) return 2;
    return stairs(n-2) + stairs(n-1);
}
int main(){
    cout<<stairs(4);
}