#include <stdio.h>

int main(){
  int n; 
  printf("Enter the number ");
  scanf("%d",&n);
  
  int sum = n*(n+1)/2;
  printf("The sum of all the natural numbers is %d",sum);

}
