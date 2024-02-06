#include<stdio.h>
void main(){
    int a[3];

    // for (int i = 0; i < 3; i++)
    // {
    // }
    for (int i = 1; i <= 3; i++)
    {
        a[i]=i;
    }
    for (int i = 1; i <= 3; i++)
    {
        printf("%d ",a[i]);
    }
}
