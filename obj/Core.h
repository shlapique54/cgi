#ifndef __CORE_H__
#define __CORE_H__

struct Point
{
    double x;
    double y;
    double z;
    double rx;
    double ry;
};

// for canonical equation:
// ax + by + cz + d = 0;
struct V4
{
    double a;  
    double b;  
    double c;  
    double d;  
};


struct Color
{
    unsigned char r;
    unsigned char g;
    unsigned char b;
};


enum Axis 
{
    X,  
    Y,  
    Z   
};

struct Edge
{
    Point a;
    Point b;
};

#endif