#include<iostream>
#include<cmath>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect R1,Rect R2)
{
    double OverlapX,OverlapY;
    if (R1.x < R2.x + R2.w && R2.x < R1.x + R1.w) 
    {
        OverlapX = min(R1.x + R1.w, R2.x + R2.w) - max(R1.x, R2.x);
    } 
    else 
    {
        OverlapX = 0.0;
    }
    if (R1.y > R2.y - R2.h && R2.y > R1.y - R1.h) 
    {
        OverlapY = min(R1.y, R2.y) - max(R1.y - R1.h, R2.y - R2.h);
    } 
    else 
    {
        OverlapY = 0.0;
    }
    return OverlapX * OverlapY;
}
