#include <stdio.h>
#include <Windows.h>
#include<time.h>
#include<stdlib.h>
#include<string.h>
void fordelay(int j)
{   int i,k;
    for(i=0;i<j;i++)
         k=i;
}

struct {
	char username[10],password[10],acc_type[10],check1[10];
	long long int age,phone,acc_no;
	int amt;
	int amountToDeposit,amttowithd,balance;
	
}t,add,h,q,b,O;
int main_exit=0,test1=0;
int k=0,m=0,n=0,o=0,i=0,v=0,initial=0;
int anotherTransaction=0;
char acc1[10]="saving",acc2[10]="SAVING",acc3[10]="current",acc4[10]="CURRENT";



void intro() {
    int i, j, space, rows=10, star=0;
    char u;
     system("color B");
     
    printf("\n\n\n\n\n\n\n\n");
    
    for(i = 1; i <= rows; i++) {printf("\t\t\t\t\t    ");
     if(i <= 5){
        
            for(space = 1; space <= 5-i; space++) {
               printf(" ");
            }
            
            while(star != (2*i - 1)) {
                printf("$");
                star++;;
            }
            star=0;
           
            printf("\n");
       } else {
        
            for(j = 0; j < 9; j++){
            
			 if((int)(j/3) == 1)
                 printf(" ");
             else
                 printf("$");
     }         
  printf("\n");      
       }
    }printf("\n\t\t-------------------------------------------------------------------");
     printf("\n\t\t    \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\ $ PRAKSHAL BANK PVT. LTD. $ \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\      ");
    printf("\n\t\t-------------------------------------------------------------------\n\n\n\n\n\n");
printf("\n\t\t           ENTER 0 TO CONTINUE PRESS ANY KEY TO EXIT:           ");

printf("\n\t\tENTER = ");

 scanf("%c",&u);
 if(u=='0')
 {
 	system("cls");
 	title();
  clockt();
 	maindo();
 }
 else
 {
  clockt();
  system("color 9");
  printf("\n\n\n\n\t\t\t          YOU CHOOSE EXIT\n\n\n");
                for(i=0;i<=10;i++)
        {
            fordelay(1000000000);
            printf("........");
        }
          
 	titlend();
 }
    
}

