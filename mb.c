#include<stdio.h>
#include<math.h>
#include<string.h>
void byte(float );
void kilobyte(float);
void magabyte(float);
void terabyte(float);
void gigabyte(float);
void petabyte(float);
void main()
{
	int ch,c;
	char name[40];  // print name
    printf("\n\n\n\n\nEnter your Name:- ");
    fgets(name,40,stdin);
    printf("Welcome ");
    puts(name);
	printf("\tYou are now inside the calculator created by Mr. Raj Kishore.\n\tThis calculator is made by C programming language.");
	printf("You can do any kind of calculation on this.\n\tPlease choose the correct option and calculate.");
    do
    {    
		printf("\n\n\t__________________calculator_______________________");
		printf("\n\t--------------------page:- 1-----------------------\n\n");
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
		     do
				{   
				  printf("\t--------------Welcome to page:- 2 -----------------\n");
				  printf("\t_______________________Data________________________\n");
				  printf("\n\t 1. Byte(B) to (KB,MB,GB,TB,PB)\n");
				  printf("\t 2. Kilobyte(KB) to (B,MB,GB,TB,PB)\n");
				  printf("\t 3. Megabyte(MB) to (B,KB,GB,TB,PB)\n");
				  printf("\t 4. Gigabyte(GB) to (B,KB,MB,TB,PB)\n");
				  printf("\t 5. Terabyte(TB) to (B,KB,MB,GB,PB)\n");
				  printf("\t 6. Petabyte(PB) to (B,KB,MB,GB,TB)\n");
                  printf("\t 7. <<Bake(page:-1)<<\n");
				  printf("\t 8. Exit\n");
				  printf("\n Enter the choice:-  ");
				  scanf("%d",&c);	
				  switch (c)
				  {
				    case 1:
					{
					    float n;
	                    printf("Enter the byta:- ");
	                    scanf("%f",&n);
	                    float r=(n/1024)/1024;
					    byte(r);
                        kilobyte(r);
                        magabyte(r);
                        terabyte(r);
                        gigabyte(r);
                        petabyte(r);
					} 
					break;
				   case 2:
				    {
					   float n;
	                    printf("Enter the kilobyta:- ");
	                    scanf("%f",&n);
	                    float r=n/1024;
                        byte(r);
                        kilobyte(r);
                        magabyte(r);
                        terabyte(r);
                        gigabyte(r);
                        petabyte(r);
				    }
                    break;
				   case 3:
				    {
					    float n;
	                    printf("Enter the magabyta:- ");
	                    scanf("%f",&n); 
					    byte(n);
                        kilobyte(n);
                        magabyte(n);
                        terabyte(n);
                        gigabyte(n);
                        petabyte(n);
				    }
				    break;
				   case 4:
				    {
					    float n;
	                    printf("Enter the Gigabyte:- ");
	                    scanf("%f",&n);
	                    float r=(n*1024);
                        byte(r);
                        kilobyte(r);
                        magabyte(r);
                        terabyte(r);
                        gigabyte(r);
                        petabyte(r);
				    }
				    break;
				   case 5:
				    {
					    float n;
	                    printf("Enter the terabyta:- ");
	                    scanf("%f",&n);
	                    float r=(n*1024)*1024;
                        byte(r);
                        kilobyte(r);
                        magabyte(r);
                        terabyte(r);
                        gigabyte(r);
                        petabyte(r);
				    }
					   break;
				   case 6:
				    {
					    float n;
	                    printf("Enter the patabyta:- ");
	                    scanf("%f",&n);
	                    float r=(n*1024)*1024*1024;
                        byte(r);
                        kilobyte(r);
                        magabyte(r);
                        terabyte(r);
                        gigabyte(r);
                        petabyte(r);
				    }
					break;
				   case 7:
				    break;
				   case 8:
				          exit(0);       
				   default:
	                      printf("\n\t......invalid input..........\n\tPlease choose the correct option...\n");
				    break;
				  }
				}while(!(c==7));
				
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
				 do
				   {
					    printf("\t--------------Welcome to page:- 2 -----------------\n");
			            printf("\t__________________Number_system____________________\n");
						printf("\n\t 1. Decimal to Binary\n");
						printf("\t 2. Binary to Decimal\n");
						printf("\t 3. Decimal to Octal\n");
						printf("\t 4. Octal to Decimal\n");
						printf("\t 5. Decimal to Hexadecimal\n");
						printf("\t 6. Hexadecimal to Decimal\n");
						printf("\t 7. <<Bake(page:-1)<<\n");
						printf("\t 8. Exit\n");
						printf("\nEnter the choice:-  ");
                        scanf("%d",&c);
					    switch (c)
					  {
					   case 1:
					    {	
                           int n,s=0,d=1,a,r;
						   printf("Enter any Decimal number:-  ");
						   scanf("%d",&n); 
	                       while (n)
	                       {
		                     r=n%2;
		                     n=n/2;
		                     s=s+d*r;
		                     d=d*10;
                           }
	                        printf("\nBinary number= %d\n\n",s);
						}
					    break;
					   case 2:
					   {
						   int n,r,b=0,w=1;
						   printf("\nEnter any Binary number:-");
						   scanf("%d",&n);
						   while (n)
						   {
							   r=n%10;
							   b=b+r*w;
							   n=n/10;
							   w=w*2;						  
						   }
						   printf("Decimal= %d",b);
					   }
					    break;
					   case 3:
					   {
						    int n,s=0,d=1,a,r;
						    printf("Enter any Decimal number:-  ");
				    	    scanf("%d",&n); 
	                        while (n)
	                        {
		                      r=n%8;
		                      n=n/8;
		                      s=s+d*r;
		                      d=d*10;
                        	}
	                        printf("Octal number= %d\n\n",s);
					   }
					   break;
					  case 4:
					   {
						   int r,n,o=0,w=1;
						   printf("Enter any octal number:- ");
						   scanf("%d",&n);
						   while (n)
						   {
							   r=n%10;
							   o=o+r*w;
							   n=n/10;
							   w=w*8;
						   }
						   printf("Decimal number= %d\n\n");
					   }
					   break;
					  case 5:
					   {
						   int n,r,i=1;
						   char hex[50];
	                       printf("Enter any decimal number:-  ");
						   scanf("%d",&n); 
                           while (n)
						   {
							   r=n%16;
							   if (r<10)
							     r=r+48;
							   else
							     r=r+55;
							   hex[i]=r;
							   i++;
							   n=n/16;
						   }
						   printf("\nHexadecimal= ");
						   for ( i=i-1; i>=1; i--) {
							   printf("%c",hex[i]); 
						    } printf("\n");
					   }
					   break;
					  case 6:
					   {
						 
					   }
				       break;
					  case 7:
					   break;
					  case 8:
					         exit(0);			   
					  default:
	                         printf("\n\t......invalid input..........\n\tPlease choose the correct option...\n");
					   break;
				    }
				  }while(!(c==7));
				   
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
				   printf("\t____________________Standard________________________\n");
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
void byte(float mb){
	printf("Byte= %.25f b\n",mb*1024*1024);
}
void kilobyte(float mb){
printf("kilobyte= %.25f kb\n",mb*1024);
}
void magabyte(float mb){
printf("Magabyte= %.25f mb\n",mb);
}
void gigabyte(float mb){
printf("Gigabyte= %.25f tb\n",mb/1024);
}
void terabyte(float mb){
printf("terabyte= %.25f tb\n",(mb/1024)/1024);
}
void petabyte(float mb){
printf("Patabyte= %.25f pb\n",((mb/1024)/(1024))/1024);
}