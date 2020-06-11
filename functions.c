#include "header.h"

void firstpage(){
	  printf("=============================================\n");
	    printf("\t\t\t\t The Diary ");
	      printf("\n\n\n");
	        printf("\t\t\t  make your own diary\n");
		  printf("\t\t\t write your Daily life");
		    printf("\n\n");
		      printf("=============================================\n\n");
		        
}

void secondpage(){
	  printf("=============================================\n");
	    printf("\n");
	      printf("\t\t\t1. Make today diary\n");
	        printf("\t\t\t2. show list\n");
		  printf("\t\t\t3. read diary\n");
		    printf("\t\t\t4. exit ");
		      printf("\n\n");
		        printf("=============================================\n");

}

void byepage(){
	  printf("\n=============================================\n");
	    printf("\t\t\t\t Bye ");
	      printf("\n\n\n");
	        printf("          O\n");
		  printf("         _|_\n");
		    printf("   ,_.-_' _ '_-._,\n");
		      printf("    \\ (')(.)(') /\n");
		        printf("  _, `\\_-===-_/`  ,_\n");
			  printf(">  |----\"\"\"\"\"----|  <\n");
			    printf("  `""`--/   _-@-\\--`""`\n");
			      printf("     |===L_I===|\n");
			        printf("      \\       /\n");
				  printf("      _\\__|__/_\n");
				    printf("     `""""`""""`\n");

				      printf("\t\t\t  Have a good day!\n");
				        printf("\n\n");
					  printf("=============================================\n\n");
					    

}

void makefile(){
	  FILE *fp;
	    char filename[50];//filename
	      char *p_filename;
	        char txt[10] = ".txt";
		  char clear[10];
		    int check;//checking the user's Opinion
		      char contents[500];
		        int i, j = 0;
			  time_t t = time(NULL);
			    struct tm tm = *localtime(&t);

	 struct tm {
		    int tm_min;         /* 분, range 0 to 59             */
		       int tm_hour;        /* 시간, range 0 to 23            */
		          int tm_mday;        /* 일, range 1 to 31             */
			     int tm_mon;         /* 월, range 0 to 11             */
			        int tm_year;        /* 1900년 부터의 년                */
				 };


	 while(1){
		     printf("Write the title of today's diary.\n");
		         scanf("%s", filename);
			     printf("Are you sure about this title?\n");
			         printf("If you want to change the title, press 1\n");
				     printf("If not, press 2.\n");
				         scanf("%d",&check);
					       if(check == 2){
						               break;
							             }
					           }
		
	   strcat(filename, txt);//meke filename to txtfile  
	     p_filename = &filename[0];
	       savelist(p_filename);//save list

	    fp = fopen(filename, "w");//makefile
	      printf("Success in creating your page!\n");
	        ///////////////////////////////////////////////////////
	  printf("Write a diary.\n");
	    printf("DO NOT USE ENTER!\n");
	      printf("And, Please put x at the end\n");
	        scanf("%[^x]",contents);
		  scanf("%[^\n]",clear);
	////////////////////////////////////////////////////////
	 fprintf(fp, "=============================================\n");
	   
	  //set data
	   fprintf(fp, "Date %d %d %d\n", tm.tm_year, tm.tm_mon, tm.tm_mday);
	   fprintf(fp, "Time %d:%d", tm.tm_hour, tm.tm_min);
	   
	//contents
	  for(i = 0; i < 400; i++){
	      if(contents[i] == '\0'){
	            break;
	                }
	                    fprintf(fp,"%c",contents[i]);
	                        j++;
	                            if(j == 40){
	                                  j = 0; 
	                                        fprintf(fp,"\n");
	                                            }
	                                              } 
	 fclose(fp);
         
	}

	void savelist(char* p_filename){
		FILE *fp;
		int name_length;


		fp = fopen("list.txt", "a");

		fprintf(fp," %s\n",p_filename);

		fclose(fp);
	}

	void showlist(){
		  FILE *fp;
		    char list[500];

		      fp = fopen("list.txt", "r");

		        fread(list, sizeof(list),1, fp);    // list.txt에서 문자열을 읽음

			  printlist
			  printf("=============================================\n");
			  printf("\n");
			  printf("%s\n", list);    
			  printf("=============================================\n");
			  printf("\n");
			  
			  fclose(fp);  
			 
	 }

	void openfile(){
		  FILE *fp;
		    char filename[50];
		      char contents[500] = "";

		        printf("write the diary name that you want to read\n");

			  scanf("%s", filename);
			    
			    fp = fopen(filename, "r");

			      fread(contents, sizeof(contents),1, fp);    // list.txt에서 문자열을 읽음

			        printf("\n");
				  printf("%s\n", contents);    

				    fclose(fp);  
	}

