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
    int a=0,b=1,c;
    int n;
    cout<<"Enter the number of terms in the series you want "<<endl;
    cin>>n;
    cout<<a<<" "<<b<<" ";
    for(int i=1;i<n-1;i++)
    {
        c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
    }

    return 0;

}