#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the length of character array: ";
    cin>>n;

    char c[n];
    cin>>c;
    
    char v[10] = {'A','E','I','O','U','a','e','i','o','u'};

    int count = 0;

    for(int i=0; c[i]!='\0'; i++){
        for(int j=0; v[j]!='\0'; j++){
            if(c[i] == v[j]){
                count++;
                break;
            }
        }
    }
    cout<<count<<endl;
}