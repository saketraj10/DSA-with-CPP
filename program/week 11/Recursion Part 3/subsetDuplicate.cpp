#include<iostream>
#include<vector>
#include<string>
using namespace std;
void printSubset(string ans, string original, vector<string>& v, bool flag){
    if(original==""){
        v.push_back(ans);
        return;
    }
    char ch = original[0];
    if(original.length()==1){
        if(flag==true) printSubset(ans+ch,original.substr(1),v, true);
        printSubset(ans,original.substr(1),v, true);
        return;
    }
    char dh = original[1];
    if(ch==dh){
        if(flag==true) printSubset(ans+ch,original.substr(1),v, true);
        printSubset(ans,original.substr(1),v, false);
    }
    else{
        printSubset(ans+ch,original.substr(1),v, true);
        printSubset(ans,original.substr(1),v, true);
    }
}
int main(){
    string str = "aaaabbc";
    vector<string> v;
    printSubset("",str,v,true);

    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<endl;
    }
}