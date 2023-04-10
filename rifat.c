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
