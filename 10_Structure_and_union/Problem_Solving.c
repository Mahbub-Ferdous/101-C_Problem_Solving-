📌️📌️CHAPTER:- 10. STRUCTURE AND UNION :------





           
           
           
           
           
           Problem 81: Create a simple structure named Student that holds the following variables-

                         i. id (integer)

                         ii. cgpa (float)

                         iii. name (string)

                 Now create an instance of that structure named s1 and scan the values from the user. 
                 Finally print the id, cgpa and name which user entered.


ans given below:          
           
 #include<stdio.h>

struct student{
    int id;
    float cgpa;
    char name[20];
};
int main()

{
    struct student s1;
    printf("Enter ID: ");
    scanf("%d",&s1.id);
    printf("Enter CGPA: ");
    scanf("%f",&s1.cgpa);
    printf("Enter Name: ");
    scanf("%s",&s1.name);
    printf("\n**Students Information**\n\n");
    printf("ID: %d\n",s1.id);
    printf("CGPA: %f\n",s1.cgpa);
    printf("Name: %s\n",s1.name);

return 0;
}          
           
           
           Problem 82: Create a simple structure named Book that holds the following data fields-

                            i. id (integer)

                            ii. title (string)

                            iii. author(string

                         Now create two structure variables of Book type named book1 and book2. Set the following 
                         information for

                         the books-

                         For book1:

                         id: 101

                         title: C Programming Hand Note

                         author: Mahbub

                         For book2:

                         id: 102

                         title: Programming with Fun

                         author: Joy Billah

                          Finally, print all the information of the two books.


         
ans given below:         
         
         
#include<stdio.h>
    #include<stdio.h>

struct Book{
    int id;
    char title[50];
    char author[20];
};
int main()

{
    struct Book book1;
    struct Book book2;

    book1.id=101;
    strcpy(book1.title,"C Programming Hand Note");
    strcpy(book1.author,"Mukla.c");

    book2.id=102;
    strcpy(book2.title,"Programming with Fun");
    strcpy(book2.author,"Joy Billah");

    printf("Book1 Information:\n");
    printf("ID: %d\n",book1.id);
    printf("Title: %s\n",book1.title);
    printf("Author: %s\n\n",book1.author);

    printf("Book2 Information:\n");
    printf("ID: %d\n",book2.id);
    printf("Title: %s\n",book2.title);
    printf("Author: %s\n",book2.author);

return 0;
}         
         
         
         
         
         Problem 83: Create a structure named TanisBall where we have two fields- color (string) and weight (float). Now create a pointer
          variable of structure TanisBall named myBall. Scan the field values for myBall from user and finally print the information of
           myBall using that pointer variable myBall.


         
         
         
         
ans given below:          
         
         
#include<stdio.h>
    #include<stdio.h>

struct TanisBall{
    char color[15];
    float weight;

};

int main()
{
    struct TanisBall Ball;
    struct TanisBall *myBall;
    scanf("%f",&Ball.weight);
    scanf("%s",&Ball.color);
    myBall=&Ball;
    printf("%f\n",myBall->weight);
    printf("%s",myBall->color);

return 0;
}         
         
         
         
         Problem 84: Create a structure named Writer with two fields- name (string) and genre (string). Then create an array of Writer
          named writerRecords. Insert the following records into the array-

                       i. name- Mukla.C; genre- Technical

                       ii. name- Mostasim Billah; genre- Technical

                       iii. name- Mahady Joy; genre- Technical

                    Finally, print the records of the array by iterating the array using loop.


        
        
        
ans given below:         
#include<stdio.h>
    #include<stdio.h>

struct Writer{
    char name[20];
    char genre[20];

};

int main()
{

    struct Writer writerRecords[3];
    strcpy(writerRecords[0].name,"Mukla.c");
    strcpy(writerRecords[0].genre,"Technical");
    strcpy(writerRecords[1].name,"Mostasim Billah");
    strcpy(writerRecords[1].genre,"Technical");
    strcpy(writerRecords[2].name,"Mahadi Hasan Joy");
    strcpy(writerRecords[2].genre,"Technical");

    int i;
    for(i=0;i<3;i++)
    {
        printf("%d.\n",i+1);

        printf("%s\n",writerRecords[i].name);
        printf("%s\n",writerRecords[i].genre);
    }

return 0;
}       
        
        
        
        Problem 85: Create a structure named Product with following two fields-

                           1. name (string)

                           2. price (double)

                 Then create a function named printProductInfo() which takes a parameter of Product type and print the information of
                  that Product. Finally, in main function create a variable of structure Product named myProduct and call the
                   printProductInfo() function passing myProduct as the parameter.



ans given below: 

#include<stdio.h>
    #include<stdio.h>

struct Product{
    char name[15];
    double price;

}myProduct;

void printProductInfo(struct Product p)
{
    printf("Product Name: %s\n",p.name);
    printf("Product Price: %.2lf",p.price);
}



int main()
{


    strcpy(myProduct.name,"Sunsilk");
    myProduct.price=2.00;

    printProductInfo(myProduct);
return 0;
}
