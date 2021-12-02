int EXO3_SERIE2 (){
int age;
char sexe;
printf("donner le sexe H pour homme et F pour femme\n");
scanf("%c",&sexe);
printf("donner l'age\n");
scanf("%d",&age);
if((sexe=='H' && age<20) || (sexe=='F' && (age<22 || age>55)))
printf("\n est pa impsable");
else
    printf("imposable\n");

}
