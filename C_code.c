#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void)
{
system("color F1");

     FILE *ascii;    //dhlwnw Files
     FILE *texting;
     FILE *code;
     
     texting=fopen("texting.txt", "r");
     
   if (texting==NULL)     //elenxw an uparxoun kai an oxi, ta dhmiourgw me "w"
   {
     ascii=fopen("ascii.txt", "w");
     texting=fopen("texting.txt", "w");
     code=fopen("code.txt", "w");

     fclose(ascii);
     fclose(code);
   }
   
     fclose(texting);

int k=1;              //epanalhpsh pros8eshs sta .txt
while (k!=0)
{
system("cls");

     int i;
     _Bool flag=1;
     char text[20];
     
     printf("Grapse to keimeno: ");  //diabazw to keimeno p 8elw na kanw coding
     i=0;
     while(i<20 && flag)
     {          
                text[i]=getchar();
                if (text[i]=='\n')
                {
                                 flag=0;
                }
                i++;
     }
     printf("\n");
         
     ascii=fopen("ascii.txt", "a");         //anoigw pinakes me "a"
     texting=fopen("texting.txt", "a");
     code=fopen("code.txt", "a");
    
	 int j;
     for (j=0; j<i; j++)    //pros8etw keimeno/ascii/code+3 sta antistoixa .txt
     {
         fprintf(texting, "%c", text[j]);
         fprintf(ascii, "%i ", text[j]);
         fprintf(code, "%c", text[j]+3);
     }
     fprintf(ascii, "\n");    //bazw "\n" sto ascii kai sto code gt den pernoun
     fprintf(code, "\n");

	 printf("\n");
     
     fclose(ascii);
     fclose(texting);
     fclose(code); 

     
   texting=fopen("texting.txt", "r");  //anoigw me "r" to texting
	 char c;
	 printf("to keimeno einai: ");    //tupwnw sthn o8onh ta periexomena tou
     while (!feof(texting))
     {
			c=fgetc(texting);
			printf("%c",c);
     }
     printf("\n");
   fclose(texting);                   //kleinw to texting
     
   code=fopen("code.txt", "r");       //anoigw me "r" to code
     printf("o kwdikos +3 einai: ");  //tupwnw sthn o8onh ta periexomena tou
     while (!feof(code))
     {
			c=fgetc(code);
			printf("%c",c);
     }
     printf("\n");
   fclose(code);                      //kleinw to code

   ascii=fopen("ascii.txt", "r");        //anoigw me "r" to ascii
     printf("o ascii kwdikos einai: ");  //tupwnw sthn o8onh ta periexomena tou
     while (!feof(ascii))
     {
			c=fgetc(ascii);
			printf("%c",c);
     }
     printf("\n");
   fclose(ascii);                       //kleinw to ascii

system("pause");
}

printf("TO PROGRAMMA TERMATISTHKE\n\n");  // mhnhma telous
system("PAUSE");  
return 0;
}
