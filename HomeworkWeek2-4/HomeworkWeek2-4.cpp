using namespace std;
#include <iostream>
#include <string>

int intValidation(string inputMessage)
{
    bool loopControl = true;
    string rawValue;
    while (loopControl)
    {
        cout << inputMessage << endl;
        cin >> rawValue;
        try
        {
            int convertedValue = stoi(rawValue);
            loopControl = false;
            return convertedValue;
        }
        catch (const std::exception&)
        {
            cout << "Value " << rawValue << " couldn't be converted to Int, Try again" << endl;
        }
    }
}


int main()
{
    bool loopControl = true;
    while (loopControl)
    {
        int timeTable = intValidation("Enter a positive number to find the times tables of that number or enter 0 to exit: \n");
        if (timeTable < 0)
        {
            cout << "Enter a positive number please" << endl;
        }
        else if (timeTable == 0)
        {
            loopControl = false;
        }
        else
        {
            for (size_t i = 1; i <= 10; i++)
            {
                int outputTimes = i * timeTable;
                cout << i << " times " << timeTable << " = " << outputTimes << endl;
            }
        }
    }
}