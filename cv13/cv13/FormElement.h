#include <iostream>
#include <string>
#include <vector>
using namespace std;


class i_autocomplete_source {
public:
	virtual void get_rules() = 0;
};

class db_autocomplete_source : public i_autocomplete_source {
public:
	void get_rules() {
		//from db
	};
};

class autocomplete {
private:
	i_autocomplete_source* source;
public:
	void complete(model * m);
	void set_source(i_autocomplete_source* source);
};

class validator {
public:
	virtual bool is_valid(model * value) = 0;
};
class int_validator : public validator {

};
class range_validator {

};

class model {
private:
	vector<validator *> validators;
public:
	void set_value(string value);
	void* get_value();
};

class int_model : public model {
public:
	int* get_value();
};



class form_element
{
protected:
	model * m;
	string name;
public: 
	virtual string get_html() = 0;
	void set_model(model *_m) {
		this->m = _m;
	}
};


class input : public form_element {

};

