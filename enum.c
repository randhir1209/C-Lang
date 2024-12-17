#include<stdio.h>
enum Suit{Heart, Diamond, Space, Club}s;
enum  Rank{one,two,three,four,five,six,seven,eight,nine,ten,jack,queen,king}r;
void printcard(enum Suit s,enum Rank r)
{
    switch (r)
    {
    case one:printf("One"); break;
    case two:printf("two"); break;
    case three :printf("three"); break;
    case four:printf("four"); break;
    case five :printf("five"); break;
    case six:printf("six"); break;
    case seven:printf("seven"); break;
    case eight:printf("eight"); break;
    case nine:printf("nine"); break;
    case ten:printf("ten"); break;
    case jack:printf("jack"); break;
    case queen:printf("queen"); break;
    case king:printf("king"); break;
     default:
        printf("Wrong input\n");break;
    }

    printf("of");
    switch(s)
    {
        case Club: printf("Club\n");
        case Diamond: printf("Diamond\n");
        case Heart:  printf("Heart\n");
        case Space:   printf("Space\n");
    }
}
int main()
    {
        int i;
        for(i = s; i<=r; i++)
        {
            for( r=one ;r<=s;r++)
            {
                printf("suit,rank");
            }
        }
        return 0;
    }