int logout()
{
	printf("\n\n\n\n\t\t\tLOGGING OUT");
                for(i=0;i<=10;i++)
        {
            fordelay(1000000000);
            printf("...");
        }
            system("cls");
                   title();
			  clockt();        
            		
	maindo();
}
void fetch()
{
	
		printf("\nFetching Your Details Please Wait");
		    for(i=0;i<=10;i++)
        {
            fordelay(100000000);
            printf(".");
        }
                
         	system("cls");
         	title();
			  clockt();
			  

	
}
void fetch1()
{
	int i1;
	
		printf("\nFetching Your Details Please Wait");
		    for(i1=0;i1<=10;i1++)
        {
            fordelay(100000000);
            printf(".");
        }
                
         	system("cls");
         	titleb();
			  clockt();
			  

	
}
void details()
{system("color 11");

	FILE *old1;
    old1=fopen("PRAKSHAL.dat","a+");
    
    fetch();
    
    printf("\n****************************************************************************************");
    printf("\nUser Name== %s",add.username);
	printf("\t\t   Age == %d",add.age); printf("\t\t   Phone No.== %d",add.phone);
	printf("\n****************************************************************************************");
    
    printf("\nAcc Type== %s",add.acc_type);
    
	printf("\n****************************************************************************************");
	fclose(old1);
	    


        
}
void transaction()
{
details();
	system("color B"); 
 int choice;
    FILE *old;
    old=fopen("prakshal.dat","a+");

        f9:
   printf("\nEnter the account no. of the customer: ");
    scanf("%d",&h.acc_no);
    
    if(add.acc_no==h.acc_no)
            {	system("cls");
            	title();
            	clockt();
            	details();
            	system("color B"); 
				h.amt=0;
                h.amt+=add.amt;
                 l44: 
    printf("\nAccount no. == %d",add.acc_no);
    	
                  printf("\n========================================================================================"); 
 
			   printf("\n\nDo you want to\n1.Deposit\n2.Withdraw\n3.Balance\n4.LogOut\n5.Exit\n");
			                        printf("\n========================================================================================"); 
					printf("\nEnter = ");
                scanf("%d",&choice);
                      printf("\n========================================================================================"); 

                 switch(choice)
                {
                	case 1:
                	      printf("\n****************************************************************************************");

                    printf("\n\nEnter the amount you want to deposit:  ");
                    scanf("%d",&h.amt);
                          printf("\n****************************************************************************************");

                    add.amt+=h.amt;
                    fprintf(old,"%d %s %s %d %d %s %d \n",add.acc_no,add.username,add.password,add.age,add.phone,add.acc_type,add.amt);
                    printf("\n\nYour  %d  RS. Deposited successfully!** new balance is  %d  RS.",h.amt,add.amt);
                          printf("\n****************************************************************************************"); 

                   printf("\n\nLOG IN AGAIN FOR MORE TRANSACTION: \n\n\t\t\tCONNECTING[");
                   
                   for(i=0;i<=10;i++)
        {
            fordelay(1000000000);
            printf("--");
        }
                           printf("]");

                   system("cls");
                   title();
			  clockt();
			  test1--;
            		login();
               break;
               
                case 2:
                   printf("\n****************************************************************************************"); 

                    printf("\n\nEnter the amount you want to withdraw: ");
                    scanf("%d",&h.amt);
                    if(h.amt==0)
                    {
					goto l55;
					}
                          printf("\n****************************************************************************************"); 
					if(add.amt>=h.amt)
                    {
					add.amt-=h.amt;
                    fprintf(old,"%d %s %s %d %d %s %d \n",add.acc_no,add.username,add.password,add.age,add.phone,add.acc_type,add.amt);
                    printf("\n\nYour  %d  RS. Withdrawn successfully! ** new balance is  %d  RS.",h.amt,add.amt);
                          printf("\n****************************************************************************************"); 
					}
					else
					{
						l55:
						                    printf("\n\n**YOU ENTRED %d RS. BUT YOUR BALANCE IS %d RS.\n ** SO YOUR TRANSATION FAILED!! **",h.amt,add.amt);
						                    printf("\n\n\n\n\t\t\tCONNECTING[");
                for(i=0;i<=10;i++)
        {
            fordelay(1000000000);
            printf("--");
        }
         printf("]");
                    system("cls");
                    title();
			  clockt();
			  	details();
			  	system("color B"); 
						                    goto l44;

						
					}
                    printf("\n\nLOG IN AGAIN FOR MORE TRANSACTION: \n\n\t\t\tCONNECTING[");
                for(i=0;i<=10;i++)
        {
            fordelay(1000000000);
            printf("--");
        }
         printf("]");
                    system("cls");
                    title();
			  clockt();
			  test1--;
            		login();
                    
                break;
                
                
                case 3:
                     printf("\n****************************************************************************************");

                    printf("\n\nbalance = %d RS.",h.amt);
                	      printf("\n****************************************************************************************");

                    fprintf(old,"%d %s %s %d %d %s %d \n",add.acc_no,add.username,add.password,add.age,add.phone,add.acc_type,add.amt);
                    printf("\n\nLOG IN AGAIN FOR MORE TRANSACTION: \n\n\t\t\tCONNECTING[");
                for(i=0;i<=10;i++)
        {
            fordelay(1000000000);
            printf("--");
        }
         printf("]");
                    system("cls");
                    title();
			  clockt();
			  test1--;
            		login();
                    
				break;
				
				
				case 4:
                    test1--;  
                    logout();
				break;
				
				case 5:
                  
                    titlend();
				break;
				
				default : 
            	                    
                    printf("\n########################################################################################");

            	                    printf("\n\nInvalid!!");
printf("\n########################################################################################");
            	                    fordelay(100000000000);
                    system("cls");
                    title();
			  clockt();
			  

            	                   
			  	details();
			  	system("color B"); 
            	                    goto l44;
		}
        }
        else
        {
        	 printf("\n========================================================================================"); 

            	                    printf("\n\nInvalid!!");
            	                          printf("\n========================================================================================"); 
            	                          goto f9;
		}
   
   fclose(old);
  
}

 int titlendb()
  {system("color B");
  	 		printf("\n\t\t==================================================="); 
            printf("\n\t\t**********PRAKSHAL ONLINE STORE PVT. LTD.**********"); 

            printf("\n\t\t==================================================="); 
                  printf("\n                                  *Visit Again*");  
				  exit(0);   
                  
  }
  
  int titlend()
  {system("color B");
  	 		printf("\n\t\t==================================================="); 
            printf("\n\t\t**************PRAKSHAL BANK PVT. LTD.**************"); 

            printf("\n\t\t==================================================="); 
                  printf("\n                                  *Visit Again*");  
				  exit(0);   
                  
  }

int titleb()
{
	system("color B");
            printf("\n\t\t==================================================="); 
             
             printf("\n\t\t**********PRAKSHAL ONLINE STORE PVT. LTD.**********"); 

            printf("\n\t\t==================================================="); 
                  printf("\n                                  *Welcomes You*"); 

                  printf("\n \t\t                                                  -made by *Tushar Mali*"); 

	      return 0;
}

