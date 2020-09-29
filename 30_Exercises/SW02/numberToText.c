#include <stdio.h>

int main(void)
{
//Text anzeigen und Nummer eingeben//
	int number = 0;
	while(number!=10){	
		printf("Enter a number between (including) 0 and 9 to display the number as text. Enter 10 to stop the program: ");
		scanf("%d", &number);
	
		printf("Your number: %d\n", number);
	
//Eingangsprüfung//
		if(number<0||number>10){
			printf("invalid -> try again");
		}
		else if(number==10){
			printf("Thank you. Good bye.");
		}
		else{
			if (number==0){
				printf("0 as text is zero");
			}
			else if(number==1){
				printf("1 as text is one");
			}
			else if(number==2){
				printf("2 as text is two");
			}
			else if(number==3){
				printf("3 as text is three");
			}
			else if(number==4){
				printf("4 as text is four");
			}
			else if(number==5){
				printf("5 as text is five");
			}
			else if(number==6){
				printf("6 as text is six");
			}
			else if(number==7){
				printf("7 as text is seven");
			}
			else if(number==8){
				printf("8 as text is eight");
			}
			else{
				printf("9 as text is nine");
			}
		}
	}		
return 0;
}
