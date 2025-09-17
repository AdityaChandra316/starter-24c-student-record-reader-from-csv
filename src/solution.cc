#include "solution.hpp"
#include <fstream>
#include <string>

Student ReadStudentRecFromStream(std::istream& is) {
  std::string firstName = "";
  std::string lastName = "";
  char waste = '\0';
  unsigned int uin;
  double gpa;
  is << firstName << waste << lastName << waste << uin << waste << gpa;
  if (is.fail()) {
    return Student{};
  }
  return Student{firstName, lastName, uin, gpa};
}
