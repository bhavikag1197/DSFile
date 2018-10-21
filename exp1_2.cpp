#include<iostream>
using namespace std;

void del_val(int arr[], int size)
	{
		int del, i, count=0;
		cout<<"Enter element to be deleted: ";
		cin>>del;
		for(i=0; i<size; i++)
		{
			if(arr[i]==del)
			{
				for(int j=i; j<(size-1); j++)
				{
					arr[j]=arr[j+1];
				}
				count++;
				break;
			}
		}
		if(count==0)
		{
			cout<<"Element not found";
		}	
		else
		{
			cout<<"New array:\n";
			for(i=0; i<(size-1); i++)
			{
				cout<<arr[i]<<" ";
			}
		}
	}
void del_pos(int a[], int size)
{
	int pos;
	cout<<"Enter position of element to be deleted:";
	cin>>pos;
	if(pos>size)
	{
		cout<<"Value is out of range";
	}
	else
	{
		--pos;
		for(int i=pos; i<=size; i++)
		{
			a[i]=a[i+1];
		}
		cout<<"New Array:\n";
		for(int i=0; i<size-1; i++)
		{
			cout<<a[i]<<" ";
		}
	}
}

int main()
{
	int arr[50], size, i, del, count=0, opt=0;
	cout<<"Enter array size : ";
	cin>>size;
	cout<<"Enter array elements : ";
	for(i=0; i<size; i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter 1 for delete by position and 2 for delete by value";
	cin>>opt;
	if(opt==1)
	{
	del_pos(arr, size);
	}
	else
	{
	del_val(arr, size);
	}
}


