#include<iostream>
using namespace std;

int main(){
	
	int n, tukar, A[100];
	cout<<"Masukan banyaknya data: ";
	cin>>n;
	cout<<endl;
	
	for(int i=0; i<n; i++){
		cout<<"Data ke-"<<i+1<<" = ";
		cin>>A[i];
		cout<<endl;
	}
	
	for(int i=0;i<n-1;i++){
		tukar = i;
		int temp;
		for(int j=i+1; j<n; j++){
			if(A[j]<A[tukar]){
				tukar=j;
			}
		}
		temp=A[tukar];
		A[tukar]=A[i];
		A[i]=temp;
	}
	
	cout<<"Data Setelah Diurutkan : ";
	for(int i=0; i<n; i++){
		cout<<A[i]<<" ";
	}
	
	//cin.get();
	return 0;
	
}
