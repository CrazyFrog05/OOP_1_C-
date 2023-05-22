#include <iostream>
#include <string>
#include <vector>
#include <iterator>

class MyClass {
private:
	int _data;// доступно для модификации объектам класса
public:
	int data; // доступно для модификации только внутри класса
public:
	int Summ(int data) {
		return _data + data;
	}
};
class Tovar {
private:
	std::string _name;
	float _price;
public:

	Tovar(std::string name, float price) {
		_name = name;
		_price = price;
	}

	void Print() {
		std::cout << "Name: " << _name << '\n';
		std::cout << "Price: " << _price << '\n';
	}
	void SetName(std::string name) {
		_name = name;
	}
	void SetPrice(float price) {
		_price = price;
	}
	std::string GetName() {
		return _name;
	}
	float GetPrice() {
		return _price;
	}
};
class Employee {
private:
	int _id;
	std::string _name1;
public:
	Employee( int ID, std::string name1) {
		_id = ID;
		_name1 = name1;
	}
	void Print() {
		std::cout << "ID: " << _id << '\n';
		std::cout << "Name: " << _name1 << '\n';
	}
	void SetID(int ID) {
		_id = ID;
	}
	void SetName1(std::string name1) {
		_name1 = name1;
	}
	int GetID() {
		return _id;
	}
	std::string GetName() {
		return _name1;
	}
};
class Person {
private:
	std::string _name;
	int _age;
public:
	Person(std::string name, int age) {
		_name = name;
		_age = age;
	}
	std::string GetName() {
		return _name;
	}
	void ShowData() {
		std::cout << "Name: " << _name << '\n';
		std::cout << "Age:  " << _age << '\n';
	}
};



int main() {
	/*Tovar tovar1("Carrot", 99.99f);
	Tovar tovar2("Kapusta", 234.4f);
	Tovar tovar3("Kartoshka", 324.5f);

	Tovar* tovar4 = new Tovar("Bread", 25.6f); // Создание Динамической памяти Под класс
	tovar4->Print(); // Обращение к классу через динамическую память просихордит через ->
	delete(tovar4);

	tovar1.Print();
	tovar2.Print();
	tovar3.Print();
	std::cout << std::endl; 
	Employee E1(19239405, "Alex");
	E1.Print();*/
	Person person1("John", 20);
	Person person2("Bob", 21);
	Person person3("Lary", 34);

	std::vector<Person> people;
	std::vector<Person>::iterator it;
	people.push_back(person1);
	people.push_back(person2);
	people.push_back(person3);

	for (int i = 0; i < people.size(); i++) {
		people.at(i).ShowData();
	}

	std::vector <std::string > names;
	names.push_back(person1.GetName());
	names.push_back(person2.GetName());
	names.push_back(person3.GetName());

	/*std::vector<int>vec = {1, 10, 20};
	vec.push_back(5);
	vec.size();
	vec.pop_back();
	vec.begin();
	vec.end();
	vec.erase(vec.begin() + 2);
	vec.at(0) = 10;
	for (int i = 0; i < vec.size(); ++i)
		std::cout << vec.at(i) << ' ';
	std::vector<int>::iterator it;
	it = vec.begin(); // Указатель на начало вектора
	std::cout << *it;

	std::cout << std::endl;

	vec.erase(it);
	for (it = vec.begin(); it != vec.end(); ++it)
		std::cout << *it << ' ';*/











	return 0;
}