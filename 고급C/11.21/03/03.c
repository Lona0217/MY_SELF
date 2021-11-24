#include <stdio.h>

struct book {
	int id;
	char title[100];
	char author[20];
};

int main()
{
	struct book B = { 1, "바람과 함께 사라지다", "마가렛 미첼" };

	printf("{%d, %s, %s}\n", B.id, B.title, B.author);

	return 0;
}