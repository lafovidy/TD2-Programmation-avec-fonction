/*VARIABLES:
    A[50]:tableau
    n:entiers
    i:entiers
    max:entiers
    min:entiers
    posmax:entiers
    posmin:entiers
  DEBUT
    AFFICHER("Combien de nombre voulez vous entrez dans votre tableau?")
    LIRE(n)
    POUR(i<-0,i<n,i<-i+1)
      AFFICHER("Entrez la valeur d'un nombre:")
      LIRE(A[i])
    FINPOUR
    max<-A[0]
    min<-A[0]
    POUR(i<-0,i<n,i<-i+1)
      SI(A[i]>max)ALORS
        max<-A[i]
        posmax<-i+1
      FINSI
      SI(A[i]<min)<ALORS
        min<-A[i]
        posmin<-i+1
      FINSI
    FINPOUR
    AFFICHER("Max=",max)
    AFFICHER("La valeur maximum se trouve à la"posmax"ème position")
    AFFICHER("Min=",min)
    AFFICHER("La valeur minimum se trouve à la"posmin"ème position")
  FIN*/
#include<stdio.h>
void recup(int *n);
void m(int n);
void recup(int *n)
{
  int A[50],i;
  printf("Combien de nombre voulez vous entrez dans votre tableau?\n");
  scanf("%d",n);
  for(i=0;i<*n;i+=1)
  {
    printf("Entrez la valeur d'un nombre:");
    scanf("%d",&*(A+i));
  }
}
void m(int n)
{
  int max,min,posmax,posmin,i,A[50];
  max=A[0];
  min=A[0];
  for(i=0;i<n;i+=1)
  {
    if(A[i]>max)
    {
      max=A[i];
      posmax=i+1;
    }
    if(A[i]<min)
    {
      min=A[i];
      posmin=i+1;
    }
  }
  printf("Max=%d\n",max);
  printf("La valeur maximum se trouve à la %dème position\n",posmax);
  printf("Min=%d\n",min);
  printf("La valeur minimum se trouve à la %dème position\n",posmin);
}
int main()
{
  int n;
  recup(&n);
  m(n);
  return(0);
}
