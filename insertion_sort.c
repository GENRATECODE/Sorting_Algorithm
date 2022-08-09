#include<stdio.h>
#include<conio.h>


void insertion(int*a,int n);
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
    insertion(array,n);
    print(array,n);
    printf("\n Array is sorted ");
}


void print(int*a,int n){
    printf("\n");
    for(int i=0;i<n;i++){
    printf("%d\t",a[i]);
    }
}
// insertion algorithm
void insertion(int*a,int n){
    int key,j;
    printf("applying sorting algorithm...\n");
    for(int i=1;i<n;i++){
        key=a[i];
        j=i-1;

        while(j>=0&&a[j]>key){
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=key;

    }
}