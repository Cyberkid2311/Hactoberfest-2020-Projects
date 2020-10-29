#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
int i,j;
int main_exit;
void menu();
struct date{
    int month,day,year;

    };
struct {

    char name[60];
    int acc_no,age;
    char address[60];
    char citizenship[15];
    double phone;
    char acc_type[10];
    char tran_type[10];
    float amt;
    struct date dob;
    struct date deposit;
    struct date withdraw;
    }add,upd,check,rem,transaction;
float interest(float t,float amount,int rate)
{
    float SI;
    SI=(rate*t*amount)/100.0;
    return (SI);

}
void fordelay(int j)
{   int i,k;
    for(i=0;i<j;i++)
         k=i;
}
void new_acc()
{
    int choice;
    FILE *ptr,*fptr;

    ptr=fopen("record.txt","a+");
    fptr=fopen("mini.txt","a+");
    account_no:
    system("cls");
    system("COLOR F2");
    printf("\n\n\t\t\t\xB2\xB2\xB2\xB2 ADD NEW RECORD  \xB2\xB2\xB2\xB2\xB2");
    printf("\n\n\n\tEnter today's date(mm/dd/yyyy)::");
    scanf("%d/%d/%d",&add.deposit.month,&add.deposit.day,&add.deposit.year);
    printf("\n\tEnter the account number::");
    scanf("%d",&check.acc_no);
    while(fscanf(ptr,"%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d %s\n",&add.acc_no,add.name,&add.dob.month,&add.dob.day,&add.dob.year,&add.age,add.address,add.citizenship,&add.phone,add.acc_type,&add.amt,&add.deposit.month,&add.deposit.day,&add.deposit.year,add.tran_type)!=EOF)
    {
        if (check.acc_no==add.acc_no)
            {printf("Account no. already in use!");
            fordelay(1000000000);
                goto account_no;
            }
    }
    strcpy(add.tran_type,"deposit");
    add.acc_no=check.acc_no;
    printf("\n\tEnter the name::");
    scanf("%s",add.name);
    printf("\n\tEnter the date of birth(mm/dd/yyyy)::");
    scanf("%d/%d/%d",&add.dob.month,&add.dob.day,&add.dob.year);
    printf("\n\tEnter the age::");
    scanf("%d",&add.age);
    printf("\n\tEnter the address::");
    scanf("%s",add.address);
    printf("\n\tEnter the aadhar number::");
    scanf("%s",add.citizenship);
    printf("\n\tEnter the phone number::");
    scanf("%lf",&add.phone);
    printf("\n\tEnter the amount to deposit::$");
    scanf("%f",&add.amt);
    printf("\n\tType of account::\n\t#Saving\n\t#Current\n\t#Fixed1(for 1 year)\n\t#Fixed2(for 2 years)\n\t#Fixed3(for 3 years)\n\n\tEnter your choice::");
    scanf("%s",add.acc_type);
    fprintf(ptr,"%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d %s\n",add.acc_no,add.name,add.dob.month,add.dob.day,add.dob.year,add.age,add.address,add.citizenship,add.phone,add.acc_type,add.amt,add.deposit.month,add.deposit.day,add.deposit.year,add.tran_type);
    fprintf(fptr,"%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d %s\n",add.acc_no,add.name,add.dob.month,add.dob.day,add.dob.year,add.age,add.address,add.citizenship,add.phone,add.acc_type,add.amt,add.deposit.month,add.deposit.day,add.deposit.year,add.tran_type);
    fclose(ptr);
    fclose(fptr);
    printf("\n\t\t\xB2\xB2 Account created successfully! \xB2\xB2");
    add_invalid:
    printf("\n\n\n\t\tEnter 1 to go to the main menu and 0 to exit::");
    scanf("%d",&main_exit);
    system("cls");
    if (main_exit==1)
        menu();
    else if(main_exit==0)
            close();
    else
        {
            printf("\nInvalid!\a");
            goto add_invalid;
        }
}
void view_list()
{
    FILE *view;
    view=fopen("record.txt","r");
    int test=0;
    system("cls");
    system("COLOR E3");
    printf("\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 CUSTOMER LIST \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n");
    printf("\nACC. NO.\tNAME\t\tADDRESS\t\t\tPHONE\t\tACCOUNT TYPE\t\tBALANCE AMOUNT\n");

    while(fscanf(view,"%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d %s",&add.acc_no,add.name,&add.dob.month,&add.dob.day,&add.dob.year,&add.age,add.address,add.citizenship,&add.phone,add.acc_type,&add.amt,&add.deposit.month,&add.deposit.day,&add.deposit.year,add.tran_type)!=EOF)
       {
           printf("\n%6d\t %10s\t\t%10s\t\t%.0lf\t\t%s\t\t%f",add.acc_no,add.name,add.address,add.phone,add.acc_type,add.amt);
           test++;
       }

    fclose(view);
    if (test==0)
        {   system("cls");
            printf("\n\n\tNO RECORDS!!\n");}

    view_list_invalid:
     printf("\n\nEnter 1 to go to the main menu and 0 to exit::");
        scanf("%d",&main_exit);
        system("cls");
        if (main_exit==1)
            menu();
        else if(main_exit==0)
            close();
        else
        {
            printf("\n\n\t\tInvalid!\a\a");
            goto view_list_invalid;
        }
}
void mini()
{
    FILE *view;
    view=fopen("mini.txt","r");
    int test=0;
    system("cls");
    system("COLOR E3");
    printf("\n\n\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 MINI STATEMENT \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n");
     printf("\n\t Enter the account no. of the customer whose info you want to change::");
     scanf("%d",&upd.acc_no);
    printf("\nACC. NO.\tNAME\t\tADDRESS\t\t\tPHONE\t\tACCOUNT TYPE\t\tBALANCE AMOUNT\n");

    while(fscanf(view,"%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d %s",&add.acc_no,add.name,&add.dob.month,&add.dob.day,&add.dob.year,&add.age,add.address,add.citizenship,&add.phone,add.acc_type,&add.amt,&add.deposit.month,&add.deposit.day,&add.deposit.year,add.tran_type)!=EOF)
       {
          if (add.acc_no==upd.acc_no)
         {
           printf("\n%6d\t %10s\t\t%10s\t\t%.0lf\t\t%s\t\t%f",add.acc_no,add.name,add.address,add.phone,add.acc_type,add.amt);
           test++;
         }
       }

    fclose(view);
    if (test==0)
        {   system("cls");
            printf("\n\n\tNO RECORDS!!\n");}

    view_list_invalid:
     printf("\n\nEnter 1 to go to the main menu and 0 to exit::");
        scanf("%d",&main_exit);
        system("cls");
        if (main_exit==1)
            menu();
        else if(main_exit==0)
            close();
        else
        {
            printf("\n\n\t\tInvalid!\a\a");
            goto view_list_invalid;
        }

}
void edit(void)
{
    system("COLOR F4");
    int choice,test=0;
    FILE *old,*newrec;
    old=fopen("record.txt","r");
    newrec=fopen("new.txt","w");
    printf("\n\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 EDIT CUSTOMER DETAIL \xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\t Enter the account no. of the customer whose info you want to change::");
    scanf("%d",&upd.acc_no);
    while(fscanf(old,"%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d %s",&add.acc_no,add.name,&add.dob.month,&add.dob.day,&add.dob.year,&add.age,add.address,add.citizenship,&add.phone,add.acc_type,&add.amt,&add.deposit.month,&add.deposit.day,&add.deposit.year,add.tran_type)!=EOF)
    {
        if (add.acc_no==upd.acc_no)
        {   test=1;
            printf("\n\n\tWhich information do you want to change?\n1.Name\n2.Address\n3.Phone\n4.Account Type\n\nEnter your choice(1 for name 2 for address and 3 for phone 4 for Account Type)::");
            scanf("%d",&choice);
            system("cls");
            if(choice==1)
                {printf("\tEnter the new Name::");
                scanf("%s",upd.name);
                fprintf(newrec,"%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d %s\n",add.acc_no,upd.name,add.dob.month,add.dob.day,add.dob.year,add.age,add.address,add.citizenship,add.phone,add.acc_type,add.amt,add.deposit.month,add.deposit.day,add.deposit.year,add.tran_type);
                system("cls");
                printf("\t\xB2\xB2\xB2 Changes saved! \xB2\xB2\xB2");
                }
            else if(choice==2)
                {printf("\tEnter the new address::");
                scanf("%s",upd.address);
                fprintf(newrec,"%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d %s\n",add.acc_no,add.name,add.dob.month,add.dob.day,add.dob.year,add.age,upd.address,add.citizenship,add.phone,add.acc_type,add.amt,add.deposit.month,add.deposit.day,add.deposit.year,add.tran_type);
                system("cls");
                printf("\t\xB2\xB2\xB2 Changes saved! \xB2\xB2\xB2");
                }
            else if(choice==3)
                {
                    printf("\tEnter the new phone number::");
                scanf("%lf",&upd.phone);
                fprintf(newrec,"%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d %s\n",add.acc_no,add.name,add.dob.month,add.dob.day,add.dob.year,add.age,add.address,add.citizenship,upd.phone,add.acc_type,add.amt,add.deposit.month,add.deposit.day,add.deposit.year,add.tran_type);
                system("cls");
                printf("\t\xB2\xB2\xB2 Changes saved! \xB2\xB2\xB2");
                }
            else if(choice==4)
                {
                    printf("\tEnter the new Account Type number::");
                scanf("%s",upd.acc_type);
                fprintf(newrec,"%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d %s\n",add.acc_no,add.name,add.dob.month,add.dob.day,add.dob.year,add.age,add.address,add.citizenship,add.phone,upd.acc_type,add.amt,add.deposit.month,add.deposit.day,add.deposit.year,add.tran_type);
                system("cls");
                printf("\t\xB2\xB2\xB2 Changes saved! \xB2\xB2\xB2");
                }
        }
        else
            fprintf(newrec,"%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d %s\n",add.acc_no,add.name,add.dob.month,add.dob.day,add.dob.year,add.age,add.address,add.citizenship,add.phone,add.acc_type,add.amt,add.deposit.month,add.deposit.day,add.deposit.year,add.tran_type);
    }
    fclose(old);
    fclose(newrec);
    remove("record.txt");
    rename("new.txt","record.txt");
if(test!=1)
        {   system("cls");
            printf("\n\tRecord not found!!\a\a\a");
            edit_invalid:
              printf("\nEnter 0 to try again,1 to return to main menu and 2 to exit::");
              scanf("%d",&main_exit);
              system("cls");
                 if (main_exit==1)

                    menu();
                else if (main_exit==2)
                    close();
                else if(main_exit==0)
                    edit();
                else
                    {printf("\nInvalid!\a");
                    goto edit_invalid;}
        }
    else
        {printf("\n\n\nEnter 1 to go to the main menu and 0 to exit::");
        scanf("%d",&main_exit);
        system("cls");
        if (main_exit==1)
            menu();
        else
            close();
        }
}
void transact(void)
{   int choice,test=0;
    FILE *old,*newrec,*fptr;
    old=fopen("record.txt","r");
    newrec=fopen("new.txt","w");
    fptr=fopen("mini.txt","a+");
        printf("\n\n\n\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Money Deposit or Withdraw Menu \xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        printf("\n\n\tEnter the account no. of the customer:");
    scanf("%d",&transaction.acc_no);
    while (fscanf(old,"%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d %s",&add.acc_no,add.name,&add.dob.month,&add.dob.day,&add.dob.year,&add.age,add.address,add.citizenship,&add.phone,add.acc_type,&add.amt,&add.deposit.month,&add.deposit.day,&add.deposit.year,add.tran_type)!=EOF)
   {

            if(add.acc_no==transaction.acc_no)
            {   test=1;
                if(strcmpi(add.acc_type,"fixed1")==0||strcmpi(add.acc_type,"fixed2")==0||strcmpi(add.acc_type,"fixed3")==0)
                {
                    printf("\a\a\a\n\nYOU CANNOT DEPOSIT OR WITHDRAW CASH IN FIXED ACCOUNTS!!!!!");
                    fordelay(1000000000);
                    system("cls");
                    menu();

                }
                printf("\n\nDo you want to\n1.Deposit\n2.Withdraw?\n\nEnter your choice(1 for deposit and 2 for withdraw):");
                scanf("%d",&choice);
                if (choice==1)
                {
                    printf("Enter the amount you want to deposit:$ ");
                    scanf("%f",&transaction.amt);
                    add.amt+=transaction.amt;
                    strcpy(add.tran_type,"deposit");
                    fprintf(newrec,"%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d %s\n",add.acc_no,add.name,add.dob.month,add.dob.day,add.dob.year,add.age,add.address,add.citizenship,add.phone,add.acc_type,add.amt,add.deposit.month,add.deposit.day,add.deposit.year,add.tran_type);
                    fprintf(fptr,"%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d %s\n",add.acc_no,add.name,add.dob.month,add.dob.day,add.dob.year,add.age,add.address,add.citizenship,add.phone,add.acc_type,add.amt,add.deposit.month,add.deposit.day,add.deposit.year,add.tran_type);
                    printf("\n\nDeposited successfully!");
                }
                else
                {
                    printf("Enter the amount you want to withdraw:$ ");
                    scanf("%f",&transaction.amt);
                     if(add.amt<transaction.amt)
                     {
                         printf("Sorry!! you have only %f. you cannot withdraw %f",add.amt,transaction.amt);
                     }
                    add.amt-=transaction.amt;
                    strcpy(add.tran_type,"withdraw");
                    fprintf(newrec,"%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d %s\n",add.acc_no,add.name,add.dob.month,add.dob.day,add.dob.year,add.age,add.address,add.citizenship,add.phone,add.acc_type,add.amt,add.deposit.month,add.deposit.day,add.deposit.year,add.tran_type);
                    fprintf(fptr,"%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d %s\n",add.acc_no,add.name,add.dob.month,add.dob.day,add.dob.year,add.age,add.address,add.citizenship,add.phone,add.acc_type,add.amt,add.deposit.month,add.deposit.day,add.deposit.year,add.tran_type);
                    printf("\n\nWithdrawn successfully!");
                }

            }
            else
            {
               fprintf(newrec,"%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d %s\n",add.acc_no,add.name,add.dob.month,add.dob.day,add.dob.year,add.age,add.address,add.citizenship,add.phone,add.acc_type,add.amt,add.deposit.month,add.deposit.day,add.deposit.year,add.tran_type);
            }
   }
   fclose(old);
   fclose(newrec);
   fclose(fptr);
   remove("record.txt");
   rename("new.txt","record.txt");
   if(test!=1)
   {
       printf("\n\nRecord not found!!");
       transact_invalid:
      printf("\n\n\nEnter 0 to try again,1 to return to main menu and 2 to exit:");
      scanf("%d",&main_exit);
      system("cls");
      if (main_exit==0)
        transact();
    else if (main_exit==1)
        menu();
    else if (main_exit==2)
        close();
    else
    {
        printf("\nInvalid!");
        goto transact_invalid;
    }
   }
   else
   {
       printf("\nEnter 1 to go to the main menu and 0 to exit:");
        scanf("%d",&main_exit);
        system("cls");
        if (main_exit==1)
            menu();
        else
            close();
   }
}
void erase(void)
{
    system("COLOR 8C");
    FILE *old,*newrec,*old1,*new1;
    int test=0;
    old=fopen("record.txt","r");
    newrec=fopen("new.txt","w");
    old1=fopen("mini.txt","r");
    new1=fopen("new1.txt","w");
    printf("\n\n\t\t\xB2\xB2\xB2\xB2\xB2\xB2 DELETE CUSTOMER ACCOUNT \xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\n\tEnter the account no. of the customer you want to delete:");
    scanf("%d",&rem.acc_no);
    while (fscanf(old,"%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d %s",&add.acc_no,add.name,&add.dob.month,&add.dob.day,&add.dob.year,&add.age,add.address,add.citizenship,&add.phone,add.acc_type,&add.amt,&add.deposit.month,&add.deposit.day,&add.deposit.year,add.tran_type)!=EOF)
   {
        if(add.acc_no!=rem.acc_no)
            fprintf(newrec,"%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d %s\n",add.acc_no,add.name,add.dob.month,add.dob.day,add.dob.year,add.age,add.address,add.citizenship,add.phone,add.acc_type,add.amt,add.deposit.month,add.deposit.day,add.deposit.year,add.tran_type);

        else
            {test++;
            printf("\n\n\tRecord deleted successfully!\n");
            }
   }
    while (fscanf(old1,"%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d %s",&add.acc_no,add.name,&add.dob.month,&add.dob.day,&add.dob.year,&add.age,add.address,add.citizenship,&add.phone,add.acc_type,&add.amt,&add.deposit.month,&add.deposit.day,&add.deposit.year,add.tran_type)!=EOF)
   {
        if(add.acc_no!=rem.acc_no)
            fprintf(new1,"%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d %s\n",add.acc_no,add.name,add.dob.month,add.dob.day,add.dob.year,add.age,add.address,add.citizenship,add.phone,add.acc_type,add.amt,add.deposit.month,add.deposit.day,add.deposit.year,add.tran_type);
   }
   fclose(old1);
   fclose(new1);
   remove("mini.txt");
   rename("new1.txt","mini.txt");
   fclose(old);
   fclose(newrec);
   remove("record.txt");
   rename("new.txt","record.txt");
   if(test==0)
        {
            printf("\nRecord not found!!\a\a\a");
            erase_invalid:
              printf("\nEnter 0 to try again,1 to return to main menu and 2 to exit::");
              scanf("%d",&main_exit);

                 if (main_exit==1)
                    menu();
                else if (main_exit==2)
                    close();
                else if(main_exit==0)
                    erase();
                else
                    {printf("\n\n\tInvalid!\a");
                    goto erase_invalid;}
        }
    else
        {printf("\nEnter 1 to go to the main menu and 0 to exit::");
        scanf("%d",&main_exit);
        system("cls");
        if (main_exit==1)
            menu();
        else
            close();
        }
}
void see(void)
{
    system("COLOR E2");
    FILE *ptr;
    int test=0,rate;
    int choice;
    float time;
    float intrst;
    ptr=fopen("record.txt","r");
    printf("\n\n\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2 CUSTOMER INFORMATION \xB2\xB2\xB2\xB2\xB2\xB2");
    printf("Do you want to check by\n1.Account no\n2.Name\nEnter your choice::");
    scanf("%d",&choice);
    if (choice==1)
    {   printf("Enter the account number:");
        scanf("%d",&check.acc_no);

        while (fscanf(ptr,"%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d %s",&add.acc_no,add.name,&add.dob.month,&add.dob.day,&add.dob.year,&add.age,add.address,add.citizenship,&add.phone,add.acc_type,&add.amt,&add.deposit.month,&add.deposit.day,&add.deposit.year,add.tran_type)!=EOF)
        {
            if(add.acc_no==check.acc_no)
            {   system("cls");
                test=1;

                printf("\nAccount NO.:%d\nName:%s \nDOB:%d/%d/%d \nAge:%d \nAddress:%s \nCitizenship No:%s \nPhone number:%.0lf \nType Of Account:%s \nAmount deposited:$ %.2f \nDate Of Deposit:%d/%d/%d Deposit Type: %s\n\n",add.acc_no,add.name,add.dob.month,add.dob.day,add.dob.year,add.age,add.address,add.citizenship,add.phone,
                add.acc_type,add.amt,add.deposit.month,add.deposit.day,add.deposit.year,add.tran_type);
                if(strcmpi(add.acc_type,"fixed1")==0)
                    {
                        time=1.0;
                        rate=9;
                        intrst=interest(time,add.amt,rate);
                        printf("\n\nYou will get $%.2f as interest on %d/%d/%d",intrst,add.deposit.month,add.deposit.day,add.deposit.year+1);
                    }
                else if(strcmpi(add.acc_type,"fixed2")==0)
                    {
                        time=2.0;
                        rate=11;
                        intrst=interest(time,add.amt,rate);
                        printf("\n\nYou will get $.%.2f as interest on %d/%d/%d",intrst,add.deposit.month,add.deposit.day,add.deposit.year+2);

                    }
                else if(strcmpi(add.acc_type,"fixed3")==0)
                    {
                        time=3.0;
                        rate=13;
                        intrst=interest(time,add.amt,rate);
                        printf("\n\nYou will get $.%.2f as interest on %d/%d/%d",intrst,add.deposit.month,add.deposit.day,add.deposit.year+3);

                    }
                 else if(strcmpi(add.acc_type,"saving")==0)
                    {
                        time=(1.0/12.0);
                        rate=8;
                        intrst=interest(time,add.amt,rate);
                        printf("\n\nYou will get $.%.2f as interest on %d of every month",intrst,add.deposit.day);

                     }
                 else if(strcmpi(add.acc_type,"current")==0)
                    {

                        printf("\n\nYou will get no interest\a\a");

                     }
            }
        }
    }
    else if (choice==2)
    {   printf("Enter the name:");
        scanf("%s",&check.name);
        while (fscanf(ptr,"%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d %s",&add.acc_no,add.name,&add.dob.month,&add.dob.day,&add.dob.year,&add.age,add.address,add.citizenship,&add.phone,add.acc_type,&add.amt,&add.deposit.month,&add.deposit.day,&add.deposit.year,add.tran_type)!=EOF)
        {
            if(strcmpi(add.name,check.name)==0)
            {   system("cls");
                test=1;
                printf("\nAccount No.:%d\nName:%s \nDOB:%d/%d/%d \nAge:%d \nAddress:%s \nCitizenship No:%s \nPhone number:%.0lf \nType Of Account:%s \nAmount deposited:$%.2f \nDate Of Deposit:%d/%d/%d Deposit Type:%s\n\n",add.acc_no,add.name,add.dob.month,add.dob.day,add.dob.year,add.age,add.address,add.citizenship,add.phone,
                add.acc_type,add.amt,add.deposit.month,add.deposit.day,add.deposit.year,add.tran_type);
                if(strcmpi(add.acc_type,"fixed1")==0)
                    {
                        time=1.0;
                        rate=9;
                        intrst=interest(time,add.amt,rate);
                        printf("\n\nYou will get $.%.2f as interest on %d/%d/%d",intrst,add.deposit.month,add.deposit.day,add.deposit.year+1);
                    }
                else if(strcmpi(add.acc_type,"fixed2")==0)
                    {
                        time=2.0;
                        rate=11;
                        intrst=interest(time,add.amt,rate);
                        printf("\n\nYou will get $.%.2f as interest on %d/%d/%d",intrst,add.deposit.month,add.deposit.day,add.deposit.year+2);
                    }
                else if(strcmpi(add.acc_type,"fixed3")==0)
                    {
                        time=3.0;
                        rate=13;
                        intrst=interest(time,add.amt,rate);
                        printf("\n\nYou will get $.%.2f as interest on %d/%d/%d",intrst,add.deposit.month,add.deposit.day,add.deposit.year+3);
                    }
                 else if(strcmpi(add.acc_type,"saving")==0)
                    {
                        time=(1.0/12.0);
                        rate=8;
                        intrst=interest(time,add.amt,rate);
                        printf("\n\nYou will get $.%.2f as interest on %d of every month",intrst,add.deposit.day);
                     }
                 else if(strcmpi(add.acc_type,"current")==0)
                    {
                        printf("\n\nYou will get no interest\a\a");

                     }
            }
        }
    }
    fclose(ptr);
     if(test!=1)
        {   system("cls");
            printf("\nRecord not found!!\a\a\a");
            see_invalid:
              printf("\nEnter 0 to try again,1 to return to main menu and 2 to exit:");
              scanf("%d",&main_exit);
              system("cls");
                 if (main_exit==1)
                    menu();
                else if (main_exit==2)
                    close();
                else if(main_exit==0)
                    see();
                else
                    {
                        system("cls");
                        printf("\nInvalid!\a");
                        goto see_invalid;}
        }
    else
        {printf("\nEnter 1 to go to the main menu and 0 to exit:");
        scanf("%d",&main_exit);}
        if (main_exit==1)
        {
            system("cls");
            menu();
        }
        else
           {

             system("cls");
            close();
            }
}
void close(void)
{
    system("color 79");
    printf("\n\n\n\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Thank You \xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\n\n\n\t\t This C Project is developed by \n");
    printf("\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2 Kapil Kumar Reg.- 2019PGCACA51 \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n\n\n");

    }
void menu(void)
{   int choice;
    system("cls");
    system("color 79");
    printf("\n\n\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 CUSTOMER ACCOUNT BANKING MANAGEMENT SYSTEM \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\n\n\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELCOME TO THE MAIN MENU \xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\n\t\t1.Create new account\n\t\t2.Update information of existing account\n\t\t3.For transactions\n\t\t4.Check the details of existing account\n\t\t5.Removing existing account\n\t\t6.View customer's list\n\t\t7. Mini Statement \n\t\t8.Exit\n\n\n\n\n\t\t Enter your choice:");
    scanf("%d",&choice);
    system("cls");
    switch(choice)
    {
        case 1:new_acc();
        break;
        case 2:edit();
        break;
        case 3:transact();
        break;
        case 4:see();
        break;
        case 5:erase();
        break;
        case 6:view_list();
        break;
        case 7:mini();
        break;
        case 8:close();
        break;
    }
}

int main()
{
    system("COLOR F4");
    char pass[10],password[10]="kaspil";
    int i=0;
    printf("\n\n\t\tEnter the password to login::");
    scanf("%s",pass);
    /*do
    {
    //if (pass[i]!=13&&pass[i]!=8)
        {
            printf("*");
            pass[i]=getch();
            i++;
        }
    }while (pass[i]!=13);
    pass[10]='\0';*/
    if (strcmp(pass,password)==0)
        {printf("\n\n\t\xB2\xB2\xB2 Password Match! \xB2\xB2\xB2\n\n\tLOADING... ");
        for(i=0;i<=6;i++)
        {
            fordelay(100000000);
            printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        }
                system("cls");
            menu();
        }
    else
        {   printf("\n\n*****Wrong password!!*****\a\a\a");
            login_try:
            printf("\nEnter 1 to try again and 0 to exit::");
            scanf("%d",&main_exit);
            if (main_exit==1)
                    {
                        system("cls");
                        main();
                    }

            else if (main_exit==0)
                    {
                    system("cls");
                    close();}
            else
                    {printf("\nInvalid!");
                    fordelay(1000000000);
                    system("cls");
                    goto login_try;
                    }
        }
        return 0;
}
