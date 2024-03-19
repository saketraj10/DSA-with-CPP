#include<iostream>
#include<string>
void removeCharA(string original, string ans){
    if(original.length==0){
        cout<<ans;
        return;
    }
    char ch = original[0];
    if(ch=='a') removeCharA(original.substr(1), ans);
    else removeCharA(original.substr(1),ans+ch);
}
using namespace std;
int main(){
    string name = "saket raj";
    removeCharA(name,"")
}