#include<stdio.h>
#include<conio.h>

void swap(int* a,int* b);
void quick_sort(int *a,int low,int high);
int partition(int *array,int low,int high);
void print(int  *a,int n);
 
 // main function 
void main(){
    int array[100];
    int n;
    printf("How many number is you want to enter:");
    scanf("%d",&n);
    printf("\n Enter value");
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    printf("applying sorting algorithm...\n");
    quick_sort(array,0,n);
    print(array,n);
    printf("\n Array is sorted ");
}
// swaping function
void swap(int*a,int*b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
// print function
void print(int*a,int n){
    printf("\n");
    for(int i=0;i<n;i++){
    printf("%d\t",a[i]);
    }
}



// sorting algorithm
int partition(int *array, int low,int high){
    int j;
   int pivot=array[high];// selecting right most element
   int i=low-1;// Index of smaller element 
   for(  j=low;j<high;j++){
       if(array[j]<pivot){
       // increment index of smaller element
       i++;
       swap(&array[i],&array[j]);
       }
   }
   swap(&array[j+1],&array[high]);
   return (i+1);
}

void quick_sort(int array,int low,int high){
 
    int pivot_index;
    if(low<high){
        pivot_index=partition(array,low,high);

        quick_sort(array,low,pivot_index-1);
        quick_sort(array,pivot_index+1,high);
    }
   
}