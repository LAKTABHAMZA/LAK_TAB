int EXO2_SERIE2(){
char type ;
float pa;
float ca,fr,fv,ht,tva,ttc;
printf("donner le type de produit\n");
scanf("%S",&type);
printf("donner le prix d'achat\n");
scanf("%f",&pa);
if(pa>9000)
{
   {
   fr=pa*4/100;
   }
if(pa>2000)
    {
    fr=pa*0.1;
    }
    else
    {
        fr=0.0;
    }
    }
    ca=pa+fr;
    fv=ca*0.1;
    if(type=='X' || type=='x')
    {
        tva=30./100. ;
    }
    if(type=='Y' || type=='y')
    {
        tva=38./100. ;
    }
    if(type=='Z' || type=='z')
    {
        tva=43./100. ;
    }
    ht=ca+fv;
    ttc=ht+ht*tva;
    printf("\nle pa est %f\n",pa);
    printf("\nle fv est %f\n",fv);
    printf("\le tva est %f\n",tva);
    printf("\nle prix de v est %f\n",ht);
    printf("\nles fr est %f\n",fr);
    printf("\nle ttc est %f\n",ttc);
    return 0;
}

