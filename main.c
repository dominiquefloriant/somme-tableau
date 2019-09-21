#include <stdio.h>
#include <stdlib.h>
double sommetableau(double *tableau, int tailletab);
int main()
{
double tableau[4] = {12.5,14.9,15.59};
sommetableau(&tableau,4);
return 0;

}

double sommetableau(double *tableau, int tailletab){
int i;
double temp = 0 , moy;
for (i = 0; i<tailletab;i++){

        temp = (*(tableau+i)  + temp);

}
moy = temp/i;
    printf("%f",moy);

}
