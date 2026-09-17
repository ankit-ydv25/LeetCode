class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double> temp;
        double kelvin = celsius + 273.15;
        temp.push_back(kelvin);
        double Fahrenheit = celsius * 1.80 + 32.00;
        temp.push_back(Fahrenheit);
        return temp;
    }
};