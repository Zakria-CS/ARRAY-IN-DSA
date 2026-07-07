#include<iostream>
using namespace std;
void removeduplicate(int arr[],int n){
	int index=0;
	for(int i=0;i<n;i++){
		if(arr[index]!=arr[i]){
			arr[index+1]=arr[i];
			index++;
		}
	}
	
	cout<<"After Removing Duplicate elements, Now elements are : ";
	for(int j=0;j<=index;j++){
		cout<<arr[j]<<" ";
	}
}
int main(){
	int n;
	cout<<"Enter The Size of The Array : ";
	cin>>n;
	
	int arr[n];
	cout<<"Enter The Elements of the Array : ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"Elements of the Array : ";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	removeduplicate(arr,n);
	return 0;
}