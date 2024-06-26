#include <stdio.h>

int main(){
  int n; 
  printf("Enter the number ");
  scanf("%d",&n);
   
  n = n/2;
  
  int sum = n*(n+1);
  
  printf("The sum of the numbers is %d",sum);

}
