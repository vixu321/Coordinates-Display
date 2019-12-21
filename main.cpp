#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <cstdio>
#include <stdio.h>

using namespace std;

int main()
{
    for(int i = 1; i>0; i++){
    POINT point;
    if (GetCursorPos(&point)) {
      cout <<"X: "<<point.x << "," <<" Y: "<<point.y << "\n";
    }
    }
    return 0;
}
