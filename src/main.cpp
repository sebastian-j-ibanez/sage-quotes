// Sage - A terminal quote tool
//
// Started 25 June 2023
// by Sebastian Ibanez

#include <iostream>
#include <../sqlite/sqlite3.h>
#include <string>

int main() {
  // Test Print
  std::string advice = "Sage advice";
  std::string printCommand = "figlet -f slant ";
  system((printCommand + advice).c_str());

  const char *dbFile = "../sqlite/storage.db";
  sqlite3 *db;
  sqlite3_open(dbFile, &db);

  //sqlite3

  return 0;
}
