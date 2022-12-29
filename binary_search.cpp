/*
    Name - Abhinav Rawat
    Section - CST SPL-1
    Roll No- 44
    University Roll no - 2017446
    Semester - 5
*/

#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    vector<int> vec;
    int n;
    cout<<"Enter the number of elements to be entered"<<endl;
    cin>>n;
    cout<<"Enter the elements"<<endl;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        vec.push_back(temp);
    }
    int key,flag=0;
    cout<<"Enter a key to be searched"<<endl;
    cin>>key;

    int l=0,u=n-1;
    while(l<=u)
    {
        int mid=(l+u)/2;
        if(key<vec[mid])
            u=mid-1;
        else if(key>vec[mid])
            l=mid+1;
        else
            {
                cout<<"Element found"<<endl;
                flag=1;
            }
    }
    if(flag==0) cout<<"Element not found"<<endl;

    return 0;
}