#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <windows.h>
#include <MMsystem.h>

int setcolor(int ForgC){
	WORD wColor;

	HANDLE hStdOut=GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO csbi;
	if(GetConsoleScreenBufferInfo(hStdOut,&csbi))
	{
		wColor = (csbi.wAttributes & 0xff)+(ForgC & 0xff);
		SetConsoleTextAttribute(hStdOut, wColor);
	}
	return;
    }

int color(int couleurDuText,int couleurDeFond){
	HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(H,couleurDeFond*16+couleurDuText);
}
 void pendu(int P){

 	 switch(P){
                  case 15:printf("\t\t\t\t\t\t+===========+ \n ");
           		 break;
         		  case 14:printf("\t\t\t\t\t\t+===========+\n ");
	                      printf("\t\t\t\t\t\t    |     \n");
	             break;
                  case 13:
                          printf("\t\t\t\t\t\t   +===========+  \n ");
                          printf("\t\t\t\t\t\t      |     \n");
                          printf("\t\t\t\t\t\t      |     \n");
                          printf("\t\t\t\t\t\t   \n");
                 break;
                  case 12:
                          printf("\t\t\t\t\t\t+===========+ \n ");
                          printf("\t\t\t\t\t\t   | \n");
                          printf("\t\t\t\t\t\t   | \n");
                          printf("\t\t\t\t\t\t   | \n");
                          printf("\t\t\t\t\t\t   \n");
                 break;
                  case 11:
                          printf("\t\t\t\t\t\t+===========+ \n ");
                          printf("\t\t\t\t\t\t   | \n");
                          printf("\t\t\t\t\t\t   | \n");
                          printf("\t\t\t\t\t\t   |\n");
                          printf("\t\t\t\t\t\t   | \n");
                          printf("\t\t\t\t\t\t \n");
                 break;
                  case 10:
                          printf("\t\t\t\t\t\t +===========+ \n ");
                          printf("\t\t\t\t\t\t    | \n");
                          printf("\t\t\t\t\t\t    | \n");
                          printf("\t\t\t\t\t\t    |\n");
                          printf("\t\t\t\t\t\t    | \n");
                          printf("\t\t\t\t\t\t _ \n");
				break;
                  case 9:
                          printf("\t\t\t\t\t\t +===========+ \n ");
                          printf("\t\t\t\t\t\t    |\n");
                          printf("\t\t\t\t\t\t    | \n");
                          printf("\t\t\t\t\t\t    | \n");
                          printf("\t\t\t\t\t\t    | \n");
                          printf("\t\t\t\t\t\t    | \n");
                          printf("\t\t\t\t\t\t _ \n");
                 break;
                  case 8:
                          printf("\t\t\t\t\t\t +===========+ \n ");
                          printf("\t\t\t\t\t\t    | |   \n");
                          printf("\t\t\t\t\t\t    |  \n");
                          printf("\t\t\t\t\t\t    |      \n");
                          printf("\t\t\t\t\t\t    | \n");
                          printf("\t\t\t\t\t\t    |\n");
                          printf("\t\t\t\t\t\t _ \n");
                 break;
                  case 7:
                          printf("\t\t\t\t\t\t +===========+ \n ");
                          printf("\t\t\t\t\t\t     | |  \n");
                          printf("\t\t\t\t\t\t     | 0 \n");
                          printf("\t\t\t\t\t\t     |  \n");
                          printf("\t\t\t\t\t\t     | \n");
                          printf("\t\t\t\t\t\t     | \n");
                          printf("\t\t\t\t\t\t _ \n");
                 break;
                  case 6:
                          printf("\t\t\t\t\t\t +===========+ \n ");
                          printf("\t\t\t\t\t\t    |  | \n");
                          printf("\t\t\t\t\t\t    |  0 \n");
                          printf("\t\t\t\t\t\t    | /|  \n");
                          printf("\t\t\t\t\t\t    |    \n");
                          printf("\t\t\t\t\t\t    |   \n");
                          printf("\t\t\t\t\t\t _ \n");
                 break;
                  case 5:
                          printf("\t\t\t\t\t\t +===========+ \n ");
                          printf("\t\t\t\t\t\t    |  | \n");
                          printf("\t\t\t\t\t\t    |  0 \n");
                          printf("\t\t\t\t\t\t    | /|\\ \n");
                          printf("\t\t\t\t\t\t    |  \n");
                          printf("\t\t\t\t\t\t    |   \n");
                          printf("\t\t\t\t\t\t _ \n");
                 break;
                  case 4:
                         printf("\t\t\t\t\t\t+===========+\n ");
                         printf("\t\t\t\t\t\t   |  |  \n");
                         printf("\t\t\t\t\t\t   |  0\n");
                         printf("\t\t\t\t\t\t   | /|\\ \n");
                         printf("\t\t\t\t\t\t   |  | \n");
                         printf("\t\t\t\t\t\t   |    \n");
                         printf("\t\t\t\t\t\t___ \n");
                 break;
                  case 3:
                         printf("\t\t\t\t\t\t+===========+\n ");
                         printf("\t\t\t\t\t\t   |  | \n");
                         printf("\t\t\t\t\t\t   |  0\n");
                         printf("\t\t\t\t\t\t   | /|\\ \n");
                         printf("\t\t\t\t\t\t   |  | \n");
                         printf("\t\t\t\t\t\t   |    \n");
                         printf("\t\t\t\t\t\t___ \n");
                 break;
                  case 2:
                         printf("\t\t\t\t\t\t+===========+\n ");
                         printf("\t\t\t\t\t\t   |  |\n");
                         printf("\t\t\t\t\t\t   |  0\n");
                         printf("\t\t\t\t\t\t   | /|\\ \n");
                         printf("\t\t\t\t\t\t   |  | \n");
                         printf("\t\t\t\t\t\t   | /  \n");
                         printf("\t\t\t\t\t\t___ \n");
                 break;
                  case 1:
                         printf("\t\t\t\t\t\t+===========+\n ");
                         printf("\t\t\t\t\t\t    |  |\n");
                         printf("\t\t\t\t\t\t    |  0\n");
                         printf("\t\t\t\t\t\t    | /|\\ \n");
                         printf("\t\t\t\t\t\t    |  | \n");
                         printf("\t\t\t\t\t\t    | / \\\n");
                         printf("\t\t\t\t\t\t___ \n");
                     break;
					 }


 }
