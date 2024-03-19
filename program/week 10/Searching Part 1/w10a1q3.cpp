#include<iostream>
using namespace std;
int main(){
    int r,c;
    cout<<"enter the row of matrix: "<<endl;
    cin>>r;
    cout<<"enter the col of matrix: "<<endl;
    cin>>c;
    int matrix[r][c];
    cout<<"enter the element of matrix: "<<endl;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin>>matrix[i][j];
        }
    }
    cout<<endl;

    int max = 0;
    int count = 0;
    int ro = -1;
    for(int i=0; i<r; i++){
        count = 0;
        int low = 0;
        int high = c-1;
        while(low <=  high){
            int mid = low + (high - low)/2;
            if(matrix[i][mid] == 1){
                count += high - mid + 1;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        if(max < count){
            max = count;
            ro = i;
        }
    }
    cout<<"row with maximum of 1's = "<<ro;


}