#include<stdio.h>
void draw ( int n )
{
    int k = 0, u = n;
    
    do 
    {
        u /= 10;
        k++;
    } while ( u );
    printf("**");
    for ( int i = 1; i <= k; i++ )
    {
        printf("*");
    }
    printf("**\n");
    printf("* %d *", n );
    printf("\n**");
    for ( int i = 1; i <= k; i++ )
    {
        printf("*");
    }
    printf("**");
}
int flip ( int n )
{
    int u = n, s = 0;
    while (u)
    {
        s *= 10;
        s += u % 10;
        u /= 10;
    }
    return s;
}
int main()
{
    int n;
    printf ("enter a number: ");
    scanf("%d", &n);
    draw ( n );
    printf ("\n%d is the flip for %d\n", flip( n ), n);
    draw ( flip ( n ) );
    return 0;
}
