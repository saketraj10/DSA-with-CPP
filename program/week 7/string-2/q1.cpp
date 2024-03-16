#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"enter any string: "<<endl;
    cin>>s;
    int n = s.length();
    int count = 0;
    for(int i=0; i<n; i++){
        if(n==1){
            break;
        }
        if(n==2 && s[0] != s[i]){
            count = 1;
            break;
        }
        if(s[i] != s[i+1] && s[i-1] != s[i]){
            count++;
        }
    }
    cout<<count<<endl;
}