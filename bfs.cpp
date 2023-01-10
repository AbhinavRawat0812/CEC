/*
    Name - Abhinav Rawat
    Section - CST SPL-1
    Roll No- 44
    University Roll no - 2017446
    Semester - 5
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> bfs(vector<vector<int>>&,int);

int main()
{
    vector<vector<int>> adj_list = {{1,2},{0,3,4},{0,4},{1,4},{1,2,3}};

    vector<int> traversal = bfs(adj_list,0);

    cout<<"Traversed order is"<<endl;
    for(int i: traversal)
    {
        cout<<i<<" ";

    }
    return 0;
}

vector<int> bfs(vector<vector<int>>&adj_list,int start)
{
    int n=adj_list.size();
    vector<bool> visited(n,false);
    vector<int> ans;

    queue<int>q;
    q.push(start);
    visited[start] = true;
    while(!q.empty())
    {
        int temp=q.front();
        q.pop();
        ans.push_back(temp);

        for(int v:adj_list[temp])
        {
            if(!visited[v])
            {
                q.push(v);
                visited[v]=true;
            }
        }
    }

    return ans;
}