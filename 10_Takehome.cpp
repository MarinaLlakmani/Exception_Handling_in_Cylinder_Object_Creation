#include <iostream>
#include <fstream>
#include "Cylinder.h"

using namespace std;

int main()
{
    string input_yn = "";
    int new_h, new_r;
    //Uncomment this line to test with input from file
   // ifstream cin("input.txt", ios::in);
    cin.exceptions(ios::failbit);

    //TODO: Write loop to continually poll user for radius and height values
    while (input_yn != "no") {
        try {
            cout << "Input New Cylinder Radius: ";
            cin >> new_r;
            cout << "Input New Cylinder Height:";
            cin >> new_h;
            //and construct cylinder objects. If they do not pass an int, catch
            if (cin.fail()) {
                throw ios_base::failure("ios_base:: failbit set: iostream stream error");

            }
            if (new_r < 0) {
                throw CylinderError("Negative Radius");
            }
            if (new_h < 0) {
                throw CylinderError("Negative Height");
            }

        }
        catch (ios_base::failure& e) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << e.what() << endl;


        }
        catch (CylinderError& e) {
            cout << e.what() << endl;

        }
        cout << "Do wish to continue? ";
        cin >> input_yn;


        //and construct cylinder bjects. If they do not pass an int, catch
        //ios_base::failure exception. If they pass a negative int, catch
        //CylinderError exception. Afterwards, ask them to continue, and
        //exit if they answer "no". Otherwise go back to the beginning.
    }
}
