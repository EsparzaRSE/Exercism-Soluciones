#include "difference_of_squares.h"

namespace difference_of_squares {

    int square_of_sum(int number){
        return (number * (number+1) / 2) * (number*(number+1) / 2);
    }

    int sum_of_squares(int number){
        return number * (number + 1) * (2 * number + 1) / 6;
    }

    int difference(int number){
        return square_of_sum(number) - sum_of_squares(number);
    }
}  // namespace difference_of_squares
