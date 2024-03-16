#include<iostream>
using namespace std;
int stringToIneteger(string s){
    int ans = 0;
    int product = 1;
    for(int i=s.size()-1; i>=0; i--){
        ans += (s[i] - '0')* product;
        product *= 10;
    }
    return ans;
}
int main(){
    string s;
    cout<<"enter the string in number: "<<endl;
    cin>>s;

    cout<<stringToIneteger(s)<<endl;
}