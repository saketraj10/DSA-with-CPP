#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    string s,t;
    cout<<"enter first string: "<<endl;
    cin>>s;
    cout<<"enter second string: "<<endl;
    cin>>t;

    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
        if(s==t){
            cout<<true;
        }
        else{
            cout<<false;
        }
}