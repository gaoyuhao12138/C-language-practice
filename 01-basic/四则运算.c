int main()
{
	char op;
	int a, b;
	scanf("%d %c %d", &a, &op,&b);
	switch (op)
	{
	case'+':
	printf("%d", a + b); break;
	case'-':
	printf("%d", a - b); break;
	case'*':
	printf("%d", a * b); break;
	case'/':
	printf("%d", a / b); break;
	default:printf(" 运算符错误");
	}


	return 0;
}
