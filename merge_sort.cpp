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
void merge(vector<int>&,int,int,int);
void mergesort(vector<int> &,int,int);

int main()
{
    vector<int> vec;
    int n;
    cout<<"Enter the number of elements to be entered"<<endl;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        vec.push_back(temp);
    }

    mergesort(vec,0,n-1);

    cout<<"Sorted array is as follows = ";
    for(int i=0;i<n;i++)
        cout<<vec[i]<<" ";
    cout<<endl;

    return 0;
}

void mergesort(vector<int>&vec,int s,int e)
{
    if(s<e)
    {
        int mid = (s+e)/2;
        mergesort(vec,s,mid);
        mergesort(vec,mid+1,e);
        merge(vec,s,mid,e);
    }
}

void merge(vector<int> &vec, int s,int m,int e)
{
    int i,j,k,n1=m-s+1,n2=e-m;

    int la[n1],ra[n2];

    for(i=0;i<n1;i++)
        la[i] = vec[s+i];
    for(j=0;j<n2;j++)
        ra[j] = vec[m+1+j];

    i=0,j=0,k=s;

    while(i<n1 && j<n2)
    {
        if(la[i]<=ra[j])
        {
            vec[k] = la[i];
            i++;
        }
        else{
            vec[k] = ra[j];
            j++;
        }
        k++;
    }

    while(i<n1)
    {
        vec[k]=la[i];
        i++;
        k++;
    }

    while(j<n2)
    {
        vec[k]=ra[j];
        j++;
        k++;
    }
}