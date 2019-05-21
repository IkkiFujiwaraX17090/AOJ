//
//  main.c
//  Print a Chessboard
//
//  Created by x17090xx on 2019/05/16.
//  Copyright © 2019 AIT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int h, w;
    
    while (1) {
        scanf("%d %d", &h, &w);
        
        if (h == 0 && w == 0) {
            break;
        }
        
        for (int j=0; j<h; j++) {
            for (int i=0; i<w; i++) {
                if ((i+j)%2 == 0) {
                    printf("#");
                }else{
                    printf(".");
                }
            }
            printf("\n");
        }
        printf("\n");
    }
    
    return 0;
}
