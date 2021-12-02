int EXO5_SERIE2(){
int nb1;
int nbre ;
printf("entrer nb1");
scanf("%d",&nb1);
for(int i=0;i<24;i++)
{
    scanf("%d",&nbre);
    if(nb1>nbre)
        nb1=nbre;
}
printf("nb1\n",nb1);
}
