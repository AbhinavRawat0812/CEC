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
void activity_select(vector<int>,vector<int>,int);

int main()
{
    int n=5;
    vector<int> s,f;
    cout<<"Enter start time and finish time for 5 activities"<<endl;
    for(int i=0;i<n;i++)
    {
        int temp;
        cout<<"Enter start time for activity "<<i+1<<endl;
        cin>>temp;
        s.push_back(temp);
        cout<<"Enter finish time for activity "<<i+1<<endl;
        cin>>temp;
        f.push_back(temp);
    }
    activity_select(s,f,n);

    return 0;

}

void activity_select(vector<int> s,vector<int>f,int n)
{
    int i=0,j;
    cout<<i<<" ";
    for(j=1;j<n;j++)
    {
        if(s[j]>=f[i])
        {
            cout<<j<<" ";
            i=j;
        }
    }
}