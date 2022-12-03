#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//                                                                                                      m
/* Recursively describe the function C(m, n), where 0 <= m <= n, to calculate the binomial coefficient C  by recursive expressions:  */
//                                                                                                      n
/*     0   n
      C = C = 1;
       n   n

       m   m     m-1
      C = C   + C   , if 0 < m < n.
       n   n-1   n-1                 */

int binomialCoef(int m, int n);

int main()
{
	int m, n;

	cout << "Enter the value m: = ";
	cin >> m;

	cout << "Enter the value n: = ";
	cin >> n;

	cout << "Calculated binomialCoef value (" << m << ", " << n << ") is "
		<< binomialCoef(m, n) << endl;
	return 0;
}




int binomialCoef(int m, int n)
{

	if ((m == n) || (m == 0))                              //0 <= m <= n
		return 1;

		else return binomialCoef(m, n - 1) + binomialCoef(m - 1, n - 1);
}
