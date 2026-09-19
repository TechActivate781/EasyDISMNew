#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <windows.h>
#include <versionhelpers.h>
#include <stdlib.h>
#include <string.h>
#include "GetImageInfo\modern.c"

int main() {
	int ModernWin;
	char choice;

	if (IsWindows8Point1OrGreater() == 1) {
		ModernWin = 1;
	}

	else {
		ModernWin = 0;
	}

	printf("===EasyDISM===\n=== Type I to get information about an image ===\n=== Type A to apply an image ===\n");

	do{
		scanf(" %c", &choice);

		if (choice == 'i') {
			choice = 'I';
			break;
		}

		else if (choice == 'a') {
			choice = 'A';
			break;
		}

		else if (choice == 'A' || choice == 'I') {
			break;
		}

		if(choice != 'A' || choice != 'I') {
			printf("You did not enter a correct letter - please try again\n");
			continue;
		}

	} while (choice != 'I' || choice != 'A');

}