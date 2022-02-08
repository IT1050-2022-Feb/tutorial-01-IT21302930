//Exercise 2 - Selection


#include <stdio.h>

int main() 
{
  int distance;
  float price,total;

  printf("Enter the distance travelled in km:");
  scanf("%d",&distance);
  if(distance>0 && distance <=30)
  {
    price=distance*50;
        total=price;
  }
  else 
  {
    price=(distance-30)*40;
      total=price+(30*50);
  }
  printf("The total price of the journey:%.2f",total);
  


  
  return 0;
}
