
#include <iostream>
using namespace std;

class baseclass {
public :
	virtual void perkenalan()  { 
		cout << "halllo saya function dari base class";
	}
};

// cara menggunakanya dengan menggunakan kata final di belakang function perkenalan

class derivedclass : public baseclass {
public:
	void perkenalan() {
		cout << "hallo saya function dari drived class";
	}
};

int main()
{
	derivedclass a;
	a.perkenalan();

	return;
}

