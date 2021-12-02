int EXO_8(){
	int nb,FT=25;
	float PU,TTC;
	printf("le nombre s'article est :");
	scanf("%d\n",&nb);
	printf("le prix unitaire:");
	scanf("%f\n",&PU);
	TTC=PU*nb*(1+0.2);
	printf("le montant TTC est : %f",TTC);
}
