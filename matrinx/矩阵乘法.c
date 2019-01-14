#include <stdio.h>
int main(){
  int i, j, h, n;
  while(scanf("%d", &n) != EOF){
  	int a[n][n], b[n][n], sum[n][n];
    for(i = 1; i <= n; ++i)
      for(j = 1; j <= n; ++j)
        scanf("%d", &a[i][j]);
    for(i = 1; i <= n; ++i)
      for(j = 1; j <= n; ++j)
        scanf("%d", &b[i][j]);
    for(i = 1; i <= n; ++i)
      for(j = 1; j <= n; ++j){
      	sum[i][j] = 0;
        for(h = 1; h <= n; ++h)
			sum[i][j] += a[i][h]*b[h][j];
  	}
  	for(i = 1; i <= n; ++i){ 
      for(j = 1; j <= n-1; ++j)
      	printf("%d ", sum[i][j]);
      	printf("%d", sum[i][n]);
      	printf("\n");
      }
  }
}
  
