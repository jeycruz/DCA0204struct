#include <iostream>
#include <cmath>

using namespace std;

int main(){

  double sum = 0;

  for(int i = 0; i < 52; i++){
    double num = 1;
    double denom = 1;
    double mult;
    for(int j=0; j <= i; j++){ 
      num *= (52-j);
      denom *= (j+1);
      mult = num/denom;
    }
    mult /= pow(2,52);
    cout << "probabilidade: " << i << " " << mult << endl;
    sum += mult;
  }
  cout << "Prob final: " << sum << endl;
}
