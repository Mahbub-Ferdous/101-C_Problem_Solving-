📌️📌️CHAPTER:- 4. APPLY YOUR CONDITIONS:------


      
      
      
      
      Problem 16: Suppose you are going to apply for admission in a college. If you got GPA 5 in SSC exam then you can apply for 
      that college. Now give your GPA as input from the keyboard and print “YES” if you can apply otherwise print “NO”.

		ans given below:


#include<stdio.h>
void main(){
    double GPA;
    printf("Enter Your SSC GPA : \n");
    scanf("%lf", &GPA);
    if( GPA == 5.00){
        printf("Your Admission : Yes \n");

    }else{
        printf("Your Admission : No \n");
    }
return 0;
}





Problem 17: Take a value from user and assume that- it is the number of his math exam.

                Now you have to write a program which shows the grade depending on the given scale.

                (A+: 80-100, A: 70-79, A-: 60-69, B: 50-59, C: 40-49, D :33-39 ,F :0-32)


      ans given below:


#include<stdio.h>
int main(){
    double math_score;
    printf("Enter Your Math Exam Number : \n");
    scanf(" %lf", &math_score);
    if( math_score <= 32){
        printf(" Grade : 'F'\n");
    }else if( math_score <= 39){
        printf(" Grade : 'D'\n");
    }else if( math_score <= 49){
        printf(" Grade : 'C'\n");
    }else if( math_score <= 59){
        printf(" Grade : 'B'\n");
    }else if( math_score <= 69){
        printf(" Grade : 'A-'\n");
    }else if( math_score <= 79){
        printf(" Grade : 'A'\n");
    }else{
        printf(" Grade : 'A+'\n");
    }
    return 0;


}

      
      
      
      
      Problem 18: You are going to open a bank account . If your age is greater than 18 then you can open an account. Get your age 
      by input and print “Yes” if you can open an account otherwise print “No”.


      
      
      ans given below:



#include<stdio.h>
void main(){
    double age;
    printf("Please Enter Your Age:  \n");
    scanf("%lf", &age);
    if( age >= 18){
        printf(" WOW You Can Open An Account.xD\n");
    }else{
        printf(" Your Bad!!! You Can't Open An Acoounts For Your Age!! Better Luck Nest Time \n");
    }

return 0;
}

      
      
      
      Problem 19: Write a program which determines whether a number is ODD or EVEN.


      ans given below:




#include<stdio.h>
void main(){
    int x;
    printf("Enter a number\n");
    scanf("%d", &x);
    if( x % 2 == 0){
        printf("You entered an even number \n");
    }else{
        printf("You entered an odd number \n");
    }






return 0;
}
      
      
      
      
      
      
      Problem 20: Take an integer number as input from user and print “Yes” if the number is divisible by 3 and 5. And print “No” 
      if the number is not.

		ans given below:



#include<stdio.h>
void main(){
    int a;
    printf("Enter a number\n");
    scanf("%d", &a);
    if( a/3 || a/5 ){
        printf("Yes\n");
    }else{
        printf("No\n");
    }


return 0;
}





      
      
      
      
    Problem 21: Take 3 integers from user using scanf() function and write a program to find the maximum one.


      ans given below:




#include<stdio.h>
void main(){
    int a,b,c;
    printf("Enter 3 Integer Number\n");
    scanf("%d%d%d", &a,&b,&c);
    if( a>b){
        printf("Max : %d\n", a);
    }else if( b>c){
        printf("Max : %d\n", b);
    }else{
        printf("Max : %d\n", c);
    }




return 0;
}

      
      
      
      
      
      
      
      Problem 22: Take a small letter alphabet as input and print whether it is VOWEL or CONSONANT.


      
      ans given below:



#include<stdio.h>
void main(){
    char ch;
    printf("Enter a small letter alphabet: \n");
    scanf("%c", &ch);
    if( ch =='a'|| ch =='e' || ch =='i'|| ch =='o'|| ch =='u'){
        printf("this is a VOWEL\n");
    }else{
        printf("this is a CONSONANT\n");
    }

return 0;
}

      
      
      
      
      
      
      
      Problem 23: Write a program that takes an integer as input [ 1 – 12 ] and print the corresponding month name. 
      [If user gives input ‘1’ you should print ‘January’]


      
      ans given below:



#include<stdio.h>
void main(){
int x;
  printf("Enter a number between 1 to 12: \n");
   scanf("%d", &x);
    if( x == 1){
        printf("January\n");
        }else if( x == 2){
            printf("February\n");
            }else if( x == 3){
                printf("March\n");
                }else if( x == 4){
                    printf("April\n");
                    }else if( x == 5){
                        printf("May\n");
                    }else if( x == 6){
                        printf("June\n");
                }else if( x == 7){
                    printf("July\n");
            }else if( x == 8){
                printf("August\n");
        }else if( x == 9){
            printf("September\n");
    }else if( x == 10){
        printf("October\n");
}else if( x == 11){
    printf("November\n");
}else{
    printf("December\n");
}




return 0;
}
      
      
      
      
      
      
      
      Problem 24: You are given the rank and salary scale of a company-

                  Rank – salary

                  1 – 2,50,000 BDT

                  2 – 2,10,000 BDT

                  3 – 1,50,000 BDT

                  4 – 80,000 BDT

                  >=5 – 50,000 BDT


                  Now, take the rank as input from the user and print the salary of the given rank. 
                  [If user gives input ‘3’ you should print ‘Your Salary: 1,50,000 BDT’]

    
    
    
    ans given below:



#include<stdio.h>
void main(){
int a;
  printf("Enter a number : \n");
    scanf("%d", &a);
      if( a == 1){
        printf(" 2,50,000 BDT\n");
        }else if( a == 2){
            printf(" 2,10,000 BDT\n");
        }else if( a == 3){
            printf(" 1,50,000 BDT\n");
    }else if( a == 4){
        printf(" 80,000 BDT\n");
}else if(a >= 5){
  printf(" 50,000 BDT\n");
  return 0;
}

return 0;
}
    
    
    
    
    Problem 25: Take two integers indicating the x and y coordinate of a two-dimensional graph paper where the center point 
    is x = 0 and y = 0. Now print the quadrant of the given point. [If user gives input (4,5) you should print ‘First quadrant’; 
    If user gives input (-4,-5) you should print ‘Third quadrant’ ]




		ans given below:



#include<stdio.h>
void main(){
int a;
  printf("Enter a number : \n");
    scanf("%d", &a);
      if( a == 1){
        printf(" 2,50,000 BDT\n");
        }else if( a == 2){
            printf(" 2,10,000 BDT\n");
        }else if( a == 3){
            printf(" 1,50,000 BDT\n");
    }else if( a == 4){
        printf(" 80,000 BDT\n");
}else if(a >= 5){
  printf(" 50,000 BDT\n");
  return 0;
}

return 0;
}





