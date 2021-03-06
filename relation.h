#ifndef RELATION_H
#define RELATION_H

#include <string>
using namespace std;

class Relation
{
public:
    Relation();
    Relation (int scientistID, int computerID);
    Relation (int scientistID, int computerID, string legendName, string computerName);
    Relation (string legendName, string computerName);
    friend bool operator == (Relation &lhs, Relation &rhs);
    string getLegendName() const;
    string getComputerName()const;
    void setLegendName(string legendName);
    void setComputerName(string computerName);
    int getScientistID();
    int getComputerID();
    void setScientistID(int ID);
    void setComputerID(int ID);

private:
    int _scientistID;
    int _computerID;
    string _legendName;
    string _computerName;
};

#endif // RELATION_H
