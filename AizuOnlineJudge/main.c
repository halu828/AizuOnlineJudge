//
//  main.c
//  AizuOnlineJudge
//
//  Created by TakumiWakasa on 2014/06/26.
//  Copyright (c) 2014年 TakumiWakasa. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main() {
	int n, i, alen, blen, carry, out[82];
	char a[10000], b[10000];
	
	scanf("%d", &n);
	while (n-- > 0) {
		scanf("%s", a);
		scanf("%s", b);
		alen = (int)strlen(a);
		blen = (int)strlen(b);
		if (alen > 80 || blen > 80){
			printf("overflow\n");
			continue;
		}
		i = 0;
		carry = 0;
		while (alen || blen) {
			out[i] = carry;
			if (alen) out[i] += a[--alen] - '0';
			if (blen) out[i] += b[--blen] - '0';
			carry = out[i] / 10;
			out[i++] %= 10;
		}
		if (carry) out[i] = 1;
		else i--;
		if (i >= 80) {
			printf("overflow\n");
			continue;
		}
		for (; i >= 0; i--)
			printf("%d", out[i]);
		printf("\n");
	}
	return 0;
}