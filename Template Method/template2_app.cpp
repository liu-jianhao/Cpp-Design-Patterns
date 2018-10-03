#include "template2_lib.cpp"
#include <iostream>

using namespace std;

//应用程序开发人员
class Application : public Library
{
  protected:
	virtual bool Step2()
	{
		//... 子类重写实现
		cout << "override Step2" << endl;
		return true;
	}

	virtual void Step4()
	{
		//... 子类重写实现
		cout << "override Step4" << endl;
	}
};

int main()
{
	Library *pLib = new Application();
	pLib->Run();

	delete pLib;
}
