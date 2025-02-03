#include "Core/Core.h"
#include "tesseract/baseapi.h"

int main()
{
	if (tesseract::TessBaseAPI* api = new tesseract::TessBaseAPI())
	{
		printf("It worked fine and everything is beautiful");
	}
	else
	{
		printf("Nope, fuck you");
	}

	return 0;
}