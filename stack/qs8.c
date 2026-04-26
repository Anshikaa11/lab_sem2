#include <stdio.h>
#include <string.h>
char stack[100];
int top = -1;
void push(char c)
{
    if(top == 99)
    {
        printf("Stack Overflow\n");
    }
    else
    {
        top++;
        stack[top] = c;
    }
}
char pop()
{
    if(top == -1)
    {
        return '#';
    }
    else
    {
        return stack[top--];
    }
}

int main()
{
    char exp[100];
    int i;

    printf("Enter expression: ");
    scanf("%s", exp);

    for(i = 0; exp[i] != '\0'; i++)
    {
        if(exp[i] == '(')
        {
            push(exp[i]);
        }
        else if(exp[i] == ')')
        {
            if(pop() == '#')
            {
                printf("Unbalanced Parentheses\n");
                return 0;
            }
        }
    }

    if(top == -1)
        printf("Balanced Parentheses\n");
    else
        printf("Unbalanced Parentheses\n");

    return 0;
}