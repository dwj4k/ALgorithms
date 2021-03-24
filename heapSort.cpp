//Dalton Jenkins
//Heap sort algorithm
//3/23/2021

#include<iostream>
using namespace std;

void sort(int arr[], int size, int i){
	
	int largest = i;
	int l = 2 * i + 1;
	int r = 2 * i + 2;
	
	if (l < size && arr[l] > arr[largest]){
		largest = l;
	}
	
	if (r < size && arr[r] > arr[largest]){
        largest = r;
	}
	
	if (largest != i) {
        swap(arr[i], arr[largest]);
        
        sort(arr, size , largest);
	}
}

void heap(int arr[], int size){
	
	for(int i = size/2-1; i >= 0; i--){
		
		sort(arr, size, i);
	}
	
	for(int i = size - 1; i > 0; i--){
		
		swap(arr[0], arr[i]);
		
		sort(arr, i, 0); 
	}
}

void print(int arr[], int size){
	
	for (int i = 0; i < size; ++i){
		
		cout<<arr[i]<<" "<<endl;
	}
}

int main(){
	
	int size = 0;
	
	cout<<"Enter size of array: "<<endl;
	cin>>size;
	
	int arr[size] = {};
	
	cout<<"Enter "<<size<<" numbers"<<endl;
	
	for(int i = 0; i < size; i++){
		
		cin>>arr[i];
	}
	
    
	int n = sizeof(arr) / sizeof(arr[0]);
 
    heap(arr, n);
 
    cout << "Sorted array is \n";
    print(arr, n);
	
	return 0;
}
