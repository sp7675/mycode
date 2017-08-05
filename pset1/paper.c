

#include <stdio.h>

int main()
{
	float height, width, top_margin, bottom_margin, left_margin, right_margin, ptSize;
	float chars, lines;
	char ch;

	printf("\nEnter height and width of page: " );
	scanf("%f%f",&height, &width);

	printf("\nEnter left margin and right margin: ");
	scanf("%f%f",&left_margin, &right_margin);

	printf("\nEnter top margin and bottom margin: ");
	scanf("%f%f",&top_margin, &bottom_margin);

	printf("\nEnter point size: ");
	scanf("%f",&ptSize);	

	printf("\nAre lines double spaced? (y/n): ");
	scanf(" %c",&ch);

	if(ch == 'y' || ch == 'Y') 
		ptSize = 2 * ptSize;

	chars = ( (width - (left_margin + right_margin) ) * 72 ) / ptSize;  
	lines = ( (height - (top_margin + bottom_margin)) * 72 ) / ptSize;  

	printf("\nNo of characters: %d", (int)chars);
	printf("\nNo of lines: %d\n\n", (int)lines);


	return 0;
}



