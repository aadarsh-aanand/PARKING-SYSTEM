/*********************************************ERRORS****************************************/
// IF CAR IS PARKED ONLY CAR WILL BE ABLE TO EXIT ==> done
//  NOT ANY OTHER VEHICLE ==> done
//  EXITING AS MANY VEHICLE BUT TOTAL SLOTS SHOULD NOT INCREASE ==> done
// giving two coomand shows error ==> done
// char value makes loop infinite ==> done
/******************************************************************************************/

#include <iostream>
using namespace std;
int total_parking = 10;
int main(int argc, char const *argv[])
{
    int bike = 0;
    int car = 0;
    int rickshaw = 0;
    int threewheeler = 0;
    int cycle = 0;
    string vehicle;
    string response;
    while (1 == 1)
    {
    initial:
        cout << "Enter 1 to park the vehicle!!" << endl;
        cout << "Enter 2 to exit the vehicle!!" << endl;
        cout << "Enter 3 to see all parked vehicle!!" << endl;
        cout << "Enter 4 to exit the program" << endl;
        cout << "Total parking slots available: " << total_parking << endl;
        cin >> response;
        if (response == "1")
        {
            system("cls");
            cout << "Enter 1 to enter bike!!" << endl;
            cout << "Enter 2 to enter car!!" << endl;
            cout << "Enter 3 to enter rickshaw!!" << endl;
            cout << "Enter 4 to enter three wheeler!!" << endl;
            cout << "Enter 5 to enter cycle !!" << endl;
            cout << "Total parking slots available: " << total_parking << endl;
            cin >> vehicle;
            if (vehicle == "1" || vehicle == "2" || vehicle == "3" || vehicle == "4" || vehicle == "5")
            {
                if (total_parking == 0)
                {
                    cout << "No parking space available" << endl;
                    cout << "Please come after some time" << endl;
                    goto initial;
                }
                else if (vehicle == "1")
                {
                    bike++;
                    system("CLS");
                }
                else if (vehicle == "2")
                {
                    car++;
                    system("CLS");
                }
                else if (vehicle == "3")
                {
                    rickshaw++;
                    system("CLS");
                }
                else if (vehicle == "4")
                {
                    threewheeler++;
                    system("CLS");
                }
                else if (vehicle == "5")
                {
                    cycle++;
                    system("CLS");
                }
                total_parking--;
            }
            else
            {
                cout << "Please enter the correct option" << endl;
            }
        }

        else if (response == "2")
        {
            system("cls");
            cout << "Enter 1 to exit bike!!" << endl;
            cout << "Enter 2 to exit car!!" << endl;
            cout << "Enter 3 to exit rickshaw!!" << endl;
            cout << "Enter 4 to exit three wheeler!!" << endl;
            cout << "Enter 5 to exit cycle !!" << endl;
            cout << "Total parking slots available: " << total_parking << endl;
            cin >> vehicle;
            if (total_parking < 10)
            {
                if (vehicle == "1" || vehicle == "2" || vehicle == "3" || vehicle == "4" || vehicle == "5")
                {
                    if (total_parking == -1)
                    {
                        cout << "No parking space available" << endl;
                        cout << "Please come after some time" << endl;
                        goto initial;
                    }
                    else if (vehicle == "1")
                    {
                        if (bike >= 1)
                        {
                            bike--;
                            system("CLS");
                            total_parking++;
                        }
                        else
                        {
                            cout << "No bike parked in the area" << endl;
                            bike;
                        }
                    }
                    else if (vehicle == "2")
                    {
                        if (car >= 1)
                        {
                            car--;
                            system("CLS");
                            total_parking++;
                        }
                        else
                        {
                            cout << "No car parked in the area" << endl;
                        }
                    }
                    else if (vehicle == "3")
                    {
                        if (rickshaw >= 1)
                        {
                            rickshaw--;
                            system("CLS");
                            total_parking++;
                        }
                        else
                        {
                            cout << "No rickshaw parked in the area" << endl;
                        }
                    }
                    else if (vehicle == "4")
                    {
                        if (threewheeler >= 1)
                        {
                            threewheeler--;
                            system("CLS");
                            total_parking++;
                        }
                        else
                        {
                            cout << "No threewheeler parked in the area" << endl;
                        }
                    }
                    else if (vehicle == "5")
                    {
                        if (cycle >= 1)
                        {
                            cycle--;
                            system("CLS");
                            total_parking++;
                        }
                        else
                        {
                            cout << "No cycle parked in the area" << endl;
                        }
                    }
                }
                else
                {
                    cout << "Please enter the correct option" << endl;
                }
            }
            else
            {
                cout << "park the vehicle first" << endl;
            }
        }
        else if (response == "3")
        {
            system("cls");
            cout << "Number of bike parked: " << bike << endl;
            cout << "Number of car parked: " << car << endl;
            cout << "Number of rickshaw parked: " << rickshaw << endl;
            cout << "Number of threewheeler parked: " << threewheeler << endl;
            cout << "Number of cycle parked: " << cycle << endl;
            cout << "********************************************************************************************************" << endl;
        }
        else if (response == "4")
        {
            system("cls");
            cout << "Program is ending!!" << endl;
            system("pause");
            return 0;
        }
        else
        {
            cout << "Please choose the correct option!! " << endl;
        }
    }
    return 0;
}