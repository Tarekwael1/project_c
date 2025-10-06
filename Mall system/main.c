#include <stdio.h>
#include <stdlib.h>
  void BIO();
  void MENIO();
  void RECEIPT();
  float price,amt ,totalAmt=0,cash,change;
  int num,qty,city,del,y;
  char name[50],phone[50];
  char addAnother;


  int main(void)
  {
	  BIO();
	  MENIO();
	   if(y>=5)
	{
		totalAmt=totalAmt-(totalAmt*.2);
		printf("\nYOU GOT A DISCOUNT 20\%");
	}
	printf("\nDelivary\t:$%d ",del);
    totalAmt=totalAmt+del;
    printf("\nTotal Amount\t:$%.2f",totalAmt);
	RECEIPT();
  }
  void BIO()
  {
	    printf("\t\t\t**************************\n");
          printf("\t\t\t>>>DEALERS OF HAPPINESS<<<\n");
          printf("\t\t\t**************************\n\n");
		  printf("\t\t\tWELCOME TO DEALERS OF HAPPINESS\n");
		  printf("ENTER YOUR NAME\t:");
		  scanf(" %s",&name);
          printf("ENTER YOUR PHONR:");
		  scanf("%s",&phone);
		  printf("\nWHERE ARE YOU FROM??\n");
		  printf("[1]\tFROM MANSOURA\n");
		  printf("[2]\tOUT of MANSOURA\n");
		  scanf("%d",&city);
		  switch(city)
		  {
			  case 1: del=2;
			  break;
			  case 2: del=5;
		  }
  }
  void MENIO()
  {
	   do
        {
        system("cls");
		  printf("\t\t\t**************************\n");
          printf("\t\t\t>>>DEALERS OF HAPPINESS<<<\n");
          printf("\t\t\t**************************\n\n");
		  printf("CODE\t\tTYPE\t\t PRICE\n");
          printf("[1]\t\tmeat\t\t($12.5)\n");
		  printf("[2]\t\tchiken\t\t($9.5)\n");
		  printf("[3]\t\tpotato\t\t($2.00)\n");
		  printf("[4]\t\ttomato\t\t($2.00)\n");
		  printf("[5]\t\tred pull\t($2.50)\n\n");
          printf("Enter Code\t: ");
          scanf("%d",&num);
          printf("\n\nEnter the Quantity\t:");
          scanf("%d",&qty);
  switch(num)
  {
      case 1:price = 12.5;
          break ;
      case 2:price =9.5;
         break ;
      case 3:price =2.0;
         break ;
      case 4:price =2.0;
         break ;
      case 5:price =2.5;
        break ;
  }
   amt = price * qty;
   printf("\nAmount\t\t:$%.2f ",amt);
    totalAmt+=amt;
   printf("\nTotal Amount \t:$%.2f",totalAmt);
   printf("\nAdd another order ?(y/n) ");
    scanf(" %c",&addAnother);

    }
	while (addAnother == 'y' || addAnother =='Y');
  }
  void RECEIPT()
  {
	    do
    {
     printf("\ncash tendered: ");
     scanf("%f",&cash);
    }
	while(cash<totalAmt);
	system("cls");
    printf("\t>>>RECEIPT<<<\n");
	printf("\nName\t\t:%s",name);
	printf("\nphone\t\t:%s",phone);
	printf("\nDelivary\t:$%d ",del);
    printf("\nTotal Amount\t:$%.2f",totalAmt);
    change= cash-totalAmt;
    printf("\nchange\t\t:$%.2f",change);
	printf("\n\t<<HAVE A NICE DAY>>");
  }









