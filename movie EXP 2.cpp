#include<stdio.h>
int main()
{ 
char movie_name[100];
int adult,child,tsolda,tsoldc,totalts,gross,pgrossad,amountd,p,nets;
printf("enter the movie name:\n");
gets(movie_name);
printf( " enter the adult ticket price:\n");
scanf("%d",&adult);
printf("enter the adult ticket sold:\n");
scanf("%d",&tsolda);
printf("enter the child price ticket:\n");
scanf("%d",&tsoldc);
printf("enter the percentage of grass amount donated:\n");
scanf("%d",&pgrossad);
totalts=tsolda+tsoldc;
gross=(tsolda*80)+(tsoldc*50);
p=pgrossad/100;
amountd=gross*(pgrossad/100);
nets=gross-amountd;
printf("movie name:%s\n",movie_name);
printf("number of ticket sold:%d\n",totalts);
printf("gross amount:%d\n",gross);
printf("percentage of grossamount donated:%d\n",gross);
printf("amount donated:%d\n",amountd);
printf("net sale:%d\n",nets);
return 0;
}
