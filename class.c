#include <stdio.h>


//Loop to print the sum of all 
//int main(){
//	int numbers[5]={-5,6,7,-2,-8};
//	int i=0;
//	int sum=0;
//	while(i<=4){
//		sum+=numbers[i];
//		
//	}
//	printf("%d",sum);
//
//}

//Exams.c


//int main(){
//	int num1, num2, sum;
//	printf("Enter a number \n");
//	scanf("%d",&num1);
//	printf("Enter a number \n");
//	scanf("%d",&num2);
//	sum=num1+num2;
//	printf("The sum of %d and %d is %d",num1, num2, sum);
//	return 0;
//}

//int main(){
//	int myArray[10]={12,21,34,12,34,56,78,90,34};
//	int lv;
//	int max=myArray[0];
//	for (lv=0; lv<=9;lv++){
//		if(myArray[lv]>max){
//			max=myArray[lv];
//		}
//	}
//	printf("%d",max);
//	return 0;
//
//}

//int main(){
// 	int average, num;
// 	int sum=0;
// 	int lv=1;
// 	printf("Enter a number\n");
// 	scanf("%d",&num);
// 	for(lv=1; lv<=num; lv++){
// 		if(lv%2==0){
// 			sum+=lv;
//		}
//	}
//	average=sum /num;
//    printf("The sum of even numbers between 1 and %d is %d while their average is %d",num, sum, average);
// 	return 0;
//}
//int main(){
//	int average, num;
//	int sum=0;
//	int lv=1;
//	int length=0;
//	printf("Enter a number \n");
//	scanf("%d",&num);
//	for(lv=1; lv<=num; lv++){
//		if(lv%2 ==0){
//			sum+=lv;
//			length++;
//		}
//	}
//	average=sum/num;
//	printf("The number of even numbers is %d\n", length);
//	printf("The sum is %d\n", sum);
//	printf("The average is %d\n", average);
//	return 0;
//}
//int main(){
//	int num1,num2,num3,largest;
//    printf("Enter 3 numbers \n");
//    scanf("%d %d %d",&num1 ,&num2 ,&num3);
//   
//    if(num1>num2&&num1>num3){
//    	largest=num1;
//	}
//	else if(num2>num1&&num2>num3){
//		largest=num2;
//	}
//	else {
//		largest=num3;
//	}
//	printf("The largest number among %d, %d and %d is %d", num1, num2, num3, largest);
//	return 0;
//}

//int main(){
//	int num;
//	int lv=2;
//	int flag=1;
//	printf("Enter a number\n");
//	scanf("%d",&num);
//	for(lv=2; lv<num; lv++){
//		if(num%lv==0){
//			flag=0;
//		}
//	}
//	if(flag==0){
//		printf("%d is not prime", num);
//	}
//	else{
//		printf("%d is prime",num);
//	}
//	return 0;
//}

//int main(){
//	int counter=0;
//	int num;
//	int originalNum;
//	printf("Enter a positive number\n");
//	scanf("%d",&num);
//	originalNum=num;
//	while (num>0){
//		num/=10;
//		counter++;
//	}
//	printf("%d is made of %d digits",originalNum , counter);
//	return 0;
//}

//int main(){
//	int num=98;
//	int myArray[10]={12,34,56,78};
//	printf("%p\n",&myArray[0]);
//	printf("%p\n",&myArray[1]);
//	printf("%p\n",&num);
//}

#include <limits.h>
#include <float.h>
int main(){
	float gpa=2.34567;
	printf("The range for signed char is btn %d and %d \n",CHAR_MIN, CHAR_MAX);
	printf("The range for unsigned is btn 0 and %d \n", UCHAR_MAX);
	printf("The range for long  float is  btn %.10Le and %.10Le \n",FLT_MIN, FLT_MAX);
	printf("%.2f",gpa);
	return 0;
}
