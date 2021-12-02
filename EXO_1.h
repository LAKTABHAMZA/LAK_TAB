int EXO_1 ()
{
   int Q ;
   float PU ;
   printf( "Entrer la quantitee Q \n ");
   scanf("%d",&Q);
   printf("Entrer le PU \n");
   scanf("%f",&PU);
   float prix_finale=Q*PU*(1+0.2);
   printf("le prix finale est %f \n",prix_finale,Q,PU);
}
