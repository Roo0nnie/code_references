#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int main() {
	
	char name[20], AnotherItem, Name[100], Trans_ID[100], Last_name[100];
	static char custNO[100];
	int QTY, number, SelectNumber, cash, addcash, PICKUP, DELIVER, mode;
	float Price, amt, TotalAmount, change;
	int Fries = 0, Pizza = 0, Choco = 0, Bacon = 0, Iced = 0, Fish = 0, Chicken = 0, Sandwich = 0, Fried = 0, Noodles =0;
	int Fish_price, Fries_Price, Bacon_Price, Choco_Price, Chicken_Price, Noodles_Price, Fried_Price,Mocha_price,Pizza_Price,Sandwich_Price;
	
	printf("Welcome to MJAY's FOOD AND DRINKS RESERVATION!\n");
	printf("Enter your name: ");
	scanf("%s", &name);
	printf("Please provide a contact number:");
	scanf("%s", &custNO);

	do {
		system("cls");
     	printf("GOOD DAY! Here's the MENU Ma'am/Sir, %s\n\n", name);
	    printf("MENU\tITEM\t\t\tPRICE\n");
	    printf("[1]\tIced Mocha\t\tPHP 139.00\n");
	    printf("[2]\tFish & Chips\t\tPHP 129.00\n");
	    printf("[3]\tFries\t\t\tPHP 99.00\n");
	    printf("[4]\tBacon Egg Waffle\tPHP 109.00\n");
	    printf("[5]\tChoco Milk Tea\t\tPHP 119.00\n");
	    printf("[6]\tChicken_Rice\t\tPHP 80.00\n");
	    printf("[7]\tNoodles\t\t\tPHP 75.00\n");
	    printf("[8]\tFried_Rice\t\tPHP 95.00\n");
	    printf("[9]\tPizza\t\t\tPHP 150.00\n");
	    printf("[0]\tEgg Sandwich\t\tPHP 90.00\n");
	    printf("======================================================================\n");
	do {
	    printf("Select a number: ");
	    scanf("%d", &number);
	    {
	    if(number == 1)
		{
			printf("Iced Mocha\n");
			Iced = 1;
		}
		else if(number == 2)
		{
			printf("Fish & Chips\n");
			Fish = 1;
		}
		else if(number == 3)
		{
			printf("Fries\n");
			Fries = 1;
		}
 	 	else if(number == 4)
 	 	{
 	 		printf("Bacon Egg Waffle\n");
 	 		Bacon = 1;
 	 	}
 	 	else if(number == 5)
 	 	{
 	 		printf("Choco Milk Tea\n");
 	 		Choco = 1;
 	 	}
 	 	else if(number == 6)
 	 	{
 	 		printf("Chicken_Rice\n");
 	 		Chicken = 1;
 	 	}
 	 	else if(number == 7)
 	 	{
 	 		printf("Noodles\n");
 	 		Noodles = 1;
 	 	}
 	 	else if(number == 8)
 	 	{
 	 		printf("Fried_Rice\n");
 	 		Fried = 1;
 	 	}
 	 	else if(number == 9)
 	 	{
 	 		printf("Pizza\n");
 	 		Pizza = 1;
 	 	}
 	 	else if(number == 0)
 	 	{
 	 		printf("Egg Sandwich\n");
 	 		Sandwich = 1;
 	 	}
		}
	} while (number > 9);
	
	    printf("\nEnter Quantity: ");
	    scanf("%d", &QTY);


	switch (number) {
		case 1:
			Price = 139.00;
			Mocha_price = Mocha_price + (QTY * Price);
			
			break;
		case 2:
			Price = 129.00;
			Fish_price = Fish_price + (QTY * Price);
			break;
	    case 3:
	    	Price = 99.00;
	    	Fries_Price = Fries_Price + (QTY * Price);
	    	
	    	break;
	    case 4:
	    	Price = 109.00;
	    	Bacon_Price = Bacon_Price + (QTY * Price);
	    	
	    	break;
	    case 5:
	    	Price = 119.00;
	    	Choco_Price = Choco_Price + (QTY * Price);
	    	
	    	break;
	    case 6:
	    	Price = 80.00;
	    	Chicken_Price = Chicken_Price + (QTY * Price);
	    	
	    	break;
	    case 7:
	    	Price = 75.00;
	    	Noodles_Price = Noodles_Price + (QTY * Price);
	    	
	    	break;
	    case 8:
	    	Price = 95.00;
	    	Fried_Price = Fried_Price + (QTY * Price);
	    	
	    	break;
	    case 9:
	    	Price = 150.00;
	    	Pizza_Price = Pizza_Price + (QTY * Price);
	    	
	    	break;
	    case 0:
	    	Price = 90.00;
	    	Sandwich_Price = Sandwich_Price + (QTY * Price);
	    	
	    	break;
	    default:
	    	printf("Invalid number!\n");
	}
	
	amt = Price * QTY;
	TotalAmount = TotalAmount + amt;
	printf("======================================================================\n");
	printf("Total amount: %.2f\n", TotalAmount);
	printf("======================================================================\n");
	
	printf("Would you like to buy another item (y/n)?: ");
	AnotherItem = getch();
	} while (AnotherItem == 'y' || AnotherItem == 'Y');
	
    system("cls");
	printf("\t\tMode of Payment\n");
	do {
		printf("\n[1]\tCash On Delivery\n");
		printf("[2]\tOnline Payment\n");
	 	printf("======================================================================\n");
		printf("\nCOD or Online Payment. Please Select a number\n");
		scanf("%d",&mode);
		{
		if(mode == 1)
		{
			
	 		system("cls");
     		printf("\tCash on Delivery\n------------------------------------------\n");
	 		printf("What time would you like to deliver your order?\n\n");
 	 		printf("[1]\t9:00 am\t\tto\t10.00 am\n");
  	 		printf("[2]\t10:00 am\tto\t11.00 am\n");
 			printf("[3]\t11:00 am\tto\t12.00 am\n");
 	 		printf("[4]\t12:00 am\tto\t1.00 pm\n");
 			printf("[5]\t1:00 pm\t\tto\t2.00 pm\n");
 			printf("[6]\t2:00 pm\t\tto\t3.00 pm\n");
 	 		printf("[7]\t3:00 pm\t\tto\t4.00 pm\n");
 	 		printf("[8]\t4:00 pm\t\tto\t5.00 pm\n");
 	 		printf("======================================================================\n");
	do
	{
		printf("Select a number: ");
 	 	scanf("%d", &SelectNumber);
		{
		if(SelectNumber == 1)
		{
			printf("We deliver your order\s at exactly 9:00 am to 10:00 am.\n");
		}
		else if(SelectNumber == 2)
		{
			printf("We deliver your order\s at exactly 10:00 am to 11:00 am.\n");
		}
		else if(SelectNumber == 3)
		{
			printf("We deliver your order\s at exactly 11:00 am to 12.00 am.\n");
		}
 	 	else if(SelectNumber == 4)
 	 	{
 	 		printf("We deliver your order\s at exactly 12:00 am to 1.00 pm.\n");
 	 	}
 	 	else if(SelectNumber == 5)
 	 	{
 	 		printf("We deliver your order\s at exactly 1:00 pm to 2.00 pm.\n");
 	 	}
 	 	else if(SelectNumber == 6)
 	 	{
 	 		printf("We deliver your order\s at exactly 2:00 pm to 3.00 pm.\n");
 	 	}
 	 	else if(SelectNumber == 7)
 	 	{
 	 		printf("We deliver your order\s at exactly 3:00 pm to 4.00 pm.\n");
 	 	}
 	 	else if(SelectNumber == 8)
 	 	{
 	 		printf("We deliver your order\s at exactly 4:00 pm to 5.00 pm.\n");
 	 	}
		}
	}while(SelectNumber>8);
 	 	switch(SelectNumber)
 	 	{
 	 		case 1:
 	 		break;
 	 		case 2:
 	 		break;
 	 		case 3:
 	 		break;
 	 		case 4:
 	 		break;
 	 		case 5:
 	 		break;
 	 		case 6:
 	 		break;
 	 		case 7:
 	 		break;
 	 		case 8:
 	 		break;
 	 		default:
 	 		printf("invalid number!\n");
 	 	}
			printf("Here is your receipt, please make sure to pay us later. Thank You!\n");
 	 printf("======================================================================\n");
 	 printf("\tReciept\n\n");
 	 printf("Name: %s\tContact No. %s\n", name, custNO);
 	 printf("\nItem\t\t\tAmount\n");
 	 printf("----------------------------------------\n");
 	 if(Iced = 1) {
 	 	printf("Iced Mocha\t\t%d\n", Mocha_price);
	  } if(Fish == 1) {
	  	printf("Fish & Fries\t\t%d\n", Fish_price-1);
	  } if(Fries == 1) {
	  	printf("Fries\t\t\t%d\n", Fries_Price);	
	  } if(Bacon == 1) {
	  	printf("Bacon Egg Waffle\t%d\n", Bacon_Price);
	  } if(Choco == 1) {
	  	printf("Choco Milk Tea\t\t%d\n", Choco_Price); 
	  } if(Chicken == 1) {
	  	printf("Chicken Rice\t\t%d\n", Chicken_Price);
	  } if(Noodles == 1) {
	  	printf("Noodles\t\t\t%d\n", Noodles_Price);
	  } if(Fried == 1) {
	  	printf("Fried Rice\t\t%d\n", Fried_Price);
	  } if(Pizza == 1) {
	  	printf("Pizza\t\t\t%d\n", Pizza_Price);
	  } if(Sandwich == 1) {
	  	printf("Egg Sandwich\t\t%d\n", Sandwich_Price);
	  	
	  }
 	 
	 printf("\nTotal: \t\t\t%.2f\n", TotalAmount);			
		}
		else if(mode == 2)
		{
			system("cls");
			printf("\tOnline Payment\n------------------------------------------\n");
			
			printf("Name: ");
			scanf("%s", &Name);
			printf("Last name: ");
			scanf("%s", &Last_name);
			printf("Transaction ID: ");
			scanf("%s", &Trans_ID);
			
			printf("\nEnter your payment: ");
 	 		scanf("%d", &cash);
 	 
 	 while (TotalAmount > cash) {
 	 	printf("Insufficient cash, please add some more.\n");
 	 	printf("Enter additional cash: ");
 	    scanf("%d", &addcash);
 	    cash = cash + addcash;
 	
	  }
	printf("Here is your receipt. Thank You!\n");
 	 printf("======================================================================\n");
 	 printf("\tReciept\n\n");
 	 printf("Name: %s\tContact No. %s\n", Name, custNO);
 	 printf("\nItem\t\t\tAmount\n");
 	 printf("----------------------------------------\n");
 	 if(Iced = 1) {
 	 	printf("Iced Mocha\t\t%d\n", Mocha_price);
	  } if(Fish == 1) {
	  	printf("Fish & Fries\t\t%d\n", Fish_price-1);
	  } if(Fries == 1) {
	  	printf("Fries\t\t\t%d\n", Fries_Price);	
	  } if(Bacon == 1) {
	  	printf("Bacon Egg Waffle\t%d\n", Bacon_Price);
	  } if(Choco == 1) {
	  	printf("Choco Milk Tea\t\t%d\n", Choco_Price); 
	  } if(Chicken == 1) {
	  	printf("Chicken Rice\t\t%d\n", Chicken_Price);
	  } if(Noodles == 1) {
	  	printf("Noodles\t\t\t%d\n", Noodles_Price);
	  } if(Fried == 1) {
	  	printf("Fried Rice\t\t%d\n", Fried_Price);
	  } if(Pizza == 1) {
	  	printf("Pizza\t\t\t%d\n", Pizza_Price);
	  } if(Sandwich == 1) {
	  	printf("Egg Sandwich\t\t%d\n", Sandwich_Price);
	  	
	  }
 	 
	 printf("\nTotal: \t\t\t%.2f\n", TotalAmount);	
	  
	  change = cash - TotalAmount;
 	  printf("------------------------------------------\n\n");
 	  printf("Total Cash:PHP %.2d\n", cash);
 	  printf("Total purchase:PHP %.2f\n", TotalAmount);
 	  printf("------------------------------------------\n");
 	  printf("Change:PHP %.2f\n", change);

 //	  printf("Customer Full name: %s %s\n", Name, Last_name);
//
// 	  printf("The identity code will be sent to %s for confirmation.\n", custNO);
 printf("Enjoy! your Food Ma'am/Sir, Thank you! Come again :-)\nTransaction Completed!\n");
//			
			
		}
	}
}
	while(mode > 2);

	 

}