int title()
{
	system("color B");
            printf("\n\t\t==================================================="); 
             
              printf("\n\t\t**************PRAKSHAL BANK PVT. LTD.**************"); 

            printf("\n\t\t==================================================="); 
                  printf("\n                                  *Welcomes You*"); 

                  printf("\n \t\t                                                  -made by *Tushar Mali*"); 

	      return 0;
}

int clockt() 
{ 
    system("color 17");
    time_t s, val = 1; 
    struct tm* current_time; 
    SYSTEMTIME str_t;
	GetSystemTime(&str_t);
    
  
    s = time(NULL); 
  
    current_time = localtime(&s);
      printf("\n========================================================================================"); 

	  printf("\nTime: "); 
 
    printf("%02d:%02d:%02d", 
           current_time->tm_hour, 
           current_time->tm_min, 
           current_time->tm_sec); 
           	  printf("\tDate: "); 
           	  printf("%d-%d-%d"
	,str_t.wDay,str_t.wMonth,str_t.wYear);

             printf("\n========================================================================================"); 

  
    return 0; 
} 


int login()
{system("color 2");
char ch;
	FILE *dg;
	dg=fopen("prakshal.dat","r");
  
   
  
   
   l22:
   
   
   
    
   

          printf("\n========================================================================================"); 

        printf("\n\nEnter username :"); scanf("%s",t.username); printf("\n");       
	
		printf("\nEnter password :"); for(i=0;i<strlen(add.password);i++)

              {

              ch = getch();

              t.password[i] = ch;

              ch = '*' ;

               printf("%c",ch);

              } printf("\n");       printf("\n========================================================================================"); 

        if (strcmp(add.username,t.username)==0 || strcmp(strupr(h.check1),t.username)==0 || strcmp(strlwr(h.check1),t.username)==0 && strcmp(add.password,t.password)==0 )
            {      printf("\n========================================================================================"); 

                printf("\n\n\nCorrect!!");
                printf("\n\n\nPassword Match!\n\n\n\n\n\n\n\n\n\t\t\tLOGGING IN");
        for(i=0;i<=10;i++)
        {
            fordelay(100000000);
            printf(".");
        }
                
         	system("cls");
         	title();
			  clockt();
         			transaction();
         	
            }
            else
            {      printf("\n########################################################################################");

                printf("\n\nWrong!!\n\n");
                     printf("\n########################################################################################");

         printf("\nenter 1 for try again or 2 to create new acc.\npress any key to exit:\nEnter =  ");
         scanf("%d",&k);
               printf("\n****************************************************************************************");

         if(k==1)
         {
         	system("cls");
         	title();
			  clockt();
		 goto l22;
         }
		 else if(k==2)
		 {
			system("cls");
			title();
			  clockt();	 
         crtnew();
     	}
         
         	titlend();
            
      
			}
			fclose(dg); 
			return 0;
}
 
int crtnew()
{
	
    int j,choice;
    FILE *ptr;

    ptr=fopen("prakshal.dat","a+");
    
    system("cls");
    title();
			  clockt();
			  system("color 8");
			        printf("\n****************************************************************************************");

    printf("\n\n\t\t       \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\ NEW ACCOUNT \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n");

    printf("\nEnter the acc. number:");
    scanf("%d",&add.acc_no);
    

        printf("\nEnter the name or username:");
    scanf("%s",add.username);
    for(j=0;j<strlen(add.username);j++)
    {
    	h.check1[j]=add.username[j];
	}

    printf("\nEnter the password:");
    scanf("%s",add.password);

    printf("\nEnter the age:");
    scanf("%d",&add.age);

	printf("\nEnter the phone number: ");
    scanf("%d",&add.phone);

    printf("\nEnter the amount to deposit: ");
    scanf("%d",&add.amt);

    l88:
    printf("\nType of account:\n\t#Saving\n\t#Current\n\n\tEnter your choice:");
    scanf("%s",add.acc_type);
		      printf("\n****************************************************************************************"); 
		      
		      if(strcmp(add.acc_type,acc1)==0 || strcmp(add.acc_type,acc2)==0)
		      {
		      	printf("\nYour 'SAVING' Account created successfully!");
			  }
			  else if(strcmp(add.acc_type,acc3)==0 || strcmp(add.acc_type,acc4)==0)
		      {
		      	printf("\nYour 'CURRENT' Account created successfully!");
			  }
			  else
			  {
			  	printf("\n**INVALID::");
			  	printf("\n########################################################################################");
			  	goto l88;
			  }

        fprintf(ptr,"%d %s %s %d %d %s %d\n",add.acc_no,add.username,add.password,add.age,add.phone,add.acc_type,add.amt);


    fclose(ptr);
          printf("\n****************************************************************************************"); 

  

    add_invalid:
    	      printf("\n****************************************************************************************");

    printf("\n\n\n\t\tEnter 1 to go to the main menu and 0 to exit:");
    scanf("%d",&main_exit);
    system("cls");
    title();
			  clockt();
    if (main_exit==1)
        maindo();
    else if(main_exit==0)
            titlend();
    else
        {      printf("\n########################################################################################");

            printf("\nInvalid!\a");
                  printf("\n########################################################################################"); 

            goto add_invalid;
        }
}

