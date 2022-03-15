#include<stdio.h>
void main()
{
	int ch,c;
    do
    {    
		
		printf("\n\t--------page:- 1--------\n\n");
		printf("\t1. Area\n");
		printf("\t2. Age\n");
		printf("\t3. BMI\n");
		printf("\t4. Date\n");
		printf("\t5. Data(B,KB,MB,GB,TB,PB)\n");
		printf("\t6. Discount\n");
		printf("\t7. Langth\n");
		printf("\t8. Number_system(Binary,Octal,Decimal,Hexadecimal)\n");
		printf("\t9. Speed\n");
		printf("\t10. Standard( +,-,*,/ )\n");
		printf("\t11. Tumperature\n");
		printf("\t12. Time\n");
		printf("\t13. Volum\n");
		printf("\t14. Weight and mass\n");
		printf("\t15. Exit\n");
		printf("\nEnter the choice:-  ");
        scanf("%d",&ch);
		switch (ch)
		{
		  case 1:
		       {
				  printf("\t--------------Welcome to page:- 2 -----------------\n");
                  printf("\t_______________________Area________________________\n");			
			   }
			  break;
          case 2:
		       {
				  printf("\t--------------Welcome to page:- 2 -----------------\n");
				  printf("\t_______________________Age_________________________\n");
			   }
			break;
		  case 3:
		       {
				  printf("\t--------------Welcome to page:- 2 -----------------\n");
				  printf("\t_______________________BMI_________________________\n");
			   }
			  break;
		  case 4:
				{
				  printf("\t--------------Welcome to page:- 2 -----------------\n");
				    printf("\t_____________________Date________________________\n");
			   }	
		      break;
		  case 5:
		        {
					printf("\t--------------Welcome to page:- 2 -----------------\n");
				    printf("\t_____________________Date________________________\n");
			    }	
			  break;
		  case 6:
      		   {
				  printf("\t--------------Welcome to page:- 2 -----------------\n");
				  printf("\t_____________________Discount______________________\n");
			   }
		      break;
		  case 7:
               {
				  printf("\t--------------Welcome to page:- 2 -----------------\n");
			      printf("\t_____________________Langth________________________\n");
			   }
		      break;
		  case 8:
		       {
				 printf("\t--------------Welcome to page:- 2 -----------------\n");
				    printf("\t_____________________Date________________________\n");
			   }	
			   break;
		  case 9:
	        	{
                   printf("\t--------------Welcome to page:- 2 -----------------\n");
				   printf("\t_______________________Speed________________________\n");
		        }
		      break;    
		  case 10:
	         	{
		          printf("\t--------------Welcome to page:- 2 -----------------\n");
				  printf("\t_____________________Date________________________\n");
			    }
		      break;
	       case 11:
               {
				  printf("\t--------------Welcome to page:- 2 -----------------\n");
				  printf("\t___________________Tumperature_____________________\n");
		       }
	          break;
	       case 12:
	           {
				  printf("\t--------------Welcome to page:- 2 -----------------\n");
				  printf("\t_______________________Time________________________\n");
			   }
	          break;
	       case 13:
	           {
				  printf("\t--------------Welcome to page:- 2 -----------------\n");
				  printf("\t______________________Volum________________________\n");
			   }
	          break;
	       case 14:
	           {
				  printf("\t--------------Welcome to page:- 2 -----------------\n");
				  printf("\t_________________Weight and mass___________________\n");
			   }
	          break;
	       case 15:
	          break;
	       default:
	               printf("\n\t......invalid input..........\n\tPlease choose the correct option...\n");
             break;
		}
    }while(!(ch==15));
}		