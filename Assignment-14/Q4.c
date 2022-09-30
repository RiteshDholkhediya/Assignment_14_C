#include<stdio.h>
#include<conio.h>

int* input(int [], int);

int max(int [],int);

int main(){
    int a[10];
    printf("\nEnter 10 elements\n");
    input(a,10);
    printf("\nMaximum number in an array : %d",max(a,10));

    return 0;
}

int* input(int a[], int n){

    int i=0;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    return a;
}


int max(int a[], int n){
    int i=0,max;
    max = a[0];
    for(i=1;i<n;i++){
        if(max<a[i])
            max=a[i];
    }

    return max;
}


