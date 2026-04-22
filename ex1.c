/*VARIABLES:
    T[50]:tableau
    n:entiers
    i:entiers
    somme:entiers
  DEBUT
    AFFICHER("Combien d'élément voulez vous insérez dans votre tableau?")
    LIRE(n)
    somme<-0
    POUR(i<-0,i<n,i<-i+1)
      AFFICHER("Entrez la valeur d'un nombre:")
      LIRE(T[i])
      AFFICHER(T[i])
      somme<-somme+T[i]
    FINPOUR
    AFFICHER(somme)
  FIN*/
#include<stdio.h>
void recup(int *n);
int calcul(int n);
void affichage(int d);
void recup(int *n)
{
  printf("Combien d'élément n<=50 voulez vous entrez dans votre tableau?\n");
  scanf("%d",n);
}
int calcul(int n)
{
  int i,somme,T[50];
  somme=0;
   for(i=0;i<n;i+=1)
  {
    printf("Entrez la valeur d'un nombre:");
    scanf("%d",&*(T+i));
  }
  printf("Tableau=");
  for(i=0;i<n;i+=1)
  {
    printf("%d",*(T+i));
    somme+=(*(T+i));
    }
    printf("\n");
    return(somme);
}
void affichage(int d)
{
  printf("somme=%d\n",d);
}
int main()
{
  int d,n;
  recup(&n);
  d=calcul(n);
  affichage(d);
  return(0);
}
    
    
