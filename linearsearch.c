#include<stdio.h> 

int main() 
{ 
  int A[6] = {2, 4, 6, 8, 2, 1}; 
  int search; 
  int count = 0, i; 

  printf("Entered a number to search:"); 
  scanf("%d", &search); 

  for(i = 0; i < 6; i++) 
  { 
    if(search == A[i]) 
    { 
      count++; 
    } 
  } 

  if(count == 0) 
  { 
    printf("Entered number is not found."); 
  } 
  else 
  { 
    printf("Entered number is found\n"); 
    printf("The number is found %d time(s)", count); 
  } 
}
