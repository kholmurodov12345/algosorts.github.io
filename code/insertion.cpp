#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int i,j,n,temp,a[30];
    printf("Massiv elemenlari sonini kiriting:");
    scanf("%d",&n);
    printf("\nMassiv elementlarini kiriting:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n-1;i++){
        temp=a[i];
        j=i-1;
        while((temp<a[j])&&(j>=0)){
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=temp;
    }
    printf("\nSaralashdan keyingi massiv\n");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}
