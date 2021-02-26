#include<stdio.h>
int main(){
    int y; //y==Year
    printf("Enter year to find out whether the year is a leap year or not\n ");
scanf("%d",&y);
if (y%100==0)
{
    if (y%400==0)
    {
        printf("this is a leap year\n");
    }
    else{
        printf("this year is not a leap year");
    }

}
else
{
    if (y%4==0)
    {
        printf("this is a leap year\n");
    }
    else{
        printf("this is not a leap year\n");
    }
}
return 0;
}

/*Explanation to the above programme
there are two kinds of year
1-Century Year
ex-1600,2000,2100
2-Non century year
ex-2002,1890,2345
so in order to be a leap year for
1.century year should be divisible by 100,400
2.non century year should be divisible by 4*/

