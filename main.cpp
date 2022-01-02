#include <iostream>
#include <vector>
using namespace std;
#include "findLine.h"
#include "emrMath.h"

int main (){
    //section one, taking in voltage and frequency

    //initializing dynamic arrays
    vector <double> frequency;
    vector <double> voltage;
    
    //creating variable for number of datapoints
    double numPoints = 0.0;
    
    //creating a variable to push back on diff vectors
    double pushBack = 0.0;

    //asking for number of data points
    cin>> numPoints; cin.ignore();

    //looping through number of data points twice, once per type of variable

    for (int j = 0; j < numPoints; j++){ 
        cin >> pushBack; cin.ignore();
        frequency.push_back(pushBack);
    }
    for (int j = 0; j < numPoints; j++){ 
        cin >> pushBack; cin.ignore();
        voltage.push_back(pushBack);
    }  

    //checking if there is another input
    string endCheck;
    cin >> endCheck;

    //explaining how to do an input if there is a mistake
    if (endCheck != "end"){
        cout<< "Please take another look at your input. It should: \nStart with the number of data points \n";
        cout<< "Have all x values on separate lines \nHave all y values following on separate lines \n";
        cout<< "Have equal number of X and Y values \nEnd with the word 'end'\n";
        cout<< "Example:\n";
        cout<< "2\n5\n3\n1\n2\nend\n";
    }
    //running the rest of the code if there is no mistake
    else {
        
        //finding slope and y intercept
        double slope = 0;
        double yInt = 0;
        slope = (numPoints * sumYX(frequency,voltage) - sumX(frequency) * sumY(voltage)) / (numPoints * sumXsquared(frequency) - sumX(frequency) * sumX(frequency));
        yInt = (sumY(voltage) - slope * sumX(frequency)) / numPoints;

        //printing out found EMR terms
        cout << "work function: " << workFunction(yInt) << "\n";
        cout << "threshold frequency: " << thresFrequency(slope, yInt) << "\n";
        cout << "Plank's constant: " << constant(slope) << "\n";
        }
}