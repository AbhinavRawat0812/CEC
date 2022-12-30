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
void toh(int,char,char,char);

int main()
{
    toh(3,'A','B','C');

    return 0;
}

void toh(int n, char A, char B, char C)
{
    if(n==0)
        return;

    toh(n-1,A,C,B);
    cout<< A <<" -> "<<B<<endl;
    toh(n-1,C,B,A);
}