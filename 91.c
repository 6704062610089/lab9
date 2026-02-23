//function prototype
#include <stdio.h>

void swapValue(int *a, int *b, int *c){
    int temp = *a;
    *a = *b;
    *b = *c;
    *c = temp;
}



int main() {
int A[5] = {1,2,3,4,5},
B[5] = {6,7,8,9,10};
int a = 1, b = 2, c = 3;
printf("Before swap function: a=%d, b=%d, c=%d\n", a, b, c);
swapValue(&a,&b,&c);
printf("After swap function: a= %d, b=%d, c=%d\n", a, b, c);

}
