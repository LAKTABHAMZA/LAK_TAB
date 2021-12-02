int EXO8_SERIE2() {

int w0,w1,w=0,n,i;
int s_w;
w0=0;
w1=1;
printf("donner n\n");
scanf("%d",&n);
printf("la valeur de w a 1 orde\t  0 est \t%d\n",w0);
printf("la valeur de w a 1 orde\t  1 est \t%d\n",w1);
for(i=2;i<=n;i++)
{
    w=w+5*w1+w0+1;
    w0=w1;
    w1=w;

        printf("la valeur de w a 1 orde\t %d est \t%d\n",i,w);
        s_w=s_w+w;
}
        printf("la somme de wn a 1 orde\t %d est \t %d\n",n,s_w);
}
