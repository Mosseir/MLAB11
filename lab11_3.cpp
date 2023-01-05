#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    int n = 0;
    float s , sum2 ; 
    float sum;
    string textline;
    ifstream source("score.txt");
    while(getline(source,textline)){
        n++;
        sum += stof(textline);
        sum2 += pow(stof(textline),2);
    }
        
        s = sqrt((sum2/n)- pow((sum/n),2));
        cout << "Number of data = " << n << endl;
        cout << setprecision(3);
        cout << "Mean = " << sum/n << endl;
        cout << "Standard deviation = " << s << endl;
    
    source.close();
    return 0;
}