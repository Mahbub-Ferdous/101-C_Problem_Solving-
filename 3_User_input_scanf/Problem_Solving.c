📌️📌️CHAPTER:- 3. USER INPUT SCANF():------



      

      
      
      Problem 13: Take four integer variables a, b, x and y. Scan the values of the variables from user using scanf() function. 
      Now print the output of the following equation:

                                         (a*b) + (x*y)


      ans given below:



#include<stdio.h>
void main(){
    int a,b,x,y;
    printf("Enter Your Number One By One Please!\n");
    scanf("%d%d%d%d", &a, &b, &x, &y);
    printf("The Calculation Is : %d\n", (a*b)+(x*y));


return 0;
}








      
      Problem 14: Take temperature of Dhaka city as input in Celsius scale from the user using scanf() function and convert it 
      to Fahrenheit and print it.

                                     [Formula: F = C(9/5) +32]


      
      ans given below:


#include<stdio.h>
void main(){
    double C;
    printf("Todays Dhaka temperature in celsius\n");
    scanf("%lf", &C);
    double f = C*9.0/5.0+32;
    printf("Temperature in fahrenheit : %.2lf", f);





return 0;
}
      
      
      
      
      
      Problem 15: Take a small letter alphabet as input from the user and print the capital version of that letter. 
      [If user gives input ‘a’ you should print ‘A’]


		
		ans given below:




#include<stdio.h>
void main(){
    char Small_Letter;
    printf("Enter a small letter : \n");
    scanf("%c", &Small_Letter);
    printf("Capital Version is : %c\n", Small_Letter-32);    /// 32 is the ascii code between upper and lower alphabet ascii code

    /*  jodi lower case theke upper ber korte bole then oi character theke
        (-32) ar jodi upper theke lower bole then then character er sathe 32 plus korte hobe
        example :-  ascii small a = 97 but ascii capital A = 65  so parthokko 32 and eta sob khetre i mean sob alphabet er jonno*/




return 0;
}










