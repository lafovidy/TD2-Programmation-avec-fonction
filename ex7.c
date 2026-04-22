/*VARIABLES:
    U[2]:tableau
    V[2]:tableau
    somme[2]:tableau
    i:entiers
  DEBUT
    POUR(i<-0,i<2,i<-i+1)
      AFFICHER("Entrez une valeur:")
      LIRE(U[i])
    FINPOUR
    POUR(i<-0,i<2,i<-i+1)
      AFFICHER("Entrez une valeur:")
      LIRE(V[i])
    FINPOUR
    POUR(i<0,i<2,i<-i+1)
      somme[i]<-U[i]+V[i]
      AFFICHER(somme[i])
    FINPOUR
  FIN*/
#include<stdio.h>
void recup(int U[2],int V[2]);
int s(int U[2],int V[2]);
void recup(int U[2],int V[2])
{
  int i;
  for(i=0;i<2;i+=1)
  {
    printf("Pour le premier vecteur entrez la valeur d'un nombre:");
    scanf("%d",&U[i]);
  }
  for(i=0;i<2;i+=1)
  {
    printf("Pour le deuxième vecteur entrez la valeur d'un nombre:");
    scanf("%d",&V[i]);
  }
}
int s(int U[2],int V[2])
{
  int i,somme[2];
  printf("somme=");
  for(i=0;i<2;i+=1)
  {
    somme[i]=U[i]+V[i];
    printf("%d,",somme[i]);
  }
}
int main()
{
  int U[2],V[2];
  recup(U,V);
  s(U,V);
  return(0);
}
    
