//
//  main.c
//  AizuOnlineJudge
//
//  Created by TakumiWakasa on 2014/06/26.
//  Copyright (c) 2014年 TakumiWakasa. All rights reserved.
//

#include <stdio.h>

int main() {
	int x, y, size, i, j, count = 0, max = 0;
	int grid[12][12] = {};

	while (scanf("%d,%d,%d", &x, &y, &size) != EOF) {
		grid[x][y]++;
		grid[x-1][y]++;
		grid[x+1][y]++;
		grid[x][y-1]++;
		grid[x][y+1]++;
		if (size > 1) {
			grid[x+1][y+1]++;
			grid[x+1][y-1]++;
			grid[x-1][y+1]++;
			grid[x-1][y-1]++;
		}
		if (size == 3) {
			grid[x][y+2]++;
			grid[x+2][y]++;
			grid[x][y-2]++;
			grid[x-2][y]++;
		}
	}
	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10; j++) {
			if (grid[i][j] == 0) count++;
			else if (grid[i][j] > max) max = grid[i][j];
		}
	}
	printf("%d\n%d\n", count, max);
	return 0;
}