class dateType {
public:
	int getDay() const;
	int getMonth() const;
	int getYear() const;
	void setDay(int);
	void setMonth(int);
	void setYear(int);
	void setDate(int, int, int);
	void printDate() const;
	dateType(int = 1, int = 1, int = 1990);
	~dateType();
private:
	int day, month, year;
};
