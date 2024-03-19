#include<iostream>
#include<string>
using namespace std;
// void removeCharA(string original, string ans){
//     if(original.length()==0){
//         cout<<ans;
//         return;
//     }
//     char ch = original[0];
//     if(ch=='a') removeCharA(original.substr(1), ans);
//     else removeCharA(original.substr(1),ans+ch);
// }
void removeCharA(string original, string ans, int i){
    if(original.length()==i){
        cout<<ans;
        return;
    }
    char ch = original[i];
    if(ch=='a') removeCharA(original, ans, i+1);
    else removeCharA(original, ans+ch, i+1);
}
int main(){
    string name = "saket raj";
    removeCharA(name,"", 0);
}