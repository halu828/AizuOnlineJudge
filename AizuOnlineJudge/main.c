//
//  main.c
//  AizuOnlineJudge
//
//  Created by TakumiWakasa on 2014/06/26.
//  Copyright (c) 2014年 TakumiWakasa. All rights reserved.
//

/**
 三角形の外接円の中心座標を求める計算式
 http://www.h6.dion.ne.jp/~jpe02_tn/ki-5.html
*/


#include <stdio.h>
#include <math.h>

int main() {
	int n, i;
	double x1, x2, x3, y1, y2, y3, a1, b1, c1, a2, b2, c2, px, py, r;
	
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3);
		a1 = 2 * (x2 - x1);
		b1 = 2 * (y2 - y1);
		c1 = x1 * x1 - x2 * x2 + y1 * y1 - y2 * y2;
		a2 = 2 * (x3 - x1);
		b2 = 2 * (y3 - y1);
		c2 = x1 * x1 - x3 * x3 + y1 * y1 - y3 * y3;
		px = (b1 * c2 - b2 * c1) / (a1 * b2 - a2 * b1);
		py = (c1 * a2 - c2 * a1) / (a1 * b2 - a2 * b1);
		
		r = sqrt((px-x1)*(px-x1)+(py-y1)*(py-y1));
		
		printf("%.3lf %.3lf %.3lf\n", px, py, r);
	}
	return 0;
}