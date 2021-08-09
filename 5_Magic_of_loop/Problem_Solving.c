📌️📌️CHAPTER:- 5. MAGIC OF LOOPS:------



    
    
    
    Problem 26: Print the EVEN numbers between 1 to 100 using loop.

	ans given below:


#include<stdio.h>
void main(){
	int i;
	for( i = 2; i <= 100; i+=2){
        if( i%2==0 )
                                                                        /// we solve this problem this types of calculation
        printf("Even Number : %d\n", i);
	}                                                        /// but problem given 1 to 100 so we use if conditional apply



return 0;
}
    
    
    
    
    
    
    Problem 27: Print the numbers between 100 to 200 which are completely divisible by 3 and 5.


    ans given below:


#include<stdio.h>
int main(){
    int i;
    for( i = 100;i <= 200; i++){
        if(i%3==0 && i%5==0)
            printf("%d\n", i);

    }





return 0;
}

    
    
    
    
    
    
    
    Problem 28: Write a program to print the following output using loop.
                                      
                                      *
                                      **
                                      ***
                                      ****



    ans given below:


#include<stdio.h>
int main(){
    int i, j;
    for( i = 0; i < 4; i++){        /// outer loop
        for( j = 0; j <= i; j++){    /// inner loop
            printf("*");                     /// when i = 0 than outer loop print inner loop when j = 0, j<=i, j<=1 result that means *
        }                                 /// then outer loop print a newline cause then again when i = 1 outer loop true
        printf("\n");         /// then i++  means i = 2, when j=0, j<=i, j<=2 so loop 2 bar ghurbe and result output **
    }                        /// i =




return 0;
}
    
    
    
    bekkha : amra duita loop ghuraichi outer ar tar majhe inner, outer loop print korbe ekta new line ar inner loop print korbe
"*" . so amra jodi ghotona probaho ta dekhi. i = 0 jokhn loop ta ghurlo and 0<4 etao true holo than se inner loop e dhuklo
sekhane j = 0, condition j<=i, so 0<=0 than etao true holo and loop ekbar sesh kore print korlo "*" then outer er print
korlo ekta new line .than abar loop ghura start korlo tokhn i = 1, ebong 1<4 eta true holo than inner loop e gelo , tate j =0
j<=i so 0<=1 by condition and loop ta sui bar ghurbe and "*" dui bar print korbe. than abar outer er new line print kore loop
prothom theke abar gurlo tokhn i = 2, i<4 so 2<4 eta true holo and loop ghure inner loop e gelo tate , j = 0, condition j<=i
so j = 0; 0<=2 tahole loop 3 bar ghurbe and "*" tin bar print korbe than outer loop ghure abar new line print kore abar loop ghurbe
jokhn i = 3; i<4 conditions means 3<4 ebong loop true hoye ghure inner loop e chole gelo jekhane , j = 0 and condition j <= i
so by the condition j = 0; 0<=3 so loop 4 bar ghurbe 5 barer somoy false hobe so 4 ta "*" print korbe and outer loop ghure new
line produce korbe then abar loop ghure dekbe i = 4 so condition i < 4 so the condition false
    
    
    
    
    Problem 29: Take an integer as input and print it’s multiplication table up to 10. If user gives 5, your output should 
    look like the following example-

                            5 * 1 = 5

                            5 * 2 = 10

                            5 * 3 = 15

                            .

                            .

                            .

                            5 * 10 = 50


   ans given below: 
    
    #include<stdio.h>
int main(){
    int n, i;
    printf("Enter a integer number: \n");
    scanf("%d", &n);
    printf("Multification table of %d :", n);
    for( i = 1; i <= 10; i++){
    	printf("%d*%d = %d\n", n,i,n*i);
    }

return 0;
}
    
    
    
    
    Problem 30: Write a program which will print the summation of the given series-

                 101 + 99 + 97 + …….. + 3 + 1 = ?


    ans given below:


#include<stdio.h>
int main(){
	int i, sum = 0;
	for( i = 101; i>=1; i-=2){
		sum += i;
	}
	printf("%d\n", sum);

return 0;
}

    
    
    
    
    
    
    Problem 31: Write a program to program to print the following output using loop-

                            *

                            Blank Line

                            * * *

                            Blank Line

                            * * * * *

                            Blank Line

                            * * * * * *


    
    ans given below:


#include<stdio.h>
int main(){
    int i, j;
    for( i =1; i <=7 i++){
        for( j= 1; j<=i; j++){
            if( i%2==0 ){
                printf("Blankl line\n");
                break;
            }else{
                printf("*");
            }
        }
         printf("*\n");
    }






return 0;
}
    
    
    
    
    Problem 32: Write a program to print the following output using loop.

                            * * * *

                            * * *

                            * *

                            *


    
    ans given below:



#include<stdio.h>
void main(){
    int i, j;
    for(i = 4; i > 0; i--){
        for(j = 0; j < i; j++){
            printf("*");
        }
        printf("\n");
    }

return 0;
}
    
    
    
    
    Problem 33: Write a program to print the following output using loop-

                       1 2 3 4 5

                       1 2 3 4

                       1 2 3

                       1 2

                       1


    ans given below:


