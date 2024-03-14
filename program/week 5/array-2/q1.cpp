#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    int n;
    cout<<"Enter the size of array: "<<endl;
    cin>>n;

    cout<<"Enter the element of array: "<<endl;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

    vector<int> v2(v.size());
    for(int i=0; i<v.size(); i++){
            // i + j = size - 1
            // j = size - 1 -i
            int j = v.size() - 1 - i;
            v2[i] = v[j]; 
        }

    for(int i=0; i<=v.size()-1; i++){
        cout<<v2[i]<<" ";
    }
}