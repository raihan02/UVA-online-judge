#include <stdio.h>
#define ll long long int
ll  phi ( ll  n ) {
	ll  i,res = n ;
	for (  i = 2 ; i * i <= n ; ++ i )
		if ( n % i == 0 ) {
			while ( n % i == 0 )
				n /= i ;
			res -= res / i ;
		}
	if ( n > 1 ) res -= res / n ;
	return res ;
}
int main()
{
   ll n;

   while(scanf("%lld", &n) == 1)
   {
       if(n == 0)
       {
           break;
       }
      printf("%lld\n", phi(n));
   }
}