#include<stdio.h>
void main(){
    int i, j;
    for( i = 5; i >=1; i-- ){
        for( j = 1; j <=i; j++){
            printf("%d", j);

        }
        printf("\n\n");
    }

return 0;
}

    
    
    
    
    
    Problem 34: Write a program to display “A” to “Z” using loop .

	ans given bwelow:


#include<stdio.h>

int main()
{
    char var;
    for(var = 'A'; var <= 'Z'; var++)
    {
        printf("%c ",var);
    }

return 0;
}
    
    
    
    
    
    
    
    Problem 35: Print the summation of squares of all numbers from 5 to 25.

                  25 + 36 + 49 + 64 …… + 576 + 625 = ?


    ans given below:
    
    #include<stdio.h>

int main()
{
    int i, sum = 0;
    for(i = 5; i <= 25; i++)
    {
        sum = sum +(i * i);
    }
    printf("%d\n",sum);

return 0;
}
    
    
    
    
    
    Problem 36: Write a program which will take an integer N from user and print all the numbers between N to -32. Stop your 
    program when user will give N= -1 as input.


    
    
    ans given below:
    
    #include<stdio.h>

int main()
{
   int n,i;
   scanf("%d",&n);
   if(n==-1)
       return 0;
   else if(n>-32)
   {
       for(i=n;i>=-32;i--)
        printf("%d ",i);
   }
   else
   {
       for(i=n;i<=-32;i++)
        printf("%d ",i);
   }
   printf("\n");
return 0;
}
    
    
    
    
    
    Problem 37: Write the output of the following program-

                     int main(){

                     int i;

                     for(i = 10; i < 20; i++){

                     if(i % 2 == 0)

                     continue;

                     printf(“%d “,i);

                     if(i > 16)

                     break;

                     }

                     return 0;

                     }


   
     ans given below:
     
     
     #include<stdio.h>

int main(){
    int i;
    for(i = 10; i < 20; i++){
        if(i % 2 == 0)
            continue;
        printf("%d\n",i);//Output: 11 13 15 17
        if(i > 16)
            break;
    
    return 0;
    }
   
   
   
   
    Problem 38: Write a program which will take an integer N as input from user and print Fibonacci series up to N. If user gives 
       input N = 15, you should print-

                              0 1 1 2 3 5 8 13


   
      ans given below:
      
      #include<stdio.h>

int main()
{
   int n, first = 0, second = 1;
   printf("Enter the limit N [ >= 1]: \n");
   scanf("%d",&n);

   while(first <= n){
        printf("%d ",first);
        int temp = first;
        first = second;
        second = second + temp;
   }

   return 0;
}
   
   
   
   
    Problem 39: Write a program to print the following output using loop.
   
                               *****
                                ***
                                 *
                                ***
                               *****



   
   
    ans given below:
    #include<stdio.h>

int main(){
    int i,j,k,l;
    for(i=0;i<3;i++)
    {
        for(j=0;j<i;j++)
        {
            printf(" ");
        }
        for(k=2;k>=i;k--)
        {
            printf("*");
        }
        for(l=2;l>i;l--)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=0;i<2;i++)
    {
        for(j=2;j>i+1;j--)
        {
            printf(" ");
        }
        for(k=0;k<=i+1;k++)
        {
            printf("*");
        }
        for(l=0;l<=i;l++)
        {
            printf("*");
        }
        printf("\n");
    }


return 0;
}
   
   
   
    Problem 40: Write a program to print the following output in the given format using loop-

                                   1 1

                                   12 21

                                   123 321

                                   1234 4321

                                   12345 54321


   
   
     ans given below:
     
     #include<stdio.h>

int main()
{
    int i, j, k;
    for(i = 1; i <= 5; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%d",j);
        }
        printf(" ");
        for(k = i; k >= 1; k--)
        {
            printf("%d",k);
        }
        printf("\n");
    }

    return 0;
}
   
   
   
   
    Problem 41: Find summation and average of all the numbers which are completely divisible by 3, 5 and 12 between 10 – 500. 
     [Like 60 is divisible by all of those]


    
    
    
      ans given below:
      
      #include<stdio.h>

int main()
{
    int i,sum=0,count=0;
    float avg;
    for(i=10;i<=500;i++)
    {
        if(i%3==0&&i%5==0&&i%12==0)
        {
            sum=sum+i;
            count++;
        }
    }
    avg=sum/count;
    printf("%.2f\n",avg);

    return 0;
}


    
    
    
    
    Problem 42: Write a program to produce the following output using loop-

                              1

                              2 4

                              3 6 9

                              4 8 12 16

                              5 10 15 20 25

                              6 12 18 24 30 36


    
       ans given below:
       
       #include<stdio.h>

int main()
{
    int i,j,k,l,m,n;
    for(i=1;i<=6;i++)
    {
        for(j=i;j<=(i*i);j=j+i)
        {
            printf("%d ",j);
        }
        printf("\n");
    }

    return 0;
}
    
    
    
    
    Problem 43: Write a program which will display all the prime numbers between 0 to N( N will be given by the user ).

                   If user gives N = 20, your code will print the following output-

                             2 3 5 7 11 13 17 19.




     ans given below:
     
     #include<stdio.h>

int main()
{
    int i,j,count=0,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
                count++;
        }
        if(count==2)
            printf("%d ",i);
        count=0;
    }

    return 0;
}




