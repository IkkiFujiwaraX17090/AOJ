//
//  main.c
//  Grading
//
//  Created by x17090xx on 2019/05/21.
//  Copyright © 2019 AIT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int m, f, r, sum;
    int i;
    
    for (i=0; i<50; i++) {
        scanf("%d %d %d", &m, &f, &r);
        sum = m+f;
        if (m==-1 || f==-1) {
            printf("F\n");
        }else if (sum>=80) {
            printf("A\n");
        }else if (65<=sum && sum<80) {
            printf("B\n");
        }else if (50<=sum && 65<sum) {
            printf("C\n");
        }else if (30<=sum && 50<sum) {
            if (r>=50) {
                printf("C\n");
            }else{
                printf("D\n");
            }
        }
    }
    return 0;
}
