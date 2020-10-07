#include <stdio.h>


typedef enum {
		MAIN_MENU = 1,
		NUMSTAT,
		CUBIC,
		FACTORIAL,
		EXIT = 99
	} MenuItem;
	
// function declaration

MenuItem PrintMainMenu (void);



int main(int argc, char* argv[])
{

	MenuItem menuSelected = MAIN_MENU;
	int run = 1;

	while (run)
	{
		switch (menuSelected){
			case MAIN_MENU:
				menuSelected = PrintMainMenu();
				break;
			
			case NUMSTAT:
				printf("executing NumStat\n");
				menuSelected = MAIN_MENU;
				break;
				
			case CUBIC:
				printf("executing Cubic\n");
				menuSelected = MAIN_MENU;
				break;
			
			case FACTORIAL:
				printf("executing Factorial\n");
				menuSelected = MAIN_MENU;
				break;
			
			case EXIT:
				run =0;
				break;
			
			default:
				printf("invalid menu selection\n");
		}	
	}


return 0;
}

//function implementations:
MenuItem PrintMainMenu (void)
{
	MenuItem selection = MAIN_MENU;
	printf("**********************************************\n");
	printf("Main Menu\n");
	printf("**********************************************\n");
	printf("Select from the following options:\n");
	printf("%d - NumStat\n", NUMSTAT);
	printf("%d - Factorial\n", FACTORIAL);
	printf("%d - Exit\n", EXIT);
	printf("--> ");
	scanf("%d", (int*)&selection);
	return selection;
}
	
	
	
	
