#include "stdafx.h"
#include "MainWindow.h"

int main()
{
	Application app;

	MainWindow window(800, 600, "Picture Sorter", &app);
	window.run();
    return 0;
}

