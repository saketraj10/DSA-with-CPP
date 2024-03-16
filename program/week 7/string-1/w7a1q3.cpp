#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string s1,s2;
    cout<<"enter the string: "<<endl;
    cin>>s1;

    s2 = s1;

    reverse(s2.begin(), s2.end());

    if(s1 == s2){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }

}