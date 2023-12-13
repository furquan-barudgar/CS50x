#include <stdio.h>
#include <cs50.h>
int main(void)
{
    // TODO : Get user name
    string name = get_string("What's Your name?\n");
    // TODO : Print hello with users name
    printf("hello, %s\n", name);
}