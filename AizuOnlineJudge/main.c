//
//  main.c
//  AizuOnlineJudge
//
//  Created by TakumiWakasa on 2014/06/26.
//  Copyright (c) 2014年 TakumiWakasa. All rights reserved.
//

#include <stdio.h>

int main() {
	int w, n, i, tmp;
	int a, b, wary[30];

	scanf("%d",&w);
	scanf("%d",&n);
	for (i = 1; i <= w; i++) {
		wary[i] = i;
	}
	for (i = 0; i < n; i++) {
		scanf("%d,%d", &a, &b);
		tmp = wary[a];
		wary[a] = wary[b];
		wary[b] = tmp;
	}
	for (i = 1; i <= w; i++) {
		printf("%d\n", wary[i]);
	}
	return 0;
}