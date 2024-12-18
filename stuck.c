#include <stdio.h>
#include <stdlib.h>

/*int main(){
    float length, width, area, perimeter;
	printf("Enter the sides of the rectangle: \n");
	scanf("%f%f",&length,&width);//& is to specify the location where the inputs will be stored, we use two %fs bcz we will receive two inputs
	area = length * width;//Area calculation
	perimeter = (length+width) * 2;
	printf("The perimeter of the rectangle of with sides %f and %f is %f m \n", length, width, perimeter);
	printf("The area of the rectangle of with sides %f and %f is %f m\n", length, width, area);
	
	return 0;
}*/


int main(){
	int n1;
	int n2;
	int n3;
	printf("Enter numbers: ");
	scanf("%d%d%d", &n1,&n2,&n3);
	int greatest;
	if(n1>n2 && n1>n3){//We must find the greatest nbr among them to use it when looping
		greatest = n1;
	}
    else if(n2>n3 && n2>n3){
		greatest = n2;
	}
	else{
		greatest = n3;
	}
	int gcd;
	int i = 2;
	for (i=2; i<=greatest; i++){
		if(n1%i==0 && n2%i==0 && n3%i==0){
			gcd =i;
		}
	}
	printf("The Greatest Common Divisor of %d,%d and %d is %d",n1,n2,n3,gcd);//We have to print after closing the loop so that we can print one common factor 
	return 0;
}

// Funtions in C programming
/*int main(){
	int num1,num2,num3,greatest;
	printf("Enter 3 numbers: ");
	scanf("%d%d%d",&num1,&num2,&num3);
	if(num1>num2&& num1>num3){
		greatest=num1;
	}
	else if (num2>num1&& num2>num3){
		greatest=num2;
	}
	else{
		greatest=num3;
	}
	printf("The largest in number among %d,%dand%d is %d ",num1,num2,num3,greatest);
}
// Constants in c. Alot of times when naming const variables we use all uppercase-letters(It's just a best practice and not a must .Just like in JS consts can not be modified
int main(){
	printf("%f", floor(45.2869));//funtion to round down a number. The ceil function is the opposite of the floor function and it is used to round up a number 
	return 0;
}
*/

//Getting input from user
//int main(){
//	char name[20];
//	int age;
//	double gpa;
//	char grade;
//	printf("Enter your name, age, gpa, and grade: \n");
//	scanf("%s %d %lf %c",&name ,&age, &gpa, &grade);	
//	printf("Hello %s according to the survery,",name);
//	printf("you are %d years old ",age);
//	printf("your gpa is %f ",gpa);
//	printf("your grade is %c ",grade);
//	return 0;
//}

//Madlib game
//int main(){
//	char color[20];
//	char pluralNoun[20];
//	char foodF[20];
//    char foodL[20];
//	printf("Enter your favorite clolor: \n");
//	scanf("%s",&color);
//	printf("Enter a plural noun: \n");
//	scanf("%s",&pluralNoun);
//	printf("Enter your favorite food with two words: \n");
//	scanf("%s%s",&foodF,&foodL);
//	printf("Biscuits are %s\n", color);
//	printf("%s are sweet\n",pluralNoun);
//	printf("And I love %s %s\n",foodF, foodL);
//	return 0;
//	
//}

//Arrays
//int main(){
//	int myArray[]={1,2,3,4,5};
//    myArray[4]=27;
//	printf ("%d", myArray[4]);
//}
//int main(){
//	char stings[][20]={"Hello","How are you","They call me shoula"}; To store an array of more than one string you have to use two square brackets
//	printf("%s",stings[0]);
//	return 0;
//}
//int main(){
//	int ages[30]={12,15,16,17};
//	printf("Enter your age");
//	scanf("%d", &ages[9]);
//	printf("Your age is %d", ages[9]);
//}

//The void function has no return which means that
//in order for it to return sthg it must be called in the main function
//int main(){
//	greet("Shoula", 15);
//	greet("Derrick", 15);
//	greet("Leccutte", 6);
//	return 0;
//}
//void greet(char name[],int age){
//	printf("Hello %s, you are %d old\n",name ,age);
//}

//Example of a function that is not void The voidness is due to the use of void when declaring the function
//double cube(double num){
//	return num*num*num;
//}
//int main(){
//	printf("Answer: %f",cube(12.3));
//	return 0;
//}
//Alternative
//double cube(double num);
//int main(){
//	printf("Answer: %f\n", cube(12.3));
//	return 0;
//}
//double cube(double num){
//	return num*num*num;
//}

