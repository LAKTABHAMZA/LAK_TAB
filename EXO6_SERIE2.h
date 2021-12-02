int EXO6_SERIE2() {

int somme=1,n;
int nbr;
printf("entrer une valeur");
scanf("%d",&nbr);
for(int i=0;i<n;i++)
{
    somme=somme+i;
}
if(nbr==somme){
    printf("nombre parfait");
}
else
    printf("nombre pas parfait\n");
}
