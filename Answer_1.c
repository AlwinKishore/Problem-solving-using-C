// Question set-1
#include <stdio.h>
#include <stdlib.h>

void read_one_int(int *a){
    printf("\nEnter the number: ");
    scanf("%d",&*a);
    return;
}

void read_two_int(int *a,int *b){
    printf("\nEnter the first number: ");
    scanf("%d",&*a);
    printf("\nEnter the second number:\n");
    scanf("%d",&*b);
    return;
}

void read_two_float(float *a,float *b){
    printf("\nEnter the first number: ");
    scanf("%f",&*a);
    printf("\nEnter the second number:\n");
    scanf("%f",&*b);
    return;
}

// 1. Program to check if a number is a positive, negative or zero.
void check_positive_negative_zero()
{
    int input; 
    printf("\ncheck if a number is a positive, negative or zero.");
    read_one_int(&input);
    if (input==0){
        printf("Given number is zero");
    }
    else{
        if (input>0){
            printf("%d is positive number", input);
        }
        else
        {
            printf("%d is negative number", input);
        }
    }
    return;

}
// 2. Check if two integers are equal or not
void check_equal_or_not()
{
    int a,b;
    printf("\nCheck if two integers are equal or not");
    read_two_int(&a, &b);
    if (a==b){
        printf("%d and %d are equal",a,b);
    }
    else
    {
        printf("%d and %d are not equal",a,b);
    }
    
    return;
}
// 3. Check if two floating point numbers are equal or not
void check_float_equal_or_not(){
    float a,b;
    printf("\nCheck if two floating point numbers are equal or not");
    read_two_float(&a, &b);
    if (a==b){
        printf("%0.2f and %0.2f are equal",a,b);
    }
    else
    {
        printf("%0.2f and %0.2f are not equal",a,b);
    }
}
// 4. Program to check if a number is odd or even
void check_odd_or_even(){
    int a;
    printf("\nProgram to check if a number is odd or even");
    read_one_int(&a);
    if (a==0){
        printf("%d is zero",a);
    }
    else{
        if ((a%2)==0){
            printf("%d is even number",a);
        }
        else
        {
            printf("%d is odd number",a);
        }
    }
    
    return;
}
// 5. Program to Check Leap year
void check_leap_year()
{
    int year;
    read_one_int(&year);
    if ((year%4)== 0) 
    {
        printf("%d is a leap year",year);
    }
    else
    {
        printf("%d is not a leap year",year);
    }
    
}
// 6. Read the age of a candidate end determine whether he/she is eligible for casting his/her own vote.
void check_vote_eligibility()
{
    int age;
    printf("\nDetermine whether he/she is eligible for casting his/her own vote");
    printf("\nEnter the age: \n");
    scanf("%d", &age);
    if (18<age) 
    {
        printf("He/she is eligible for casting his/her own vote");
    }
    else
    {
        printf("He/she is not eligible for casting his/her own vote");
    }
    
}
// 7. Program to accept the height of a person in centimeter and categorize the person according to therir height(tall, short or medium - assume threshold value).
void categorize_using_height()
{
    int height;
    printf("\ncategorize the person according to therir height(tall, short or medium - assume threshold value)");
    printf("\nEnter the height(in cm): ");
    scanf("%d", &height);
    if (height<135){
        printf("Short");
    }
    else
    {
        if((135<height) && (height<165))
        {
            printf("Medium");
        }
        else
        {
            if((165<height) && (height<195))
            {
                printf("Tall");
            }
            else
            {
                if(height>195)
                {
                    printf("Abnormal height");
                }
            }   
        }
    }
    return;
    
}
// 8. Program to Find the Largest Among Three Numbers
void largest_of_three()
{
    int a,b,c;
    printf("\nFind the Largest Among Three Numbers");
    read_one_int(&a);
    read_one_int(&b);
    read_one_int(&c);
    if ((a>b) && (a>c))
    {
        printf("%d is the biggest",a);
    }
    else
    {
        if (b>c){
            printf("%d is the biggest",b);
        }
        else
        {
            printf("%d is the biggest",c);
        }
        
    }
    
}
// 9. Program to Find the Smallest Among Three Numbers
void smallest_of_three()
{
    int a,b,c;
    printf("\nFind the Largest Among Three Numbers.\nEnter 3 numbers:");
    read_one_int(&a);
    read_one_int(&b);
    read_one_int(&c);
    if ((a<b) && (a<c))
    {
        printf("%d is the Smallest",a);
    }
    else
    {
        if (b<c){
            printf("%d is the Smallest",b);
        }
        else
        {
            printf("%d is the Smallest",c);
        }
        
    }
    
}
// 10. Find the Largest among for numbers
void largest_of_numbers()
{
    int large, num;
    const char* a;
    printf("\nLargest among for numbers");
    printf("\nEnter 'q' to ");
    printf("\nEnter the numbers one by one, by pressing \"Enter\" Key \n");
    while (1==1)
    {
        scanf("%c",&a);
        if (a == 'q')
        {
            break;
        }
        else
        {
            num = atoi(a);
            if (num > large)
            {
                large = num;
            }
        }
        
    }
    printf("Largest is %d", large);
    return;
    
}
// 11. Given three numbers, find the two numbers that are close to each other.
// 12. Given three numbers, find the two numbers that are farther from each other.
// 13. Program to Sort three integers.
// 14. Program to check whether a triangle can be formed by the given value for the three angles.
// 15. Program to accept a coordinate point in an XY coordinate system and determine in which quadrant the coordinate point lies.
// 16. Given a character, find if it is a vowel or a consonant.
// 17. Given the number of sides of a shape(3 side upto 10sides), return the name of that shape.
// 18. Output number of days in a month given the month name. Assume 28 days in Feburary.
// 19. Print he day of week(Monday,Tuesday,.....) given the day of month(1 to 31). Assume the month starts on a Monday.
// 20. Read the lengths of sides of a triangle and name the triangle.(Equilateral, iosceles and scalene).
// 21. Program to convert grade point to letter grades.(A=>90,B=>80,C=>60,D=>50,F<50).
// 22. What colour is that square, given the row as int(1-8) and column as char(a-h) in a chess board. Given 5,'a' the color is balck. 3,'d' the color is white.
// 23. Program to calculate the roots of Quadratice Equation given a, b and c.
// 24. Program to calculate profit or loss on a given transaction.
// 25. Menu-Driven Program to perform a siple calculation of addition, subtraction, multiplication, division and modulo division.
// 26. Write a program for Rock, Paper and Scissors Game. Just for a single round, Computer vs. User and declare the winner with proper reason.
void main()
{
    // check_positive_negative_zero();
    // check_equal_or_not();
    // check_float_equal_or_not();
    // check_odd_or_even();
    // check_leap_year();
    // check_vote_eligibility();
    // categorize_using_height();
    // largest_of_three();
    // smallest_of_three();
    largest_of_numbers();
    return;
}