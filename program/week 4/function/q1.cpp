#include<iostream>
using namespace std;
int fact(int x){
    int f = 1;
    for(int i=2; i<=x; i++){
        f *= i;
    }
    return f;
}
int combination(int x, int y){
    int result;
    result = fact(x)/(fact(y)*fact(x-y));
    return result;
}
int permutaion(int x, int y){
    int result;
    result = fact(x)/fact(x-y);
    return result;
}
int main(){
    int n;
    cout<<"enter n :"<<endl;
    cin>>n;
    int r;
    cout<<"enter r :"<<endl;
    cin>>r;

    int nfact = fact(n);
    int rfact = fact(r);
    int nrfact = fact(n-r);

    int ncr = combination(n,r);
    int npr = permutaion(n,r);

    cout<<ncr<<endl<<npr;

}