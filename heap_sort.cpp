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

void heapify(vector<int> &, int,int);
void heapSort(vector<int>&, int);

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

    heapSort(vec,n);

    cout<<"Sorted array is as follows = ";
    for(int i=0;i<n;i++)
        cout<<vec[i]<<" ";
    cout<<endl;

    return 0;

}

void heapSort(vector<int>&vec,int n)
{
    for(int i=n/2-1;i>=0;i--)
    {
        heapify(vec,n,i);
    }

    for(int i=n-1;i>=0;i--)
    {
        swap(vec[0],vec[i]);
        heapify(vec,i,0);
    }
}

void heapify(vector<int>&vec,int n,int i)
{
    int max=i;
    int left = 2*i+1;
    int right = 2*i+2;

    if(left<n&&vec[left]>vec[max])
    {
        max = left;
    }
    if(right<n && vec[right]>vec[max])
        max=right;

    if(max!=i)
    {
        swap(vec[i],vec[max]);
        heapify(vec,n,max);
    }
}