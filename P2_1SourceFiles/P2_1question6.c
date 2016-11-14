#include <stdio.h>
#include <math.h>
#include <gsl/gsl_vector.h>
#include <P2_1mulmod.h>

int main ()

{
    
    int a,b,q,r,x,i,m,s,X,Y,W,Z,d,e,f,A,B,rem,U,BB,ans,l,L,DD,ZZZ,YYY,XX;
    double EE, BBN;
    gsl_vector*v;
    FILE*out=fopen("P2_1Output/question6.txt","w");
        
    printf("Solve ax = b (modm)");
    printf("\nEnter a:");
    
    scanf("%d",&a);
    
    printf("\nEnter b (wlog smaller than c):");
    
    scanf("%lf",&BBN);
    
    BB=BBN;
    
    printf("\nEnter m:");
    
    scanf("%d",&b);
    
    XX=b;
    
    l=mulmod(a,1,b);
    L=mulmod(BB,1,b);
    
    if(l==0)
    
    {
        
        if(L==0)
        
        {
            
            fprintf(out,"x can take the value of any integer, since both a and b are congruent to 0 (mod m)");
            
            goto end;
            
        }
        
        else
        
        {
            
            fprintf(out,"No solutions since a is congruent to 0 (mod m), but b is not.");
            
            goto end;
            
        }
        
    }
    
    v=gsl_vector_alloc(30);
    
    A=a;
    B=b;
    
    x=0;
    
    while(b>0)
    
    {
        
        U=r;
        q=a/b;
        r=a-q*b;
        
        gsl_vector_set(v,x,q);
                
        a=b;
        b=r;
        
        ++x;
        
    }
    
    rem=U;
    
    X=0;
    W=1;
    
    Y=1;
    Z=0;
    
    r=B;
    s=A;
    
    fprintf(out,"\nr\tx\ty");
    fprintf(out,"\n%d\t1\t0",A);
    fprintf(out,"\n%d\t0\t1",B);
    
    for(i=0;i<x;++i)
    
    {
        
        q=gsl_vector_get(v,i);
        
        d=r;
        e=X;
        f=Y;
        
        r=s-q*r;
        X=W-q*X;
        Y=Z-q*Y;
        
        fprintf(out,"\n%d\t%d\t%d",r,X,Y);
        
        s=d;
        W=e;
        Z=f;
        
    }
    
    fprintf(out,"\n\nVector q: ( ");
    
    for(i=0;i<x-1;++i)
    
    {
        
        m=gsl_vector_get(v,i);
        
        fprintf(out,"%d ",m);
        
    }
    
    fprintf(out,")");
    
    fprintf(out,"\n\n%d = %d*(%d) + %d*(%d)",rem,A,W,B,Z);
    
    ZZZ=rem;
    
    if(rem==1)
    
    {
        
        W=mulmod(W,1,B);
        
        ans=W*BB;
        
        ans=mulmod(ans,1,B);
        
    }
    
    else
    
    {
        
        DD=BB/rem;
        EE=BBN/rem;
        
        if(DD-EE==0)
        
        {
            
            a=A/rem;
            BB=BB/rem;
            b=B/rem;
    
            l=mulmod(a,1,b);
            L=mulmod(BB,1,b);
    
            if(l==0)
    
            {
        
            if(L==0)
        
            {
                
                fprintf(out,"x can take the value of any integer, since both a and b are congruent to 0 (mod m)");
            
                goto end;
            
            }
        
            else
        
            {
            
                fprintf(out,"No solutions since a is congruent to 0 (mod m), but b is not.");
            
                goto end;
            
            }
        
        }
    
        v=gsl_vector_alloc(30);
    
        A=a;
        B=b;
    
        x=0;
    
        while(b>0)
    
        {
        
            U=r;
            q=a/b;
            r=a-q*b;
        
            gsl_vector_set(v,x,q);
                
            a=b;
            b=r;
        
            ++x;
        
        }
    
        rem=U;
    
        X=0;
        W=1;
    
        Y=1;
        Z=0;
    
        r=B;
        s=A;
    
        fprintf(out,"\nr\tx\ty");
        fprintf(out,"\n%d\t1\t0",A);
        fprintf(out,"\n%d\t0\t1",B);
    
        for(i=0;i<x;++i)
    
        {
        
            q=gsl_vector_get(v,i);
        
            d=r;
            e=X;
            f=Y;
        
            r=s-q*r;
            X=W-q*X;
            Y=Z-q*Y;
        
            fprintf(out,"\n%d\t%d\t%d",r,X,Y);
        
            s=d;
            W=e;
            Z=f;
        
        }
    
        fprintf(out,"\n\nVector q: ( ");
    
        for(i=0;i<x-1;++i)
    
        {
        
            m=gsl_vector_get(v,i);
        
            fprintf(out,"%d ",m);
        
        }
    
        fprintf(out,")");
    
        fprintf(out,"\n\n%d = %d*(%d) + %d*(%d)",rem,A,W,B,Z);
       
        ans=W*(BB);
        
        fprintf(out,"\nAnswers= %d",ans);
        
        fprintf(out,"\n\nZZZ=%d\n\n",ZZZ);
        
        fprintf(out,"XX=%d",XX);
        
        for(i=0;i<ZZZ;++i)
        
        {
            
            YYY=ans+i*B;
            
            YYY=mulmod(YYY,1,XX);
            
            fprintf(out,"\n%d\t\t%d",i,YYY);
            
        }
            
        }
        
        else
        
        {
            
            fprintf(out,"No solution since gcd(a,m) does not divide b.");
            
            goto end;
            
        }
    
    }
    
    fprintf(out,"\nAnswer = %d",ans);
    
    end:
    
    return 0;
    
}
        
