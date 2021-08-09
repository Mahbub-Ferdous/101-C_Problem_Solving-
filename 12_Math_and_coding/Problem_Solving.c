📌️📌️CHAPTER:- 12. MATH AND CODDING :------



        

        
        
        
        
        Problem 91: Write a program which takes an integer as input and print “YES, Prime” if the number is prime otherwise “NO”.


        
ans given below:
        
        
#include<stdio.h>
#include<math.h>

int main()
{

    int n,i,flag=0;

    scanf("%d",&n);

    for(i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
        printf("YES");
    else
        printf("NO");
    return 0;
}             
        
        
        
        Problem 92: Write a program which takes the coordinates of two points (x1, y1) and (x2, y2) from the user and print the distance
         of those two points.


        
ans given below:        
        
#include<stdio.h>
#include<math.h>

int main()
{

    int x1,x2,y1,y2;

    scanf("%d%d%d%d",&x1,&y1,&x2,&y2);

    double distance=pow((x1-x2),2)+pow((y1-y2),2);
    distance=sqrt(distance);

    printf("%lf\n",distance);

    return 0;
}    
        
        
        Problem 93: Write a program which will take the length of three sides of a triangle and print the measures of the three angles.


        
        
        
ans given below:        
        
#include<stdio.h>
#include<math.h>

int main()
{

   double a,b,c,A,B,C;
   double pi=acos(-1); // For value of pi we use acos(-1).
   scanf("%lf%lf%lf",&a,&b,&c);


    A=((b*b+c*c)-(a*a))/(2*b*c);
    A=acos(A)*(180/pi);
    B=((c*c + a*a) -( b*b))/(2*c*a);
    B=acos(B)*(180/pi);
    C=180-(A+B);
    printf("A=%lf \nB=%lf \nC=%lf\n",A,B,C);

    return 0;
}           
        
        
        Problem 94: Read two numbers A and B from user. Calculate and print the sum of their factorials. Be careful, because the resulT
         may have more than 15 digits.


        
        
ans given below:       
        
#include<stdio.h>
#include<math.h>

int factorial(int a)
{
    if(a==0)
        return 1;
    else
        return a*factorial(a-1);
}

int main()
{

    long long int a,b,sum;

    scanf("%lld%lld",&a,&b);
    sum=factorial(a)+factorial(b);

    printf("%lld",sum);


    return 0;
}   
        
        
        Problem 95: A dog eats just half of its supply of food in one day. Write a program that scans the initial capacity of the food
         supply (in Kg), and calculate how many days will pass before the dog eat all the supply food until left 1 Kg or less.


        
ans given below:       
        
#include<stdio.h>


int main()

{
    float food;
    int day=0;

    printf("Enter dogs food in kg: ");
    scanf("%f",&food);

    while(food>1)
    {
        food=food/2;
        day++;
    }

    printf("Result is: %d day",day);

return 0;
}        
        
        
        
        Problem 96: Take a decimal number as input and print the binary version of that number.


        
        
ans given below:        
        
#include<stdio.h>
	  #include<math.h>
int main()
{
    int i,count=0;
    float x;

        scanf("%f",&x);
        while(x>1)
        {
            x=x/2;
            count++;
        }
        printf("%d\n",count);
        count=0;

return 0;
}        
        
        
        Problem 97: Write a program which will find the greatest common divisor of two numbers. If user gives input 5 and 30, your output
         should be 5.

ans given below:
        
#include <stdio.h>
int main()
{
    int n1, n2, i, gcd;
    scanf("%d %d", &n1, &n2);

    for(i=1; i <= n1 && i <= n2; ++i)
    {
        if(n1%i==0 && n2%i==0)
            gcd = i;
    }
    printf("%d",gcd);

    return 0;
}        
        
        
        
        
        
        Problem 98: Take two numbers of 20 digits and print the sum of those two numbers.

ans given below:
        
#include<stdio.h>
int main()
{
    int num1[22], num2[22], sum[23];
    char s1[23], s2[23];
    int l1, l2;
    printf("Enter Number 1: ");
    scanf("%s", &s1);
    printf("Enter Number 2: ");
    scanf("%s", &s2);
/* convert character to integer*/

    for (l1 = 0; s1[l1] != '\0'; l1++)
    num1[l1] = s1[l1] - '0';

    for (l2 = 0; s2[l2] != '\0'; l2++)
    num2[l2] = s2[l2] - '0';

    int carry = 0;
    int k = 0;
    int i = l1 - 1;
    int j = l2 - 1;
    for (; i >= 0 && j >= 0; i--, j--, k++)
        {
            sum[k] = (num1[i] + num2[j] + carry) % 10;
            carry = (num1[i] + num2[j] + carry) / 10;
        }
    if (l1 > l2)
    {
        while (i >= 0)
        {
            sum[k++] = (num1[i] + carry) % 10;
            carry = (num1[i--] + carry) / 10;
        }
    if(sum[k-1]!=carry)
        sum[k++]=carry;

    }
    else if (l1 < l2)
        {
            while (j >= 0)
            {
                sum[k++] = (num2[j] + carry) % 10;
                carry = (num2[j--] + carry) / 10;
            }
            if(sum[k-1]!=carry)
                sum[k++]=carry;
        }else
        {
            if (carry > 0)
                sum[k++] = carry;
        }

    printf("Result: ");
    for (k--; k >= 0; k--)
        printf("%d\n", sum[k]);

return 0;
}       
        
        
        
        
        
        Problem 99: Write a program to calculate the nearest integer number of the square root value of a number. User will give the
         number as input. Your program will find the square root value of that number and print the nearest integer of that value.


                      Problem 100: Find the largest prime number between 100000 to 500000
                      
ans given below:                      
                      


//Prime Sieve
#include<stdio.h>
#include<math.h>
#define MAX 10001000

int prime[MAX];
int p[1000000];
int kk=0;

void prime_sieve()
{
    prime[1]=1;
    prime[0]=1;
    int i,j;
    for( i=4;i<MAX;i+=2) prime[i]=1;
    for( i=3;i<=sqrt(MAX);i+=2)
    {
        if(prime[i]==0)
        {
            for( j=i*i;j<MAX;j+=i) prime[j]=1;
        }
    }
    for( i=0;i<MAX;i++)
    {
        if(prime[i]==0)
        {
            p[kk]=i;
            kk++;
        }
    }
}
int main()
{
    prime_sieve();
    int n,i;
    for(i=100000;i<=500000;i++)
    {
       n=i;
       if(prime[n]==1) printf("Not Prime : %d\n",n);
       else printf("Prime : %d\n",n);
    }
    return 0;
}                      