//Function to find the largest number.
//int max(int num1, int num2, int num3){
//	int greatest;
//	if(num1>=num2 && num1>=num3){
//		greatest=num1;
//	}
//	else if(num2>=num1 && num2>=num3){
//		greatest=num2;
//	}
//	else{
//		greatest=num3;
//	}
//	return greatest;
//}
//int main(){
//	printf("%d",max(3,45,67));
//	return 0;
//
//}

//Making a calculator using if statements
//int main(){
//	double num1;
//	double num2;
//	char op;
//	
//	printf("Enter a number\n");
//	scanf("%lf", &num1);
//	printf("Enter an operator\n");
//	scanf(" %c", &op);
//	printf("Enter a number\n");
//	scanf("%lf",&num2);
//	if(op=='+'){
//		printf("%f",num1+num2);
//	}
//	else if(op=='-'){
//		printf("%f",num1-num2);
//	}
//	else if(op=='*'){
//		printf("%f",num1-num2);
//	}
//	else if(op=='/'){
//		printf("%f",num1/num2);
//	}
//	else{
//		printf("Invalid Operator");
//	}
//	return 0;
//}

//Using the switch statements
//int main(){
//	char grade;
//	printf("Enter your grade:\n");
//	scanf(" %c", &grade);
//	switch(grade){
//		case'A':
//			printf("You did great\n");
//			break;
//		case'B':
//			printf("You did alright\n");
//			break;
//		case 'C':
//			printf("You did poorly\n");
//			break;
//		case 'D':
//			printf("You did very bad");
//			break;
//		case 'F':
//			printf("You failed\n");
//			break;
//		defaul:
//			printf("Invalid Grade\n");
//		
//	}
//	return 0;
//}

//Structs can store different data types at the same time}
//struct Student{
//	char name[20];
//	int age;
//	double gpa;
//	char major[20];
//	
//};
//int main(){
//	struct Student student1;
//	student1.age=27;
//	student1.gpa=2.5;
//	strcpy(student1.name,"Damn");
//	strcpy(student1.major,"Cyber");
//	
//	struct Student student2;
//	student2.age=1;
//	student2.gpa=2.7;
//	strcpy(student2.name,"Daah");
//	strcpy(student2.major,"Software");
//	printf("%s", student2.major);
//}

//Usin structs to model a phone and book
// struct Phone{
// 	char brand[20];
// 	char model[20];
// 	int storage;
// 	double price;
// };
// struct Book{
// 	char author[20];
// 	char title[20];
// 	float price;
// 	int pages;
// 	
// };
// int main(){
// 	struct Phone iPhone;
// 	iPhone.storage=16;
// 	iPhone.price=2999.98;
// 	strcpy(iPhone.brand,"Apple");
// 	strcpy(iPhone.model, "iPhone13");
// 	printf("%s\n", iPhone.brand);
// 	struct Book aLycs;
// 	aLycs.pages=16;
// 	aLycs.price=2999.98;
// 	strcpy(aLycs.author,"Tim");
// 	strcpy(aLycs.title, "A life you can save");
// 	printf("%s\n", aLycs.author);
// 	
// 	
// }

//Looping

//While loop
//int main(){
//	int index=1;
//	while(index<=5){
//		printf("%d\n", index);
//		index++;
//	}
//	return 0;
//}
//
//int main(){
//	printf("Hello,\\ How is life?\t It's never easy to say goodbye\"");
//	printf("It's still the damn girl");
//	int num=49;
//	printf(num);
//	return 0;
//	system("pause");
//}
//int main(){
//	int ages[30]={10,5,20};
//	printf("Enter your age: ");
//	scanf("%d",ages[9]);
//	printf("The age number 10 is %d\n", ages[9]);
//	return 0;
//	
//}
//int main(){
//	int ages[30]={12,15,16,17};
//	printf("Enter your age\n");
//	scanf("%d", &ages[9]);
//	printf("Your age is %d", ages[9]);
//}

//Iterative structures
//Loop to print negative numbers in an array
//int main(){
//	int lv =0;
//	int myArray[10]={12,-5,-9,6,7,8,-6,-5,-7,3};
//	while(lv<=9){
//		if(myArray[lv]<0){
//			printf("%d\n",myArray[i]);
//		}
//		lv++;
//		
//	}
//	
//}