int maindo()
{system("color c");
	int choice,r,rs;
     
     
     printf("\n***************************'You have to make an acc. for login.'************************");
     
l1:
  	 printf("\n*******************************Enter any option to be Do!*******************************\n");
    printf("\n========================================================================================\n"); 

  printf("\n1.LOG IN"); 
  printf("\n2.CREATE ACC."); 
  printf("\n3.ONLINE STORE");
  printf("\n4.INFO");
  printf("\n5.DETAILS");
  printf("\n6.EXIT");
    printf("\n========================================================================================"); 
  printf("\nEnter : "); 

  scanf("%d",  &choice); 
  
  
  switch(choice){
    case 1:
     printf("\n****************************************************************************************");
system("cls");
title();
			  clockt();
    login();
      
      
    
    break; 
    
    case 2:
    
      printf("\n****************************************************************************************");
system("cls");
title();
			  clockt();
    crtnew();
    
    break; 
    
    case 3:
    	system("cls");
titleb();
			  clockt();
	store();
    break;
     
    
    case 4:
    	l110:system("color 9");
     l12: printf("\n========================================================================================"); 
       printf("\nWhat do you want to know?");
       printf("\n1.CONTACT US \n2.ABOUT US");
       printf("\nEnter = ");
       scanf("%d",&r);
       if(r==1)
       {
       	l11:system("cls");
title();
			  clockt();
			        printf("\n========================================================================================"); 

       	 printf("\nSelect branch : ");
       	       printf("\n****************************************************************************************");

       	 printf("\n1.Satellite Branch\n2.Maninagar Branch\n3.Gandhinagar Branch");
       	       printf("\n****************************************************************************************"); 

       	 printf("\nEnter = ");
       		scanf("%d",&rs);
       		if(rs==1)
       		{  system("cls"); 
			   title();
			  clockt();    
			        printf("\n========================================================================================"); 

			   	 printf("\nSatellite Branch: ");
			   	      printf("\n****************************************************************************************");


       			printf("\nPRAKSHAL BANK PVT. LTD.\nUpper Level, Om Towers,\nNear Star India Bazar, Jodhpur Cross Road, Satellite,\n Ahmedabad-380015, Gujarat, India.\nPhone : +91 79-26768101-02\nMobile : +91 93282 84040");
	  		      printf("\n****************************************************************************************"); 

			  }
	   		else if(rs==2)
       		{  system("cls");  
			   title();
			  clockt();   
			        printf("\n========================================================================================"); 

			   	 printf("\nManinagar Branch: ");
			   	       printf("\n****************************************************************************************");


       			printf("\nPRAKSHAL BANK PVT. LTD.\nYogeshwar Avenue, Opposite Swaminarayan Mandir,\nNr. Railway Crossing, Maninagar,\n Ahmedabad-380008, Gujarat, India.\nPhone : +91 79-25461611\n Mobile : +91 93767 60202");
	   		      printf("\n****************************************************************************************");

			   }
       	    else if(rs==3)
       		{  system("cls");
			   title();
			  clockt();    
			        printf("\n========================================================================================"); 
 
			   	 printf("\nGandhinagar Branch: ");
     printf("\n****************************************************************************************");

       			printf("\nPRAKSHAL BANK PVT. LTD.\n3rd Floor, Shalin Complex, Near Gh - 5, Sector - 22, Gandhinagar-384022, Gujarat, India.\nPhone : +91 79-23246084\nMobile : +91 93757 53939");
	  		     printf("\n****************************************************************************************"); 

			  }
	  		else
	  		{system("cls");
	  		title();
			  clockt();
			        printf("\n========================================================================================"); 

	  			printf("\nenter as demand: ");
	  			      printf("\n========================================================================================"); 

	  			goto l11;
			  }
			        printf("\n****************************************************************************************"); 

			  printf("\n\nDo you want to goto main menu or Info menu:");      printf("\n****************************************************************************************");

			  printf("\n\nEnter 1 for main menu or 2 for info menu or any key for exit:");
			  scanf("%d",&n);
			  if (n==1)
			  {
			  system("cls");
			  title();
			  clockt();
        maindo();
    }
    else if(n==2)
    {
    	system("cls");
			  title();
			  clockt();
       goto l110;
	}
    
    else
        {
            titlend();
            
        }
			  
       	 
	    }
	    else if(r==2)
       {
       	system("cls");
       	title();
			  clockt();
			        printf("\n========================================================================================"); 
printf("\nABOUT US: ");
      printf("\n****************************************************************************************"); 

       	 printf("\n    PRAKSHAL BANK PVT. LTD. (PB),with over 200 year history, is the largest commercial\nbank in India in terms of assets, deposits, profits, branches, customers and employees,\netc.\n    The Government of India is the single largest shareholder of this Fortune 500 entity \nwith more than '50percentage' ownership.\n    PB is ranked among top 50 Global Banks.");
      			      printf("\n****************************************************************************************");
		  printf("\nDo you want to goto main menu:");
      printf("\n****************************************************************************************");

	  		printf("\nEnter 1 for main menu or 2 for info menu or any key for exit:");
			  scanf("%d",&m);
			  if (m==1)
			  {
			  system("cls");
			  title();
			  clockt();
        	maindo();
			}
			else if(m==2)
    {
    	system("cls");
			  title();
			  clockt();
       goto l110;
	}
    		else
        {
            titlend();
            
        }
	   }
	  	else
	  	{	system("cls");
	  	title();
	  	clockt();
	  	      printf("\n========================================================================================"); 

	  			printf("\nenter as demand: ");
	  			      printf("\n========================================================================================"); 

	  			goto l12;
		}
       	 
	
    
    break;
    
    case 5:
	show();
    break;
     
      
      case 6:printf("\n****************************************************************************************");
system("color 9");
    printf("\n\n\n\n\t\t\t          YOU CHOOSE EXIT\n\n\n");
                for(i=0;i<=10;i++)
        {
            fordelay(1000000000);
            printf("........");
        }
                    
            titlend();		
	break;
      	
 	 default:  system("cls");
    title();
    clockt();
	printf("\n########################################################################################"); 
      printf("\n***enter as shown as below: ***"); 
      

  printf("\n########################################################################################");
      goto l1;

  }
  return 0;
     
}
int show()
{
	int x=0,s=0;
	k5:
	system("color B"); 
                   printf("\n========================================================================================"); 

     printf("\nTO SEE ACC. DETAILS , ENTER ACC NO. & AGE:");                  printf("\n========================================================================================"); 

      printf("\n\nEnter ACC NO.= ");
      scanf("%d",&q.acc_no);                  printf("\n========================================================================================"); 

      printf("\n\nEnter AGE= ");
      scanf("%d",&q.age);                  printf("\n========================================================================================"); 

    	if(add.acc_no==q.acc_no && add.age==q.age)
    	{
		fetch();
    	printf("\n\n\n\t\t\t\t____________________");

  printf("\n\n\t\t\t\t|     ACC NO.      |\t     -> %d",add.acc_no);
  printf("\n\n\t\t\t\t|     USERNAME     |\t     -> %s",add.username);
  printf("\n\n\t\t\t\t|     PASSWORD     |\t     -> %s",add.password);
  printf("\n\n\t\t\t\t|     AGE          |\t     -> %d",add.age);
  printf("\n\n\t\t\t\t|     PHONE NO.    |\t     -> %d",add.phone);
  printf("\n\n\t\t\t\t|     ACC.TYPE     |\t     -> %s",add.acc_type);
  printf("\n\n\t\t\t\t|     AMMOUNT      |\t     -> %d",add.amt);
  printf("\n\t\t\t\t____________________");
  
  printf("\n\n\t\tEnter 1 for enter again press any key for exit = ");
       	scanf("%d",&x);
       	if(x==1)
       	{system("cls");
    title();
    clockt();
       		maindo();
		   }
		   else
		   {
		   	titlend();
		   }
       }
       else
       {
       	fetch();
       	printf("\n\n***LOOKS LIKE YOU ENTERED WRONG DETAILS OR ANY SERVER ERROR***");
       	printf("\n\nDO YOU WANT TO TRY AGAIN OR EXIT:");                  printf("\n========================================================================================"); 

       	printf("\n\nEnter 1 for try again or Enter 2 for goto main menu or press any key for exit = ");
       	scanf("%d",&s);
       	if(s==1)
       	{system("cls");
    title();
    clockt();
       		goto k5;
		   }
		   else if(s==2)
		   {system("cls");
		   title();
    clockt();
		   	maindo();
		   }
		   else
		   {
		   	titlend();
		   }
	   }
    
    
}

