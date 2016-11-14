#include <stdio.h>
#include <P2_1question1.h>

int main ()

{
    
    double j;
    int i,m,n;
    
    FILE*f=fopen("P2_1Output/question2.txt","w");
    fprintf(f,"n\t\tPi(n)\t\tn/log(n)\t\tpi(n)/(n/log(n))\n");
    
    for(i=100;i<=pow(10,6);i=i*10)
    
    {
        
        n=0;
        
    for(j=2;j<i;++j)
    
    {
        
        m=question1(j);
        
        if(m==1)
        
        {
            
            ++n;
            
        }
                
        
    }
    
    fprintf(f,"%d\t\t%d\t\t%lf\t\t%lf\n",i,n,i/log(i),n/(i/log(i)));
    
    }
    
    fclose(f);
    
    return 0;
    
}
