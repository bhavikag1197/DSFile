#include<iostream>
using namespace std;
int main()
{
int array[40],size,list,middle,found,first,last,i,j,temp;
cout<<"Enter size";
cin>>size;
for(i=0; i<size; i++)
{
cin>>array[i];
} 
for(i=0 ; i<size-1; i++)
{
for(j=i+1; j<size; j++)
{
if(array[i]>array[j])
{
temp=array[i];
array[i]=array[j];
array[j]=temp;
}
}
}
cout<<"Enter element to be searched: ";
cin>>found;
first = 0;
	last = size-1;
	middle = (first+last)/2;
	while (first <= last)
	{
		if(array[middle] < found)
		{
			first = middle + 1;

		}
		else if(array[middle] == found)
		{
			cout<<found<<" found \n";
			break;
		}
		else
		{
			 last = middle - 1;
		}
		middle = (first + last)/2;
	}
	if(first > last)
	{
		cout<<"Not found! "<<found<<" is not present in the list.";
	}
}

