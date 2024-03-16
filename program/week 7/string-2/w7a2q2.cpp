#include<iostream>
#include<climits>
using namespace std;
int main(){
    string s;
    cout<<"enter any string: "<<endl;
    cin>>s;
    int x = stoi(s);
    int max1 = INT_MIN;
    int max2 = INT_MIN;
    while(x>0){
        int rem = x%10;
        if(max1<rem){
            max2 = max1;
            max1 = rem;
        }
        else if(rem > max2 && rem < max1){
            max2 = rem;
        }
        x /= 10;
    }
    cout<<"largest number "<<max1<<endl;
    cout<<"second largest number "<<max2<<endl;

    return 0;
}