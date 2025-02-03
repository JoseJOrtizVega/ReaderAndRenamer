#include "Core/Core.h"
#include "tesseract/baseapi.h"

int main()
{
	if (tesseract::TessBaseAPI* api = new tesseract::TessBaseAPI())
	{
		printf("HelloWorld");
	}
	printf("");

	return 0;
}