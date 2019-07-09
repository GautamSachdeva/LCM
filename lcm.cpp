#include <iostream>
using namespace std;

long long lcm_naive(int a, int b) {
  for (long l = 1; l <= (long long) a * b; ++l)
    if (l % a == 0 && l % b == 0)
      return l;

  return (long long) a * b;
}

long long lcm_fast(int a , int b){
	int a_prime;
	long long int O_a = a ;
	long long int O_b = b ;
	while( b != 0){
		a_prime = a%b;
		a = b;
		b = a_prime;
	}
	
	long long lcm = (O_a*O_b)/(a);
	return lcm;
}

int main() {
  int a, b;
  std::cin >> a >> b;
  std::cout << lcm_fast(a, b) << std::endl;
  return 0;
}
