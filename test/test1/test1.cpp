#include <stdio.h>

int building[1000];

int main(){
	int len;
	int lmax, rmax, max;
	int count;

	for(int t=1; t<=10; ++t){
		int count = 0;
		scanf("%d",&len);
		for(int i=0; i<len; ++i){
			scanf("%d",&building[i]);
		}

		for(int i=2; i<len-2; ++i){
			lmax = building[i-2] > building[i-1] ? building[i-2] : building[i-1];
			rmax = building[i+2] > building[i+1] ? building[i+2] : building[i+1];
			max = lmax > rmax ? lmax : rmax;

			if(building[i] - max > 0){
				count += (building[i] - max);
			}
		}
		printf("#%d %d\n",t,count);

	}
	return 0;
}