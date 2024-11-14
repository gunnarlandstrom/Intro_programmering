

#include <iostream>
#include <iomanip>
#include <cmath>   //math-functions pow(), log(),etc.
#include <algorithm>    // std::max


int main()
{
  double kron_dollar_kurs{10.43};
  double kronor {345.50};
  double dollars {0.0};
  
  dollars = kronor / kron_dollar_kurs;
  
  std::cout <<kronor << " svenska kronor blir " << std::endl

	   << "ceil(kronor): " << std::ceil(kronor) << std::endl; //

  std::cout << "floor(kronor): " << std::floor(kronor) << " svenska kronor blir ";
  std::cout << dollars << " amerikanska dollar" << std::endl;
  std::cout <<" max(2.5, 3.0): " << std::max(2.5, 3.0) <<std::endl;
		
  return 0;
}
