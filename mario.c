#include <cs50.h>
#include <stdio.h>

int get_positive_int(string prompt);
void hash(int n);
void blank(int n);
void build_pyramid(int n);


int main(void)
{
    int height = get_positive_int("input height of the block: ");
    build_pyramid(height);
}

int get_positive_int(string prompt)
{
    int n;
    do 
    {
	printf("Height: ");
	scanf("%i", &n);
    }
    while (n<1);
    return n;
}

void build_pyramid(int n)
{
    for (int i = 0;i <= n;i++)
    {
        int count_spaces = n -i;
        blank(count_spaces);
        hash(i);
        blank(2);
        hash(i);
        printf("\n");
    }
}

void hash(int n)
{
    for(int i=0;i<n;i++)
    {
        printf("#");
    }
}

void blank(int n)
{
    for(int i=0;i<n;i++)
    {
        printf(" ");
    }
}
