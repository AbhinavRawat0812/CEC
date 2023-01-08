/*
    Name - Abhinav Rawat
    Section - CST SPL-1
    Roll No- 44
    University Roll no - 2017446
    Semester - 5
*/

#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    vector<int> arr;
    cout<<"Enter number of elements to be entered"<<endl;
    cin>>n;
    cout<<"Enter Elements"<<endl;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        arr.push_back(a);
    }

    int flag=0;
    for(int i=0;i<n;i++)
    {
        flag=0;
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag=1;
            }
        }
            if(flag == 0)
                break;
    }

    cout<<"Sorted array is as follows = ";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}