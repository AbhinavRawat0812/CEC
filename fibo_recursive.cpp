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
int fibo(int);

int main()
{
    int n;
    cout<<"Enter the range"<<endl;
    cin>>n;
    cout<<fibo(n);

    return 0;
}

int fibo(int n)
{
    if(n<=1)
        return n;
    
    return fibo(n-1) + fibo(n-2);
}