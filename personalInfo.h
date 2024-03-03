#include "dateType.h"
#include "personType.h"

class personalInfo {
public:
	void setPersonalInfo(string f, string l, int d, int m, int y, int ID);
	void printPersonalInfo() const;
	personalInfo(string f = "", string l = "", int d = 1, int m = 1, int y = 1900, int id = 0);
	~personalInfo();
private:
	personType name;
	dateType bDay;
	int personalID;


};