int store()
{
	system("color 9");
	long int totalCost=0;
 int i,j,choice,c=1,a[9],cost[9],x1;
 for(i=0;i<9;i++)
 a[i]=0;
 char str[100],ch;
 char items[9][100]={"Sandisk 16 GB",
 "Logitech Mouse",
 "Pendrive 16 GB",
 "Adidas",
 "Nike",
 "Leecooper",
 "vivo v15",
 "Nokia 3",
 "Samsung"  
 };
 FILE *old2;
    old2=fopen("prakshal.dat","a+");
 l555:
 	printf("\n========================================================================================"); 
  printf("\nPlease Enter Your UserName : \n");
 scanf("%s",str);
 
 if (strcmp(add.username,str)==0 || strcmp(strupr(h.check1),str)==0 || strcmp(strlwr(h.check1),str)==0 )
            {      printf("\n========================================================================================"); 

                printf("\n\n\nCorrect!!");
                
        for(i=0;i<=10;i++)
        {
            fordelay(100000000);
            printf(".");
        }
                
         
         	
            
            system("cls");
 titleb();
 clockt();
 fetch1();
 system("color 9");
 printf("\n\nHello  %s, Welcome to our Online Shopping store.\n",str);
 do{
  
  if(c==1){l999:
  	printf("\n========================================================================================"); 
  printf("\nEnter\n1.Computer Accessories\n2.Shoes\n3.Mobilesn");
  printf("\nENTER= ");
  scanf("%d",&choice);
  switch(choice)
  {
   case 1:
   {
    int accessoriesChoice;
    l666:
    	printf("\n========================================================================================"); 
    printf("\nEnter\n1.Sandisk 16 GB - Rs.355\n2.Logitech Mouse- Rs.500\n3.Pendrive 16 GB - Rs.550\n");
    printf("\nENTER= ");
    scanf("%d",&accessoriesChoice);
    cost[0]=355;
    cost[1]=500;
    cost[2]=550;
    switch(accessoriesChoice)
    {
     case 1:
     {
      int num;
      printf("\n========================================================================================"); 
      printf("\nYou chose Sandisk 16GB with Rs.355.Are you sure to buy.If 'Yes' Enter 1 or any number to ignore.\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[0]++;
       totalCost+=355;
      }
      printf("\n========================================================================================"); 
      printf("\nYour Cost in Cart is %d\n",totalCost);
      break;
     }
     case 2:
     {
      int num;
      printf("\n========================================================================================"); 
      printf("\nYou chose Logitech Mouse with Rs.500.Are you sure to buy.If 'Yes' Enter 1 or any number to ignore.\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[1]++;
       totalCost+=500;
      }
      printf("\n========================================================================================"); 
      printf("\nYour Cost in Cart is %d\n",totalCost);
      break;
     }
     case 3:
     {
      int num;
      printf("\n========================================================================================"); 
      printf("\nYou chose Pendrive 16GB with Rs.550.Are you sure to buy.If 'Yes' Enter 1 or any number to ignore.\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[2]++;
       totalCost+=550;
      }
      printf("\n========================================================================================"); 
      printf("\nYour Cost in Cart is %d\n",totalCost);
      break;
     }
     default:{
     	printf("\n========================================================================================"); 
      printf("\nEnter as demand:\n");
      goto l666;
      break;
     }
    }
    break;
   }
   case 2:
   {
    int shoesChoice;
    l777:
    	printf("\n========================================================================================"); 
    printf("\nEnter\n1.Adidas - Rs.3550\n2.Nike - Rs.5000\n3.Leecooper - Rs.2800\n");
    printf("\nENTER = ");
    scanf("%d",&shoesChoice);
    cost[3]=3550;
    cost[4]=5000;
    cost[5]=2800;
    switch(shoesChoice)
    {
     case 1:
     {
      int num;
      printf("\n========================================================================================"); 
      printf("\nYou chose Adidas Shoes for Rs.3550.Are you sure to buy.If 'Yes' Enter 1 or any number to ignore.\n");
      printf("\nENTER = ");
      scanf("%d",&num);
      if(num==1)
      {
       a[3]++;
       totalCost+=3550;
      }
      printf("\n========================================================================================"); 
      printf("\nYour Cost in Cart is %d\n",totalCost);
      break;
     }
     case 2:
     {
      int num;
      printf("\n========================================================================================"); 
      printf("\nYou chose Nike Shoes for Rs.5000.Are you sure to buy.If 'Yes' Enter 1 or any number to ignore.\n");
      printf("\nENTER = ");
      scanf("%d",&num);
      if(num==1)
      {
       a[4]++;
       totalCost+=5000;
      }
      printf("\n========================================================================================"); 
      printf("\nYour Cost in Cart is %d\n",totalCost);
      break;
     }
     case 3:
     {
      int num;
      printf("\n========================================================================================"); 
      printf("\nYou chose Leecooper Shoes for Rs.2800.Are you sure to buy.If 'Yes' Enter 1 or any number to ignore.\n");
      printf("\nENTER = ");
      scanf("%d",&num);
      if(num==1)
      {
       a[5]++;
       totalCost+=2800;
      }
      printf("\n========================================================================================"); 
      printf("\nYour Cost in Cart is %d\n",totalCost);
      break;
     }
     default:{
     	printf("\n========================================================================================"); 
      printf("\nEnter as demand:\n");
      goto l777;
      break;
     }
    }
    break;
   }
   case 3:
   {
    int mobileChoice;
    l888:
    	printf("\n========================================================================================"); 
    printf("\nEnter\n1.vivo v15 - Rs.11000\n2.Nokia 3 - Rs.9866\n3.Samsung - Rs.12800\n");
    printf("\nENTER = ");
    scanf("%d",&mobileChoice);
    cost[6]=11000;
    cost[7]=9866;
    cost[8]=12800;
    switch(mobileChoice)
    {
     case 1:
     {
      int num;
      printf("\n========================================================================================"); 
      printf("\nYou chose to buy vivo v15 for Rs.11000.Are you sure to buy.If 'Yes' Enter 1 or any number to ignore.\n");
      printf("\nENTER = ");
      scanf("%d",&num);
      if(num==1)
      {
       a[6]++;
       totalCost+=11000;
      }
      printf("\n========================================================================================"); 
      printf("\nYour Cost in Cart is %d\n",totalCost);
      break;
     }
     case 2:
     {
      int num;
      printf("\n========================================================================================"); 
      printf("\nYou chose to buy Nokia 3 for Rs.9866.Are you sure to buy.If 'Yes' Enter 1 or any number to ignore.\n");
      printf("\nENTER = ");
      scanf("%d",&num);
      if(num==1)
      {
       a[7]++;
       totalCost+=9866;
      }
      printf("\n========================================================================================"); 
      printf("\nYour Cost in Cart is %d\n",totalCost);
      break;
     }
     case 3:
     {
      int num;
      printf("\n========================================================================================"); 
      printf("\nYou chose to buy Samsung for Rs.12800.Are you sure to buy.If 'Yes' Enter 1 or any number to ignore.\n");
      printf("\nENTER = ");
      scanf("%d",&num);
      if(num==1)
      {
       a[8]++;
       totalCost+=12800;
      }
      printf("\n========================================================================================"); 
      printf("\nYour Cost in Cart is %d\n",totalCost);
      break;
     }
     default:{
     	printf("\n========================================================================================"); 
       printf("\nEnter as demand:\n");
      goto l888;
      break;
     }
    }
    break;
   }
   default:
   {printf("\n========================================================================================"); 
    printf("\nEnter Valid Categories Choice\n");
    goto l999;
   }
  }
  printf("\n****************************************************************************************");
  printf("\n%s's cart\n",str);
  printf("\n****************************************************************************************"); 
  printf("\nId\tItems\t\tQuantity\tCost\n");
  for(i=0;i<9;i++)
  {
   if(a[i]!=0)
   {
    printf("\n%d\t%s\t\t%d\t\t%d\n",i,items[i],a[i],(cost[i]*a[i]));
   }
  }
  printf("\n****************************************************************************************");
  printf("\nTotal Cost\t\t\t\t\t%d\n",totalCost);
  printf("\n****************************************************************************************");
  printf("\nIf you wish to buy anything more Enter\n1 to Add Item\n2 to Delete Items\n****************************************************************************************\nAny other number to place order\n");
  scanf("%d",&c);
 }
  if(c==2)
  {
   int id;
   printf("\n========================================================================================"); 
   printf("\nEnter id to delete item\n");
   scanf("%d",&id);
   if(id<9&&id>0){
   totalCost=totalCost-(cost[id]*a[id]);
   a[id]=0;
   }
   else{
   	printf("\n========================================================================================"); 
    printf("\nEnter Valid id\n");
   }printf("\n****************************************************************************************");
       printf("\nRevised Items \n");
       printf("\n****************************************************************************************"); 
       printf("\nId\tItems\t\tQuantity\tCost\n");
            for(i=0;i<9;i++)
      {
     if(a[i]!=0)
      {
   
    printf("\n%d\t%s\t\t%d\t\t%d\n",i,items[i],a[i],(cost[i]*a[i]));
      }
     }printf("\n****************************************************************************************");
        printf("\nTotal Cost\t\t\t\t\t%d\n",totalCost);
        printf("\n****************************************************************************************"); 
        printf("\nIf you wish to buy anything more Enter\n1 to Add Item\n2 to Delete Items\n****************************************************************************************\nAny other number to place order\n");
     scanf("%d",&c);
  }
 
 }while(c==1 || c==2);
 
 if(add.amt>=totalCost)
 {printf("\n========================================================================================"); 
		printf("\nYOUR ORDER PLACED YOUR BILL IS SHOWN AS BELOW :");
		l108:
			system("color 9");
		 	printf("\n****************************************************************************************");
	 printf("\nYOUR BILL:\n");
	printf("\n****************************************************************************************"); 
       printf("\nId\tItems\t\tQuantity\tCost\n");
            for(i=0;i<9;i++)
      {
     if(a[i]!=0)
      {
   
    printf("\n%d\t%s\t\t%d\t\t%d\n",i,items[i],a[i],(cost[i]*a[i]));
      }
     }printf("\n****************************************************************************************");
        printf("\nTotal Cost\t\t\t\t\t%d\n",totalCost);
        printf("\n****************************************************************************************"); 
printf("\n\t\t      **PAID BY BANK ACC. THANKS FOR SHOPING**     ");
printf("\n\t\t       **************VISIT AGAIN*************      ");

        
        printf("\n\n\nPRESS ANY KEY TO SEE FURTHER DETAILS: ");
        for(i=0;i<1;i++)

              {

              ch = getch();

              O.password[i] = ch;

              ch = '@' ;

               printf("%c",ch);

              } 
		system("color B");
		
		
		printf("\n****************************************************************************************"); 
		printf("\nEnter PASSWORD to proceed:");
		
		for(i=0;i<strlen(add.password);i++)

              {

              ch = getch();

              b.password[i] = ch;

              ch = '*' ;

               printf("%c",ch);

              } 
              if(strcmp(add.password,b.password)==0)
              {
              	printf("\n\n\nPassword Match!\n\n");
              	for(i=0;i<=10;i++)
        {
            fordelay(100000000);
            printf(".");
        }
                
         	system("cls");
         	titleb();
			  clockt();
			  fetch1();
			  printf("\n========================================================================================"); 
         			printf("\n\n\n\t\t\t\t____________________");

  printf("\n\n\t\t\t\t|     ACC NO.      |\t     -> %d",add.acc_no);
  printf("\n\n\t\t\t\t|     USERNAME     |\t     -> %s",add.username);
  printf("\n\n\t\t\t\t|     PHONE NO.    |\t     -> %d",add.phone);
  printf("\n\n\t\t\t\t|     BALANCE      |\t     -> %d",add.amt);
  printf("\n\n\t\t\t\t|      DEBIT       |\t     -> %d",totalCost);
  printf("\n\n\t\t\t\t|  UPDATE BALANCE  |\t     -> %d",add.amt-totalCost);
  printf("\n\t\t\t\t____________________");
  add.amt=add.amt-totalCost;
  totalCost=initial;
   fprintf(old2,"%d %s %s %d %d %s %d \n",add.acc_no,add.username,add.password,add.age,add.phone,add.acc_type,add.amt);
  printf("\n\n\t\tEnter 1 for enter again press any key for exit = ");
       	scanf("%d",&x1);
       	if(x1==1)
       	{system("cls");
    title();
    clockt();
    
       		maindo();
		   }
		   else
		   {
		   	titlendb();
		   }
			  }
			  else
			  {printf("\n========================================================================================"); 
			  	printf("\nWRONG PASSWORD\n1.TRY AGAIN\n2.ANY KEY EXIT: ");
			  		scanf("%d",&x1);
       	if(x1==1)
       	{system("cls");
    titleb();
    clockt();
    system("color 9");
       	goto l108;
		   }
		   else
		   {
		   	titlendb();
		   }
			  }
 }
 else
 {fetch1();
 system("color 9");
 printf("\n========================================================================================"); 
 	 printf("\n\n\t\tLooks like you haven't enough balance to place order :");
 	 printf("\n========================================================================================"); 
 	 printf("\n\n\t\tEnter 1 for enter again press any key for exit = ");
       	scanf("%d",&x1);
       	if(x1==1)
       	{system("cls");
    title();
    clockt();
       		maindo();
		   }
		   else
		   {
		   	titlendb();
		   }
 }
 
}

	else
	{fetch1();
	printf("\n========================================================================================"); 
	int n14;
	printf("\n**Ohmm.....try with right username**");
	printf("\n========================================================================================"); 
	printf("\n\nEnter 1 for try again or any key for exit: ");
			  scanf("%d",&n14);
			  if (n14==1)
			  {
			  system("cls");
			  titleb();
			  clockt();
			  system("color 9");
         goto l555;
    }
   
    else
        {
            titlend();
            
        }
		
	}
	fclose(old2);
}
int main()
{
  
  intro();
  
return 0;
}
