//
//  main.c
//  Official House
//
//  Created by x17090xx on 2019/05/17.
//  Copyright © 2019 AIT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n; //データ数
    int room[4][3][10]={}; //[棟番号][階数][部屋番号]
    int b, f, r, v;
    int i;
    scanf("%d", &n);
    
    for (i=0; i<n; i++) {
        scanf("%d %d %d %d", &b, &f, &r, &v);
        room[b-1][f-1][r-1] += v;
    }
    for (int k=0; k<4; k++) {
        for (int j=0; j<3; j++) {
            for (int i=0; i<10; i++) {
                printf(" %d", room[k][j][i]);
            }
            printf("\n");
        }
        if (k!=3) {
            printf("####################\n");
        }
    }
    return 0;
}
