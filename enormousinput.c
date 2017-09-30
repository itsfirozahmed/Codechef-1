/*Problem in description*/

#include <stdio.h>
 
int main()
	{
    	long int k,n,ctr=0;
    	long long int t;
	scanf("%ld%ld",&n,&k);
    	while(n--!=0)
        {	scanf("%lld",&t);
        	if(t%k==0)
		ctr++;
        }
    	printf("%ld",ctr);
	return 0;
	}
