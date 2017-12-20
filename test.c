#include <stdio.h>

int main()
{

	char name[20];
	char username[20];

	FILE *fp = fopen("test1.txt", "w");

	printf("NAME, GITHUB USERNAME 순으로 입력하세요 : ");
	scanf("%s %s", name, username);
	fprintf(fp, "%s %s", name, username);
	fclose(fp);

}
