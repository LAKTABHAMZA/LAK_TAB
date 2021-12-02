int EXO1_SERIE2 (){
    int somme_argent;
    int b200,b100,b50,b20,b10,b1;
    int rest ;
    printf("donner la somme d'argent\n");
    scanf("%d",&somme_argent);
    b200=somme_argent/200;
    rest=somme_argent % 200 ;
    b100=rest/100;
    rest=rest % 100 ;
    b50=rest/50;
    rest=rest % 50 ;
    b20=rest/20;
    rest=rest % 20 ;
    b10=rest/10;
    rest=rest % 10 ;
    b1=rest ;

    printf("la repartition des billets est les suivants \n%d de 200\n %d de 100 \n%d de 50 \n%d de 20 \n%d de 10 \n%d de 1\n",b200,b100,b50,b20,b10,b1);

}
