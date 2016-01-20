#include "MyForm.h"

using namespace XMLReadWrite;	//the name of the namespace in MyForm.h


[STAThread]
int main()
{
	MyForm as;
	as.ShowDialog();
	return 0;
}