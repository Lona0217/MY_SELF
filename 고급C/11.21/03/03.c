#include <stdio.h>

struct book {
	int id;
	char title[100];
	char author[20];
};

int main()
{
	struct book B = { 1, "�ٶ��� �Բ� �������", "������ ��ÿ" };

	printf("{%d, %s, %s}\n", B.id, B.title, B.author);

	return 0;
}