//C program to Implement a List using Array and develop function to perform Traversal operation
#include <stdio.h>
void main() {
int arr[5] = {18, 30, 15, 70, 12};
int i, item = 50,  pos = 3;
printf("Elements of the array are:\n");
for(i = 0; i<5; i++) {
printf("arr[%d] = %d,  ", i, arr[i]);
}
 arr[pos-1] = item;
printf("\nArray elements after updation :\n");
for(i = 0; i<5; i++) {
printf("arr[%d] = %d,  ", i, arr[i]);
}
}
