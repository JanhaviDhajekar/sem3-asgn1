#include <stdio.h>
void uni(int set1[10], int set2[10], int c1, int c2)
 {
int i, j, u[20]={0}, k,SET2[20];
for(int i=0;i<c2;i++)
{
  SET2[i]=set2[i];
}
  
    for(i=0;i<c1;i++)
    {
      u[i]=set1[i];
    }
 for(i=0;i<c2;i++)
 {
       
      for(j=0;j<c1;j++)
      {
        if(SET2[i]==u[j])
        {
          for(k=i;k<c2;k++)
          {
            SET2[k]=SET2[k+1];
          }
          c2--;
        }
      }
 }
 for(i=c1;i<c1+c2;i++)
 {
    u[i]=SET2[i-c1];
 }
 printf("\nANSWER\n");
  for(i=0;i<c1+c2;i++)
 {
    printf(" %d ",u[i]);
 }
 }
 //****INTERSECTION OF SETS****
void inter(int set1[10], int set2[10], int c1, int c2)
 {
   int i,j,n3=0,in[20],k=0;
  for(i=0;i<c1;i++) 
   { 
      for(j=0;j<c2;j++) 
   {
     if(set1[i]==set2[j]){  in[n3]=set1[i]; n3++;}
   }
   }
   
   for(i=0;i<n3;i++) 
   {
    printf(" %d ",in[i]);
   }
   

 }
 //DIFFERENCE
 void diff(int set1[10], int set2[10], int c1, int c2)
 {
   int i,j,k=0,ab[20],ba[20],SET2[20],l;
            for(int i=0;i<c2;i++)
{
  SET2[i]=set2[i];
}
   for(i=0;i<c1;i++)
   {
      for(j=0;j<c2;j++)
   {
        if(set1[i]==SET2[j])
        {  
            for(int l=j;l<c2;l++)
              {
  SET2[l]=SET2[l+1];
  }  c2--;
          break;}
   }
      if(j==c2) {ab[k]=set1[i];k++;}
   }
  printf("\nA-B :\n");
  printf("{");
for(int i=0;i<k;i++)
{
 printf("%d ",ab[i]);
}
 printf("}");
printf("\nB-A\n");
 printf("{");
for(int i=0;i<c2;i++)
{
 printf("%d ",SET2[i]);
} printf("}");
 }
 //symmetry diff
 void sym(int set1[10], int set2[10], int c1, int c2)
 {
   int i,j,k=0,ab[20],ba[20],SET2[20],l;
            for(int i=0;i<c2;i++)
{
  SET2[i]=set2[i];
}
   for(i=0;i<c1;i++)
   {
      for(j=0;j<c2;j++)
   {
        if(set1[i]==SET2[j]){  
        for(int l=j;l<c2;l++)
{
  SET2[l]=SET2[l+1];
}  c2--;
          break;}
   }
      if(j==c2) {ab[k]=set1[i];k++;}
   }

  printf("{");
for(int i=0;i<k;i++)
{
 printf("%d ",ab[i]);
}
for(int i=0;i<c2;i++)
{
 printf(" %d",SET2[i]);
} printf("}");
 }
int main(void) {
  int set1[10], set2[10], i, c1, c2, c;
  printf("Enter number of elements in set1 and set2\n");
  scanf("%d %d",&c1,&c2);
  printf("\nEnter elements of SET1");
  for (i = 0; i < c1; i++) {
    scanf("%d", &set1[i]);
  }
   printf("\nEnter elements of SET2");
  for (i = 0; i < c2; i++) {
    scanf("%d", &set2[i]);
  }
  printf("\nDISPLAY SETs:\n");
  printf("{");
  for (i = 0; i < c1; i++) {
    printf("%d ", set1[i]);
  }
  printf("}");
  printf("\n");
  printf("{");
  for (i = 0; i < c2; i++) {
    printf("%d ", set2[i]);
  }
  printf("}");
  printf("\n");
   do {
  printf("\c1)union 2)intersection 3)DIFF 4)Symmetry diff\n");
  scanf("%d", &c);
 
  switch (c) {
  case 1: 
    uni(set1, set2, c1, c2);
  break;
  case 2:
    inter(set1, set2, c1, c2);
  break;
  case 3:
      diff(set1, set2, c1, c2);
      break;
  case 4:
      sym(set1, set2, c1, c2);
      break;
  case 0:
       return 0;
     break;
}

} while(c!=0);
}

