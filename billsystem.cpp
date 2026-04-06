#include <iostream>
using namespace std;

class Bill {
public:
    int units;

        int calculate() {
                if (units <= 100)
                            return units * 2;
                                    else if (units <= 200)
                                                return 100 * 2 + (units - 100) * 3;
                                                        else
                                                                    return 100 * 2 + 100 * 3 + (units - 200) * 5;
                                                                        }
                                                                        };

                                                                        int main() {
                                                                            Bill b;

                                                                                cout << "Enter Units: ";
                                                                                    cin >> b.units;

                                                                                        int total = b.calculate();

                                                                                            cout << "Units: " << b.units << endl;
                                                                                                cout << "Bill: " << total << endl;

                                                                                                    return 0;
                                                                                                    }