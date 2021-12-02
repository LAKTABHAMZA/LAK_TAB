int EXO_6() {
    float prix;
	int Q ;
	printf("entrer le prix et la quanititee:\n");
	scanf("%f%d",&prix,&Q);
	float somme = prix*Q ;
	if(somme > 200)
        {
        printf(" le montant de la facture est :\n%f\n",somme+ 25);
        }
	else
	     {
        printf(" le montant de la facture est  :\n%f\n",somme);
         }

}
