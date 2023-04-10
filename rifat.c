#include<stdio.h>
 int main ()
 {
     int h;
     printf("Enter the centemeter the height of a parson\n");
     scanf("%d",&h);
     if(h<150){
        printf("This parson is Dwarf");
     }
     else if(h>=165){


        printf("This person is Tall");


     }
     else if(h==150){


        printf("This person is Avarege");
     }

 }
/*-------numbber gretest and lowest----*/

#include <stdio.h>
int main()
{
    int num1, num2, num3;

    printf("Input the values of three numbers : ");
    scanf("%d %d %d", &num1, &num2, &num3);
    printf("1st Number = %d,\t2nd Number = %d,\t3rd Number = %d\n", num1, num2, num3);
    if (num1 > num2)
    {
        if (num1 > num3)
        {
            printf("The 1st Number is the greatest among three. \n");
        }
        else
        {
            printf("The 3rd Number is the greatest among three. \n");
        }
    }
    else if (num2 > num3)
        printf("The 2nd Number is the greatest among three \n");
    else
        printf("The 3rd Number is the greatest among three \n");
}



3. Eligible candidetes


#include<stdio.h>
int main()
{

int p,c,m,t,pm;
printf("Eligible Criteria:\n");
printf("Marks in math>=65\n");
printf("and marks in Chem>=50\n");
printf("and marks in Phy>=55\n");
printf("Totale the three Number>=190\n");
printf("and Total in Math and Physics>=140\n");

 printf("Input the marks obtained in Physics :");
   scanf("%d",&p);
   printf("Input the marks obtained in Chemistry :");
   scanf("%d",&c);
   printf("Input the marks obtained in Mathematics :");
   scanf("%d",&m);
   printf("Total marks of Maths, Physics and Chemistry : %d\n",m+p+c);
   printf("Total marks of Maths and  Physics : %d\n",m+p);


   if(m>=65)
    if(p>=55)
    if(c>=50)
    if((m+c+p)>=190 && (p+m>=140) )
    printf("The candidetes Is Eligible\n");
   else
    printf("he candidetes Is not Eligible\n");
    else
       printf("he candidetes Is not Eligible\n");
       else
       printf("he candidetes Is not Eligible\n");
else

           printf("he candidetes  notIs Eligible\n");




}
