//
//  main.c
//  scb
//
//  Created by 20161104581 on 17/6/15.
//  Copyright © 2017年 20161104581. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    FILE *fr;
    FILE *fw;
    fr=fopen("//Users//c20161104581//Desktop//would//would//input.txt","r+");
    fw=fopen("//Users//c20161104581//Desktop//would//would//output.txt","w");
    int a,b,c;
             fscanf(fr,"%d%d",&a,&b);
             c=a+b;
             printf("%d+%d=%d\n",a,b,c);
             fprintf(fw,"%d+%d=%d\n",a,b,c);
             return 0;
             
}
