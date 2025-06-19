#include<stdio.h>
int main(){
int i,j,x[3][3],sum=0 ;
float avg;
 
 for(i=0;i<3;i++){
    for(j=0;j<3;j++){
     scanf("%d",&x[i][j]);

     sum=sum+x[i][j];
    }
 }
 avg=(sum)/9.00 ;
printf("%f",avg);
return 0;
}