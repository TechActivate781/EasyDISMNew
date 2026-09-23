#include <stdio.h>
#include <windows.h>
#include <versionhelpers.h>
#include <stdlib.h>
#include <string.h>

int GetImageInfoModern() {
	char path[200];
	char command[250];

	printf("What is the path to the image?\n");
	fgets(path, 200, stdin);
	path[strlen(path) - 1] = '\0'; // removing the last space

	sprintf(command, "dism /get-imageinfo /imagefile:\"%s\" ", path);

	system("cls");
	int error = system(command);
	system("pause");
	return error;
}