#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>> matrix = {{1,2,3},{4,5,6,11,12},{7,8,9}};
    
    // row size = matrix.size()
    // colm size = matrix[i].size()

    for(int i=0; i<matrix.size(); i++){
        for(int j=0; j<matrix[i].size(); j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}