#include <stdio.h>
#include <stdlib.h>

void Array() {
	system("cls");
	printf("\n");
	printf("				       ARRAY\n");
	printf("				       _____\n\n\n");	
	printf("				 Under Construction!\n");
	
	printf("Press any key to exit.....\n\n");	
}
void LinkedList() {
	system("cls");
	printf("\n");
	printf("				       Linked List\n");
	printf("				       ___________\n\n\n");	
	printf("				 Under Construction!\n");
	
	printf("Press any key to exit.....\n\n");	
}
void Stack() {
	system("cls");
	printf("\n");
	printf("				       Stack\n");
	printf("				       _____\n\n\n");	
	printf("				 Under Construction!\n");
	
	printf("Press any key to exit.....\n\n");	
}
void Queue() {
	system("cls");
	printf("\n");
	printf("				       QUEUE\n");
	printf("				       _____\n\n\n");	
	printf("				 Under Construction!\n");
	
	printf("Press any key to exit.....\n\n");	
}

void Linear() {
	
	char Select[1];
	
	system("cls");
	printf("\n");
	printf("				       Linear Data Structures\n");
	printf("				       ______________________\n\n");
	printf("	[1] Array\n");
	printf("	[2] Linked List\n");
	printf("	[3] Stack\n");
	printf("	[4] Queue\n\n");
	printf("	[0] Back\n");
	printf("	[9] QUIT\n");
	printf("\n");
	
	do {
		printf("Press any key...");
		gets(Select);
	}while(Select[0] != '1' && Select[0] != '2'  && Select[0] != '3'  && Select[0] != '4' && Select[0] != '0' && Select[0] != '9'); 

	if(Select[0] == '1') {
		Array();
	} else if(Select[0] == '2') {
		LinkedLink();
	} else if(Select[0] == '3') {
		Stack();
	} else if(Select[0] == '4') {
		Queue();
	} else if(Select[0] == '9'){
		Title();
	} else {
		
	}
	
		
}
void NonLinear() {
	system("cls");
	printf("\n");
	printf("				       Non-Linear Data Structures\n");
	printf("				       __________________________\n\n");
	printf("	[1] Graphs\n");
	printf("	[2] Trees\n\n");
	printf("	[0] Back\n");
	printf("	[9] QUIT\n");
	printf("\n");
}
void Search() {
	system("cls");
	printf("\n");
	printf("				       SEACHING\n");
	printf("				       ________\n\n");
	printf("	[1] Sequencial Search\n");
	printf("	[2] Binary Search\n");
	printf("	[3] Linear Search\n\n");
	printf("	[0] Back\n");
	printf("	[9] QUIT\n");
	printf("\n");
}
void Sort() {
	system("cls");
	printf("\n");
	printf("				       SORTING\n");
	printf("				       _______\n\n");
	printf("	[1] Bubble Sort\n");
	printf("	[2] Selection Sort\n");
	printf("	[3] Insertion Sort\n\n");
	printf("	[0] Back\n");
	printf("	[9] QUIT\n");
	printf("\n");
}

void Title() {
	
	char menu();
	char Select[1];
	
	system("cls");
	printf("\n");
	printf("				       DATA STRUCTURE & ALGORITHM\n");
	printf("				       __________________________\n\n");
	printf("	[1] Linear Data Structures\n\n");
	printf("	[2] Non-Linear Data Structures\n\n");
	printf("	[3] Searching\n\n");
	printf("	[4] Sorting\n\n");
	printf("	[0] Quit\n");
	printf("\n");
	
	do {
		printf("Select: ");
		gets(Select);
	} while(Select[0] != '1' && Select[0] != '2' && Select[0] != '3' && Select[0] != '4' && Select[0] != '0');
	
	if(Select[0] == '1') {
		Linear();
	} else if(Select[0] == '2') {
		NonLinear();
	} else if(Select[0] == '3') {
		Search(); 
	} else if(Select[0] == '4') {
		Sort();
	} else {
		again();
	}
}
}
void menu() {
	
	char Select[1];
	
	system("cls");
	printf("\t\t\t\t_________________________________________\n\t\t\t\t|||\t\t\t\t\t|\n\t\t\t\t||\t\t\t\t\t|");
	printf("\n\t\t\t\t|\t\t\t\t\t|\n\t\t\t\t|");
	printf("\t\tWELCOME\t\t\t|\n\t\t\t\t|\t\t\t\t\t|\n\t\t\t\t|");
	printf("\t\t  To\t\t\t|\n\t\t\t\t|\t\t\t\t\t|\n\t\t\t\t|");
	printf("     DATA STRUCTURE & ALGORITHM\t|\n\t\t\t\t|");
	printf("\t\t  by\t\t\t|\n\t\t\t\t|\t\t\t\t\t|\n\t\t\t\t|\t\t\t\t\t|\t\n\t\t\t\t|\t\t\t\t\t|\n\t\t\t\t|");		
	printf("  Ronnie F .Estillero\t\t\t|\n\t\t\t\t|");
	printf("  BSIT 2A\t\t\t\t|\n\t\t\t\t|\t\t\t\t\t|\n\t\t\t\t|");
	printf("  Mrs. Laarni Pancho\t\t\t|\n\t\t\t\t|  Professor \t\t\t\t|");
	printf("\n\t\t\t\t|\t\t\t\t\t|\n\t\t\t\t|\t\t\t\t\t|\n\t\t\t\t||\t\t\t\t\t|\n");
	printf("\t\t\t\t|||_____________________________________|\n\n");
	
	printf("Press any key to continue.....\n");
	gets(Select);
	Title();	
		
}


main() {
	
	char Select[1];
	
	printf("\t\t\t\t_________________________________________\n\t\t\t\t|||\t\t\t\t\t|\n\t\t\t\t||\t\t\t\t\t|");
	printf("\n\t\t\t\t|\t\t\t\t\t|\n\t\t\t\t|");
	printf("\t\tWELCOME\t\t\t|\n\t\t\t\t|\t\t\t\t\t|\n\t\t\t\t|");
	printf("\t\t  To\t\t\t|\n\t\t\t\t|\t\t\t\t\t|\n\t\t\t\t|");
	printf("     DATA STRUCTURE & ALGORITHM\t|\n\t\t\t\t|");
	printf("\t\t  by\t\t\t|\n\t\t\t\t|\t\t\t\t\t|\n\t\t\t\t|\t\t\t\t\t|\t\n\t\t\t\t|\t\t\t\t\t|\n\t\t\t\t|");		
	printf("  Ronnie F .Estillero\t\t\t|\n\t\t\t\t|");
	printf("  BSIT 2A\t\t\t\t|\n\t\t\t\t|\t\t\t\t\t|\n\t\t\t\t|");
	printf("  Mrs. Laarni Pancho\t\t\t|\n\t\t\t\t|  Professor \t\t\t\t|");
	printf("\n\t\t\t\t|\t\t\t\t\t|\n\t\t\t\t|\t\t\t\t\t|\n\t\t\t\t||\t\t\t\t\t|\n");
	printf("\t\t\t\t|||_____________________________________|\n\n");
	
	printf("Press any key to continue.....\n");
	gets(Select);
	Title();
		
}

