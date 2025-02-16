#include<stdio.h>
#include<math.h>
int main()
/*
{
    printf("%d\n", 5<4 && 4<3);
    printf("%d\n", 5>4 && 4>3 );
    printf("%d\n", 5<4 || 4>3 );
    printf("%d\n", 10 != 9);

    return 0;
}

{
    // to check if number is divisible by 2

    int x;
    printf("Enter Number");
    scanf("%d",&x);
    printf("%d\n", x % 2 == 0);
    return 0;
    
    
}

{
    // WAP to check num is even or odd

    //even -> 1
    //odd -> 0
 
    int x;
    printf("Enter number");
    scanf("%d",&x);
    printf("%d\n", x % 2 == 0);
    return 0;
}


{
    // print true or false

    //if its sunday and its snowing -> True

    int isSunday =1;
    int isSnowing =1;

    printf("%d\n", isSunday && isSnowing);
    return 0;
}


{
    // if its monday or its raining -> true

    int isMonday;
    int isRaining;

    printf("%d", isMonday || isRaining);
    return 0;
}

{
    //if num is greter than 9 and less than 100 -> true

    int x;
    printf("Enter number");
    scanf("%d",&x);
    printf("%d\n", x>9  && x<100 );
    return 0;
    
}
*/
{

    // Avarge of three number

    int a,b,c;
    float avarge;

    printf("Enter firt number");
    scanf("%d",&a);

    printf("Enter second number");
    scanf("%d",&b);

    printf("Enter third number");
    scanf("%d",&c);

    avarge = a+b+c/3;

    printf("Avarage is : %d", avarge);
    return 0;
}