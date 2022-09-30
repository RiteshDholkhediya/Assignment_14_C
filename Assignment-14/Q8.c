#include<stdio.h>
#include<conio.h>

int* input(int [], int);

int* sort(int [],int);
void printELements(int [], int);

int secondSmall(int [], int);

int main(){
    int a[10],n;
    n=1;
    printf("\nEnter %d elements\n",n);
    input(a,n);
    sort(a,n);
    printELements(a,n);
    printf("\nSecond Smallest element in the array is : %d",secondSmall(a,n));

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

int secondSmall(int a[], int n){

    int secondMIn,i;
    secondMIn = a[0];
    for(i=0;i<n-1;i++){
        if(a[i+1]!=a[i]){
            secondMIn = a[i+1];
            break;
        }
            
    }
    return secondMIn;
}