#include<iostream>
#include<cmath>
using namespace std;
int main(){
	double a, b, c, d;
	cin >>a >> b >> c >> d;
	double mult = a*b*c*d;
	double geo_mean=pow(mult, 0.25);
	cout <<"value of multiplication:"<< mult;
	cout <<"value of geometric mean:"<< geo_mean;
	return 0;
}
