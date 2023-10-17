#pragma once
int fact(int factValue)
{
    if (factValue <= 0) return  0;
    if (factValue == 1) return  1;
    return factValue * fact(factValue - 1);
}

