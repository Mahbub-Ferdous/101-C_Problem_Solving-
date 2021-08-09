/// Problem 1.Take 3 variables a, b, c. Assign value to the variables are 10, 20, 30. Now print the sum of the three variables


ans given below:

#include<stdio.h>
void main(){
    int a = 10;
    int b = 20;
    int c = 30;
    int sum = (a+b+c);
    printf("The Sum of a,b,c : %d\n", sum);



return 0;
}

/// Problem 2. Write a program to print the output:
                  /* Ascii value of a is :.......
                     Ascii value of @ is :.......*/



ans given below:

#include<stdio.h>
void main(){
    char ch = 'a';
    char ch2 = '@';
    printf("ASCII code of a is : %d\n", ch);
    printf("ASCII code of @ is : %d\n", ch2);



return 0;
}



/// Problem 3.Take 4 double variable x,y,z and avg. Assign value to the variables are as you want. Now calculate the avarage of x,y, and z and assign it to avg.
        /* Now print the avg value*/


ans given below:

#include<stdio.h>
void main(){
    double x = 4.35;
    double y = 5.99;
    double z = 20.23;
    double avg = ( x+y+z)/3;
    printf("The average value is : %lf\n", avg);



return 0;
}


/// Problem 4. print "Bangladesh" without quatation sign by using ascii values. Where =[ b=66,a=97,n=110,g=103,l=108,a=97,d=100,e=101,s=115,h=104]

ans given below:

#include<stdio.h>
void main(){
    int B = 66,a = 97,n = 110,g = 103,l = 108,d = 100,e = 101,s = 115,h = 104;
    printf("%c%c%c%c%c%c%c%c%c%c\n\n", B,a,n,g,l,a,d,e,s,h);


return 0;
}



/// Problem 5. Take 2 integer i=0 and j=0.Now print the output of the following program without runnig the code:


                        int main()
                        int i = 0;
                        int j = 0;
                        j = i++ + ++i
                        printf("%d %d" i, j);   /// ans is 2 2
                        return 0;


/// Problem 6. You are given the radius of a circle, r = 5.5. We know that pi = 3.1416.Now write a program to calculate the area
/// of the given circle and print it up to 2 digit after the decimal point. [The result sjhould be like xx.xx]


ans given below:

#include<stdio.h>
void main(){
    float r = 5.5;
    float pi = 3.1416;
    float area = pi*r*r;
    printf("The Area Of the circle is : %.2f\n", area);




return 0;
}


/// Problem 7. Rahul got 65.00 on physics, 83.50 on mathematics, 85.75 on C programming and 67.50 on english. Now write the
///                  a program to calculate the average of his marks on 4 subjects and print it up to 2 digit after decimal point




ans given below:


#include<stdio.h>
void main(){
    float p = 65.00;
    float m = 83.50;
    float c = 85.75;
    float e = 67.50;
    float avg = (p+m+c+e)/4;
    printf("Rahul Average Number is :- %.2f\n", avg);



return 0;
}
