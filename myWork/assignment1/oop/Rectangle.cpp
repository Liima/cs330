#include "Rectangle.h"



Rectangle::Rectangle(char ch, int x, int y, int w, int h) : 
	m_ch(ch), m_x(x), m_y(y),m_h(h), m_w(w) {}


int Rectangle::area() const {return m_h*m_w;}

int Rectangle::perimeter() const {return 2*(m_w+m_h);}

double Rectangle::contains(const Rectangle& other) const
{
if( other.m_x<=m_x || other.m_y<=m_y ||
	other.m_x+other.m_w >= m_x+m_w ||other.m_y+other.m_h >= m_y+m_h
) return 0;
return 1;
}

std::ostream& operator<<(std::ostream& os, const Rectangle& rct)
{
 	for(int i(0); i<m_y;i++)
		os << std::endl;
 	for(int i(0);i<m_h;i++)
	{
		for(int j(0);j<m_x;j++)
			os << " ";
		for(int j(0);j<m_w;j++)
			os << m_ch;
		os << std::endl;
	}	
	return os;
}
	
