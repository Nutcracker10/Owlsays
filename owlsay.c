#include <stdio.h>
#include <string.h>

int characterCount(char toCount[]){ // counts the size of a string
	int i = 0;

	while (toCount[i] != '\0'){
		i++;
	}
	return i;
} // end of characterCount

void owlPrint() {
 		printf ("	  \\---------/\n");
		printf("	 -| (0) (0) |-\n");
		printf("	| |    T    | |\n");
		printf("	 -|         |-\n");
		printf("	  |  _____  |\n");
		printf("	  | [:::::] |\n");
		printf("	  | [_____] !\n");
		printf("	  ===========\n");
		printf("	    =======   \n");
	
} // end of owlPrint

int sCheck(char** argv) {
	int i=0;
	while (argv[i] != NULL) {
		if (strcmp(argv[i], "Saoirse")== 0)
			return 1;
		
		else 
			i++;
	}
	return 0;
} // end of sCheck

void owlPrintS() {
 		printf ("	  \\---------/\n");
		printf("	 -|(<3) (<3)|-\n");
		printf("	| |    T    | |\n");
		printf("	 -|         |-\n");
		printf("	  |  _____  |\n");
		printf("	  | [:::::] |\n");
		printf("	  | [_____] !\n");
		printf("	  ===========\n");
		printf("	    =======   \n");
} // end of owlPrintS	


void speechPrint(int count, char** argv) { // calculates size of speech bubble and prints
	printf("  ");	
	for(int i=0; i != count; i++)	{ printf("-"); }	
	printf("\n {  ");
	
	int i=1;
	while(argv[i] != NULL) {
		printf("%s ", argv[i]); i++;
	}
	
	printf(" }\n  ");	

	for(int i=0; i != count; i++)	{ printf("-"); }
	printf("\n   \\\\\n");
	printf("    \\\\\n");			
} // end of speechPrint

int main (int argc, char** argv) {

	if (argc < 2) {
		printf("Too few arguments\n");
	} // end of if


	else {
		int i=0;	
		int count=0;
		while (argv[i] != NULL) {
				count += characterCount(argv[i]);
				i++;
		}
		count += (i-3);
		
		speechPrint(count, argv);	
	
		if (sCheck(argv) == 1){
			owlPrintS();
		}	

		else {
		owlPrint();
		}

	} // end of else
 
	return 0;
}
