📌️📌️CHAPTER:- 11. BASIC FILE I/O :------


         
         
         
         
         
         
         Problem 86: Write a program that opens a file named myFile.txt on write mode and write 100(integer) into that file.


ans given below:---         
         
#include<stdio.h>

main() {
   FILE *fp;

   fp = fopen("myFile.txt", "w");
   fprintf(fp, "%d", 100);
   fclose(fp);
         
         
         
         
         
         
         Problem 87: Write a program which will delete all the text from a text file and write “LOVE” on that file.


ans given below:---          
         
         
#include<stdio.h>

int main() {
   FILE *fp;
   fp = fopen("myFile.txt", "w");
   fprintf(fp, "%s", "Love");

return 0;
}         
         
         
         
         
         
         Problem 88: Write a program which will create a file named myFile.txt and write “We LovE” on that file. Then read the file and
          print the text of that file into console. Finally, append “Our Country” with the previous text of that file and print the whole
           text again into console.


ans given below:---          
        
#include<stdio.h>

int main()
{
    int c;
    FILE *file;

    file = fopen("newFile.txt", "w");
    fprintf(file, "%s", "We Love");
    fclose(file);

    file = fopen("newFile.txt", "r");
    if (file) {
        while ((c = getc(file)) != EOF)
            putchar(c);
        fclose(file);
    }
    printf("\n");

    file=fopen("newFile.txt", "a");
    fprintf(file,"%s"," Our Country");
    fclose(file);

    file = fopen("newFile.txt", "r");
    if (file) {
        while ((c = getc(file)) != EOF)
            putchar(c);
        fclose(file);
    }
return 0;
}        
        
        
        
        
        
        Problem 89: Create a text file in your computer and write 10 integers in 10 separate lines. Now write a program which will open
         the file and read that 10 integers. Finally print the average of that ten integers.


ans given below:---          
        
#include<stdio.h>

int main()
{
    FILE *file;
    int n[10];
    int i=0,sum=0;

    file = fopen("integers89.txt", "r");
    while(fscanf(file,"%d",&n[i])!=EOF)
         i++;
    for(i =0;i < 10 ;i++)
    {
        sum=sum+n[i];
    }
    printf("%.2f",sum/10.0);

}        
        
        
        
        
        Problem 90: Create a text file in your computer and write a paragraph about INTERNET on that file. Then write a program which
         will open that file and print the whole paragraph into console.



ans given below:---  


#include<stdio.h>

int main()
{
    char par[100000];
    FILE *file;
    file=fopen("paragraph.txt","r");
    while(fgets(par,10000,file))
    {
        printf("%s",par);
    }
    printf("\n");
return 0;
}

