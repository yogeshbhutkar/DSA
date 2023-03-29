#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// A more efficient way to store graphs is to use adjacency list.
// Space complexity becomes O(2*E) for undirected graph and for directed it becomes O(E)

int main () {

    //n represents the number of nodes and m -> number of edges.
    int n, m;
    cin >> n >> m;

    //creating an array of lists.
    vector<int> adjList[n+1];
    int ele1, ele2;

    //storing data.
    for (int i=0; i<m; i++){
        cin >> ele1 >> ele2;
        adjList[ele1].push_back(ele2);
        adjList[ele2].push_back(ele1); // This line is not required in case the graph is directed
    }

    //displaying list
    for (int i=0; i<n+1; i++){
        for (int j=0; j<adjList[i].size(); j++){
            cout<<i<<" "<<adjList[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}