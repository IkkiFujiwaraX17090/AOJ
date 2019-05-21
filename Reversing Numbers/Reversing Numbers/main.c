//
//  main.c
//  Reversing Numbers
//
//  Created by x17090xx on 2019/05/17.
//  Copyright © 2019 AIT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    int i;
    int a[100];
    
    scanf("%d", &n);
    for (i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }
    printf("%d", a[n-1]);
    for (i=n-2; i>=0; i--) {
        printf(" %d", a[i]);
    }
    printf("\n");
    return 0;
}
