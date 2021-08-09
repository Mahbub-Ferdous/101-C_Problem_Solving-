📌️📌️CHAPTER:- 9. POITER DE COMPLEXITY:------


         
         
         
         
         
         Problem 74: Take an integer variable named X and assign X = 5. Now print its memory address like the following output-

                                        Memory Address of X is : XXXXXX


         
         
         
         
         
         
         Problem 75: Take two pointer variables of integer type named pX and pY. Now take another two variables of integer data type
          named X and Y. Assign X = 100 and Y = 200. Assign the address of X to pX and address of Y to pY. Now print the values of X and
           Y using pX and pY.


         
         
         
         
         
         
         
         Problem 76: Write the output of the following code without compiling-

                       #include<stdio.h>

                       int main(){

                       int a[]={5,10,15,20,25};

                       int *pA;

                       pA = &a[2];

                       printf(“%d %d”,*pA, *(pA+2));

                       return 0;

                       }


         
         
         
         
         
         
         
         Problem 77: Is there any error in the following program? If not what will be the output-

                            #include<stdio.h>

                            int main(){

                            int i;

                            double *pA;

                             double a[]={5,10,15,20,25};

                            pA = a;

                            for(i = 0; i < 5; i++){

                            printf(“%.2lf “,*(pA+i));

                            }

                            return 0;

                            }


         
         
         
         
         
         
         
         Problem 78: Take an integer variable named VAR and assign VAR = 500. Take a pointer variable named *ptr of integer type and
          assign the address of VAR to ptr. Then take another pointer to pointer variable named **pptr of integer type and assign the
           address of pointer variable ptr to pptr. Now print the value of VAR using the VAR , ptr and pptr respectively in three
            different lines.

                                    Memory Address of X is : XXXXXX


         
         
         
         
         
         Problem 79: Write down the output of the following program without running-

                        #include <stdio.h>

                        int main()

                        {

                        char *str = “Bangladesh”;

                        printf(“%c %c %c”,*str, *(str + 3), *(str + 4));

                        return(0);

                        }

                        Memory Address of X is : XXXXXX


        
        
        
        
        
        
        
        Problem 80: Take an array of string named fruitNames and store four fruit names (“Mango”, “Jack-fruit”, “Banana”, “Litchi”). Now
         iterate the array using loop and print the names of the fruits each in a separate line.






