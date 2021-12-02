int EXO_5() {
    int Q,S;
    printf("enrter une somme d'argent : \n");
    scanf("%d",&S);
    printf("\n la resutats:\n");
    Q=S/200;
    S=S%200;
    if(Q>0){
    if(Q==1)
    printf(" %d billet de 200dh",Q);
    else
    printf(" %d billet de 200dh",Q);
   }

	Q=S/100;
	S=S%100;
	if(Q>0){
		if(Q==1)
			printf("%d billet de 100\n",Q);
		else
			printf("%d billets de 100\n",Q);
	}

	Q=S/50;
	S=S%50;
	if(Q>0){
		if(Q==1)
			printf("%d billet de 50\n",Q);
		else
			printf("%d billets de 50\n",Q);
	}

	Q=S/20;
	S=S%20;
	if(Q>0){
		if(Q=1)
			printf("%d billet de 20\n",Q);
		else
			printf("%d billets de 20\n",Q);
	}

	Q=S/10;
	S=S%10;
	if(Q>0){
		if(Q==1)
			printf("%d piece de 10\n",Q);
		else
			printf("%d pieces de 10\n",Q);
	}

	if(S>0){
		if(S=1)
			printf("%d piece de 1\n",S);
		else
			printf("%d pieces de 1\n",S);
	}
}
