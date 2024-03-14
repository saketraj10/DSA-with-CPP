#include<iostream>
using namespace std;
int main(){
    int arr[5] = {2, 5, 9, 3, 4};

    int oddindexes, evenindexes;
    oddindexes = evenindexes = 0;

    for(int i=0; i<5; i+=2){
        oddindexes += arr[i];
    }

    for(int i=1; i<5; i+=2){
        evenindexes += arr[i];
    }

    int diff;
    diff = evenindexes - oddindexes;

    cout<<diff<<endl;
}