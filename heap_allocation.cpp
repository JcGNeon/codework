#include <cassert>
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

struct Person {
	const char* name;
	int age;
	int height;
	int weight;
};

struct Person* Person_create(const char* name, int age, int height, int weight)
{
	struct Person* who = (struct Person *) malloc(sizeof(struct Person));
	assert(who != NULL);
	
	who->name = name;
	who->age = age;
	who->height = height;
	who->weight = weight;
	
	return who;
}


void Person_destroy(struct Person *who)
{
	assert(who != NULL);
	
	free(who);
}

void Person_print(struct Person *who)
{
	cout<<"Name: " << who->name <<endl;
	cout<<"Age: " << who->age <<endl;
	cout<<"Height: " << who->height <<endl;
	cout<<"Weight: " << who->weight <<endl;
}

int main(int argc, char *argv[])
{
	struct Person* joe = Person_create("Joe Alex", 32, 64, 140);
	struct Person* frank = Person_create("Frank Blank", 20, 72, 180);
	
	cout<<"Joe is at memory address " << joe <<endl;
	cout<<"Frank is at memory address " << frank <<endl;
	
	Person_print(joe);
	Person_print(frank);
	
	cout<<"------\n";
	
	joe->age += 20;
	joe->height -= 2;
	joe->weight += 20;
	
	frank->age += 20;
	frank->height -= 2;
	frank->weight += 50;
	
	Person_print(joe);
	Person_print(frank);
	
	Person_destroy(joe);
	Person_destroy(frank);
	
	return 0;
}
