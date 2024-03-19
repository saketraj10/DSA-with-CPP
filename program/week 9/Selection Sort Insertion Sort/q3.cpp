#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cout<<"enter the string: "<<endl;
    cin>>s;
    string s1;
    for(int i=0; s[i]!='\0'; i++){
        if(s[i]<'x'){
            s1 += s[i];
        }
    }
    sort(s1.begin(),s1.end());
    reverse(s1.begin(),s1.end());

    cout<<s1<<endl;
}