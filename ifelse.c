#include<stdio.h>
int main()
/*
{
    
    //to check studet pass or fail

    int marks;
    printf("Enter marks");
    scanf("%d",&marks);

    if(marks >=0 && marks <= 30){
        printf("FAIL\n");
    }else if(marks >= 30 && marks <=100){
        printf("PASS\n");

    }else{
        printf("Wrong marks");
    }
return 0;

}

{
    int marks;
    printf("Enter marks");
    scanf("%d",&marks);

    if(marks < 30){
        printf("C");
    }
    else if(marks >= 30 && marks < 70){
        printf("B\n");
    }
    else if(marks >= 70 && marks < 90){
        printf("A+\n");
    }else{
        printf("A++");
    }
    return 0;
}

{
    float basic,bonus;
    printf("Enter basic");
    scanf("%f",&basic);

    if(basic <= 15000){
        bonus= basic*0.75;
    }
    else if(basic >= 15000 && basic <= 50000){
        bonus= basic*0.50;

    }
    else{
        bonus=basic*0.25;
    }
    printf("bonus is:%f",bonus);
    return 0;
    
    
}
*/
{
    // input salary and calculate tax

    float salary,tax;
    printf("Enter salary");
    scanf("%f",&salary);

    if(salary <= 8000){
        tax=salary*0;
    }
    else if(salary >= 8000 && salary <= 20000){
        tax=salary*0.001;
    }
    else if(salary >= 20000 && salary <= 50000){
        tax=salary*0.015;
    }
    else if (salary > 50000){
        tax=salary*0.0175;
    }
    else{
        printf("not valid salary");
    }

    printf("tax is: %f",tax);
    return 0;
}

    
       
    
    
    

    

