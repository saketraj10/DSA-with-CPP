#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>& v){
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
void reversePart(int i, int j, vector<int>& v){
    while(i<=j){
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
}
int main(){
    vector<int> v;
    
    v.push_back(1);
    v.push_back(6);
    v.push_back(2);
    v.push_back(3);
    v.push_back(7);
    v.push_back(5);
    v.push_back(6);

    int n = v.size();

    int k;
    cout<<"Enter the k value: "<<endl;
    cin>>k;

    if(k>n){
        k %= n;
    }

    display(v);

    reversePart(0,n-k-1, v);
    reversePart(n-k,n-1, v);
    reversePart(0,n-1, v);

    display(v);

}