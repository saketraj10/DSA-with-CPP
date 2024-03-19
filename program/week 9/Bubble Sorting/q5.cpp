#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cout<<"enter any string: "<<endl;
    cin>>s;
    int n = s.length();
    string s1="";
    
    for(int i=0; i<n; i++){
        if(s[i] >= 'x'){
            s1 += s[i];
        }
    }
    
    cout<<s1<<endl;
    int n1 = s1.length();
    for(int i=0; i<n1-1; i++){
        bool flag = true;
        for(int j=0; j<n1-1; j++){
            if(s1[j] > s1[j+1]){
                swap(s1[j],s1[j+1]);
                flag = false;
            }
        }
        if(flag){
            break;
        }
    }

    cout<<"after sorted: "<<endl;
    cout<<s1<<endl;
    
    reverse(s1.begin(),s1.end());
    cout<<"after reverse: "<<endl;
    cout<<s1<<endl;
}