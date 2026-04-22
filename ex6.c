/*VARIABLES:
   A[50]:tableau
   B[50]:tableau
   i:entiers
  DEBUT
    AFFICHER("Combien de nombre voulez vous entrez dans votre premier tableau?")
    LIRE(N)
    AFFICHER("Combien de nombre voulez vous entrez dans votre deuxième tableau?")
    LIRE(M)
    POUR(i<-0,i<N,i<-i+1)
      AFFICHER("Entrez la valeur d'un nombre:")
      LIRE(A[i])
    FINPOUR
    POUR(i<-0,i<M,i<-i+1)
      AFFICHER("Entrez la valeur d'un nombre:")
      LIRE(B[i])
    FINPOUR
    POUR(i<-N,i<M+N,i<-i+1)
      A[i]<-B[i-N]
      AFFICHER(A[i])
    FINPOUR
  FIN*/
#include<stdio.h>
void recup(int *N,int *M);
void tableau(int N,int M);
void recup(int *N,int *M)
{
  int A[50],B[50],i;
  printf("Combien de nombre voulez vous entrez dans votre premier tableau?\n");
  scanf("%d",N);
  for(i=0;i<*N;i+=1)
  {
    printf("Entrez la valeur d'un nombre:");
    scanf("%d",&*(A+i));
  }
  printf("Combien de nombre voulez vous entrez dans votre deuxième tableau?\n");
  scanf("%d",M);
  for(i=0;i<*M;i+=1)
  {
    printf("Entrez la valeur d'un nombre:");
    scanf("%d",&*(B+i));
  }
}
void tableau(int N,int M)
{
  int A[50],B[50],i;
  for(i=N;i<M+N;i+=1)
  {
    *(A+i)=*(B+i-N);
  }
  for(i=0;i<M+N;i+=1)
  {
    printf("%d",*(A+i));
  }
  printf("\n");
}
int main()
{
  int N,M;
  recup(&N,&M);
  tableau(N,M);
  return(0);
}


  
  
    
    
      
    
