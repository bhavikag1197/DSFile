#include<iostream>
using namespace std;

int main()
{
	int arr[50], n;
	cout<<"Enter array size: ";
	cin>>n;
	cout<<"Enter elements: ";
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	cout<<"The Elements in the Array are : \n";
	for(int i=0; i<n; i++)
	{
		cout<<arr[i]<<" ";
	}
}
