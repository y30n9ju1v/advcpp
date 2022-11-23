#include <iostream>
#include <string>
#include <set>

struct People
{
	std::string name;
	int age;

	People(const std::string& name, int age) : name(name), age(age) {}
};
// People ��ü�� < ������ �����ϴٸ� set �� ������ �⺻ �Լ� ��ü�� std::less��
// �����մϴ�.
bool operator<(const People& p1, const People& p2) { return p1.name < p2.name;}
bool operator<(const People& p1, const std::string& name) {	return p1.name < name;}
bool operator<(const std::string& name, const People& p2) {	return name < p2.name;}

// ��� : People ��ü�� 
// "People ��ü < People ��ü"
// "People ��ü < ���ڿ�(�̸�)"
// "���ڿ�(�̸�) < People ��ü"


int main()
{
	std::set<People> s;	// std::set<People, std::less<People>> 


	s.emplace("ddd", 20);
	s.emplace("bbb", 30);
	s.emplace("ccc", 40);

	auto ret1 = s.find(People("bbb", 30)); 

	auto ret2 = s.find("bbb"); 
}