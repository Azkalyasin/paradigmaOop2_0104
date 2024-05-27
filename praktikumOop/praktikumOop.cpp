
#include <iostream>
using namespace std;

class seseoramg {
public: 
	virtual void pesan() {
		cout << "pesan dari seseorang" << endl;
	}
	//virtual void pesan() = 0;
};

class joko : public seseoramg {
public:
	void pesan() {
		cout << "pesan dari joko" << endl;
	}
};

class lisa : public seseoramg {
public:
	void pesan() {
		cout << "pesan dari lisa" << endl;
	}
};

int main()
{
   
}
