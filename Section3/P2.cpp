/*
* 1英尺 = 12英寸
* 1英尺 = 30.48厘米
* 1英寸 = 2.54厘米
*/
#include<iostream>

using namespace std;

int main()
{
    const int FOOT_TO_INCH = 12;
    const float INCH_TO_M = 0.0254;
    const float KG_TO_LB = 2.2;
    float foots = 0.0, inches = 0.0, weight = 0.0;
    float height = 0.0; // m
    float kg_weight = 0.0; // kg
    float bmi = 0.0;

    cout << "<< Please input your height and weight >> \n";
    cout << "Foots: ";
    cin >> foots;
    cout << "Inches: ";
    cin >> inches;
    cout << "Weight: ";
    cin >> weight;

    height = (foots * FOOT_TO_INCH + inches) * INCH_TO_M;
    kg_weight = weight / KG_TO_LB;
    bmi = kg_weight / (height * height);
    
    cout << "Your BMI = " << bmi << endl;

    return 0;
}