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
    int j;

    for(int i=1;i<n;i++)
    {
        j=i-1;
        int temp = vec[i];
        while(j>=0 && vec[j]>temp)
        {
            vec[j+1] = vec[j];
            j--;
        }
        vec[j+1]=temp;
    }

    cout<<"Sorted array is as follows = ";
    for(int i=0;i<n;i++)
        cout<<vec[i]<<" ";
    cout<<endl;

    return 0;
}