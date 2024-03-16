#include<iostream>
#include<sstream>
using namespace std;
int main(){
    string s;
    cout<<"enter a sentence: "<<endl;
    getline(cin,s);

    stringstream ss(s);
    string temp;
    string maxword;
    while(ss>>temp){
        if(temp > maxword){
            maxword = temp;
        }
    }
    cout<<maxword<<endl;
}