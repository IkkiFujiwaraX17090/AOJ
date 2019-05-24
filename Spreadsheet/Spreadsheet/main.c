//
//  main.c
//  Spreadsheet
//
//  Created by x17090xx on 2019/05/23.
//  Copyright © 2019 AIT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int e[101][101] = {};
    int R, C, r, c;
    int s, total;
    
    //表の行数と列数
    scanf("%d %d", &R, &C);
    
    //表を入力
    for (r=1; r<=R; r++) {
        for (c=1; c<=C; c++) {
            scanf("%d", &e[r][c]);
        }
    }
    
    //列の合計を配列eの0行目に入れる
    for (r=1; r<=R; r++) {
        s=0;
        for (c=1; c<=C; c++) s+=e[r][c];
            e[r][0] = s;
        
    }
    
    //行の合計を配列eの0列目に入れる
    total = 0;
    for (c=1; c<=C; c++) {
        s=0;
        for (r=1; r<=R; r++) s+=e[r][c];
        e[0][c]=s;
        total+=s; //表の合計を計算する（上のfor文でも可）
        }
    
    //配列eを順番に印字（最下段以外）
    for (r=1; r<=R; r++) {
        for (c=1; c<=C; c++) printf("%d ", e[r][c]);
        
        printf("%d\n", e[r][0]);
    }
    
    //最下段を印字
    for (c=1; c<=C; c++) printf("%d ", e[0][c]);
    printf("%d\n", total);
    
    return 0;
}
