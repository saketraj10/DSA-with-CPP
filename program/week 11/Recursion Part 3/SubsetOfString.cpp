#include<iostream>
#include<vector>
#include<string>
using namespace std;
void printSubset(string ans, string original, vector<string>& v){
    if(original==""){
        v.push_back(ans);
        return;
    }
    char ch = original[0];
    printSubset(ans,original.substr(1),v);
    printSubset(ans+ch,original.substr(1),v);
}
int main(){
    string str = "abc";
    vector<string> v;
    printSubset("",str,v);

    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<endl;
    }
}