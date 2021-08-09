📌️📌️CHAPTER:- 7. FUN OF FUNCTION:------



     
     
      Problem 54: Write a function that simply prints a message “Hello!! I am from inside of function” and call the function from main
       function.

		ans given below:
      
      
#include<stdio.h>

void display()//this is a void type function named display
{
    printf("Hello!! I am from inside of function\n");
}

int main()//this is the main function and it will execute first
{
    display();//it will call the function display and display function will execute now

return 0;
}

     
      
      Problem 55: Write a function that takes two integers as input and prints their sum inside the function.


      ans given below:
      
      
#include<stdio.h>

int intSum(int a,int b) // a and b are the parameter of integer type function intSum
{
    int total;
    total=a+b;
    return total; //return type and function type have to be same
}

int main()
{
    int value1,value2,sum;
    scanf("%d%d",&value1,&value2);
    sum=intSum(value1,value2);
    printf("%d",sum);

return 0;
}


      
      
      Problem 56: Write a function that takes an integer as input and prints EVEN if the number is divisible by 2 otherwise prints ODD.
       Call this function from the main function.


      
      ans given below:
      
#include<stdio.h>

void evenOdd(int number)
{
    if(number%2==0)
        printf("EVEN\n");
    else
        printf("ODD\n");
}

int main()
{
    int number;
    scanf("%d",&number);
    evenOdd(number);

return 0;
} 




    
      
      
      Problem 57: Write a function that takes an integer as input and prints all of its divisors. Call this function from the main
       function.


      
      
      ans given below:
      
      
#include<stdio.h>

void divisor(int value)
{
    int i;
    for(i=1;i<=value;i++)
    {
        if(value%i==0)
            printf("%d ",i);
    }
}

int main()
{
    int number;
    scanf("%d",&number);
    divisor(number);

return 0;
}      
      
      
      
      
      Problem 58: Suppose you are going to make a simple calculator. Your task is to prepare four functions- add(), subtract(),
       multiply() and divide() . Each function takes two parameters and return the value after applying the corresponding action on those
        parameters.


      
      ans given below:
      
#include<stdio.h>

float add(int number1,int number2)
{
    float result;
    result=number1+number2;
    return result;
}

float subtract(int number1,int number2)
{
    float result;
    result=number1-number2;
    return result;
}

float multiply(int number1,int number2)
{
    float result;
    result=number1*number2;
    return result;
}

float divide(int number1,int number2)
{
    float result;
    result=number1/number2;
    return result;
}

int main()
{
    int value1,value2;
    float add_result,sub_result,mult_result,div_result;
    scanf("%d%d",&value1,&value2);
    add_result=add(value1,value2);
    sub_result=subtract(value1,value2);
    mult_result=multiply(value1,value2);
    div_result=divide(value1,value2);

    printf("Add value:             %.2f\n\n",add_result);
    printf("Subtraction value:     %.2f\n\n",sub_result);
    printf("Multiplication value:  %.2f\n\n",mult_result);
    printf("Divided value:         %.2f\n",div_result);
return 0;
}  


   
      
      Problem 59: Write a function named findMax(). It takes three parameters and return the maximum value among the three parameters.
       Call this function from the main function.


      
      
      ans given below:
      
#include<stdio.h>

double findMax(double value1,double value2,double value3)
{
    if(value1>=value2&&value1>=value3)
        return value1;
    else if(value2>=value3)
        return value2;
    else
        return value3;
}

int main()
{
    double number1,number2,number3,maximum=0;
    scanf("%lf%lf%lf",&number1,&number2,&number3);
    maximum=findMax(number1,number2,number3);
    printf("Maximum Number: %.2llf",maximum);

return 0;
}



     
      
      Problem 60: Write a currency converter function named dollarToBDT(). It takes US Dollar as input in a float variable and return 
      the amount of Bangladeshi Taka. [Change rate: 1 USD = 78.55 BDT]


      
      
      ans given below:
      
#include<stdio.h>

float dollarToBDT(float dollar)
{
    float taka=dollar*78.55;
    return taka;
}

int main()
{
    float USD,tk;
    scanf("%f",&USD);
    tk=dollarToBDT(USD);
    printf("%.2f Taka.\n",tk);
return 0;
}


     
      
      
      Problem 61: Write a function that takes any real number and return its absolute value. If user gives -5 as parameter the 
      function will return 5.

      
      
      ans given below:
      
#include<stdio.h>

double absValue(double value)
{
    if(value<0)
        return value*(-1);
    else
        return value*(1);
}

int main()
{
    double number;
    scanf("%lf",&number);
    number = absValue(number);
    printf("%.2lf",number);
return 0;
}      
      
      
      Problem 62: Write a function which calculates the area of Bangladesh National Flag . The function takes only the length of the 
      flag as parameter and returns the area of the flag. [Ratio of length and width is- Length:Width = 10 : 6]


      
      
      ans given below:
      
#include<stdio.h>

float areaOfFlag(float length)
{
    float width,area;
    width=(6*length)/10;
    area=length*width;
    return area;
}


int main(main)
{
    float length,area;
    printf("Enter the length of flag: ");
    scanf("%f",&length);
    area=areaOfFlag(length);
    printf("Area of flag is: %.2f\n",area);

return 0;
}      
      
      
      Problem 63: Write a function named toUpperCase() which takes a small letter alphabet as input and return the capital version. 
      If user gives ‘a’ as parameter the function will return ‘A’.




	  ans given below:

#include<stdio.h>

int toUpperCase(char alphabet)
{
    int convert;
    convert=alphabet;
    convert=convert-32;
    return convert;
}

int main()
{
    char alphabet;
    scanf("%c",&alphabet);
    alphabet=toUpperCase(alphabet);
    printf("%c\n",alphabet);

return 0;
}
