#include <iostream>

#include "TestingFunctions.h"
#include "Brofiler\Brofiler.h"

#include <time.h>

#pragma comment(lib, "Brofiler/ProfilerCore32.lib")

int main()
{
	srand(time(NULL));
	bool runApp = true;

	while (runApp)
	{
		BROFILER_FRAME("MyTestingApp");
		runApp = MainLoop(runApp);
	}


	return 0;
}