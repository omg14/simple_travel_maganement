#include <stdio.h>
#include<string.h>
#include<stdlib.h>  
#define ll long long int 

struct data
{
 char name[30];
 long long int adhar ;
 long long int cont_no ;
 char email[30];
 char date[8];
 int indi ;
 int mode ;
 int start ;
 int end ;
 int price ;
 int dist ;
};
struct data c[20];

void airways ( struct data *c );
void railways ( struct data *c );
void roadways ( struct data *c );
void dist ( struct data *c );
void printdata ( struct data c);

int main(void) 
{
  printf("\n\n==================================================\n");
    printf("||                SOJA TRAVELS                  ||\n");
    printf("==================================================\n");
    printf("||     Planning a trip? Speak to us first!      ||\n");
    printf("||                                              ||\n");
    printf("|| We Provide an user friendly system to help   ||\n");
    printf("||            you plan your journey...          ||\n");
    printf("||                                              ||\n");
    printf("||                                              ||\n");
    printf("||                     -Let us show you the way ||\n");
    printf("==================================================\n");
    printf("||           AIRWAY - ROADWAY - RAILWAY         ||\n");
    printf("||              We got it all covered           ||\n");
    printf("==================================================\n");
 
 int a=0 , opt ;

 while (1)
{
 printf("\n0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0\n");
 printf("\nWould you like to :\n1. Add new Traveller .\n2. Print Traveller Details .\n3. Exit.\t\t\t\t\t :");
 scanf("%d",&opt);

 switch ( opt)
 {
   case 1 :
   {
     a++;
     printf("\n0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0o0\n");
     printf("\nNAME                  :");
     fgets(c[a].name,100,stdin);
     fgets(c[a].name,100,stdin);
     printf("AADHAR No.            :");
     scanf("%lld",&c[a].adhar);
     printf("CONTACT No.           :");
     scanf("%lld",&c[a].cont_no);
     printf("PERSONAL MAIL ID      :");
     fgets(c[a].email,100,stdin);
     fgets(c[a].email,100,stdin);
     printf("DATE (ddmmyyyy)       : ");
     fgets(c[a].date,100,stdin);
     //fgets(c[a].date,100,stdin);
     printf("No. OF INDIVIDUALS\n(including yourself) :");
     scanf("%d",&c[a].indi); 

     printf("\n--------------------\n");
     printf("\nChoose your Mode Of Travel :\n1. Airways\n2. Railways\n3. Roadways\n\t\t\t\tChoice : ");
     scanf("%d",&c[a].mode);
     if (c[a].mode == 1)
     airways(&c[a]);
     if (c[a].mode == 2)
     railways(&c[a]);
     if (c[a].mode == 3)
     roadways(&c[a]);
     break ;
    }

   case 2 :
   {
     printf("\nENTER VALID AADHAR CARD No. :");
     ll ch2 , flag =0 , i;
     scanf("%lld",&ch2);
    
     for (  i =1 ; i<= a ; i++ )
     {
       if (ch2 == c[i].adhar)
       {
          flag =1 ;
          break;
       }
     }
     if ( flag ==1 )
     printdata( c[i] ) ;
     else 
     printf("\n!! Invalid Input !! Please Try Again .\n");
     break ;
    }
   case 3 :
   printf("\n\n\t\t||* THANK YOU . HAVE A SAFE AND HAPPY JOURNEY * ||");
   return 0 ;

   default :
   printf("\n!! ERROR !! Invalid Input . Please Try Again .\n");
   break ;
 }
}
}
void dist ( struct data *c )
{
if ( (c->start == 1 && c->end == 2) || (c->start == 2 && c->end == 1) )
 c->dist = 1411 ;
if ( (c->start == 1 && c->end == 3) || (c->start == 3 && c->end == 1) )
 c->dist = 1334 ;
if ( (c->start == 1 && c->end == 4) || (c->start == 4 && c->end == 1) )
 c->dist = 1944 ;
if ( (c->start == 1 && c->end == 5) || (c->start == 5 && c->end == 1) )
 c->dist = 149 ;
if ( (c->start == 2 && c->end == 3) || (c->start == 3 && c->end == 2) )
 c->dist = 2190 ;
if ( (c->start == 2 && c->end == 4) || (c->start == 4 && c->end == 2) )
 c->dist = 1517 ;
if ( (c->start == 2 && c->end == 5) || (c->start == 5 && c->end == 2) )
 c->dist = 1438 ;
if ( (c->start == 3 && c->end == 4) || (c->start == 4 && c->end == 3) )
 c->dist = 1663 ;
if ( (c->start == 3 && c->end == 5) || (c->start == 5 && c->end == 3) )
 c->dist = 1193 ;
if ( (c->start == 4 && c->end == 5) || (c->start == 5 && c->end == 4) )
 c->dist = 1829 ;
}

