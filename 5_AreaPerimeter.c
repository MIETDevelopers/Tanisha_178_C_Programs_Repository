//Creation:18-03-21 Tanisha Gandhi 
//Perimeter of Circle: 2*(22/7)*r: radius
//Area of Square: side*side: side
//Area of Rectangle: Length * Breadth: Length, Breadth
//Area of Circle: (22/7)*r*r: radius
//Area of Circle: (22/7)*r*r: radius 
#include<stdio.h>
int main(){
	float raduisOfCircle, sideOfSquare, legthOfRectangle, breadthOfRectangle;
	scanf("%f %f %f %f", &raduisOfCircle, &sideOfSquare, &legthOfRectangle, &breadthOfRectangle);
	printf("Area of Circle: %f",((22*raduisOfCircle*raduisOfCircle)/7));
	printf("\nPerimeter of Circle: %f",((2*22*raduisOfCircle)/7));
	printf("\nArea of Square: %f",(sideOfSquare*sideOfSquare));
	printf("\nPerimeter of Square: %f",(4*sideOfSquare));
	printf("\nArea of Rectangle: %f",(legthOfRectangle*breadthOfRectangle));
	printf("\nPerimeter of Rectangle: %f",(2*(legthOfRectangle+breadthOfRectangle)));
	return 0;
}