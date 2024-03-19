//MazePath problem
#include<iostream>
using namespace std;
void printPath(int er, int ec, string s){
    if(1>er || 1>ec) return;
    if(1==er && 1==ec){
        cout<<s<<endl;
        return;
    }
    printPath(er,ec-1, s+'R');
    printPath(er-1,ec, s+'D');
}

int main(){
    printPath(3,3,"");
}