#include <stdio.h>
int main()
{
    int qian=0;
    printf("jinrucunqianxitong\n");
    while(1)
    {
        printf("1---cunqian\n");
        printf("2---qu qian\n");
        printf("3---yu e\n");
        printf("4---tui chu\n");
        printf("shuruxiangyingderxuhao\n");
        int code;
        scanf("%d", &code);
        if(code==1)
        {
            printf("jinrucunqiantitong\n");
            int cun;
            scanf("%d",&cun);
            qian += cun;
            printf("cunruchenggong,qinjixu\n");
            char x;
            scanf("%c",&x);
            scanf("%c",&x);
        }
        if(code==2)
        if(code==3)
        if(code==4)
        break;
    }
    return 0;

}
