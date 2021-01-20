#include <stdio.h>
#define ARR_SIZE 10

void print_array(int arr[], int size) {    
	printf("[");    
	for (int i = 0; i < size - 1; i++) {        
		printf("%d, ", arr[i]);    
	}

	printf("%d]\n", arr[size-1]);
}

void selection_sort(int arr[], int size) {
    // sort array    
    for (int i = 0; i < size; i++) {        
    	int min_j = i;        
    	for (int j = i + 1; j < size; j++) {            
    		if (arr[j] < arr[min_j]) {                
    			min_j = j;            
    		}        
    	}

    	// Swap values        
    	if (min_j != i) {            
    		int temp = arr[i];            
    		arr[i] = arr[min_j];            
    		arr[min_j] = temp;        
    	}    
    }
}

int main() {    
	int arr[ARR_SIZE] = {10, 5, 1, 20, 4, 65, 2, 1, 6}; 
	  
	printf("Unsorted Array\n");    
	print_array(arr, ARR_SIZE);    
	selection_sort(arr, ARR_SIZE);    
	printf("Sorted Array\n");    
	print_array(arr, ARR_SIZE);

	return 0;
}