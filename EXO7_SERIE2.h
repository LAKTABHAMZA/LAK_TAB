int EXO7_SERIE2(){
int v0,v,n,i;
int s_v;
v=2;
printf("donner n\n");
scanf("%d",&n);
printf("la valeur de v a 1 orde\t  0 est \t%d\n",v);
for(i=1;i<=n;i++)
{
    if(i%2==0)
        v=v+2;
    else
        v=v+4;
        printf("la valeur de v a 1 orde\t %d est \t%d\n",i,v);
        s_v=s_v+v;
}
        printf("la somme de vn a 1 orde\t %d est \t %d",n,s_v);
}
