/*VARIABLES:
    T[50]:tableau
    n:entiers
    i:entiers
    j:entiers
    somme:entiers
    max:entiers
    posmax:entiers
    TPOS[50]:tableau
    TNEG[50]:tableau
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
    
    POUR(j<-0,j<n,j<-j+1)
      SI(T[j]>0)ALORS
        TPOS[j]<-T[j]
        AFFICHER(TPOS[j])
      SINON
        TNEG[j]<-T[j]
        AFFICHER(TNEG[j])
      FINSI
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
  int i,somme,T[50],max,posmax,j,TPOS[50],TNEG[50];
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
    for(i=0;i<j;i+=1)
    {
      if(*(T+i)>0)
      {
        *(TPOS+i)=*(T+i);
        printf("%d\n",*(TPOS+i));
      }
      else
      {
        *(TNEG+i)=*(T+i);
        printf("%d\n",*(TNEG+i));
      }
    }
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
    
    

