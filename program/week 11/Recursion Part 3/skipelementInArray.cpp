#include<iostream>
#include<vector>
using namespace std;
void skipOneValue(vector<int>&v, vector<int>& ans, int i){
    if(i==v.size()) return;
    int value = v[i];
    if(v[i]==1) skipOneValue(v, ans, i+1);
    else{
        ans.push_back(value);
        skipOneValue(v, ans, i+1);
    } 
}
int main(){
    int n;
    cout<<"enter the size of vector: ";
    cin>>n;
    cout<<"enter the element in vector: "<<endl;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    cout<<endl;
    vector<int> ans;
    skipOneValue(v,ans,0);
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
}
