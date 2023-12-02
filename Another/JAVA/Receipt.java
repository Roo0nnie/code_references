import java.util.Scanner;

public class Receipt {

	public static void main(String[] args) {
		
		Scanner scan = new Scanner(System.in);
		
		String name ="", Name ="", Trans_ID ="", Last_name ="";
		String custNO ="";
		int QTY =0, number =0, SelectNumber =0, cash =0, addcash =0, PICKUP =0, DELIVER =0, mode =0, AnotherItem=0;
		double Price =0, amt =0, TotalAmount=0, change=0;
		int Fries = 0, Pizza = 0, Choco = 0, Bacon = 0, Iced = 0, Fish = 0, Chicken = 0, Sandwich = 0, Fried = 0, Noodles =0;
		double Fish_price =0, Fries_Price =0, Bacon_Price =0, Choco_Price=0, Chicken_Price=0, Noodles_Price=0, Fried_Price=0,Mocha_price=0,Pizza_Price=0,Sandwich_Price=0;
	
		System.out.println("Welcome to Onie's FOOD AND DRINKS RESERVATION!");
		System.out.print("Enter your name: ");
		name = scan.nextLine();
		System.out.print("Please provide a contact number:");
		custNO = scan.nextLine();
		
	do {	
     	System.out.println("\nGOOD DAY! Here's the MENU Ma'am/Sir,"+name);
	    System.out.println("MENU\tITEM\t\t\tPRICE\n");
	    System.out.println("[1]\tIced Mocha\t\tPHP 139.00");
	    System.out.println("[2]\tFish & Chips\t\tPHP 129.00");
	    System.out.println("[3]\tFries\t\t\tPHP 99.00");
	    System.out.println("[4]\tBacon Egg Waffle\tPHP 109.00");
	    System.out.println("[5]\tChoco Milk Tea\t\tPHP 119.00");
	    System.out.println("[6]\tChicken_Rice\t\tPHP 80.00");
	    System.out.println("[7]\tNoodles\t\t\tPHP 75.00");
	    System.out.println("[8]\tFried_Rice\t\tPHP 95.00");
	    System.out.println("[9]\tPizza\t\t\tPHP 150.00");
	    System.out.println("[0]\tEgg Sandwich\t\tPHP 90.00");
	    System.out.println("======================================================================");
	    
		do {
		    System.out.println("Select a number: ");
		    number = scan.nextInt();
		    {
		    if(number == 1)
			{
				System.out.println("Iced Mocha");
				Iced = 1;
			}
			else if(number == 2)
			{
				System.out.println("Fish & Chips");
				Fish = 1;
			}
			else if(number == 3)
			{
				System.out.println("Fries");
				Fries = 1;
			}
	 	 	else if(number == 4)
	 	 	{
	 	 		System.out.println("Bacon Egg Waffle");
	 	 		Bacon = 1;
	 	 	}
	 	 	else if(number == 5)
	 	 	{
	 	 		System.out.println("Choco Milk Tea");
	 	 		Choco = 1;
	 	 	}
	 	 	else if(number == 6)
	 	 	{
	 	 		System.out.println("Chicken_Rice");
	 	 		Chicken = 1;
	 	 	}
	 	 	else if(number == 7)
	 	 	{
	 	 		System.out.println("Noodles");
	 	 		Noodles = 1;
	 	 	}
	 	 	else if(number == 8)
	 	 	{
	 	 		System.out.println("Fried_Rice");
	 	 		Fried = 1;
	 	 	}
	 	 	else if(number == 9)
	 	 	{
	 	 		System.out.println("Pizza");
	 	 		Pizza = 1;
	 	 	}
	 	 	else if(number == 0)
	 	 	{
	 	 		System.out.println("Egg Sandwich");
	 	 		Sandwich = 1;
	 	 	}
			}
		} while (number > 9);
		
		    System.out.println("\nEnter Quantity: ");
		    QTY = scan.nextInt();

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
		    	System.out.println("Invalid number!");
		}
		
		amt = Price * QTY;
		TotalAmount = TotalAmount + amt;
		System.out.println("======================================================================\n");
		System.out.println("Total amount: "+TotalAmount);
		System.out.println("======================================================================\n");
		
		System.out.println("Would you like to buy another item? \nEnter a number 1 = yes 0 = no: ");
		AnotherItem = scan.nextInt();
		} while (AnotherItem != 0);
	
