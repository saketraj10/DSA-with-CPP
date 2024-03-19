//MazePath problem
#include<iostream>
using namespace std;
int maze(int er, int ec){
    if(1>er || 1>ec) return 0;
    if(1==er && 1==ec) return 1;
    int rightWays = maze(er,ec-1);
    int downWays = maze(er-1,ec);
    int totalWays = rightWays + downWays;
    return totalWays;
}
int main(){
    cout<<maze(3,3)<<endl;
}