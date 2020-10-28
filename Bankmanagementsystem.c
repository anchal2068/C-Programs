#include<stdio.h>  
 #include<dos.h>  
 #include<conio.h>  
 #include<string.h>  
 #include<graphics.h>  
 #include<process.h>  
 struct bank // Bank Structure  
 {int accno;  
 char name[20];  
 float bal;  
 }b;  
 void main()  
 {int ch;  
 clrscr();  
 b:printf("\n\t\t\t\t Welcome to Aarthi Banking Corporation \n\n\n\t Please select your appropriate option...");  
 printf("\n 1. New customer \n 2. Existing customer \n 3. Exit");  
 scanf("%d",&ch);  
 switch (ch)  
 { case 1:  
      {FILE*ff;  
      ff=fopen("customer.dat","a");  
      clrscr();  
      printf("\n Welcome to Aarthi Banking Corporation (ABC.Ltd).\n It is a pleasure to have you here \n Please enter your name without spaces :");  
      scanf("%s",&b.name);  
      clrscr();  
      printf("\n Welcome %s, please enter a suitable account number",b.name);  
      scanf("%d",&b.accno);  
      printf("\n Please mention the initial deposit... Rs: ");  
      scanf("%f",&b.bal);  
      printf("\n Congratulations... Your account has been created.\nTo deposit please login as existing customer");  
      fwrite(&b,sizeof(b),1,ff);  
      fclose(ff);  
      getch();  
      clrscr();  
      goto b;  
      }break;  
 case 2:  
      {     int num,count=0,n,ch,flag;  
  int a,c,t;  
  float amount,value,temp;  
  FILE *fp;  
   clrscr();  
   printf("\n Welcome once again to Aarthi Banking Corporation (ABC)... ");  
   printf("\n\n Please Enter your Account Number");  
   scanf("%d",&num);  
   fp=fopen("customer.dat","r+");  
   rewind(fp);  
   while(!feof(fp)&&count==0)  
  { fread(&b,sizeof(b),1,fp);  
   if (b.accno==num)  
   {  count=1;  }   }  
   if(count==0)  
   {     printf("\n Wrong account number... No such user");  
   getch();  
   goto b;  }  
  else  
   { int m;  
   clrscr();  
   printf("\n Welcome %s, What service would you like to avail",b.name);  
   printf("\n 1. Deposit Amount ");  
   printf("\n 2. Withdraw Amount ");  
   printf("\n 3. View Details ");  
   printf("\n 4. Foreign Exchange");  
   printf("\n 5. Exit program");  
   printf("\n Please Enter your choice : ");  
   scanf ("%d",&m);  
   switch(m)  
   {case 1:  
   {clrscr();  
    printf("\n\n\n Dear %s, please enter the amount you wish to deposit : ",b.name);  
    scanf("%f",& amount);  
    b.bal=b.bal+amount;  
    printf("\n Your current available bank balance is %f", b.bal);  
    n=sizeof(b);  
    fseek(fp,-n,SEEK_CUR);  
    fwrite(&b,n,1,fp);  
    fclose(fp);  
    getch();  
    }break;  
    case 2:  
   {clrscr();  
    printf("\n\n\n Dear %s, please enter the amount you wish to withdraw : ",b.name);  
    scanf("%f",& amount);  
    if(b.bal-amount<=0)  
    {printf("\n Sorry, You dont have enough money in your account");  
    fclose(fp);  
    getch();  
    goto b;  
    }  
    else  
    {b.bal=b.bal-amount;  
    printf("\n Your current available bank balance is %f", b.bal);  
    getch();  
    n=sizeof(b);  
    fseek(fp,-n,SEEK_CUR);  
    fwrite(&b,n,1,fp);  
    fclose(fp);  
    goto b;  
    }  
    }break;  
    case 3:  
    { clrscr();  
    printf("\n Your Account Details are as folows...");  
    printf("\n\n Name : %s",b.name);  
    printf("\n\n Account Number : %d ",b.accno);  
    printf("\n\n Available Balance :%f ",b.bal);  
    fclose(fp);  
    printf("\n Press any key to continue...");  
    getch();   clrscr();  
    goto b;  
    }break;  
    case 4:  
    {int x;  
    float y,z;  
    clrscr();  
    printf("\n Welcome to the foreign exchange convertor section \n Select the currency you wish to convert.");  
    printf("\n 1. US Dollar");  
    printf("\n 2. Euro");  
    printf("\n 3. Pound");  
    scanf("%d",&x);  
    switch(x)  
    {  
    case 1:  
    {   printf("\n Please enter the amount of rupees you wish to convert");  
    scanf("%f",&y);  
    z=45/y;  
    printf("\n The converted rate is $ %f",z);  
    getch();  
    goto b;  
    }break;  
    case 2:  
    {   printf("\n Please enter the amount of rupees you wish to convert");  
    scanf("%f",&y);  
    z=75/y;  
    printf("\n The converted rate is euro %f",z);  
    getch();  
    goto b;  
    }break;  
    case 3:  
    {printf("\n Please enter the amount of rupees you wish to convert");  
    scanf("%f",&y);  
    z=60/y;  
    printf("\n The converted rate is pound %f",z);  
    getch();  
    goto b;  
    }break;  
    default:  
    exit(0);  
   }  
   }
   break;
   }
   }
   }
   }
   }
