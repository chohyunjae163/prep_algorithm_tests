//https://codingdojang.com/scode/365?orderby=time&langby=


#include <stdio.h>
#include <set>

int main()
{

	std::set<int> HasGenerators;
	int sum_self = 0;
	const int start = 1;
	const int end = 5000;
	for(int i = start; i < end; ++i) {
		//generate d(n)
		int n = i;
		int dn = n;
		do {
			dn += n % 10;
			n /= 10;

		} while(n > 0);
		HasGenerators.emplace(dn);
		if( HasGenerators.find(i) == HasGenerators.end() ) {
			sum_self += i;
		}
	}

	printf("sum_self: %d", sum_self);
	return 0;
}
