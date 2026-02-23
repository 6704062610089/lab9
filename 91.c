//function prototype
#include <stdio.h>

void swapValue(int *a, int *b, int *c){
    int temp = *a;
    *a = *b;
    *b = *c;
    *c = temp;
}
void swapArray(int a[], int b[], int size) {
    int temp;
    for(int i = 0; i < size; i++) {
        temp = a[i];      
        a[i] = b[i];     
        b[i] = temp;      
    }
}
//or void swapArray(int *a, int *b, int size); 
void pr(int a[],int b[],int size){
    printf("array A = ");
    for(int i = 0;i<size;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    printf("array B = ");
    for(int j = 0;j<size;j++){
        printf("%d ",b[j]);
    }
}

int main() {
int A[5] = {1,2,3,4,5},
B[5] = {6,7,8,9,10};
int a = 1, b = 2, c = 3;
printf("Before swap function: a=%d, b=%d, c=%d\n", a, b, c);
swapValue(&a,&b,&c);
printf("After swap function: a= %d, b=%d, c=%d\n", a, b, c);
printf("Before swaparray function:");
printf("\n");
pr(A,B,5);
swapArray(A,B,5);
printf("\n");
printf("After swaparray function:");
printf("\n");
pr(A,B,5);
}
