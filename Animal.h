#ifndef  Animal_H_
#define Animal_H_
class Animal{
public:
	Animal(float,int);
	virtual ~Animal();
	virtual void variation();
	float get_fitness();
private:
	float mutation_rate,fitness;
	int individual_code;
	int dimension;

};
#endif