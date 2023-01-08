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
void quicksort(vector<int> &,int,int);
int partition(vector<int>&,int,int,int);

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

    quicksort(vec,0,n-1);

    cout<<"Sorted array is as follows = ";
    for(int i=0;i<n;i++)
        cout<<vec[i]<<" ";
    cout<<endl;

    return 0;

}

void quicksort(vector<int> &vec,int s,int e)
{
    if(s>=e) return;

    int random = s+rand()%(e-s);
    swap(vec[random],vec[e]);
    int pivot = vec[e];
    int p=partition(vec,s,e,pivot);
    quicksort(vec,s,p-1);
    quicksort(vec,p+1,e);

}

int partition(vector<int> &vec,int s,int e,int pivot)
{
    int i = s;
	int j = s;
	while( i <= e){
		if(vec[i] > pivot){
			i++;
		}
		else{
			swap(vec[i],vec[j]);
			i++;
			j++;
		}
	}
	return j-1;
}