#include <stdio.h>
#include <P2_1question1.h>

int main ()

{
    
    double j;
    int i,m,n;
    
    FILE*f=fopen("P2_1Output/question2.txt","w");
    fprintf(f,"n\t\tPi(n)\t\tn/log(n)\t\tpi(n)/(n/log(n))\n");

    fclose(f);
    
    return 0;
    
}
