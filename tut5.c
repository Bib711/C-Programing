//Tutorial ---> 4

// Q1 eligible to vote or not?
/*#include <stdio.h>
int main (){
    int age;
    printf("Enter your Age: "); scanf("%d", &age);
    if (age >=18)
        printf("\n: Congratulations! You are eligible to cast your vote.");
    else
        printf("\nSorry, you are not eligible to vote yet.");        
    return 0;    
}*/
 
 //Q2 to find youngest among 3
#include <stdio.h>
int main (){
    int Ram, Shyam, Ajay;
    printf("Enter Age of Ram, Shyam, and Ajay(age1 age2 age3): "); scanf("%d%d%d", &Ram,&Shyam,&Ajay);
    if ((Ram<=Shyam) && (Ram<=Ajay))
       printf("The youngest is Ram(%d years).", Ram);
    else if (Shyam<=Ram &&  Shyam<=Ajay)
        printf("The youngest is Shyam(%d years).", Shyam);
    else
        printf("The youngest is Ajay(%d years).", Ajay);    
    return 0;       
}

 