📌️📌️CHAPTER:- 8. START OF STRINGS:------




       
       
       
       
       
       
       Problem 64: Write a program to print the following output-

                              Enter your name:

                              Mr. Jhon Snow [This line will be given by the user]

                              Hello!! Mr. Jhon Snow


ans given below: -----      
      
#include<stdio.h>
#include<string.h> //this means it can use any function from string.h library

int main()
{

   char str[100]; //character type array/string declaration

   gets(str); //get is function instead of scanf
   printf("Hello!! Mr.%s\n",str);


    return 0;
     
      
      
      
      
      Problem 65: Take a word from user and print the word in reverse order. [If user gives “BANGLADESH”, your program should print
       “HSEDALGNAB”]


      
ans given below: -----       
      
#include<stdio.h>
    #include<string.h>

int main()
{

    char str[100];
    int length,i;
    scanf("%s",str);
    length=strlen(str);

    for(i=length;i>=0;i--)
    {
        printf("%c",str[i]);
    }

    printf("\n");

    return 0;
}      
      
      
      
      Problem 66: Find the length of a given string.[If user gives input “LovE”, you should print: 4]


      
      
      
ans given below: -----       
      
#include<stdio.h>
    #include<string.h>

int main()
{

    char str[100];
    int length=0,i=0;

    scanf("%s",str);

    while(1)
    {
        if(str[i]=='\0')
        {
            break;
        }
        else
        {
            i++;
            length++;
        }
    }

    printf("%d",length);


    return 0;
}      
      
      
      
      Problem 67: Take a string as input from the user and print the every single character of it into a separate line. If user gives
       “DHAKA”, output should look like the following-

                             D

                             H

                             A

                             K

                             A


ans given below: -----       
      
      
#include<stdio.h>
    #include<string.h>

int main()
{

    char str[1000];
    int i;
    scanf("%s",str);

    for(i=0;i<strlen(str);i++)//strlen is a function that define the string size
    {
        printf("%c\n",str[i]);
    }


    return 0;
}      
      
      
      Problem 68: Take three different string as input from the user(“We”, “ Love” and “ Bangladesh”). Now concate these three string and
       print it (“We Love Bangladesh”). [There is a leading space in “ Love” and “ Bangladesh”]


      
      
      
ans given below: -----       
      
#include<stdio.h>
    #include<string.h>

int main()
{

    char str1[3]="We";
    char str2[6]=" Love";
    char str3[12]=" Bangladesh";
    char str4[35];

    int length,i,j=0,k;

    for(i=0;i<strlen(str1);i++)
    {
        str4[j++]=str1[i];

    }
    for(i=0;i<strlen(str2);i++)
    {
        str4[j++]=str2[i];
    }
    for(i=0;i<strlen(str3);i++)
    {
        str4[j++]=str3[i];
    }
    str4[j]='\0';
    printf("%s\n",str4);



    return 0;
}      
      
      
      Problem 69: Write a program which takes a string of alphabet as input and replace all the characters with the 3rd immediate
       character of it. All the alphabets of the input string will be small letter. [If user gives input “abc” you should print “def”, if
        user gives input “xyz” you should print “abc”]


      
      
ans given below: -----       
      
#include<stdio.h>
    #include<string.h>

int main()
{

    char str[1000];
    int i;
    scanf("%s",str);

    for(i=0;i<strlen(str);i++)
    {
        if(str[i]>=120 && str[i]<=123)
        {
            printf("%c",str[i]-23);
        }
        else
        {
            printf("%c",str[i]+3);
        }

    }


    return 0;
}      
      
      
      
      
      Problem 70: You are given a string mixed with uppercase and lowercase letters . Your task is to write a program which will flip the
       letters (UpperCase -> LowerCase, LowerCase -> UpperCase).

                   Example: INPUT: OUTPUT:

                   eLepHanT Elephant

                   cAt Cat

                   SuNDAY Sunday


      
      
 ans given below: -----      
      
#include<stdio.h>
    #include<string.h>

int main()
{

    char str[1000];
    int i;
    scanf("%s",str);

    if(str[0]>=97 && str[0]<=122)
        str[0]=str[0]-32;
    printf("%c",str[0]);
    for(i=1;i<strlen(str);i++)
    {
        if(str[i]>=65 && str[i]<=91)
            printf("%c",str[i]+32);
        else
            printf("%c",str[i]);
    }


    return 0;
}      
      
      Problem 71: Write a program which will take a sentence as input and tell us how many words are there. [If user gives input “I love
       Bangladesh”, then the output should be: 3]


      
      
ans given below: -----       
      
#include<stdio.h>
    #include<string.h>

int main()
{

    char str[1000];
    int i,word_count=1;
    gets(str);


    for(i=0;i<strlen(str);i++)
    {
        if(str[i]==' ')
            word_count++;
    }
    printf("%d\n",word_count);

    return 0;
}      
      
      
      
      Problem 72: A string is palindrome if it seems same from the both side. Like “ABA”, “XXYXX”, “M” all are palindromes and “XY” is
       not a palindrome. Now write a program which will take a string as input from the user and print “YES, It is a palindrome” if it
        satisfies the condition otherwise print “No, It is not a palindrome”.


      
      
      
ans given below: -----       
      
      
#include<stdio.h>
    #include<string.h>

int main()
{

    char str[100];
    int length,i,flag=0;

    scanf("%s",str);

    length=strlen(str)-1;

    for(i=0;i<=length/2;i++)
    {
        if(str[i]==str[length-i])
            flag=1;
        else
            flag=0;
    }
    if(flag==0)
    {
        printf("No, It is not a palindrome\n");
    }
    else
    {
        printf("YES, It is a palindrome\n");
    }


    return 0;
}      
      
      
      
      Problem 73: Let’s take a string and you have to find how many alphabets are there and their repetitions. Case sensitive.

                     Ex: Input: Output:

                     AaaBBc A(1)B(2)a(2)c(1)



ans given below: ----- 


#include<stdio.h>
    #include<string.h>

int main()
{

    char str[1000];
    int i;
    int arr[123];
    scanf("%s",str);
    for(i=0;i<123;i++)arr[i]=0;
    for(i=0;i<strlen(str);i++)
    {
        arr[str[i]]++;
    }

    for(i=0;i<123;i++)
    {
        if(arr[i]!=0)
            printf("%c(%d)",i,arr[i]);
    }
    return 0;
}
