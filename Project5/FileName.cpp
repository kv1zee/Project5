#include <iostream>
using namespace std;

class Laptop {
private:
    char* model;
    char* color;
    int price;

public:
    Laptop() {
        cout << "Contsructor by def param";
    }
    Laptop(const char* m, const char* c, int p) {
        model = new char[strlen(m) + 1];
        strcpy(model, m);

        color = new char[strlen(c) + 1];
        strcpy(color, c);

        price = p;
    }

    void Print() {
        cout << "Model: " << model << "\tColor: " << color << "\tPrice: " << price << endl;
    }

    Laptop() {
        delete[] model;
        delete[] color;
    }
};

int main() {
    Laptop obj1("LENOVO", "BLACK", 55000);
    Laptop obj2("ASUS", "SILVER", 65000);

    obj1.Print();
    obj2.Print();
}
