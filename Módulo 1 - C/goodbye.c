//hello world
#include <cs50.h>
#include <stdio.h>
int main(void)
{
    string answer = get_string("What's your name?\n");
    printf("Hello, %s", answer);
}
//ide.cs50.io