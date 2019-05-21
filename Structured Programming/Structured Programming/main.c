//
//  main.c
//  Structured Programming
//
//  Created by x17090xx on 2019/05/16.
//  Copyright © 2019 AIT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n, x;
    scanf("%d", &n);
    
    for (int i=1; i<=n; i++) {
        x = i;
        if (x%3 == 0) {
            printf(" %d", i);
        }else{
            while (x!=0) {
                if(x%10 == 3){
                    printf(" %d", i);
                    break;//一つでも3を検出したら，この数字のチェックを終える
                }
                x/=10;
            }
        }
        
    }
    printf("\n");
    
    return 0;
}
