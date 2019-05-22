#include<stdio.h>
#include<cs50.h>
#include<math.h>

float get_positive_request(string prompt);
int conversion(float x);
int temp_check(int x);

int currency_value[4] = {25,10,5,1};

int main(void)
{
    float amount = get_positive_request("What's the amount? :");
    int in_cents = conversion(amount);
    int number_coins = temp_check(in_cents);
    printf("%i\n",number_coins);
    
}


float get_positive_request(string prompt)
{
    float f;
    do
    {
        scanf("%f",&f);
    }
    while (f<0);
    return f;
}

int conversion(float x)
{
    float f = x*100;
    return (int)f;
}

int temp_check(int x)
{
    int coins=0;
    int remain;
    int t_coins=0;
    do
    {
        for (int i=0;i<4;i++)
        {
            t_coins = x / currency_value[i];
            x = x - (t_coins*currency_value[i]);
            coins = coins + t_coins;
        }
        
    }
    while (x>0);
    return coins;
}

