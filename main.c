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
        {
            printf("jinruquqianxitong\n");
            int qu;
            scanf("%d",&qu);
            if(qu<qian)
            {
            qian-=qu;
            printf("quqianchenggong\n");
            char x;
            scanf("%c",&x);
            scanf("%c",&x);  
            }
            else{
                printf("yu e bu zu\n");
                char x;
                scanf("%c",&x);
                scanf("%c",&x);
            }
            
        }
        if(code==3)
     {
        char x;
        printf("dangqianyuewei: %d\n",qian);
        printf("dianjihuichehixu\n");
        scanf("%c",&x);
        scanf("%c",&x);
    }
        if(code==4)
        {
            printf("tuichu\n");
            break;
        }
    }
    return 0;

}
