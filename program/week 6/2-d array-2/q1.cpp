#include<iostream>
using namespace std;
int main(){
    int m,n;
    int p,q;

    cout<<"enter the row of 1st matrix: "<<endl;
    cin>>m;
    cout<<"enter the col of 1st matrix: "<<endl;
    cin>>n;

    cout<<"enter the row of 2nd matrix: "<<endl;
    cin>>p;
    cout<<"enter the col of 3nd matrix: "<<endl;
    cin>>q;

    

    if(n==p){
        int m1[m][n];
        cout<<"enter the element of 1st matrix: "<<endl;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                cin>>m1[i][j];
            }
        }
        cout<<endl;

        int m2[p][q];
        cout<<"enter the element of 2st matrix: "<<endl;
        for(int i=0; i<p; i++){
            for(int j=0; j<q; j++){
                cin>>m2[i][j];
            }
        }
        cout<<endl;

        int result[m][q];
        //multiplication resultant
        for(int i=0; i<m; i++){
            for(int j=0; j<q; j++){
                result[i][j] = 0;
                for(int k=0; k<n; k++){
                    result[i][j] += m1[i][k] * m2[k][j];
                }
            }
        }

        for(int i=0; i<m; i++){
            for(int j=0; j<q; j++){
                    cout<<result[i][j]<<" ";
            }
            cout<<endl;
        }

    }
    else{
        cout<<"the matrix cannot be multiplied."<<endl;
    }
}