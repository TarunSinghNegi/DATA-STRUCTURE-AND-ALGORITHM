#include<iostream>
#include <bits/stdc++.h>
using namespace std;

// int partition(int array[],int s,int l)
// {
//     int pivot = array[s];
//     int cnt =0;
//   for(int i=s+1;i<=l;i++)
//   {
//       if(array[i]<=pivot)
//       {
//           cnt++;
//       }
//   }

//   int pivotindex=s+cnt;
//   swap(array[pivotindex],array[s]);


// //left or right ke liye
// int i=s;
// int j=l;
//   while(i<pivotindex && j>pivotindex)
//   {
//       if(array[i]<=array[pivotindex])
//       i++;

//       if(array[j]>array[pivotindex])
//       j--;

//       if(i<pivotindex && j>pivotindex)
//       swap(array[i++],array[j--]);
//   }
//   return pivotindex;

// }
// void quicksort(int array[],int s,int l)
// { 
//     if(s>=l)
//     return ;

    
//    int p = partition(array,s,l);

//    //parting left array
//    partition(array,s,p-1);

//    //parting right array
//    partition(array,p+1,l);   
    
// }



int main()
{
int array[6]= {7,83,8,9,3,1};
int n = 6;
 cout<<"helllo"<<endl;
sort(array,array[5]);//  quicksort(array,0,n-1); 
// //for printing the sorted array//
 for(int i=0;i<n;++i)
 {
     cout<<array[i]<<endl;
 }
return 0 ;
}
/*
// C++ program to demonstrate default behaviour of
// sort() in STL.
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int arr[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
	int n = sizeof(arr) / sizeof(arr[0]);
    cout<<sizeof(arr+n)<<endl;
	/*Here we take two parameters, the beginning of the
	array and the length n upto which we want the array to
	be sorted*/
	sort(arr, arr + n);

	cout << "\nArray after sorting using "
			"default sort is : \n";
	for (int i = 0; i < n; ++i)
		cout << arr[i] << " ";

	return 0;
}
