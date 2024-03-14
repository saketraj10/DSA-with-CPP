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
        int a;
        cin>>a;
        v.push_back(a);
    }

    int x;
    cout<<"Enter the value of x: "<<endl;
    cin>>x;

    int count = 0;
    for(int i=0; i<v.size(); i++){
        if(v[i]>x){
            count++;
        }
    }
    cout<<"total no of element greater than "<<x<<" is "<<count<<endl;
}