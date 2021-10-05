#include <stdio.h>
#include <string.h>
int main()
{
char tcNo1[12], tcNo2[12];
FILE *dosya1, *dosya2, *dosya3;
if((dosya1=fopen("valilik.txt","r"))==NULL){
printf("1.dosya acilamadi");
return 0;
}
if((dosya2=fopen("belediye.txt","r"))==NULL){
printf("2. dosya acilamadi");
return 0;
}
if((dosya3=fopen("ortak.txt","w"))==NULL){
printf("2. dosya acilamadi");
return 0;
}
fscanf(dosya1,"%s",tcNo1);
while(!feof(dosya1)){
rewind(dosya2);
fscanf(dosya2,"%s",tcNo2);
while(!feof(dosya2)){
if(strcmp(tcNo1,tcNo2)==0 ){
fprintf(dosya3,"%s\n",tcNo1);
break;
}
fscanf(dosya2,"%s",tcNo2);
}
fscanf(dosya1,"%s",tcNo1);
}
fclose(dosya1);
fclose(dosya2);
fclose(dosya3);
return 0;
}
