#pragma once
#include <string>

/**
* DegreeProgram class is mandated by the class headers in the assignment including the use of enum.
* @author Steven Barton
**/

// Enum defined with the available degrees as values.
enum degree { SECURITY, NETWORK, SOFTWARE };

/**
* DegreeProgram class which allows an enum degree to be assigned to a student.
* @author Steven Barton
**/
class DegreeProgram {
public:
	degree degreeProg; // Variable holding the degree enum for each student using instance of DegreeProgram
private:

};