void airways ( struct data *c )
{
 xx :
 printf("\nHere are the cities we operate in :\n1. Mumbai\n2. Delhi\n3. Chennai\n4. Kolkata\n5. Pune ");
 printf("\n\nCHOOSE DEPARTURE CITY :");
 scanf("%d",&c->start);
 printf("CHOOSE DESTINATON CITY :");
 scanf("%d",&c->end);
 if ( c->start == c->end || c->start > 5 || c->end > 5 )
 {
   printf("Please Enter A Valid City .");
   goto xx ;
 }
 dist ( c );
 int type  ; 
 float xprice ;
 aa :
 printf("\nCOACH TYPE :\n1. General\n2. Premium\n3. Business\t\t\t: ");
 scanf("%d",&type);
 if (type== 1)
 xprice = 1 ;
 else if (type== 2)
 xprice = 1.25 ;
 else if (type== 3)
 xprice = 1.5 ;
 else 
 {
 printf("Enter Valid Option .");
 goto aa ;
 }
 c->price = c->dist * 6 * xprice * c->indi;
 printf("\n\n==========================================================\n");
    printf("|                    FLIGHT TICKET                       |\n");
    printf("==========================================================\n");
    printf("| NAME            :                                      |\n");
    printf("| Departure City  :                                      |\n");
    printf("| Destination city:                                      |\n");
    printf("| Coach Type      :                                      |\n");
    printf("| Total Fare      :                                      |\n");
    printf("|  ----------------------------------------------------  |\n");
    printf("|                    HAPPY JOURNEY                       |\n");
    printf("==========================================================\n");
}

void railways ( struct data *c )
{
  xx :
 printf("\n1. Mumbai\n2. Delhi\n3. Chennai\n4. Kolkata\n5. Pune ");
 printf("\nCHOOSE DEPARTURE CITY :");
 scanf("%d",&c->start);
 printf("CHOOSE DESTINATON CITY :");
 scanf("%d",&c->end);
 if ( c->start == c->end || c->start > 5 || c->end > 5 )
 {
   printf("Please Enter A Valid City .");
   goto xx ;
 }
 dist ( c );
 int type ; 
 float xprice ;
 aa :
 printf("COACH TYPE   :\n1. Non-AC\n2. Second Class AC\n3. First Class AC\t\t\t\t:");
 scanf("%d",&type);
 if (type== 1)
 xprice = 1 ;
 else if (type== 2)
 xprice = 1.25 ;
 else if (type== 3)
 xprice = 1.5 ;
 else 
 {
 printf("Enter Valid Option .");
 goto aa ;
 }
 c->price = c->dist * 2 * xprice * c->indi ;
 printf("\n\n==========================================================\n");
    printf("|                    RAILWAY TICKET                       |\n");
    printf("==========================================================\n");
    printf("| NAME            :                                      |\n");
    printf("| Departure City  :                                      |\n");
    printf("| Destination city:                                      |\n");
    printf("| Coach Type      :                                      |\n");
    printf("| Total Fare      :                                      |\n");
    printf("|  ----------------------------------------------------  |\n");
    printf("|                    HAPPY JOURNEY                       |\n");
    printf("==========================================================\n");
}

void roadways ( struct data *c )
{
  xx:
  printf("\n1. Mumbai\n2. Delhi\n3. Chennai\n4. Kolkata\n5. Pune ");
 printf("\nCHOOSE DEPARTURE CITY :");
 scanf("%d",&c->start);
 printf("CHOOSE DESTINATON CITY :");
 scanf("%d",&c->end);
 if ( c->start == c->end || c->start > 5 || c->end > 5 )
 {
   printf("Please Enter A Valid City .");
   goto xx ;
 }
 dist ( c );
 int type ; 
 float xprice ;
 aa:
 printf("COACH TYPE   :\n1. Bus\n2. SUV\t\t\t\t:");
 scanf("%d",&type);
 if (type== 1)
 xprice = 1 ;
 else if (type== 2)
 xprice = 1.5 ;
 else 
 {
 printf("Enter Valid Option .");
 goto aa ;
 }
 c->price = c->dist * 2.5 * xprice * c->indi;
 printf("\n\n==========================================================\n");
    printf("|                        TICKET                          |\n");
    printf("==========================================================\n");
    printf("| NAME            :                                      |\n");
    printf("| Departure City  :                                      |\n");
    printf("| Destination city:                                      |\n");
    printf("| Coach Type      :                                      |\n");
    printf("| Total Fare      :                                      |\n");
    printf("|  ----------------------------------------------------  |\n");
    printf("|                    HAPPY JOURNEY                       |\n");
    printf("==========================================================\n");
}

void printdata ( struct data c )
{
  char mode[][10] = {"Airways" , "Railways" , "Roadways"};
  char city[][10] = {"Mumbai" , "Delhi" , "Chennai" , "Kolkata" , "Pune"} ;

  int x = c.mode ;
  int y = c.start ;
  int z = c.end ;

  printf("\nNAME                : %s\n",c.name);
 printf("AADHAR CARD No.      : %lld\n",c.adhar);
 printf("CONTACT No.          : %lld\n",c.cont_no);
 printf("MAIL ADDRESS         : %s\n",c.email);
 printf("No. OF INDIVIDUALS   : %d\n",c.indi);
 printf("\nMODE OF TRAVEL       : %s\n",mode[x-1]);
 printf("DEPARTURE CITY       : %s\n",city[y-1]);
 printf("DESTINATION CITY     : %s\n",city[z-1]);
 //printf("DATE OF TRAVEL       : %.2f\n",c[n].avgbat);
 //printf("TOTAL FARE           : %.2f\n",c[n].avgbat);
}