#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"how many string wants to enter: ";
    cin>>n;
    vector<string> str(n);
    for(int i=0; i<n; i++){
        cin>>str[i];
    }

    int mx = stoi(str[0]);
    string maxS = str[0];
    for(int i=1; i<n; i++){
        int x = stoi(str[i]);
        if(x>mx){
            mx = x;
            maxS = str[i];
        }
    }

    cout<<mx<<endl;
    cout<<maxS<<endl;
}