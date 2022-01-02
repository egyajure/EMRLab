#include "findLine.h"

double sumX (vector <double> X){
    return accumulate(X.begin(), X.end(), 0.0);
}

double sumY ( vector <double> Y){
    return accumulate(Y.begin(), Y.end(), 0.0);
}

double sumYX (vector <double> X, vector <double> Y){
    vector <double> XY;
    for (int i = 0; i < X.size(); i++){
        double a = X[i] * Y[i];
        XY.push_back(a);
    }

    return accumulate(XY.begin(), XY.end(), 0.0);

}

double sumXsquared (vector <double> X){
    vector <double> Xsquared;
    for (int i = 0; i < X.size(); i++){
        double a = X[i] * X[i];
        Xsquared.push_back(a);
    }

    return accumulate(Xsquared.begin(), Xsquared.end(), 0.0);
}
