/* 
 * File:   Database.cpp
 * Author: open64
 * 
 * Created on January 22, 2015, 9:02 PM
 */

#include "Database.h"

Database::Database(string fileName) {
    ifstream file;
    file.open(fileName);
}

Database::Database(const Database& orig) {
}

Database::~Database() {
}

