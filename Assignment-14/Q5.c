#include<stdio.h>
#include<conio.h>

int* input(int [], int);

int smallElement(int [],int);

int main(){
    int a[10];
    printf("\nEnter 10 elements\n");
    input(a,10);
    printf("\nSmallest number in an array : %d",smallElement(a,10));

    return 0;
}

int* input(int a[], int n){

    int i=0;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    return a;
}


int smallElement(int a[], int n){
    int i=0,min;
    min = a[0];
    for(i=1;i<n;i++){
        if(min>a[i])
            min=a[i];
    }

    return min;
}


