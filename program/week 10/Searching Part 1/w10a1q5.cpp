#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the value of n: ";
    cin>>n;

    int low = 0;
    int high = n;
    bool flag = false;
    while(low <= high)
    {
        int mid = low + (high - low)/2;
        if(mid * mid == n){
            flag = true;
            break;
        }
        else if(mid * mid < n){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }

    if(flag){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
    return 0;
}