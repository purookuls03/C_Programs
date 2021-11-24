#include<stdio.h>

void main()
{
	int pop_man, pop_women, lit_man, lit_women, ill_lit_man, ill_lit_women, tot_pop, literacy;
	
	tot_pop=80000;
	
    pop_man=(52*tot_pop)/100;
   
	pop_women=tot_pop-pop_man;
   
    literacy=(48*tot_pop)/100;
   
	lit_man=(35*tot_pop)/100;
   
	lit_women=literacy-lit_man;
   
    ill_lit_man=pop_man-lit_man;
   
    ill_lit_women=pop_women-lit_women;
   
   
    printf("Total population of the city   : %d\n", tot_pop);
    
	printf("Total population of man        : %d\n", pop_man);
    
	printf("Total population of women      : %d\n", pop_women);
    
	printf("Literate population of man     : %d\n", lit_man);
    
	printf("Literate population of women   : %d\n", lit_women);
    
	printf("Illiterate population of man   : %d\n", ill_lit_man);
    
	printf("Illiterate population of women : %d\n", ill_lit_women);
    

}