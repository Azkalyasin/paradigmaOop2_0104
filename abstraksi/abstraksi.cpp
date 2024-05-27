
#include <iostream>
using namespace std;

class abstraksi {
private:
    string x, y;

public:
    void setXY(string a, string b) {
        x = a;
        y = b;
    }

    void display() {
        cout << "x = " << x << endl;
        cout << "y = " << y << endl;
    }

};

int main()
{
    abstraksi ak;
    ak.setXY("yogyakarta", "surabaya");
    ak.display();

    return 0;
}

