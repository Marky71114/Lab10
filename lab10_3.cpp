#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    int count = 0;
    double sum = 0.0;
    double sum_of_square = 0.0;
    string textline;

    ifstream source("score.txt");

    while (getline(source, textline))
    {
        double x = stod(textline);
        sum += x;
        sum_of_square += x * x;
        count++;
    }

    double mean = sum / count;
    double sd = sqrt((sum_of_square / count) - (mean * mean));

    cout << "Number of data = " << count << "\n";

    cout << setprecision(3);
    cout << "Mean = " << mean << "\n";

    cout << fixed << setprecision(3);
    cout << "Standard deviation = " << sd;

    return 0;
}
