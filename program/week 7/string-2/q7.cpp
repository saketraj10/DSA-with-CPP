#include<iostream>
#include<algorithm>
#include<vector>
#include<sstream>
using namespace std;
int main(){
    string s;
    cout<<"enter any sentence in one line: "<<endl;
    getline(cin,s);

    stringstream ss(s);
    string temp;
    vector<string> v;
    while(ss>>temp){
        v.push_back(temp);
    }

    sort(v.begin(),v.end());

    int maxcount = 1;
    int count = 1;
    for(int i=0; i<v.size(); i++){
        if(v[i] == v[i-1]) count++;
        else count = 1;
        maxcount = max(maxcount,count);
    }

    count = 1;
    for(int i=0; i<v.size(); i++){
        if(v[i] == v[i-1]) count++;
        else count = 1;
        if(count == maxcount){
            cout<<v[i]<<" "<<maxcount<<endl;
        }
    }

    return 0;
}