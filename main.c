#include <stdio.h>
#include <stdlib.h>
void swap(int n1 ,int n2);
int main()
{
    int A;
    int B;
    printf("\n Please Enter The First Number :");
    scanf("\n %d", &A);
     printf("\n Please Enter The Second Number :");
    scanf("\n %d", & B);
    swap(A,B);
    printf("\n Before Swapping");
    printf("\n A= %d : \n B= %d", A, B);
    return 0;
}
void swap(int n1 ,int n2)
{
    n1=n1+n2;
    n2=n1-n2;
    n1=n1-n2;
    printf("\n After Swapping");
    printf("\n A= %d : \n B= %d", n1, n2);
}
