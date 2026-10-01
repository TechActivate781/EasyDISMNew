#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <windows.h>
#include <versionhelpers.h>
#include <stdlib.h>
#include <string.h>
#include "commands.c"
#include "WIMLIB/wimlib.h"
// it's weird to have this here, but for some reason VS didn't want to get the header file to work otherwise.

int main() {
	int ModernWin;
	char Choice;

	if (IsWindows8Point1OrGreater() == 1) {
		ModernWin = 1;
	}

	else {
		ModernWin = 0;
	}

	printf("===EasyDISM===\n=== Type I to get information about an image ===\n=== Type A to apply an image ===\n");

	do{
		scanf(" %c", &Choice);
		getchar(); // to remove the space

		if (Choice == 'i') {
			Choice = 'I';
			break;
		}

		else if (Choice == 'a') {
			Choice = 'A';
			break;
		}

		else if (Choice == 'A' || Choice == 'I') {
			break;
		}

		if(Choice != 'A' && Choice != 'I') {
			printf("You did not enter a correct letter - please try again\n");
			continue;
		}

	} while (Choice != 'I' && Choice != 'A');

	// int LatestErorrCode = GetImageInfoModern();

	
}