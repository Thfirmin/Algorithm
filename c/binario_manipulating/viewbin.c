
/* viwbin.c */

#include <stdio.h>
#define iifc(expr) ((expr) ? ('1') : ('0'))

void byteToBin (char b, char* bin);
void intTohex (unsigned long int b, char* hex);

int main (int argc, char* argv[])
{
   FILE *arq;
   char buf[9];
   int  contByteLin=0;
   unsigned long int contLin=1;
   char pos [9];

   int f;

   if (argc!=2)
   {
      printf ("Parametro incorreto.\n");
      printf ("Informe apenas o nome do arquivo\n");
      return 1;
   }

   if (!(arq=fopen(argv[1],"r")))
   {
      printf ("Nao foi possivel abrir o arquivo!\n");
      return 1;
   }

   printf ("           00       01       02       03       04       05       06       07       08       09       0A       0B       0C       0D       0E       0F\n");
   printf ("           --------------------------------------------------------------------------------------------------\n");
   printf ("00000000 | ");

   while (f=fread(buf,1,1,arq))
   {
      if (contByteLin==16)
      {
         contByteLin = 0;
         printf ("\n");

         if ((contLin % 0x10) == 0)
         {
            printf ("           --------------------------------------------------------------------------------------------------\n");
            printf ("           00       01       02       03       04       05       06       07       08       09       0A       0B       0C       0D       0E       0F\n");
            printf ("           --------------------------------------------------------------------------------------------------\n");
         }

         intTohex (contLin++, pos);
         printf ("%s | ",pos);

      }

      byteToBin (buf[0],buf);
      printf ("%s ",buf);

      contByteLin ++;
   }

   printf ("\n");
   close (arq);
}

void byteToBin (char b, char* bin)
{
   bin [0] = iifc (b & 0x80);
   bin [1] = iifc (b & 0x40);
   bin [2] = iifc (b & 0x20);
   bin [3] = iifc (b & 0x10);
   bin [4] = iifc (b & 0x8);
   bin [5] = iifc (b & 0x4);
   bin [6] = iifc (b & 0x2);
   bin [7] = iifc (b & 0x1);
   bin [8] = '\0';
}


void intTohex (unsigned long int b, char* hex)
{
   char vet[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
   unsigned long int r;

   r = b % 0x10; hex[7] = vet[r]; b = b >> 0x4;
   r = b % 0x10; hex[6] = vet[r]; b = b >> 0x4;
   r = b % 0x10; hex[5] = vet[r]; b = b >> 0x4;
   r = b % 0x10; hex[4] = vet[r]; b = b >> 0x4;
   r = b % 0x10; hex[3] = vet[r]; b = b >> 0x4;
   r = b % 0x10; hex[2] = vet[r]; b = b >> 0x4;
   r = b % 0x10; hex[1] = vet[r]; b = b >> 0x4;

   hex[0] = vet[b]; 
   hex[8] = '\0';    
}


