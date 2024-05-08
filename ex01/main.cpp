#include "Zombie.hpp"

int main()
{
    Zombie  *horde;
    int N;

    N = 2;
    horde = zombieHorde(N, "jeje");
    for(int counter = 0; counter < N; counter ++)
    {
        horde[counter].announce();
    }

    delete[]horde;
    return(1);
}