#include "hyperquick.h"

double InvJm(int n,int x,int N, int m)
{
    return (1.0-double(x)/(double(m)+1.0))/(1.0-(double(n)-1.0-double(x))/(double(N)-1.0-double(m)));
}

double hyperquick(int n, int x, int N, int M)
{
    double s=1.0;
    for (int k=x; k<=M-2; ++k)
    {
        s = s*InvJm(n,x,N,k)+1.0;
    }
    double ak=s;
    double bk=s;
    double k=M-2;
    double epsk = 2*TOL;
    while ((k<(N-(n-x)-1)) && epsk>TOL )
    {
        double ck = ak/bk;
        k = k+1;
        double jjm = InvJm(n,x,N,k);
        bk = bk*jjm + 1.0;
        ak = ak*jjm;
        epsk = (N-(n-x)-1-k)*(ck-ak/bk);
    }
    return 1-(ak/bk-epsk/2);
}

