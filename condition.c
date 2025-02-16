#include<stdio.h>
int main()

    // if else statment

   /* int age;
    printf("Enter Age");
    scanf("%d",&age);

    if (age > 18){
        printf("Adult\n");
        printf("they can drive\n");
        printf("they can vote\n");
    }

    else{
        printf("not adult\n");
        
    }
    printf("thank you");
    return 0;

        
    }
    */
   {
    // if else if

    int age;
    printf("Enter age");
    scanf("%d",&age);

    if(age >= 18){
        printf("adult\n");
    }
    else if(age>13 && age <18){
        printf("teenager\n");
    }
    else{
        printf("chield");
    }
    return 0;
   }
    
   



