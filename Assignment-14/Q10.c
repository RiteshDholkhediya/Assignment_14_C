#include<stdio.h>
#include<conio.h>

int* input(int [], int);

void copyArray(int [], int [], int);
void printELements(int [], int);



int main(){
    int a[50],b[50],n;
    printf("Enter the number of elements you want to store");
    scanf("%d",&n);
    printf("\nEnter %d elements\n",n);
    input(a,n);
    copyArray(a,b,n);
    printf("\nElemens of array A\n");
    printELements(a,n);
    printf("\nElemens of array B\n");
    printELements(b,n);

    return 0;
}

int* input(int a[], int n){

    int i=0;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    return a;
}

void copyArray(int a[],int b[], int n){
    int i;
    for(i=0;i<n;i++){
        b[i] = a[i];
    }
}

void printELements(int a[], int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}

