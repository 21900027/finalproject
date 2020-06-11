#include <stdio.h>
#include "header.h"

int main(void) {
	  int choosenum;
	    
	   // print page
	    firstpage();
	    secondpage();

	    while(1){
		       //choose the number
			printf("\n\n=============================================\n");
			printf("\nChoose the number that you want to do ");
			scanf("%d",&choosenum);

			//1 make file
			if (choosenum == 1){
			printf("you choose the make the file\n");
			printf("\n\n=============================================\n");
			makefile();
			printf("\n\n=============================================\n");
			}

			//2 show list
			else if(choosenum == 2){
			printf("you choose the show list\n");
			showlist();
			}

			 //3 read diary
			 else if(choosenum == 3){
			 printf("you choose the read diary");
			 printf("\n\n=============================================\n");
			 openfile();
			 } 
			
			 //4 exit
			 else if(choosenum == 4){
			 printf("you choose the exit");
			 byepage();
			 exit(0);
			 }
			
			else{
            		 printf("You put the wrong number!");
    			}	
	     	      }

			  return 0;
			}

