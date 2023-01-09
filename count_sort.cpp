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

void countSort(vector<int>&);

int main()
{
    vector<int> vec;
    int n,pos;
    cout<<"Enter the number of elements to be entered"<<endl;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        vec.push_back(temp);
    }

    countSort(vec);

    cout<<"Sorted array is as follows = ";
    for(int i=0;i<n;i++)
        cout<<vec[i]<<" ";
    cout<<endl;

    return 0;
}

void countSort(vector<int> &vec)
{
    int min = *min_element(vec.begin(),vec.end());
    int max = *max_element(vec.begin(),vec.end());

    int range = max-min+1;

    vector<int> count(range);
    vector<int> ans(vec.size());

    for(int i=0;i<vec.size();i++)
        count[vec[i]-min]++;
    for(int i=1;i<count.size();i++)
        count[i] = count[i] + count[i-1];
    for(int i=vec.size()-1;i>=0;i--)
    {
        ans[count[vec[i]-min]-1] = vec[i];
        count[vec[i]-min]--;   
    }

    for(int i=0;i<ans.size();i++)
    {
        vec[i]=ans[i];
    }
}
