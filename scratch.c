#include <stdio.h>
#include <stdlib.h>

#define IN 0
#define OUT 1

enum week_days {SUN,MON,TUE,WED,THUR,FRI,SAT};
typedef enum week_days week_days;


void print_day(week_days day)
{
	switch(day){

	case SUN: printf("day is Sunday"); break;
        case MON: printf("day is Monday"); break;
        case TUE: printf("day is Tuesday"); break;
	case WED: printf("day is Wednesday"); break;
	case THUR: printf("day is Thursday"); break;
	case FRI: printf("day is Friday"); break;
	case SAT: printf("day is Saturday"); break;
        default: printf("there is no day called %d", day);
	}
}







week_days next_day(week_days day)
{
	return (day + 1) % 7;
}

int main(void)
{
	week_days today = SAT;
	week_days sun = SUN;
	print_day(today);
	printf("\n");
	printf("The day is %d", sun);
	printf("\n");
	print_day(next_day(today));
	printf("\n");	
	printf("%d\n", next_day(today));


    int c, state;
    while((c = getchar()) != EOF){
        if (c == ' ' || c == '\t' || c == '\n')
            printf("\n");
        putchar(c);
    }
        
    printf("The value of EOF is %d\n", c);
        return 0;

}


