#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define WHITE   "\033[37m"
#define RESET   "\033[0m"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// make compile run
void mcr_JAVA(){// sp
	char makeJava[200];
	char javasorround[500];

	printf("JAVA: ");
	printf("\nmake : name of the program");
	printf("\nsample : , main/make/ ~ main | output main.java");

	printf("\nmain/make/ ~ ");
		scanf("%49s", makeJava);
	snprintf(javasorround, sizeof(javasorround), "nano %s.java",makeJava);
	system(javasorround);
	printf("\n");

			char javac[50];
			char javacSorround[100];
			printf(GREEN"\n");
			system("ls");
			printf("\n"RESET);
			printf("/main/compile/ ~ ");
				scanf("%49s", javac);
			snprintf(javacSorround, sizeof(javacSorround), "javac %s", javac);
			system(javacSorround);

			char compileSorround[200];
			char compileJ[100]; // compile JAVA
			printf("\nmain/run/ ~ ");
				scanf("%99s", compileJ);

			snprintf(compileSorround, sizeof(compileSorround), "java %s", compileJ);
			system(compileSorround);

}// ep

void compile_java(){ // sp
	char compileJAVA[100];
	char javaSource[50];
	char javaName[50];
	char runjava[50];

printf(GREEN"\n");
system("ls");
printf("\n"RESET);

printf("main/compileJAVA/ ~ ");
	scanf("%49s", javaSource);

snprintf(compileJAVA, sizeof(compileJAVA), "javac %s", javaSource);
system(compileJAVA);
printf("\n");
} // ep



void run_programC(){// sp
	char programname[50];
	char compileprogram[100];

printf(GREEN"\n");
system("ls");
printf("\n"RESET);

printf("main/runprogram/ ~");
	scanf("%49s", programname);

snprintf(compileprogram, sizeof(compileprogram), "./%s", programname);
system(compileprogram);
printf("\n");
}// ep

void compileC(){ // se
	char instruct[200];
	char compileC[50];
	char nameofP[50]; // name of the program u want to name
	printf(GREEN"\n");
	system("ls");
	printf("\n"RESET);

	printf("compileC/source: ");
		scanf("%49s", compileC);
	printf("compileC/NameOfTheProgram: ");
		scanf("%49s", nameofP);

	snprintf(instruct, sizeof(instruct), "gcc %s -o %s && ./%s",compileC,nameofP,nameofP);
	system(instruct);
	printf("\n");


} // ep

void help_command(){ // sp
printf("usage: main/~ [command]");
printf("\ncommands:");
	printf(YELLOW"\n-show, show current directory and files");
	printf("\n-edit, this will use Nano Code Editor");
	printf("\n-compC, this will compile and execute/run your c program");
	printf("\n-runC, this will execute/run your c program");
	printf("\n-mcrJAVA, make compile run , Java Program");
	printf("\n-compJAVA, compile Java Program");
	printf("\n"RESET);

} // ep

int main(){
	char command[200];

	do{ // sp

	printf(CYAN"main/~ "RESET);
	scanf("%49s", command);

	if (strcmp(command, "-show") == 0){ // sp
	printf(YELLOW"CurrentDirectory:");
	printf("\n");
	system("pwd");
	printf("\n"RESET);
	printf(GREEN"\n");
		system("ls");
	printf("\n"RESET);
	}// ep
		else if (strcmp(command, "-edit") == 0){ // sp
			char edit[100];
		printf("main/edit/~ ");
			scanf("%99s", edit);
		snprintf(command , sizeof (command), "nano %s",edit);
		system(command);
		} // ep

		else if (strcmp(command, "exit") == 0){ // sp
		break;
		}// ep
			else if (strcmp(command, "clear") == 0){ // sp
			system("clear");
			}// ep

		else if (strcmp(command, "-compC") == 0){ // sp
		compileC();
		}// ep

		else if (strcmp(command, "-help") == 0)
		{ // sp
		help_command();
		} // ep

		else if (strcmp(command, "-delete")== 0){ // sp
		char remove[50];
		char Ch[100];
		system("ls");
		printf("\n");
		printf(RED"main/delete/~ "RESET);
			scanf("%49s", remove);
		snprintf(Ch, sizeof (Ch), "rm %s",remove);
		system(Ch);
		} // ep

		else if (strcmp(command, "-runC") == 0){ // sp
		run_programC();
		} // ep

		// JAVA
		else if (strcmp(command, "-compJAVA") == 0){ // sp
		compile_java();
		} // ep

			// make compile run, JAVA
			else if (strcmp(command, "-mcrJAVA") == 0){// sp
			mcr_JAVA();
			}// ep


		else {
		printf("Command not found : %s", command);
		printf("\n");
		}

	}while(1); // ep


return 0;
}
