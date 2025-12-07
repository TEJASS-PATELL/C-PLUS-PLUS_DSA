#include<iostream>
#include<vector>
using namespace std;
//* Adjacency Matrix-
int main(){
    int vertex, edges;
    cout<<"Enter Vertex : ";
    cin>>vertex;
    cout<<"Enter Rdges : ";
    cin>>edges;
    
    //* undirected Non-weighted graph-
    // vector<vector<bool> >AdjMat (vertex, vector<bool> (vertex, 0));
    // int u, v;
    // for(int i=0; i<edges; i++){
        //     cin>>u>>v;
        //     AdjMat[u][v] = 1;
        //     AdjMat[v][u] = 1;
        // }
        
    //* undirected weighted graph-
    // vector<vector<int> >AdjMat (vertex, vector<int> (vertex, 0));
    // int u, v, weight;
    // for(int i=0; i<edges; i++){
    //     cin>>u>>v>>weight;
    //     AdjMat[u][v] = weight;
    //     AdjMat[v][u] = weight;
    // }

    //* Directed Non-weighted graph-
    // vector<vector<bool> >AdjMat (vertex, vector<bool> (vertex, 0));
    // int u, v;
    // for(int i=0; i<edges; i++){
    //     cin>>u>>v;
    //     AdjMat[u][v] = 1;
    // }

    //* Directed weighted graph-
    vector<vector<bool> >AdjMat (vertex, vector<bool> (vertex, 0));
    int u, v, weight;
    for(int i=0; i<edges; i++){
        cin>>u>>v;
        AdjMat[u][v] = weight;
    }

    for(int i=0; i<vertex; i++){
        for(int j=0; j<vertex; j++){
            cout<<AdjMat[i][j]<<" ";
        }
        cout<<endl;
    }
}