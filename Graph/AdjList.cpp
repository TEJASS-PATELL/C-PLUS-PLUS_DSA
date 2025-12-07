#include<iostream>
#include<vector>
using namespace std;
int main(){

    int vertex, edges;
    cout<<"Enter Vertex : ";
    cin>>vertex;
    cout<<"Enter Edges : ";
    cin>>edges;

    //* Undirected Unweighted Graph-
    // vector<int> AdjList[vertex];
    // int u,v;
    // for(int i=0; i<edges; i++){
    //     cin>>u>>v;
    //     AdjList[u].push_back(v);
    //     AdjList[v].push_back(u);
    // }

    //* Undirected weighted Graph-
    vector<pair<int,int> >AdjList[vertex];
    int u,v,weight;
    for(int i=0; i<edges; i++){
        cin>>u>>v>>weight;
        AdjList[u].push_back(make_pair(v,weight));
        AdjList[v].push_back(make_pair(u,weight));
    }

    for(int i=0; i<vertex; i++){
        cout<<i<<" - ";
        for(int j=0; j<AdjList[i].size(); j++){
            cout<<AdjList[i][j].first<<" -> "<<AdjList[i][j].second<<" , ";
        }
        cout<<endl;
    }
}