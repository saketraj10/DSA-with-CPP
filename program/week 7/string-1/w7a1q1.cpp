#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"enter the string: "<<endl;
    cin>>s;

    // for(int i=0; s[i] != '\0'; i++){
    //     if(i%2 != 0){
    //         s[i] = '#';
    //     }
    // }

    for(int i=1; s[i] != '\0'; i += 2){
        s[i] = '#';
    }
    cout<<s<<endl;
}