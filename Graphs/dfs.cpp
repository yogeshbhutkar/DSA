#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void dfs(int start, int vis[], vector<int> arr[], vector<int> &dfsV){

    int node = start;
    vis[node] = 1;
    dfsV.push_back(node);

    for (auto it: arr[node]){

        if (!vis[it]){
            dfs(it, vis, arr, dfsV);
        }

    }

    return;

}

int main() {

    int n, m;
    cin >> n >> m;

    vector<int> arr[n];

    for (int i=0; i<m; i++){
        int ele1, ele2;
        cin >> ele1 >> ele2;
        
        arr[ele1].push_back(ele2);
        arr[ele2].push_back(ele1);
    }

    int vis[n]={0};
    vector<int> dfsV;

    int start = 0;

    dfs(start, vis, arr, dfsV);

    for (int i: dfsV){
        cout<<i<<" ";
    }

    return 0;
}