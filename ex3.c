/*VARIABLES:
    T[50]:tableau
    n:entiers
    i:entiers
    j:entiers
    somme:entiers
    max:entiers
    posmax:entiers
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
    max<-T[0]
    POUR(i<-0,i<n,i<-i+1)
      SI(T[i]>max)ALORS
        max<-T[i]
        posmax<-i+1
      FINSI
    FINPOUR
    POUR(i<-0,i<n,i<-i+1)
      SI(T[i]!=0)ALORS
        T[j]<-T[i]
      FINSI
    FINPOUR
    POUR(i<-0,i<j,i<-i+1)
      AFFICHER(T[i])
    FINPOUR
    AFFICHER("Max=",max)
    AFFICHER("La valeur maximum se trouve à la"posmax"ème position")
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
  int i,somme,T[50],max,posmax,j;
  somme=0;
   for(i=0;i<n;i+=1)
  {
    printf("Entrez la valeur d'un nombre:");
    scanf("%d",&*(T+i));
  }
  for(i=0;i<n;i+=1)
  {
    printf("%d",*(T+i));
    somme+=(*(T+i));
    }
    printf("\n");
    max=T[0];
    for(i=0;i<n;i+=1)
    {
      if(*(T+i)>max)
      {
        max=*(T+i);
        posmax=i+1;
      }
    }
    printf("Max=%d\n",max);
    printf("La valeur maximum se trouve à la %dème position\n",posmax);
    printf("Le tableau sans occurence de 0 est:");
    j=0;
    for(i=0;i<n;i+=1)
    {
      if(*(T+i)!=0)
      {
        *(T+j)=*(T+i);
        j+=1;
      }
    }
    for(i=0;i<j;i+=1)
    {
      printf("%d",*(T+i));
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
    
    
