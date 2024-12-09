/*
CONTROL STATEMENTS (MENTAION THE FLOW OF CODE)

1)CONDITIONAL STATEMENT(DECISION MAKING STATEMENTS)
  if statement
  if else statement
  else if statement
  nested if statement
  switch case


*/

#include<stdio.h>
int main()
{


  int marks;
  printf("Enter the marks\n");
  scanf("%d",&marks);//-7

  if((marks<=100) && (marks>=90))
  {
    printf("A");
  }

  else if((marks<90) && (marks>=75))
  {
    printf("B");
  }

  else if((marks<75) && (marks>=60))
  {
    printf("C");
  }

  else if((marks<60) && (marks>=35))
  {
    printf("D");
  }

  else{
    printf("fail.....");
  }
}