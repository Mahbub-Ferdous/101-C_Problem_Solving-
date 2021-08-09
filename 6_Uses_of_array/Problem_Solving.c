📌️📌️CHAPTER:- 6. USES OF ARRAY:------


      
      
      
      
      
      Problem 44: Take an array of integer data type of size 10. Get input from user and store the values in the array and finally 
        print the sum of those 10 integers.

		ans given below:
      
#include<stdio.h>

int main()
{
    int myarray[10]; ///integer type array declaration, which array size is 10
    int i,sum=0;
    for(i=0;i<10;i++)
    {
        scanf("%d",&myarray[i]);
        sum=sum+myarray[i];
    }
    printf("%d",sum);


    return 0;
}
      
      
      
      
      Problem 45: Say you are given the following array of integer data type- [-99,45,100,37,89,-327,245]. Now write a program which 
        will find the biggest integer and print the integer with its index.


      ans given below:
#include<stdio.h>

int main()
{
    int myArray[7]={-99,45,100,37,89,-327,245};
    int i,max=0;
    for(i=0;i<7;i++)
    {
        if(myArray[i]>max)
        {
            max=myArray[i];
        }
    }
    printf("%d",max);

    return 0;
}     
      
      
      
      
      Problem 46: Get your name from keyboard and print it with greeting like-

                        Hello Mr. “Your name”.

                        Print without quote and get your name in one word..


      ans given below:
      
#include<stdio.h>

int main()
{
    char myArray[100]; //this is called character type array or, string
    scanf("%s",myArray); //don't need '&' because myArray is a string.
    printf("Hello Mr. %s",myArray);

    return 0;
}      
      
      
      
      
      Problem 47: Take an array of integer data type of size 5. Scan the values from the user. Now print the average of integers 
       which are greater than 100.


      ans given below:
      
#include<stdio.h>

int main()
{
    int myArray[5];
    int i,count=0;
    for(i=0;i<5;i++)
    {
        scanf("%d",&myArray[i]);
        if(myArray[i]>100)
            count++;
    }
    printf("\n%d\n",count);

    return 0;
}     
      
      
      
      
      
      Problem 48: Take an array of integer data type of size 5. Scan the values from the user. Now print the output like the 
       following one-

                              Values in array: 10 25 20 15 30

                              Sum of odd values: 40

                              Sum of even values: 60


      ans given below:
#include<stdio.h>

int main()
{
    int myArray[5];
    int i,e_sum=0,o_sum=0;
    for(i=0;i<5;i++)
    {
        scanf("%d",&myArray[i]);
        if(myArray[i]%2==0)
            e_sum+=myArray[i];//sum of even numbers
        else
            o_sum+=myArray[i];//sum of odd numbers
    }
    printf("Values in array: ");
    for(i=0;i<5;i++)
    {
        printf("%d ",myArray[i]);
    }
    printf("\n");
    printf("Sum of odd values: %d\n",o_sum);
    printf("Sum of even values: %d\n",e_sum);
    return 0;
}     
      
      
      
      
      Problem 49: Take a two dimensional array of integer data type of size [3 * 3]. Take the values from the user using scanf(). 
       Now print the average of all the values.


      
      
      ans given below:
      
#include<stdio.h>

int main()
{
    int myArray[3][3]; //Two-dimensional array declaration
    int i,j,sum=0;
    float avg;
    for(i=0;i<3;i++)//nested loop for two dimensional array
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&myArray[i][j]);
            sum=sum+myArray[i][j];
        }
    }

    avg=sum/9;
    printf("%.2f\n",avg);

    return 0;
}      
      
      
      Problem 50: Take a two dimensional array of integer data type of size [3 * 3]. Take the values from the user using scanf(). 
        Now print the summation of the values of diagonal elements like the following one [1 + 5 + 9 = 15]-

                                         1 2 3

                                         4 5 6

                                         7 8 9


      
      ans given below:
      
#include<stdio.h>

int main()
{
    int myArray[3][3];
    int i,j,sum=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&myArray[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==j)
            {
                sum=sum+myArray[i][j];
            }
        }
    }
    printf("\n%d\n",sum);


    return 0;
}      
      
      Problem 51: Take three arrays [A, B and AB] of float data type of size 5. Scan the values of two arrays [A and B] from user. 
        Now assign the summation of the two arrays to the AB. (AB[i] = A[i] + B[i]).

                                 Finally, print the values of AB array.


      
      
      
      ans given below:
      
#include<stdio.h>

int main()
{
    int A[5],B[5],AB[5],i;
    for(i=0;i<5;i++)
    {
        scanf("%d",&A[i]);
    }
    printf("\n\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&B[i]);
    }
    printf("\n\n");
    for(i=0;i<5;i++)
    {
        AB[i]=A[i]+B[i];
        printf("%d ",AB[i]);
    }
    printf("\n");

    return 0;
}      
      
      Problem 52: Take two arrays [A and B] of float data type of size 5. Scan the values of two arrays from user. 
      Now compare the averages of two arrays and print the largest average with the array name.

                            Output format: [Avg: 55.55 -> A]


      
      
      
      ans given below:
      
#include<stdio.h>

int main()
{
    float A[5];
    float B[5];
    int i;
    float avg_A,avg_B,sum_A=0,sum_B=0;

    for(i=0;i<5;i++)
    {
        scanf("%f",&A[i]);
        sum_A=sum_A+A[i]; //sum of first array
    }
    avg_A=sum_A/5;//average of first array
    printf("\n\n");
    for(i=0;i<5;i++)
    {
        scanf("%f",&B[i]);
        sum_B=sum_B+B[i];//sum of second array
    }
    avg_B=sum_B/5;//average of second array
    printf("\n\n");

    if(avg_A>avg_B)
    {
        printf("Avg: %.2f -> A\n",avg_A);
    }
    else
    {
        printf("Avg: %.2f -> B\n",avg_B);
    }

    return 0;
}      
      Problem 53: You are given the following array of integers-

                 [1, 23, 10, 15, 17, 21, 44, 43, 53].

                 Now write a program which will print the prime numbers with its index.
                 
                 
                 
                 
       ans given below:     
            
#include<stdio.h>

int main()
{
    int myArray[9]={1, 23, 10, 15, 17, 21, 44, 43, 53};
    int i,j,count=0;
    for(i=0;i<9;i++)
    {
        for(j=1;j<=myArray[i];j++)
        {
            if(myArray[i]%j==0)
            {
                count++;
            }

        }
        if(count==2)
            printf("%d is a prime, index: %d\n",myArray[i],i);
        count=0;
    }


    return 0;
}




