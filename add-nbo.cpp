#include <stdio.h>
#include <netinet/in.h>
#include <stdint.h>

int main(int argc, char *argv[]){
	FILE *fp = fopen(argv[1],"r");
	FILE *fp2 = fopen(argv[2],"r");
	uint32_t x, n, m;
	fread(&n, sizeof(n), 1, fp);
	fread(&m, sizeof(m), 1, fp2);
	n = ntohl(n);
	m = ntohl(m);
	x = n+m;
	printf("%d(%x) + %d(%x) = %d(%x)\n",n,n,m,m,x,x);
	return 0;
}
