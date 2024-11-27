#include <graphics.h>
using namespace ege;

int main()
{
	initgraph(640, 480);
	setcolor(EGERGB(0xFF, 0x0, 0x0));
	setbkcolor(WHITE);
	circle(320, 240, 100);
	getch();
	closegraph();
	return 0;
}
