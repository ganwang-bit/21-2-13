//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//    printf("Hello world!\n");
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int arr[10]={0},i=0;
//    char a[1005];
//    while((a[i]=getchar())!='\n')
//    {
//        arr[a[i]-'0']++;
//        i++;
//    }
//    for(i=0;i<=9;i++)
//    {
//        if(arr[i])
//            printf("%d:%d\n",i,arr[i]);
//    }
//    return 0;
//}
//#include<stdio.h>
//char arr[32]={0};
//int jin(int temp,int d)
//{
//    int i=0;
//    while(temp)
//    {
//        arr[i]=temp%d+'0';
//        temp/=d;
//        i++;
//    }
//    return i;
//}
//int main()
//{
//    int a,b,d,t;
//    scanf("%d%d%d",&a,&b,&d);
//    t=jin(a+b,d);
//    for(a=t-1;a>=0;a--)
//    {
//        printf("%c",arr[a]);
//    }
//    if(t==0)
//        printf("0");
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int arr[10]={0},i,flag=0,j=0,n;
//    for(i=0;i<10;i++)
//    {
//        scanf("%d",&arr[i]);
//    }
//    while(j!=9||arr[9]!=0)
//    {
//        n=arr[j];
//        if(flag&&!j&&arr[j])
//        {
//            for(i=0;i<n;i++)
//            {
//                printf("%d",j);
//                arr[j]--;
//            }
//            j++;
//        }
//        else
//        {
//            if(!flag&&arr[j])
//            {
//                printf("%d",j);
//                arr[j]--;
//                flag=1;
//                j=0;
//                continue;
//            }
//            if(arr[j])
//            {
//                for(i=0;i<n;i++)
//                {
//                    printf("%d",j);
//                    arr[j]--;
//                }
//                j++;
//            }
//        }
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int arr[10]={0},i,flag=0,j=0,n;
//    for(i=0;i<10;i++)
//    {
//        scanf("%d",&arr[i]);
//    }
//    while(j!=10)
//    {
//        if(arr[j]&&flag)
//        {
//            for(i=0;i<arr[j];i++)
//            {
//                printf("%d",j);
//            }
//        }
//        else if(!flag)
//        {
//            for(i=1;i<10;i++)
//            {
//                if(arr[i])
//                {
//                    printf("%d",i);
//                    arr[i]--;
//                    break;
//                }
//            }
//            flag=1;
//            continue;
//        }
//        j++;
//    }
//    return 0;
//}
