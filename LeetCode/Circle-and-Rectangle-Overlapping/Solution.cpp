1class Solution {
2public:
3    bool checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1, int x2, int y2) {
4        int closX,closY;
5
6        if(xCenter<x1)
7        closX=x1;
8        else if(xCenter>x2)
9        closX=x2;
10        else
11        closX=xCenter;
12        
13        if(yCenter<y1)
14        closY=y1;
15        else if(yCenter>y2)
16        closY=y2;
17        else
18        closY=yCenter;
19
20        int dx= xCenter-closX;
21        int dy= yCenter-closY;
22
23        return (dx*dx + dy*dy) <= radius*radius;
24
25    }
26};