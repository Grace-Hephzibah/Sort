#include<stdio.h>
#include<string.h>

int main()
{
   int count; char str[25][25],temp[25];
   puts("Number of Strings"); scanf("%d",&count);

   puts("Enter Strings ");
   for(int i=0;i<=count;i++)
      gets(str[i]);

   for(int i=0;i<=count;i++)
      for(int j=i+1;j<=count;j++)
      {
         if(strcmp(str[i],str[j])>0)
         {
            strcpy(temp,str[i]);
            strcpy(str[i],str[j]);
            strcpy(str[j],temp);
         }
      }
   printf("Order of Sorted Strings:");
   for(int i=0;i<=count;i++)
      puts(str[i]);
   return 0;
}
