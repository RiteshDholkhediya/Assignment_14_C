#include<stdio.h>
#include<conio.h>

int* input(int [], int);

int* sort(int [],int);
void printELements(int [], int);

int secondLargest(int [], int);

int main(){
    int a[10];
    printf("\nEnter 10 elements\n");
    input(a,10);
    sort(a,10);
    printELements(a,10);
    printf("\nSecond Largest element in the array is : %d",secondLargest(a,10));

    return 0;
}

int* input(int a[], int n){

    int i=0;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    return a;
}


int* sort(int a[], int n){
    int i,j,temp;

    for(i=0;i<n;i++){

        for(j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }

    }

    return a;
}

void printELements(int a[], int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}

int secondLargest(int a[], int n){

    int secondMax,i;
    secondMax = a[n-1];
    for(i=n-1;i>0;i--){
        if(a[i-1]!=a[i]){
            secondMax = a[i-1];
            break;
        }
            
    }
    return secondMax;
}