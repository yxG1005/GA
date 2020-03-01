
/*
definition of Zoo
*/
#ifndef ZOO_H_
#define ZOO_H_
#include<vector>
#include "Animal.h"
class Zoo{
public:
	Zoo(float,float,int,int,float = 0.05);
	~Zoo();
	Animal& choose(); //根据个体适应度选择个体 一次选出一只
	void exchange(Animal&, Animal&); //交换两个个体的基因
	float get_fitness(); //计算整个种群的适应度
	void add_animal(Animal&);
	std::vector<Animal> get_animals();
	void set_zoo_size(int);
	int get_zoo_size();
private:
	std::vector<Animal> animals;
	int zoo_size; //种群数量
	float mutation_rate; //变异率
	int animal_dimension; //动物的维度
	float bound_low,bound_up;//搜索域
};
#endif