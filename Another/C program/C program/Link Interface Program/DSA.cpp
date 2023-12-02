#include  <stdio.h>
#include <stdlib.h>

void Binary() {
	
	char Search();
	system("cls");
	printf("\n");
	printf("\t\t\t\t\t\t\t\t\t\tBINARY SEARCH\n");
	printf("\t\t\t\t\t\t\t\t\t\t_____________\n\n\n");	
	printf("\t\t\t\t\t\t\t\t\t  UNDER CONSTRUCTION!\n\n");
	
	printf("Press any key to exit.....\n\n");
	getchar();
	Search();

}
void Sequential() {

	char Search();
	system("cls");
	printf("\n");
	printf("\t\t\t\t\t\t\t\t\t\tSEQUENTIAL SEARCH\n");
	printf("\t\t\t\t\t\t\t\t\t\t_________________\n\n\n");	
	printf("\t\t\t\t\t\t\t\t\t  UNDER CONSTRUCTION!\n\n");
	
	printf("Press any key to exit.....\n\n");
	getchar();
	Search();	
}
void LinearSearch() {

	char Search();
	system("cls");
	printf("\n");
	printf("\t\t\t\t\t\t\t\t\t\tLINEAR SEARCH\n");
	printf("\t\t\t\t\t\t\t\t\t\t_____________\n\n\n");	
	printf("\t\t\t\t\t\t\t\t\t  UNDER CONSTRUCTION!\n\n");
	
	printf("Press any key to exit.....\n\n");
	getchar();
	Search();	
}
void Bubble() {

	char Sort();
	system("cls");
	printf("\n");
	printf("\t\t\t\t\t\t\t\t\t\tBUBBLE SORT\n");
	printf("\t\t\t\t\t\t\t\t\t\t___________\n\n\n");	
	printf("\t\t\t\t\t\t\t\t\t  UNDER CONSTRUCTION!\n\n");
	
	printf("Press any key to exit.....\n\n");
	getchar();
	Sort();		
	
}
void Selection() {

	char Sort();
	system("cls");
	printf("\n");
	printf("\t\t\t\t\t\t\t\t\t\tSELECTION SORT\n");
	printf("\t\t\t\t\t\t\t\t\t\t______________\n\n\n");	
	printf("\t\t\t\t\t\t\t\t\t  UNDER CONSTRUCTION!\n\n");
	
	printf("Press any key to exit.....\n\n");
	getchar();
	Sort();			
}
void Insertion() {

	char Sort();
	system("cls");
	printf("\n");
	printf("\t\t\t\t\t\t\t\t\t\tINSERTION SORT\n");
	printf("\t\t\t\t\t\t\t\t\t\t______________\n\n\n");	
	printf("\t\t\t\t\t\t\t\t\t  UNDER CONSTRUCTION!\n\n");
	
	printf("Press any key to exit.....\n\n");
	getchar();
	Sort();			
}
void Sort() {
	
	char Title();
	char menu();
	char Select[1];
	system("cls");
	printf("\n");
	printf("		SORTING\n");
	printf("		_______\n\n");
	printf("	[1] Bubble Sort\n");
	printf("	[2] Selection Sort\n");
	printf("	[3] Insertion Sort\n\n");
	printf("	[0] Back\n");
	printf("	[9] QUIT\n");
	printf("\n");
	
	do {
		printf("Select: ");
		gets(Select);
		
	} while (Select[0] != '0' && Select[0] != '1' && Select[0] != '2' && Select[0] != '3' && Select[0] != '9');
	
	if(Select[0] == '0') {
		Title();
	} else if(Select[0] == '1' ) {
		Bubble();
	} else if(Select[0] == '2' ) {
		Selection();
	} else if(Select[0] == '3' ) {
		Insertion();
	} else {
		menu();
	}
} 
void Search() {
	
	char Title();
	char menu();
	char Select[1];
	system("cls");
	printf("\n");
	printf("		SEACHING\n");
	printf("		________\n\n");
	printf("	[1] Sequencial Search\n");
	printf("	[2] Binary Search\n");
	printf("	[3] Linear Search\n\n");
	printf("	[0] Back\n");
	printf("	[9] QUIT\n");
	printf("\n");
	
	do {
		printf("Select: ");
		gets(Select);
		
	} while (Select[0] != '0' && Select[0] != '1' && Select[0] != '2' && Select[0] != '3' && Select[0] != '9');
	
	if(Select[0] == '0') {
		Title();
	} else if(Select[0] == '1' ) {
		Sequential();
	} else if(Select[0] == '2' ) {
		Binary();
	} else if(Select[0] == '3' ) {
		LinearSearch();
	} else {
		menu();
	}	
}
void Graphs() {

	char NonLinear();
	char Select[1];
	system("cls");
	printf("\n");
	printf("\t\t\t\t\t\t\t\t\t\tGRAPHS\n");
	printf("\t\t\t\t\t\t\t\t\t\t______\n\n\n");	
	printf("\t\t\t\t\t\t\t\t\t  UNDER CONSTRUCTION!\n\n");
	
	printf("Press any key to exit.....\n\n");
	gets(Select);
	NonLinear();	
} 
void Trees() {

	char NonLinear();
	char Select[1];
	system("cls");
	printf("\n");
	printf("\t\t\t\t\t\t\t\t\t\tTREES\n");
	printf("\t\t\t\t\t\t\t\t\t\t_____\n\n\n");	
	printf("\t\t\t\t\t\t\t\t\t  UNDER CONSTRUCTION!\n\n");
	
	printf("Press any key to exit.....\n\n");
	gets(Select);
	NonLinear();
}
void Array() {
	
	int size = 0,i=0;
	char arr[size];
	char Linear();
	system("cls");
	printf("\n");
	printf("\t\t\t\t\t\t\t\t\t\tARRAY\n\n");

	FILE *file = fopen("Array.txt", "r");
	char input[200];
	
	if(file == NULL) {
		printf("No File Found!\n");
	} else {
		while(fgets(input, 200, file) != NULL) {
			printf("%s", input);
	}
	}
	fclose(file);	
	printf("\n");
	printf("Enter the size of an array: ");
	scanf("%d", &size);
	printf("Enter %d number/s separate by space: ", size);
	for(i=0; i<size;i++) {
		scanf("%d", &arr[i]);
	}printf("Array[%d] = {", size);
	for(i=0;i<size;i++) {
		printf("%d,", arr[i]);
	}printf("}\n\n\n");
	printf("Press any key to exit.....\n\n");
	getchar();
	getchar();
	Linear();
}
void LinkedList() {

	char Linear();
	system("cls");
	printf("\n");
	printf("\t\t\t\t\t\t\t\t\t\tLINKED LIST\n\n");

	FILE *file = fopen("LinkedList.txt", "r");
	char input[200];
	
	if(file == NULL) {
		printf("No File Found!\n");
	} else {
		while(fgets(input, 200, file) != NULL) {
			printf("%s", input);
	}
	}
	fclose(file);
	printf("\n\n\n");
	printf("Press any key to exit.....\n");	
	getchar();
	Linear();			
}
void Stack() {
	
	char Linear();
	system("cls");
	printf("\n");
	printf("\t\t\t\t\t\t\t\t\t\tSTACK\n\n");
	FILE *file = fopen("Stack.txt", "r");
	char input[200];
	
	if(file == NULL) {
		printf("No File Found!\n");
	} else {
		while(fgets(input, 200, file) != NULL) {
			printf("%s", input);
	}
	}
	fclose(file);
	printf("\n\n");	
	printf("Press any key to exit.....\n");
	getchar();
	Linear();	
}
void Queue() {

	char Linear();
	system("cls");
	printf("\n");
	printf("\t\t\t\t\t\t\t\t\t\t\n");
	printf("\t\t\t\t\t\t\t\t\t\t_____\n\n\n");	
	printf("\t\t\t\t\t\t\t\t\t  UNDER CONSTRUCTION!\n\n");
	
	printf("Press any key to exit.....\n\n");
	getchar();
	Linear();
}
void Linear() {
	
	char menu();
	char Title();
	char Select[1];
	
	system("cls");
	printf("\n");
	printf("		Linear Data Structures\n");
	printf("		______________________\n\n\n");
	printf("	[1] Array\n");
	printf("	[2] Linked List\n");
	printf("	[3] Stack\n");
	printf("	[4] Queue\n\n");
	printf("	[0] Back\n");
	printf("	[9] QUIT\n");
	printf("\n");
	
	do {
		printf("Select: ");
		gets(Select);
		
	} while (Select[0] != '0' && Select[0] != '1' && Select[0] != '2' && Select[0] != '3' && Select[0] != '4' && Select[0] != '9');
	
	if(Select[0] == '0') {
		Title();
	} else if(Select[0] == '1' ) {
		Array();
	} else if(Select[0] == '2' ) {
		LinkedList();
	} else if(Select[0] == '3' ) {
		Stack();
	} else if(Select[0] == '4'){
		Queue();
	} else {
		menu();
	}
}
void NonLinear() {

	char menu();
	char Title();
	char Select[1];	

	system("cls");
	printf("\n");
	printf("		Non-Linear Data Structures\n");
	printf("		__________________________\n\n\n");
	printf("	[1] Graphs\n");
	printf("	[2] Trees\n\n");
	printf("	[0] Back\n");
	printf("	[9] QUIT\n");
	printf("\n");
	
	do {
		printf("Select: ");
		gets(Select);
		
	} while (Select[0] != '0' && Select[0] != '1' && Select[0] != '2' && Select[0] != '9');
	
	if(Select[0] == '0') {
		Title();
	} else if(Select[0] == '1' ) {
		Graphs();
	} else if(Select[0] == '2'){
		Trees();
	} else {
		menu();
	}
}
void Title() {
	char menu();
	char Select[1];
	
	system("cls");
	printf("\n");
	printf("		DATA STRUCTURE & ALGORITHM\n");
	printf("		__________________________\n\n\n");
	printf("	[1] Linear Data Structures\n\n");
	printf("	[2] Non-Linear Data Structures\n\n");
	printf("	[3] Searching\n\n");
	printf("	[4] Sorting\n\n");
	printf("	[0] Quit\n");
	printf("\n");
	do {
		printf("Select: ");
		gets(Select);
		
	} while (Select[0] != '0' && Select[0] != '1' && Select[0] != '2' && Select[0] != '3' && Select[0] != '4');
	
	if(Select[0] == '1') {
		Linear();
	} else if(Select[0] == '2' ) {
		NonLinear();
	} else if(Select[0] == '3'){
		Search();	
	} else if (Select[0] == '4') {
		Sort();
	} else {
		menu();
	}	 
}
void menu() {
	
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
	printf("\n\t\t\t\t|\t\t\t\t\t|\n\t\t\t\t||\t\t\t\t\t|\n\t\t\t\t|||\t\t\t\t\t|\n");
	printf("\t\t\t\t||||____________________________________|\n\n");
	
	printf("Press any key to continue.....\n");
	getchar();
	Title();
}
 main() {
	
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
	getchar();
	Title();

}
