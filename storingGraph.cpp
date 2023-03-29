#include <iostream>
using namespace std;

// The following code is for storing undirected graph in a matrix data structure

int main() {
    int n, m;
    //n is the number of nodes and m is the number of edges.
    cin >> n >> m;

    int adj[n+1][n+1]; //for 1 based indexing.

    int a, b;
    
    //storing the vertices.
    for (int i=0; i<m; i++){
        cin>>a>>b;
        adj[a][b]=1; // Marking the intersection of a and b as 1
        adj[b][a]=1; // Marking the intersection of b and a as 1
    }

    //storing 0 if there exists no edge
    for (int i=0; i<n+1 ;i++){
        for (int j=0; j<n+1; j++){
            if (adj[i][j]!=1){
                adj[i][j] = 0;
            }
        }
    }

    //displaying the stored graph.
    for (int i=0; i<n+1; i++){
        for (int j=0; j<n+1; j++){
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}