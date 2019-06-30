#include <iostream>

using namespace std;

int main()
{
	int arr1[]={1,3,4,5,7,11,15,23,46,66};
	 int arr2[]={1,3,4,5,6,13,16,23,46,66};


	int ptr1=0,ptr2=9;
	int sum=47;
	int iterations=0;
		while(ptr1!=ptr2)
		{
			if(arr1[ptr1]+arr1[ptr2]==sum)
			{
				cout<<"YES";
				break;
			}
			int temp=arr1[ptr1]+arr1[ptr2];
			if(temp>sum)
			ptr2--;
			else if(temp<sum)
			ptr1++;
		
			iterations++;		
		}
		if(ptr1==ptr2)
		cout<<"NO";

cout<<endl<<"ITERations:"<<iterations;
		


}

