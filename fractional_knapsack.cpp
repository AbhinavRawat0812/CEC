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


struct item
{
    int value,weight;
};

double fk(int,item,int);

bool cmp(struct item a, struct item b)
{
    double ar = (double)a.value/a.weight;
    double br = (double)b.value/b.weight;
    return ar>br;
}

int main()
{
    int weight = 50;
    item itemList[]={{10,10},{40,20},{100,30}};
    int n=3;
    cout<<"Maximum value: "<<fk(weight,itemList,n);

    return 0;
}

double fk(int weight,item itemList[],int n)
{
    sort(itemList,itemList+n,cmp);

    int cw=0;
    double ans;
    for(int i=0;i<n;i++)
    {
        if(cw+itemList[i].weight<=weight)
        {
            cw+=itemList[i].weight;
            ans+=itemList[i].value;
        }
        else
        {
            int temp = weight - cw;
            ans +=itemList[i].value*((double)temp/itemList[i].weight);
            break;
        }
    }

    return ans;
}