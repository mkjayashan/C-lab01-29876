#include<stdio.h>
int main()
{
     float bs,ns,inc;
     char empname[15];
     printf("Enter the employee name");
     scanf("%s",&empname);
     printf("Enter the basic salary");
     sacnf("%f",&bs);

     if(bs>=10000)
        inc=bs*0.15;
     else if(bs>=5000)
        inc=bs*0.10;
     else
        inc=bs*0.05;
     ns=bs+inc;
     printf("Employee name is %s\n",empname);
     printf("new salary is %.2f",ns);


}
