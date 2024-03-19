#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int> v(5);
    cout<<"enter element of array: "<<endl;
    for(int i=0; i<5; i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    //sort(v.end(),v.begin()); //this doesnt give any output
    for(int i=0; i<5; i++){
        cout<<v[i]<<" ";
    }
    
}