int main(){
 char rep[2];
	char T[16],MOT[16],inver[16];
	int p=16,i,j=0,r=0;
	int y=16;
int n,c=0,AN;
sleep(1);
printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t LOADING.");
sleep(2);
system("cls");
printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t LOADING..");
sleep(2);
system("cls");
printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t LOADING...");
sleep(2);
system("cls");
printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t please wait...");
sleep(2);
system("cls");
printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t the game will start after ..");
sleep(2);
system("cls");
printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t 3..");
sleep(2);
system("cls");
printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t 2..");
sleep(2);
system("cls");
printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t 1..");
sleep(2);
system("cls");
 printf("\t\t\t\t\t\t  \n\n\n\n\n");

      printf("\t\t\t\t\t\t      \n");
      printf("\t\t\t\t\t\t      \n");
      printf("\t\t\t\t\t\t      \n");
      printf("\t\t\t\t\t\t      \n");
      printf("\t\t\t\t\t\t      0 \n");
      printf("\t\t\t\t\t\t     \\|/\n");
      printf("\t\t\t\t\t\t      | \n");          //hangman
      printf("\t\t\t\t\t\t     / \\\n");
      printf("\t\t\t\t\t    CAN YOU SAVE ME PLESASE ?");
     sleep(3);
system("cls");
	  printf("\t\t\t\t\t\t");
	  color(0,3);
	  //PlaySound(TEXT("C:\\Users\\FATIMA EZZAHRA\\Downloads\\mixkit-game-experience-level-increased-2062.wav"),NULL,SND_SYNC);
	  printf("Bienvenue au niveau 1 du jeu du pendu\n");
	  printf("\n");
	  color(15,0);
	printf("le principe : le premier joueur va entrer un mot et le deuxieme va le deviner\n");
	printf("\n");
	printf("joueur 1 : entrer un mot secret pour commencer le jeu:\t");
	scanf("%s",&T);
//	condition_mot_secret
	system("cls");

//	deuxieme_joueur
	printf("le deuxieme joueur doit deviner le mot ou il va etre pendu\n");
	printf("\n");
	printf("indication: vous avez 16 tentatives\n");
	for(i=0;i<strlen(T);i++)
	{color(3,0);
		MOT[i]='*';
	}
	MOT[strlen(T)]='\0';
	printf("\t\t\t\t\t\t\t\t%s",MOT);
	printf("\n");
//	le_saisir
     while(j<16)
	{ color(15,0);
		printf("\n entrer une lettre :\t");
		scanf("%s",&rep);
//	    	condition_char_deviner
			while(strlen(rep)>1)
	       {printf("ATTENTION: entrer un seul caracter\n");
		    printf("joueur 2 : entrer une lettre :\t");
	        scanf("%s",&rep);
	       }
//		  deviner
		 for(i=0;i<strlen(T);i++)
		 {
			 if(T[i]==rep[0])
			 {
				MOT[i]=rep[0];
				r++;
			}}//pendu
			color(3,0);
				printf("\t\t\t\t\t\t\t\t\t\t\t\tvous avez entrer: %c\n",rep[0]);
			  	y--;
			  	color(12,0);
				printf("il vous reste %d tentatives\n",y);//pendu
			 if(r==0)
             {p--;
                 pendu(p) ;
					 }
			              if(r>0)
				          {color(15,0);
						  printf("%s \n",MOT);
						  r--;}
						  if (strcmp(T,MOT)==0)
		                 {color(13,0);
		                 printf("\n");
						 printf("\t\t\t\t\t\t\t*CONGRATS*");
						 //PlaySound(TEXT("C:\\Users\\FATIMA EZZAHRA\\Downloads\\mixkit-completion-of-a-level-2063.wav"),NULL,SND_SYNC);
						 printf("\n");
						 break;
						}
						  j++;}

                         if (strcmp(T,MOT)!=0 || p==0)
                         {color(13,0);
		                 printf("\n");
						 printf("\t\t\t\t\t\t*GAME OVER*");
						 //PlaySound(TEXT("C:\\Users\\FATIMA EZZAHRA\\Downloads\\mixkit-player-losing-or-failing-2042.wav"),NULL,SND_SYNC);
						 printf("\n");
						    AN=1;     }
						    sleep(2);
						    system("cls");
						  printf("\n");

						   if(AN!=1){
						   	color(14,0);
						   	printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tindication:\n");
						   	color(8,0);
						  printf("\t\t'1'pour allez au niveau 2||'0' pour quiter le jeu\n");
						  printf("\n");
						 printf("\t\tvoulez vous jouer le deuxieme nivau du jeu de pendu(1/0):");
						 scanf("%d",&n);}
						 if(AN==1){
						 getch();
						 }
						 y=16;
		                    p=16;
	                     	j=0;
							 if(n==0) {
							 	getch();
							 }
							 sleep(2);
							 system("cls");
							  y=16;
		                p=16;
	                    j=0;
						 if(n==1){
						 	printf("\t\t\t\t\t");
						 color(14,0);
	 //PlaySound(TEXT("C:\\Users\\FATIMA EZZAHRA\\Downloads\\mixkit-game-experience-level-increased-2062.wav"),NULL,SND_SYNC);
	printf("Bienvenu au niveau 2 au jeu du pendu*\n");
	printf("\n");
	color(15,0);
	printf("le principe : le premier joueur va entrer un mot et le deuxieme va le deviner\n");
	printf("joueur 1 : entrer un mot secret :\t");
	scanf("%s",&T);


//	condition_mot_secret
	while(strlen(T)>16)
	{
		printf("joueur 1 : entrer un mot secret:\t");
	    scanf("%s",&T);}
	    system("cls");
          for(i=0;i<strlen(T);i++)
          {if(T[i]<97){
           c++;}}
              if(c>0)
             {printf("Le mot doit etre en miniscule\n ");
           	  printf("entrer un mot secret :\t");
		      scanf("%s",&T);
		      system("cls");}
     system("cls");


//	deuxieme_joueur
	printf("le deuxieme joueur doit deviner le mot ou il va etre pendu\n");

	for(i=0;i<strlen(T);i++)
	{
		MOT[i]='*';
	}
	MOT[strlen(T)]='\0';
	printf("\t\t\t\t\t");
	color(14,0);
	printf("%s",MOT);
	printf("\n");

      AN=0;
     while(j<16)
 	{ color(15,0);
		printf("\n entrer une lettre :\t");
		scanf("%s",&rep);
//condition_lettre
			 while(strlen(rep)>1)
	         {printf("ATTENTION: entrer un seul caracter\n");
		     printf("joueur 2 : entrer une seul lettre :\t");
	         scanf("%s",&rep);
	         }
//deviner
		     for(i=0;i<strlen(T);i++)
		     {
			     if(T[i]==rep[0])
			     {MOT[i]=rep[0];
				  r++;
		         }
			 }color(3,0);
		    	 printf("\t\t\t\t\t\t\t\t\t\t\t\tvous avez entrer: %c\n",rep[0]);
			  	 y--;
			  	 color(12,0);
			     printf("il vous reste %d tentatives\n",y);
			     if(r==0){
                    p--;
			     	pendu(p);
				 }
				   if(r>0)
				          {color(15,0);
						  printf("%s \n",MOT);
						  r--;}
						  if (strcmp(T,MOT)==0)
		                 {color(13,0);
						 printf("\n");
						 printf("\t\t\t\t\t\t\t*CONGRATS*");
						 //PlaySound(TEXT("C:\\Users\\FATIMA EZZAHRA\\Downloads\\mixkit-completion-of-a-level-2063.wav"),NULL,SND_SYNC);
						 printf("\n");
						 break;}
						  if(p==0)
						  break;
						  j++;}
                         if (strcmp(T,MOT)!=0 || p==0)
		                 {color(13,0);
						 printf("\n");
						 printf("\t\t\t\t\t\t\t*GAME OVER*");
						// PlaySound(TEXT("C:\\Users\\FATIMA EZZAHRA\\Downloads\\mixkit-player-losing-or-failing-2042.wav"),NULL,SND_SYNC);
						 printf("\n");
						 	AN++;}
							 		 	 }
						 sleep(2);
						 system("cls");
						if(AN!=1) {
						 color(14,0);
						  printf("\n\n\n\n\n\n\n\n\n\t\t\t\tindication:\n");
						   color(8,0);
						  printf("\t\t'1'pour allez au niveau 2||'0' pour quiter le jeu\n");
						  printf("\n");
						 printf("\t\tvoulez vous jouer le deuxieme nivau du jeu de pendu(1/0):");
						 scanf("%d",&n);}
						 if(AN==1){
						 	getch();
						 }
						 system("cls");
						 y=16;
		                p=16;
	                    j=0;
						 if(n==0) {
							 	getch();
							 }
							AN=0;
					 if(n==1){
						 	printf("\t\t\t\t\t");
						 	color(0,2);
						 	 //PlaySound(TEXT("C:\\Users\\FATIMA EZZAHRA\\Downloads\\mixkit-game-experience-level-increased-2062.wav"),NULL,SND_SYNC);
						 	printf("Bienvenue au niveau 3 du jeu du pendu\n");
						 	color(15,0);
	printf("le principe : le premier joueur va entrer un mot avec un espace et le deuxieme va le deviner\n");
	printf("joueur 1 : entrer un mot secret :\t");
	fflush(stdin);
	scanf("%[^\n]s",T);
	system("cls");

//	deuxieme_joueur
	printf("le deuxiem joueur doit deviner le mot ou il va etre pendu\n");
    printf("\n");
	printf("indications:\n*vous avez 16 tentatives*\n*le mot contient un espace* \t\n");
	printf("\n");

	for(i=0;i<strlen(T);i++)
	{
		MOT[i]='*';
	}
	MOT[strlen(T)]='\0';
	printf("\n");
	color(2,0);
	printf("\t\t\t\t\t\t\t");
	printf("%s",MOT);
	printf("\n");
//	le_saisir
     while(j<16)
	{ color(15,0);
		printf("\n entrer une lettre :\t");
	    fflush(stdin);
	    scanf("%[^\n]s",rep);
//	    	condition_char_deviner
			while(strlen(rep)>1)
	       {printf("ATTENTION: entrer un seul caracter\n");
		    printf("joueur 2 : entrer une lettre :\t");
	        fflush(stdin);
	      scanf("%[^\n]s",rep);
	       }
//		  deviner
		 for(i=0;i<strlen(T);i++)
		 {
			 if(T[i]==rep[0])
			 {
				MOT[i]=rep[0];
				r++;
			}}//pendu
			color(3,0);
		    	 printf("\t\t\t\t\t\t\t\t\t\t\t\tvous avez entrer: %c\n",rep[0]);
			  	 y--;
			  	 color(12,0);
			printf("il vous reste %d tentatives\n",y);
			 if(r==0)
             {p--;
                  pendu(p);}
			              if(r>0)
				          { color(15,0);
						  printf("%s \n",MOT);
						  r--;}
						  if (strcmp(T,MOT)==0)
		                 {color(13,0);
						 printf("\t\t\t\t\t\t*CONGRATS*\n");
						 //PlaySound(TEXT("C:\\Users\\FATIMA EZZAHRA\\Downloads\\mixkit-completion-of-a-level-2063.wav"),NULL,SND_SYNC);
						 break;}
						  j++;}}
                         if (strcmp(T,MOT)!=0 || p==0)
		                 {AN++;
						  color(13,0);
						 printf("\t\t\t\t\t\t*GAME OVER*\n");
						 //PlaySound(TEXT("C:\\Users\\FATIMA EZZAHRA\\Downloads\\mixkit-player-losing-or-failing-2042.wav"),NULL,SND_SYNC);
						 }
						 sleep(2);
						 n=0;
						 system("cls");
						 printf("\n");
						 color(14,0);
					if(AN!=1){
						 printf("\n\n\n\n\n\n\n\n\t\t\t\t\tindication:\n");
						   color(8,0);
						  printf("\t\t'1'pour allez au niveau 2||'0' pour quiter le jeu\n");
						  printf("\n");
						 printf("\t\tvoulez vous jouer le deuxieme niveau du jeu de pendu(1/0):");
						 scanf("%d",&n);}
						 if(AN==1){
						 	getch();
						 }

						 system("cls");
						 y=16;
		                p=16;
	                    j=0;
						 if(n==0) {
							 	getch();
							 }
						else if(n==1){
						 	 color(0,5);
    //PlaySound(TEXT("C:\\Users\\FATIMA EZZAHRA\\Downloads\\mixkit-game-experience-level-increased-2062.wav"),NULL,SND_SYNC);
	  printf("\t\t\t\t\t*Bienvenue au niveau 4 du jeu du pendu*\n");
	  printf("\n");
	  color(15,0);
	printf("le principe : le premier joueur va entrer un mot et le deuxieme va deviner l'inverse de ce mot \n");
	printf("\n");
	printf("joueur 1 : entrer un mot secret pour commencer le jeu:\t");
	scanf("%s",&T);
//	condition_mot_secret
	system("cls");

//	deuxieme_joueur
	printf("le deuxiem joueur doit deviner le mot ou il va etre pendu\n");
	printf("\n");
	printf("indications:\n*vous avez 16 tentatives*\n*tu dois deviner l'inverse du mot*\n");
	printf("\n");
	for(i=0;i<strlen(T);i++)
	{
		MOT[i]='*';
	}
	MOT[strlen(T)]='\0';
	color(13,0);
	printf("\t\t\t\t\t\t\t%s",MOT);
	printf("\n");
//	le_saisir
strcpy(inver,strrev(T));
     while(j<16)
	{ color(15,0);
		printf("\n entrer une lettre :\t");
		scanf("%s",&rep);
//	    	condition_char_deviner
			while(strlen(rep)>1)
	       {
		   printf("ATTENTION: entrer un seul caracter\n");
		    printf("joueur 2 : entrer une lettre :\t");
	        scanf("%s",&rep);
	       }
//		  deviner
		 for(i=0;i<strlen(T);i++)
		 {
			 if(inver[i]==rep[0])
			 {
				MOT[i]=rep[0];
				r++;
			}}//pendu
			color(3,0);
				printf("\t\t\t\t\t\t\t\t\t\t\t\tvous avez entrer: %c\n",rep[0]);
			  	y--;
			color(12,0);
				printf("ATTENTION:il vous reste %d tentatives\n",y);//pendu
			 if(r==0)
             {p--;
                  pendu(p);	 }
			              if(r>0)
				          { color(15,0);
						  printf("%s \n",MOT);
						  r--;}
						  if (strcmp(inver,MOT)==0)
		                 {color(13,0);
						 printf("\t\t\t\t\t\t*CONGRATS*");
						 //PlaySound(TEXT("C:\\Users\\FATIMA EZZAHRA\\Downloads\\level completed.wav"),NULL,SND_SYNC);
						 break;}
						  j++;}


                         if (strcmp(inver,MOT)!=0 || p==0)

		                 {color(9,0);
						  printf("\t\t\t\t\t*GAME OVER*\n");
						  //PlaySound(TEXT("C:\\Users\\FATIMA EZZAHRA\\Downloads\\mixkit-player-losing-or-failing-2042.wav"),NULL,SND_SYNC);
						  color(15,0);
						    printf("le mot est: %s\n",strrev(T));
					    	 printf("et son inverse est:%s\n",inver  ) ;     }
					    	 color(15,0);
					    	 printf("\n");

						 }
getch();
}
