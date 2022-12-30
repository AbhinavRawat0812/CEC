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
    int n,f=1;
    cout<<"Enter a number for its factorial"<<endl;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        f=f*i;
    }

    cout<<"Factorial of the number is "<<f<<endl;
    return 0;
}