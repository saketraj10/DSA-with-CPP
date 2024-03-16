#include<iostream>
#include<sstream>
using namespace std;
int main(){
    string s;
    cout<<"enter any sentence in one line: "<<endl;
    getline(cin,s);

    stringstream ss(s);
    string temp;
    while(ss>>temp){
        cout<<temp<<endl;
    }

    return 0;
}