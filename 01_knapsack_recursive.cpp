/*
    0/1 Knapsack Problem Recursive version
    Name - Abhinav Rawat
    Section - CST SPL-1
    Roll No- 44
    University Roll no - 2017446
    Semester - 5
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int knapsack(int,int[],int[],int);

int main()
{
    int val[]={60,100,120};
    int wt[] = {10,20,30};
    int w =50;
    int n=3;
    cout<<knapsack(w,wt,val,n);

    return 0;
}

int knapsack(int w, int wt[],int val[],int n)
{
    if(n==0 || w==0) return 0;

    if(wt[n-1]>w)
    {
        return knapsack(w,wt,val,n-1);
    }
    else
    {
        return max(val[n-1]+knapsack(w-wt[n-1],wt,val,n-1),knapsack(w,wt,val,n-1));
    }
}