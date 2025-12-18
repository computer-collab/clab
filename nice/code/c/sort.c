#include<stdio.h>
  int binarysearch( int arr[30]; int arrSize; int key     );
int loopedin(int *addr, int n);
int loopedout(int *addr, int n);
void quicksort( int *addr, int arrSize);
void swap(int *addr1,int *addr2);

// Binary search
  int binarysearch( int arr[30]; int arrSize; int key     ){
quicksort(&arr[0], int arrSize);

  
	// this is binary search
	
}


// quickk sort
void quicksort( int *addr, int arrSize){
 int pivot = *addr;
 int indexi=-1,indexj=0;
 for( ; indexj<arrSize; indexj++){
 if (indexj == 0 ) indexi = 0;
 	int comp_value = *(addr+indexj);
 	if (comp_value <= pivot)
 }


	// quick sort is here
}
// looped input
int loopedin(int *addr, int n){
	printf("Scanning the array elements...\n");
	for (int i =0; i<=n; i++){
		scanf("%d",(addr+i));
	}
}


// looped output
int loopedout(int *addr, int n){
	printf("Printint the array elements...\n");
	for (int i =0; i<=n; i++){
		printf("%d",*(addr+i));
	}	
}



void swap(int *addr1,int *addr2){
	int temp = *addr1;
	(*addr1) = (*addr2);
	(*addr2) = temp;

}