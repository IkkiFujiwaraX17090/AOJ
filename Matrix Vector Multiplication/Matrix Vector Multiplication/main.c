//
//  main.c
//  Matrix Vector Multiplication
//
//  Created by x17090xx on 2019/05/17.
//  Copyright © 2019 AIT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n, m;
    int a[101][101]={0};
    int b[101]={0};
    int c[101]={0};
    scanf("%d %d", &n, &m);
    
    for (int j=0; j<n; j++) {
        for (int i=0; i<m; i++) {
            scanf("%d", &a[j][i]);
        }
    }
    for (int i=0; i<m; i++) {
        scanf("%d", &b[i]);
    }
    
    //ベクトル演算
    for (int j=0; j<n; j++) {
        for (int i=0; i<m; i++) {
            c[j] += a[j][i]*b[i];
        }
    }
    for (int j=0; j<n; j++) {
        printf("%d\n", c[j]);
    }
    return 0;
}
