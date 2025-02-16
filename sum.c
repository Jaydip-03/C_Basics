#include<stdio.h>
#include<math.h>
int main()
/*
{
    int age = 21;
    char star = '*';
    float pi = 3.14;

    printf("age is %d \n", age);
    printf("star look like %c \n", star) ;
    printf("value of pi is %f \n", pi);
    
    return 0;
}

{
    int a , b;
    printf("Enter a");
    scanf("%d",&a);

    printf("Enter b");
    scanf("%d",&b);

    printf("sum is: %d", a + b);
    return 0;

}

{
    // Area of squre

    int side;
    printf("enter side");
    scanf("%d",&side);

    printf("Area is :%d", side * side);
    return 0;
    
}

{
    // Radius of circle

    float radius;
    printf("Enter radius");
    scanf("%f",&radius);

    printf("Area is: %f", 3.14 * radius * radius);
    return 0;
    
}
*/

// {
//     // 4*3/6*2
    
//     int a = 4*2/6*2;
//     printf("%d\n",a);
    
//     // 5*2-2*3

//     int b = 5*2-2*3;
//     printf("%d",b);
    
//     return 0;

// }

{
    // total of three subject and percentage

    int jawa,html,python;
    float percentage,total;

    printf("Enter subject 1\n");
    scanf("%d",&jawa);

    printf("Enter subject 2\n");
    scanf("%d",&html);

    printf("Enter subject 3\n");
    scanf("%d",&python);

    total= (jawa + html + python);
    percentage= (total/300)*100;

    printf("total is:%d", total);
    printf("percentage is:%d", percentage);

    return 0;
}