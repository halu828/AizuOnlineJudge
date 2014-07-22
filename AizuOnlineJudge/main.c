//
//  main.c
//  AizuOnlineJudge
//
//  Created by TakumiWakasa on 2014/06/26.
//  Copyright (c) 2014年 TakumiWakasa. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main() {
	int a, b, tmp = 0;
	double x, y;

	while (scanf("%d,%d", &a, &b) != EOF) {
		if (a == 0 && b == 0) break;
		x += a*sin(tmp*M_PI/180);
		y += a*cos(tmp*M_PI/180);
		tmp += b;
	}
	printf("%d\n%d\n", (int)x, (int)y);
	return 0;
}