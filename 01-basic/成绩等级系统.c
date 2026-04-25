#include <stdio.h>
int main()
{
	int score;
	printf("请输入你的成绩:");
	scanf("%d", &score);
	if (score < 0 || score>100)
	{
		printf("你的成绩超出了范围");

		return 0;
	}
	int level = score / 10;
	switch (level)
	{
	case 10:
	case 9:
	 printf("优秀\n");
	 break;
	case 8:
	 printf("良好\n");
	 break;
	case 7:
	 printf("中等\n");
	 break;
	case 6:
	 printf("及格\n");
	 break;
	case 5:
	case 4:
	case 3:
	case 2:
	case 1:
	case 0:
	 printf("不合格\n");
	 break;
	default:
		printf("输入无效\n");
	}
	return 0;
}
