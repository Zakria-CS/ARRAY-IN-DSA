#include<iostream>
using namespace std;
void secondlargest(int n, int arr[]){
	int large=arr[0];
	int seclargest=-1;
	for(int i=0;i<n;i++){
		if(arr[i]>large){
			seclargest=large;
			large=arr[i];
		}
		else if(arr[i]<large && arr[i]>seclargest){
			seclargest=arr[i];
		}
	}
	cout<<"\nLargest Value in entire Array is : "<<large<<endl;
	cout<<"\nSecondLargest Value in entire Array is : "<<seclargest<<endl;
}

int main(){
	int n;
	cout<<"Enter the size of the array : ";
	cin>>n;
	
	int arr[n];
	cout<<"Enter the Elements of the Array : ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
		
	}
	secondlargest(n,arr);
	return 0;
}