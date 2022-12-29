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
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int key;int flag=0;
    cout<<"Enter a Key"<<endl;
    cin>>key;

    for(int i=0;i<10;i++)
        if(arr[i]==key)
        {
            cout<<"Element found"<<endl;
            flag=1;
            break;
        }
    
    if(flag==0)
        cout<<"Element Not found"<<endl;
    
    return 0;
}