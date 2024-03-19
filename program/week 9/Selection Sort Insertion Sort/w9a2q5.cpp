#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main(){
    char ch[][20] = {"physicswallah", "quiz", "practice", "pwskills","coding" };
    int n = sizeof(ch)/sizeof(ch[0]);
    
    for(int i=0; i<n; i++){
        cout<<ch[i]<<" ";
    }
    cout<<endl;

    for(int i=0; i<n-1; i++){
        bool flag = true;
        for(int j=0; j<n-1-i; j++){
            if(strcmp(ch[j], ch[j+1]) > 0){
                swap(ch[j], ch[j+1]);
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