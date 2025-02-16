#include<stdio.h>
int main()

  /*int day; // 1-mon; 2-tue; 3-wed; ....
  printf("Enter days(1-7)");
  scanf("%d",&day);

  switch (day){

    case 1 : printf("Monday\n");
    break;
    case 2 : printf("Tuesday\n");
    break;
    case 3 : printf("Wednesday\n");
    break;
    case 4 : printf("Thursday\n");
    break;
    case 5 : printf("Friday\n");
    break;
    case 6 : printf("Saturday\n");
    break;
    case 7 : printf("Sunday\n");
    break;

    default : printf("not valid day");
    

  }
}

{
  char day; // m->mon; T->tues; ..
  printf("Enter day (1-7) ");
  scanf("%s",&day);

  switch (day){
    case 'M': printf("Monday\n");
    break;

    case 'T': printf("Tuesday\n");
    break;

    case 'W': printf("Wednesday\n");
    break;

    case 't': printf("Thursday\n");
    break;

    case 'F': printf("Friday\n");
    break;

    case 'S': printf("Saturday\n");
    break;

    case 's': printf("Sunday\n");
    break;

    default: printf("not valid day");

    return 0;
  }
}
*/
{
  int number;
  printf("Enter number");
  scanf("%d",&number);

  if(number >= 0){
    printf("positive\n");
  
  if(number %2 == 0){
    printf("Even\n");
  }
  else{
    printf("Negative\n");
  }
  }else{
    printf("odd\n");
  }
  return 0;
  }