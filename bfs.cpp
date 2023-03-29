#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Space complexity : O(3N) -> O(N)
// Time complexity : O(N+2E) -> O(N+E)

//code for bfs traversal where the data is stored in an adjacency list.
void bfs (int v, vector<int> arr[]){
    int vis[v] = {0};
    vector<int> bfs;
    
    queue <int> q;
    q.push(0);
    vis[0]=1;

    while(!q.empty()){
        int node = q.front();
        bfs.push_back(node);
        q.pop();

        for (auto it: arr[node]){
            if (vis[it]!=1){
                vis[it]=1;
                q.push(it);
            } 
        }
    }

    for (auto i: bfs) {
        cout << i << " ";
    }

    return ;
}

int main () {
    int n, m;
    cin >> n >> m;
    
    vector<int> arr[n];

    for (int i=0; i<m; i++){
        int ele1, ele2;
        cin >> ele1 >> ele2;
        arr[ele1].push_back(ele2);
        arr[ele2].push_back(ele1);
    }

    bfs(n, arr);

    return 0;
}