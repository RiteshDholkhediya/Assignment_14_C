#include<stdio.h>
#include<conio.h>

int* input(int [], int);

int* sort(int [],int);
void printELements(int [], int);



int main(){
    int a[10],n;
    printf("Enter the number of elements you want to store");
    scanf("%d",&n);
    printf("\nEnter %d elements\n",n);
    input(a,n);
    printELements(a,n);

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
    for(i=n-1;i>=0;i--){
        printf("%d ",a[i]);
    }
}

