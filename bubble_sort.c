#include<stdio.h>
#include<conio.h>

void swap(int* a,int* b);
void bubblesort(int*a,int n);
void print(int * a,int n);
 
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
    bubblesort(array,n);
    print(array,n);
    printf("\n Array is sorted ");
}
void swap(int*a,int*b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void print(int*a,int n){
    printf("\n");
    for(int i=0;i<n;i++){
    printf("%d\t",a[i]);
    }
}
void bubblesort(int*a,int n){
    printf("applying sorting algorithm...\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                swap(&a[j],&a[j+1]);
            }
        }
    }
}