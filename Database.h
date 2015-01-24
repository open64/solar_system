/* 
 * File:   Database.h
 * Author: open64
 *
 * Created on January 22, 2015, 9:02 PM
 */

#ifndef DATABASE_H
#define	DATABASE_H

#include <string>
#include <fstream>
#include "planetDiscription.h"

using namespace std;

class Database {
public:
    Database(string = "database.txt");
    Database(const Database& orig);
    virtual ~Database();
    planetDiscription
private:
    ifstream file;

};

#endif	/* DATABASE_H */

