#pragma once
int fact(int factValue)
{
    if (factValue <= 0) return  0;
    if (factValue == 1) return  1;
    return factValue * fact(factValue - 1);
}

class House
{
private:
    float lenght;
    float width;
    
public:
    House(float lenght, float width)
    {

    }
    House ()
    {

    }
    void setLenght(float lenght)
    {
        this -> lenght = lenght;
    }
    float getLenght()
    {
        return lenght;
    }
    
    void setWidth(float width)
    {
        this -> width = width;
    }
    float getWidth()
    {
        return width;
    }

    float getHouseSquare ()
    {
        return lenght * width;
    }
};

