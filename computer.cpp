#include "computer.h"

bool operator == (Computer &lhs, Computer &rhs)
{
    if(lhs._name == rhs._name && lhs._buildYear == rhs._buildYear && lhs._computerType == rhs._computerType && lhs._wasBuilt == rhs._wasBuilt)
    {
        return true;
    }
    else
    {
        return false;
    }
}

Computer::Computer()
{

}
Computer::Computer(string name, int buildYear, string computerType, bool wasBuilt)
{
    setName(name);
    setBuildYear(buildYear);
    setComputerType(computerType);
    setWasBuilt(wasBuilt);
}
Computer::Computer (int iD, string name, int buildYear, string computerType, bool wasBuilt)
{
    setID (iD);
    setName(name);
    setBuildYear(buildYear);
    setComputerType(computerType);
    setWasBuilt(wasBuilt);
}
void Computer::setID(int ID)
{
    _myID = ID;
}

int Computer::getID()
{
    return _myID;
}

void Computer::setName(string name)
{
    _name = name;
}

void Computer::setBuildYear(int buildYear)
{
    _buildYear = buildYear;
}

void Computer::setComputerType(string computerType)
{
    _computerType = computerType;
}

void Computer::setWasBuilt(bool wasBuilt)
{
    _wasBuilt = wasBuilt;
}



string Computer::getName() const
{
    return _name;
}
int Computer::getBuildYear() const
{
    return _buildYear;
}
string Computer::getComputerType() const
{
    return _computerType;
}
bool Computer::getWasBuilt() const
{
    return _wasBuilt;
}
