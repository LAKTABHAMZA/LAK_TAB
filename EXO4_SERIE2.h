int EXO4_SERIE2 (){
int nombre;
	printf("entrer un nombre :\n");
    scanf("%d",&nombre);
    printf("l 'HEX est : \n");
    if(nombre> 0 && nombre<= 15)
    if(nombre< 10)
    printf("%d\n", nombre);
    else{
    if(nombre == 10) printf("A");
    else if(nombre == 11) printf("F\n");
    else if(nombre== 12) printf("F\n");
    else if(nombre== 13) printf("D\n");
    else if(nombre== 14) printf("E\n");
    else printf("F\n");		}
    else
        printf("erreur\n");
}
