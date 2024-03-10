#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no of rows: "<<endl;
    cin>>n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }
        int a=1;
        for(int k=1; k<=2*i-1; k++){
            cout<<k;
        }
        cout<<endl;
    }
}

//or


// int main() {
// int n;
// cout<<"Enter the no of rows: "<<endl;
// cin >> n;
// for(int i = 0; i < n; ++i) {
// for(int j = 0; j < n-i-1; ++j) {
// cout << " ";
// }
// for(int j = 0; j < 2 * i + 1; ++j) {
// cout << j+1 << " ";
// }
// cout << endl;
// }
// return 0;
// }