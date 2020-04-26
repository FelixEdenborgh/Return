#include <stdio.h>
#include <stdlib.h>

int main()
{

    return 0;
}


int calculateBonus(int yearsWorked){
    int bonus = yearsWorked * 250;

    if(yearsWorked > 10){
        bonus += 1000;
    }

    return bonus;
}