	System.out.println("\t\tMode of Payment");
	do {
		System.out.println("[1]\tCash On Delivery");
		System.out.println("[2]\tOnline Payment");
	 	System.out.println("======================================================================");
		System.out.print("COD or Online Payment. \nPlease Select a number: ");
		mode = scan.nextInt();
		{
		if(mode == 1)
		{
			System.out.println("======================================================================");
     		System.out.println("\n\tCash on Delivery\n------------------------------------------\n");
	 		System.out.println("What time would you like to deliver your order?");
 	 		System.out.println("[1]\t9:00 am\t\tto\t10.00 am");
  	 		System.out.println("[2]\t10:00 am\tto\t11.00 am");
 			System.out.println("[3]\t11:00 am\tto\t12.00 am");
 	 		System.out.println("[4]\t12:00 am\tto\t1.00 pm");
 			System.out.println("[5]\t1:00 pm\t\tto\t2.00 pm");
 			System.out.println("[6]\t2:00 pm\t\tto\t3.00 pm");
 	 		System.out.println("[7]\t3:00 pm\t\tto\t4.00 pm");
 	 		System.out.println("[8]\t4:00 pm\t\tto\t5.00 pm");
 	 		System.out.println("======================================================================");
	do
	{
		System.out.print("Select a number: ");
		SelectNumber = scan.nextInt();
		System.out.println();
		{
		if(SelectNumber == 1)
		{
			System.out.println("We deliver your order\s at exactly 9:00 am to 10:00 am.");
		}
		else if(SelectNumber == 2)
		{
			System.out.println("We deliver your order\s at exactly 10:00 am to 11:00 am.");
		}
		else if(SelectNumber == 3)
		{
			System.out.println("We deliver your order\s at exactly 11:00 am to 12.00 am.");
		}
 	 	else if(SelectNumber == 4)
 	 	{
 	 		System.out.println("We deliver your order\s at exactly 12:00 am to 1.00 pm.");
 	 	}
 	 	else if(SelectNumber == 5)
 	 	{
 	 		System.out.println("We deliver your order\s at exactly 1:00 pm to 2.00 pm.");
 	 	}
 	 	else if(SelectNumber == 6)
 	 	{
 	 		System.out.println("We deliver your order\s at exactly 2:00 pm to 3.00 pm.");
 	 	}
 	 	else if(SelectNumber == 7)
 	 	{
 	 		System.out.println("We deliver your order\s at exactly 3:00 pm to 4.00 pm.");
 	 	}
 	 	else if(SelectNumber == 8)
 	 	{
 	 		System.out.println("We deliver your order\s at exactly 4:00 pm to 5.00 pm.");
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
 	 		System.out.println("invalid number!");
 	 	}
			System.out.println("Here is your receipt, please make sure to pay us later. Thank You!");
 	 System.out.println("======================================================================");
 	 System.out.println("\tReciept");
 	 System.out.println("Name: " +name+"\tContact No. " +custNO);
 	 System.out.println("Item\t\t\tAmount");
 	 System.out.println("----------------------------------------");
 	 if(Iced == 1) {
 	 	System.out.println("Iced Mocha\t\t" +Mocha_price);
	  } if(Fish == 1) {
	  	System.out.println("Fish & Fries\t\t" +Fish_price);
	  } if(Fries == 1) {
	  	System.out.println("Fries\t\t\t" +Fries_Price);	
	  } if(Bacon == 1) {
	  	System.out.println("Bacon Egg Waffle\t" +Bacon_Price);
	  } if(Choco == 1) {
	  	System.out.println("Choco Milk Tea\t\t" +Choco_Price); 
	  } if(Chicken == 1) {
	  	System.out.println("Chicken Rice\t\t" +Chicken_Price);
	  } if(Noodles == 1) {
	  	System.out.println("Noodles\t\t\t" +Noodles_Price);
	  } if(Fried == 1) {
	  	System.out.println("Fried Rice\t\t" +Fried_Price);
	  } if(Pizza == 1) {
	  	System.out.println("Pizza\t\t\t" +Pizza_Price);
	  } if(Sandwich == 1) {
	  	System.out.println("Egg Sandwich\t\t" +Sandwich_Price);
	  	
	  }
 	 
	 System.out.println("\nTotal: \t\t\t" +TotalAmount);			
		}
		else if(mode == 2)
		{
			System.out.println("\n\tOnline Payment\n------------------------------------------");
			
			System.out.println("");
			Last_name = scan.nextLine();
		
			System.out.print("Name: ");
			name = scan.nextLine();
			System.out.print("Transaction ID: ");
			Trans_ID = scan.nextLine();
			
			System.out.print("Enter your payment: ");
 	 		cash = scan.nextInt();
 	 
 	 while (TotalAmount > cash) {
 	 	System.out.println("Insufficient cash, please add some more.");
 	 	System.out.println("Enter additional cash: ");
 	    addcash = scan.nextInt();
 	    cash = cash + addcash;
 	
	  }
	System.out.println("Here is your receipt. Thank You!");
 	 System.out.println("======================================================================");
 	 System.out.println("\tReciept");
 	System.out.println("Transaction ID: "+Trans_ID );
 	 System.out.println("Name: "+name+"\tContact No. "+custNO);
 	 System.out.println("\nItem\t\t\tAmount");
 	 System.out.println("----------------------------------------");
 	 if(Iced == 1) {
 	 	System.out.println("Iced Mocha\t\t" +Mocha_price);
	  } if(Fish == 1) {
	  	System.out.println("Fish & Fries\t\t" +Fish_price);
	  } if(Fries == 1) {
	  	System.out.println("Fries\t\t\t" +Fries_Price);	
	  } if(Bacon == 1) {
	  	System.out.println("Bacon Egg Waffle\t" +Bacon_Price);
	  } if(Choco == 1) {
	  	System.out.println("Choco Milk Tea\t\t" +Choco_Price); 
	  } if(Chicken == 1) {
	  	System.out.println("Chicken Rice\t\t" +Chicken_Price);
	  } if(Noodles == 1) {
	  	System.out.println("Noodles\t\t\t" +Noodles_Price);
	  } if(Fried == 1) {
	  	System.out.println("Fried Rice\t\t"+Fried_Price);
	  } if(Pizza == 1) {
	  	System.out.println("Pizza\t\t\t" +Pizza_Price);
	  } if(Sandwich == 1) {
	  	System.out.println("Egg Sandwich\t\t" +Sandwich_Price);
	  	
	  }
 	 
	 System.out.println("\nTotal: " +TotalAmount);	
	  
	  change = cash - TotalAmount;
 	  System.out.println("------------------------------------------");
 	  System.out.println("Total Cash:PHP " +cash);
 	  System.out.println("Total purchase:PHP " +TotalAmount);
 	  System.out.println("------------------------------------------");
 	  System.out.println("Change:PHP "+change);

 	  System.out.println("Enjoy! your Food Ma'am/Sir, Thank you! Come again :-)Transaction Completed!");	
		}
	}
}
	while(mode > 2);

	}
}
		


