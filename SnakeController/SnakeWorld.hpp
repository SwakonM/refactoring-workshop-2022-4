#pragma once 
#include "Dimension.hpp"
#include <utility>  
#include "SnakeInterface.hpp"
#include "IPort.hpp"
#include "Dimension.hpp"
namespace Snake
{

class SnakeWord
{

    SnakeWord(IPort& p_displayPort, IPort& p_foodPort,std::pair<int, int> dimension, std::pair<int, int> foodPosition)
    :m_displayPort{p_displayPort},m_foodPort{p_foodPort},m_mapDimension{dimension},m_foodPosition{foodPosition}{}


     
private:
    IPort& m_displayPort;
    IPort& m_foodPort;
    std::pair<int, int> m_mapDimension;
    std::pair<int, int> m_foodPosition;
};
}//namespace Snake
