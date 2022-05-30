/* bintoexe.c */

#include <stdio.h>

char bitToByte (char* bin);

int main (int argc, char* argv[])
{
   FILE *arq;
   FILE *arqDest;
   char buf[9];
   char byte[9];
   int  contBit=0;
   char val[2];
   unsigned int f;

   if (argc!=3)
   {
      printf ("Parametro incorreto.\n");
      printf ("Informe o nome do arquivo a ser convertido e o nome do arquivo de destino\n");
      return 1;
   }

   if (!(arq=fopen(argv[1],"r")))
   {
      printf ("Nao foi possivel abrir o arquivo %s!",argv[1]);
      return 1;
   }

   if (!(arqDest=fopen(argv[2],"wb")))
   {
      printf ("Nao foi possivel criar o arquivo %s!\n",argv[2]);
      return 1;
   }
  
   while (f=fread(buf,1,1,arq))
   {
      if ((buf[0]=='1') || (buf[0]=='0'))
      {  
         byte[contBit] = buf[0];
         contBit++;
	 if (contBit == 8)
	 {
           val[0] = bitToByte (byte);
	   f=fwrite(val,1,1,arqDest);
	 }
      }
      else
      {
         contBit = 0;
      }
   }
   close (arq);
   close (arqDest);
   printf ("\n");
}

char bitToByte (char* bin)
{
   char r=0;
 
   if (bin[0]=='1') r |= 0x80;
   if (bin[1]=='1') r |= 0x40;
   if (bin[2]=='1') r |= 0x20;
   if (bin[3]=='1') r |= 0x10;
   if (bin[4]=='1') r |= 0x8;
   if (bin[5]=='1') r |= 0x4;
   if (bin[6]=='1') r |= 0x2;
   if (bin[7]=='1') r |= 0x1;

   return r;
}
