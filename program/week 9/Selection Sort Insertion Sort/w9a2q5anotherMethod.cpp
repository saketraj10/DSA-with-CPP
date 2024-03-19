#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string ch[] = {"physicswallah", "quiz", "practice", "pwskills","coding" };
    int n = 5;
    
    for(int i=0; i<n; i++){
        cout<<ch[i]<<" ";
    }
    cout<<endl;

    for(int i=0; i<n-1; i++){
        bool flag = true;
        for(int j=0; j<n-1-i; j++){
            if(ch[j] > ch[j+1]){
                swap(ch[j],ch[j+1]);
                flag = false;
            }
        }
        if(flag){
            break;
        }
    }
    for(int i=0; i<n; i++){
        cout<<ch[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}