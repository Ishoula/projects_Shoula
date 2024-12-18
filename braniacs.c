# include<stdio.h>
//int main(){
//	int factorial=1;
//	int lv;
//	int n;
//	printf("Enter a number:\n");
//	scanf("%d", &n);
//	for(lv=1;lv<=n;lv++){
//		factorial*=lv;
//	}
//	printf("The factorial of %d is %d",n ,factorial);
//	return 0;
//}


//int main(){
//	int i;
//	int j;
//	int p=1;
//	for(i=0; i<5; i++){
//		for(j=0; j<i; j++){
//			p=i+j;
//			printf("%d",p);
//		}
//		printf("\n");
//	}	
//	return 0;
//}
//int main(){
//	int height, c, r, pt[10][10] = {0};
//	printf("Input the height of the triangle: \n");
//	scanf("%d",&height);
//	for(r=0;r<height;r++){
//		for(c=0;c<=r;c++){
//			if(c==0 || c==r){
//				pt[r][c]=1;
//			}
//			else{
//				pt[r][c]=pt[r-1][c-1]+pt[r-1][c];
//				
//				}
//			printf("%d",pt[r][c]);
//			
//		}
//		printf("\n");
//	}e
//	return 0;
//
//}
//#include <stdio.h>
//
int main() {
    int height, c, r, pt[10][10] = {0}; // Initialize the array to zero
    printf("Input the height of the triangle: \n");
    scanf("%d", &height);

    for (r = 0; r < height; r++) {
        for (c = 0; c <= r; c++) { // Change c < height to c <= r
            if (c == 0 || c == r) {
                pt[r][c] = 1; // First and last elements of each row are 1
            } else {
                pt[r][c] = pt[r - 1][c - 1] + pt[r - 1][c]; // Calculate the value
            }
            printf("%d ", pt[r][c]); // Print the value with a space
        }
        printf("\n"); // New line after each row
    }
    return 0;
}

#include <stdio.h>
// Function to calculate factorial
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}
// Function to calculate combination (nCr)
int combination(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}
// Function to print Pascal's Triangle as a right-angled triangle
void printPascalsTriangle(int rows) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%d ", combination(i, j));
        }
        printf("\n"); // Move to the next row
    }
}
int main() {
    int rows;
    printf("Enter the number of rows for Pascal's Triangle: ");
    scanf("%d", &rows);
    printPascalsTriangle(rows);
    return 0;
}
