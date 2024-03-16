#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"enter any string: "<<endl;
    cin>>s;

    int max = 0;
    for(int i=0; i<s.length(); i++){
        char ch = s[i];
        int count = 1;
        for(int j=i+1; j<s.length(); j++){
            if(s[i] == s[j]){
                count++;
            }
        }
        if(max < count){
            max = count;
        }
    }
    //cout<<max<<endl;
    for(int i=0; i<s.length(); i++){
        char ch = s[i];
        int count = 1;
        for(int j=i+1; j<s.length(); j++){
            if(s[i] == s[j]){
                count++;
            }
        }
        if(max == count){
            cout<<ch<<" "<<max<<endl;
        }
    }

    return 0;
}