#include <stdbool.h> /* C99 only */
#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 100

/* external variables */
char contents[STACK_SIZE];
int top = 0;

void stack_overflow(void)
{
  printf("Stack overflow\n");
  exit(EXIT_FAILURE);
}

void stack_underflow(void)
{
  printf("Stack underflow\n");
  exit(EXIT_FAILURE);
}

void make_empty(void)
{
  top = 0;
}

bool is_empty(void)
{
  return top == 0;
}

bool is_full(void)
{
  return top == STACK_SIZE;
}

void push(char ch)
{
  if (is_full())
    stack_overflow();
  else
    contents[top++] = ch;
}

char pop(void)
{
  if (is_empty())
    stack_underflow();
  else
    return contents[--top];

  return '\0'; /* prevents compiler warning due to stack_underflow() call */
}

int main(void)
{
  char fig;
  int cop, top_1; /*for circle*/
  printf("Enter parentheses and/or braces:");
  while ((fig = getchar()) != '\n')
  { /*push figure to contests */
    push(fig);
  }

  int test = 0; /*test*/
  while (test <= top)
    printf("%c", contents[test++]);
  printf("\n");

  cop = top;
  top_1 = top;
  for (;;)
  {
    switch (pop())
    {
    case '}':
      while (top > 0 && pop() != '{')
        ;
      if (contents[top] != '{')
      {
        printf("Parentheses/braces are NOT nested properly\n");
        return 0;
      }
      else
        contents[top] = '*';
      break;

    case ')':
      while (top > 0 && pop() != '(')
        ;
      if (contents[top] != '(')
      {
        printf("Parentheses/braces are NOT nested properly\n");
        return 0;
      }
      else
        contents[top] = '*';
      break;

    case '{':
      printf("Parentheses/braces are NOT nested properly\n");
      return 0;

    case '(':
      printf("Parentheses/braces are NOT nested properly\n");
      return 0;

    case '*':
      break;
    }
    top = --top_1;
    if (top == 0)
      break;
  }
  printf("Parentheses/braces are nested properly\n");
  return 0;
}
