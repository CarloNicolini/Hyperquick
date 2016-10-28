#include "hyperquick.h"
#include <iostream>
using std::cout;
using std::endl;

int main(int argc, char *argv[])
{
	int n=atoi(argv[1]);
	int x=atoi(argv[2]);
	int N=atoi(argv[3]);
	int M=atoi(argv[4]);
	
	int p=N;
	int pzeta=M;
	int m=n;
	int mzeta=x;
	cout << hyperquick(n,x,N,M) << endl;
	return 0;
}
