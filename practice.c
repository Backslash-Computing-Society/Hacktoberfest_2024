// INPUT TWO NUMBERS AND PRINT THE OUTPUT

#include <stdio.h>
    int
    main()
{
    int num1, num2;
    printf("Ener first number\n:");
    scanf("%d", &num1);
    printf("Enter second number\n:");
    scanf("%d", &num2);
    printf("The sum of %d and %d is : %d", num1, num2, num1 + num2);
    return 0;
}

// CALCULATE AREA OF SQUARE IS SIDE IS GIVEN
#include <stdio.h>
    int
    main()
{
    int side;
    printf("Enter length of side:");
    scanf("%d", &side);
    int area = side * side;
    printf("Area of square of side length %d is : %d", side, area);
    return 0;
}
//CALCULATE AREA OF CIRCLE USING RADIUS OF CIRCLE AS INPUT 

#include <stdio.h>
int main()
{
    int radius;
    printf("Enter radius of circle:");
    scanf("%d", &radius);
    int area = 3.14 * radius * radius;
    printf("Area of circle of %d is %d", radius, area);
    return 0;
}

//CALCULATE GROSS SALARY IS DEARNESS IS 40% OF BASIC AND HOME RENT IS 20% OF BASIC 
#include <stdio.h>

int main() {
  int sal;
  printf("Enter basic salary\n:");
  scanf("%d", &sal);
  int de_all = (40*sal)/100;
  printf("%d is the dearness allowance\n", de_all);
  int rent = (20*sal)/100;
  printf("%d is the house rent allowance\n", rent);
  int gross = sal + de_all + rent;
  printf("%d is the GROSS SALARY\n",gross);
  return 0;
}

//INPUT MARKS FOR EACH SUBJECT AND FIND OUT THE PERCENTAGE SCORED

#include <stdio.h>

int main() {
    int sub1,sub2,sub3,sub4,sub5;
    printf("Enter marks in first subject:\n");
    scanf("%d \n", &sub1);
    printf("Enter marks in second subject:\n");
    scanf("%d \n", &sub2);
    printf("Enter marks in third subject:\n");
    scanf("%d \n", &sub3);
    printf("Enter marks in fourth subject:\n");
    scanf("%d \n", &sub4);
    printf("Enter marks in fifth subject:\n");
    scanf("%d \n", &sub5);
    int total = sub1 + sub2 + sub3 + sub4 + sub5;
    printf("Marks in first subject\n:%d", sub1);
    printf("Marks in second subject\n:%d", sub2);
    printf("Marks in third subject\n:%d", sub3);
    printf("Marks in foutth subject\n:%d", sub4);
    printf("Marks in fifth subject\n:%d", sub5);
    printf("Percentage scored is \n: %d", total/5);
    return 0;
}

//CHECK NUMBER IS DIVISBLE BY 2 OR NOT (SIMPLE STATEMENTS)
#include <stdio.h>
int main() 
{
    int num;
    printf("Enter a number:\n");
    scanf("%d", &num);
    int result = num %2;
    printf("If output below is 1 meaning it is divisible by 2");
    printf("%d", result ==0);
    return 0;
}

//Check whether adult or not (CONDITIONAL STATEMENTS)
#include <stdio.h>
int main() 
{
    int age;
    printf("Enter your age :");
    scanf("%d", &age);
    if (age >=18) 
    {
        printf("YOU ARE AN ADULT");
    }
    else 
    {
        printf("YOU ARE NOT AN ADULT");
    }
    return 0;
}

//PASS OR FAIL 
#include <stdio.h>
int main() 
{
    int marks;
    printf("Enter your marks:");
    scanf("%d", &marks);
    if (marks > 30) 
    {
        printf("PASS");
    }
    else 
    {
        printf("FAIL");
    }
    return 0;
}
//GRADES ON THE BASIS OF MARKS
#include <stdio.h>
int main() 
{
    int marks;
    printf("Enter your marks:");
    scanf("%d", &marks);
    if (marks >=90 && marks <=100) 
    {
        printf("YOUR GRADE IS A++");
    }
    else if (marks >=70 && marks < 90)
    {
        printf("YOUR GRADE IS A");
    }
    else if (marks>=30 && marks < 70)
    {
        printf("YOUR GRADE IS B");
    }
    else 
    {
        printf("YOUR GRADE IS C");
    }
    return 0;
}
