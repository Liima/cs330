#include "procedural.h"
#include <iostream>
#include <climits>

void printRectangle(char ch, int x, int y, int w, int h)
{
	char[] k("");
	for(int i(0);i<h;i++){
		for(int j(0);j<w;j++)
			k += ch;
		k+="\n";
	}
	std::cout << k;
}
int area(int w, int h)
{
 return w*h;
}
int perimeter(int w, int h)
{
 return 2*(w+h);
}
bool contains(int x1, int y1, int w1, int h1,
	 		  int x2, int y2, int w2, int h2)
{
return x1>x2 && y1>y2 && x1+w1<x2+w2 && y1+h1<y2+h2;
}
