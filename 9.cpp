//
//  main.cpp
//  進階題 9
//
//  Created by 何宗愷 on 2019/4/26.
//  Copyright © 2019 何宗愷. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[])
{
    int month, day,result;
    
    printf("請輸入一個日期：");
    scanf("%d%d",&month,&day);
    result = (month*2+day)%3;
    if(result == 0 )
    {
        printf("今日的運勢：普通\n");
    }
    if( result == 1 )
    {
        printf("今日的運勢：吉\n");
    }
    if( result == 2 )
    {
        printf("今日的運勢：大吉\n");
    }
   
    return 0;
}
