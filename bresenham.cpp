
#include <iostream>
#include <graphics.h>
using namespace std;


void plotCirclePoints(int xc, int yc, int x, int y) {
    putpixel(xc + x, yc + y, WHITE);
    putpixel(xc - x, yc + y, WHITE);
    putpixel(xc + x, yc - y, WHITE);
    putpixel(xc - x, yc - y, WHITE);
    putpixel(xc + y, yc + x, WHITE);
    putpixel(xc - y, yc + x, WHITE);
    putpixel(xc + y, yc - x, WHITE);
    putpixel(xc - y, yc - x, WHITE);
}

void bresenhamCircle(int xc, int yc, int r) {
    int x = 0, y = r;
    int d = 3 - 2 * r;

    while (x <= y) {
        plotCirclePoints(xc, yc, x, y);
        if (d < 0) {
            d = d + 4 * x + 6;
        } else {
            d = d + 4 * (x - y) + 10;
            y--;
        }
        x++;
    }
}

int main() {
    int xc = 250, yc = 250, r = 100;

    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    bresenhamCircle(xc, yc, r);

    getch();
    closegraph();
    return 0;
}
