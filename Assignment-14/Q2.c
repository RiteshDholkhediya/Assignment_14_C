#include<stdio.h>
#include<conio.h>

int main(){ 
    int a[10],i,sum=0;
    double avg;
    printf("Enter 10 elements\n");
    
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
    }

    printf("\nEntered elemensts are : \n");

    for(i=0;i<10;i++){
        printf("%d ",a[i]);
        sum = sum + a[i];
    }

    avg = sum/10.0;


    printf("\nAverage of the elements : %.2f",avg);
    
    getch();
    return 0;
}