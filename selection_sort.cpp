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

    for(int i=0;i<n;i++)
    {
        pos=i;
        for(int j=i+1;j<n;j++)
        {
            if(vec[j]<vec[pos])
                pos=j;
        }

        int temp = vec[i];
        vec[i]=vec[pos];
        vec[pos]=temp;
    }

    cout<<"Sorted array is as follows = ";
    for(int i=0;i<n;i++)
        cout<<vec[i]<<" ";
    cout<<endl;    

}