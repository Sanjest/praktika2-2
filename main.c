#include <stdio.h>
int main () { 
double edgeCube=5;
double areaVolume;
double areaCube;
printf("Type lenght of edge cube:");
scanf("%lf", &edgeCube);
areaVolume=edgeCube*edgeCube*edgeCube;
printf("Volume of cube: %6.3f",areaVolume);
return 0;
}

