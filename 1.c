#include<stdio.h>
#include<windows.h>

int main()
{
    FILE *ff;
    ff = fopen("store.txt","a");
    int i;
    char a[100];
    printf("\n\n\n\n\n");
    for(i=0;i<30;i++)printf(" ");
    for(i=1;i<50;i++)printf("_");
    printf("\n\n");
    for(i=0;i<45;i++)printf(" ");
    printf("Search Your Day\n");
    for(i=0;i<30;i++)printf(" ");
    for(i=1;i<50;i++)printf("_");
    printf("\n\n");
    for(i=0;i<30;i++)printf(" ");
    printf("Enter Your Name: ");
    scanf("%[^\n]", a);
    fprintf(ff,"%s ",a);
    printf("\n\n");
    for(i=0;i<30;i++)printf(" ");
    printf("Enter Your Date(dd/mm/yyyy): ");
    int x,y,z;
    scanf("%d/%d/%d", &x,&y,&z);
    fprintf(ff, "%d/%d/%d ", x,y,z);
    printf("\n\n");
    for(i=0;i<30;i++)printf(" ");
    for (i=1;i<=50;i++)
    {
        printf(".");
        delay(5);
        if(i==(50/2))delay(1000);
    }
    printf("\n\n\n");
    for(i=0;i<30;i++)printf(" ");
    printf("Your Day is: ");
    int d = z%100;
    int c = z/100;
    if (y==1)
    {
        y=11;
        d=d-1;
    }
    else if (y==2)
    {
        y=12;
        d=d-1;
    }
    else if (y==3)
    {
        y=1;
    }
    else if (y==4)
    {
        y=2;
    }
    else if (y==5)
    {
        y=3;
    }
    else if (y==6)
    {
        y=4;
    }
    else if (y==7)
    {
        y=5;
    }
    else if (y==8)
    {
        y=6;
    }
    else if (y==9)
    {
        y=7;
    }
    else if (y==10)
    {
        y=8;
    }
    else if (y==11)
    {
        y=9;
    }
    else if(y==12)
    {
        y=10;
    }
    int d1 = d/4;
    int c1 = c/4;
    int y1 = ((13*y)-1)/5;
    int sum1 = x+y1;
    int sum2 = d1+d;
    int sum3 = c1-(2*c);
    int b = sum1+sum2+sum3;
    int sum = b%7;
    if(b>=0)
    {
        if (sum==0)
        {
            fprintf(ff,"Sunday\n");
            printf("Sunday\n");

        }
        else if (sum==5)
        {
            printf("Friday\n");
            fprintf(ff,"Friday");
        }
        else if (sum==1)
        {
            printf("Monday\n");
            fprintf(ff,"Monday\n");
        }
        else if (sum==2)
        {
            printf("Tuesday\n");
            fprintf(ff,"Tuesday\n");
        }
        else if (sum==3)
        {
            printf("Wednesday\n");
            fprintf(ff,"Wednesday\n");
        }
        else if (sum==4)
        {
            printf("Thursday\n");
            fprintf(ff,"Thursday\n");
        }
        else if (sum==6)
        {
            printf("Saturday\n");
            fprintf(ff,"Saturday\n");
        }
    }
    else
    {
        int b1 =b/7;
        if (sum==0)
        {
            int su = sum+7;
            if (su==0)
            {
                printf("Sunday\n");
                fprintf(ff,"Sunday\n");
            }
            else if (su==5)
            {
                printf("Friday\n");
                fprintf(ff,"Friday\n");
            }
            else if (su==1)
            {
                printf("Monday\n");
                fprintf(ff,"Monday\n");
            }
            else if (su==2)
            {
                printf("Tuesday\n");
                fprintf(ff,"Tuesday\n");
            }
            else if (su==3)
            {
                printf("Wednesday\n");
                fprintf(ff,"Wednesday\n");
            }
            else if (su==4)
            {
                printf("Thursday\n");
                fprintf(ff,"Thursday\n");
            }
            else if (su==6)
            {
                printf("Saturday\n");
                fprintf(ff,"Saturday\n");
            }
        }
        else
        {
            b1=-(b1-1);
            int b2 =((7*b1)+b);
            int summ = b2;
            if (summ==0)
            {
                printf("Sunday\n");
                fprintf(ff,"Sunday\n");
            }
            else if (summ==5)
            {
                printf("Friday\n");
                fprintf(ff,"Friday\n");
            }
            else if (summ==1)
            {
                printf("Monday\n");
                fprintf(ff,"Monday\n");
            }
            else if (summ==2)
            {
                printf("Tuesday\n");
                fprintf(ff,"Tuesday\n");
            }
            else if (summ==3)
            {
                printf("Wednesday\n");
                fprintf(ff,"Wednesday\n");
            }
            else if (summ==4)
            {
                printf("Thursday\n");
                fprintf(ff,"Thursday\n");
            }
            else if (summ==6)
            {
                printf("Saturday\n");
                fprintf(ff,"Saturday\n");
            }
        }
    }
    fclose(ff);
    getche();
}
