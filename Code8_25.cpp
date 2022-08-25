#define  _CRT_SECURE_NO_WARNINGS 0
#include<iostream>
#include<string>

using namespace std;
//class Person;
//class Building
//{
//	friend void visit();
//	//friend class Person;
//	friend void Person::showHouse();
//protected:
//	string money;
//private:
//	string Bedroom;
//public:
//	string sitroom;
//	Building(string bed, string sit);
//	Building();
//};
//class Person
//{
//public:
//	Building* m_house;
//	string m_name;
//	string m_sex;
//	Person(string name, string sex);
//	void showHouse();
//	void showHouse1();
//};
//
//
//Building::Building(string bed, string sit)
//{
//	Bedroom = bed;
//	sitroom = sit;
//	money = "1234";
//}
//Building::Building()
//{
//
//}
//Person::Person(string name, string sex)
//{
//	m_name = name;
//	m_sex = sex;
//	m_house = new Building("卧室","客厅");
//}
//void Person::showHouse()
//{
//	cout << "正在展示Person类的:" << m_house->Bedroom << endl;
//	cout << "正在展示Person类的:" << m_house->money << endl;//正常情况下在Person类里面是访问不到Building的私有、保护属性的；但是向Building类声明Person类是它的好朋友，就可以访问
//	cout << "正在展示Person类的:" << m_house->sitroom << endl;
//
//}
//void Person::showHouse1()
//{
//	cout << "正在展示Person类的:" << m_house->Bedroom << endl;
//	cout << "正在展示Person类的:" << m_house->money << endl;//正常情况下在Person类里面是访问不到Building的私有、保护属性的；但是向Building类声明Person类是它的好朋友，就可以访问
//	cout << "正在展示Person类的:" << m_house->sitroom << endl;
//
//}
//void visit()
//{
//	
//	Building p1("卧室","客厅");
//	cout << "visit正在访问:" << p1.money << endl;
//	cout << "visit正在访问:" << p1.sitroom << endl;
//	cout << "visit正在访问:" << p1.Bedroom << endl;//正常情况下全局函数肯定是访问不到私有属性的；
//	//假如我们告诉Building类，visit全局函数是它的“好朋友”,那么好朋友就可以访问私有权限、保护权限
//}
//void test1()//全局函数做友元
//{
//	visit();
//}
//void test2()//类做友元
//{
//	Building p2("卧室", "客厅");
//	Person mm("mm","woman");
//	mm.showHouse();
//	mm.showHouse1();
//}
////void test3()
////{
////	Building p2("卧室", "客厅");
////	Person mm("mm", "woman");
////	mm.showHouse();
////
////}
//int main()
//{
//	//test1();
//	test2();
//	return 0;
//}
//class Building
//{
//	friend class Man;
//	friend class Woman;
//	friend void Person::ShowHouse();
//	//friend void Man::visit();
//	//friend void Man:: ShowHouse1();
//private:
//	string bedroom;
//public:
//	string sitroom;
//	Building();
//};
//Building::Building()
//{
//	bedroom = "卧室";
//	sitroom = "客厅";
//}
//
///// ////////////////
//class Man
//{
//public:
//	Building* pHouse;
//	Man();
//	void ShowHouse1();
//};
//void Man:: ShowHouse1()
//{
//	cout << "void ShowHouse1()正在访问:" << pHouse->sitroom << endl;
//	cout << "void ShowHouse1()正在访问:" << pHouse->bedroom << endl;
//}
//Man::Man()
//{
//	pHouse = new Building;
//}
///// <summary>
///// ///////////////
///// </summary>
//class Woman
//{
//public:
//	Building house;
//	void ShowHouse2();
//	void setHouse();
//};
//void Woman::ShowHouse2()
//{
//	cout << "void ShowHouse2()正在访问:" << house.bedroom << endl;
//	cout << "void ShowHouse2()正在访问:" << house.sitroom << endl;
//}
//void Woman::setHouse()
//{
//	house.bedroom = "客";
//	house.sitroom = "卧";
//}
///// <summary>
///// //////////
///// </summary>
//void test5()
//{
//	Man p1;
//	p1.ShowHouse1();
//	Woman p2;
//	p2.setHouse();
//	p2.ShowHouse2();
//
//}
//class Person
//{
//public:
//	Building *house;
//	void ShowHouse()
//	{
//		cout << house->sitroom << endl;
//		cout << house->bedroom << endl;
//	}
//	Person()
//	{
//		house = new Building;
//	}
//
//};
//int main()
//{
//	test5();
//	return 0;
//}
//class Person;
//class Building;
//Building::Building()
//{
//	bedroom = "卧室";
//	sitroom = "客厅";
//}
//class Person
//{
//private:
//	Building house;
//public:
//	void ShowHouse1();
//	void ShowHouse2();
//};
//
//
//class Building
//{
//	friend void Person::ShowHouse2();
//private:
//	string bedroom;
//public:
//	string sitroom;
//	Building();
//};
//
//
//void Person::ShowHouse1()
//{
//	cout << "void ShowHouse1()正在访问:" << house.sitroom << endl;
//	//cout << "void ShowHouse1()正在访问:" << house.bedroom << endl;
//
//}
//void Person::ShowHouse2()
//{
//	cout << "void ShowHouse2()正在访问:" << house.sitroom << endl;
//	cout << "void ShowHouse2()正在访问:" << house.bedroom << endl;
//
//}
//
//
//
//int main()
//{
//	Person p1;
//	p1.ShowHouse2();
//	return 0;
//}
//class Breather;
//class Building;
//
//class Breather
//{
//public:
//	Breather();//只留声明，定义放到类Building下面
//	string Get_bathroom();//只留声明，定义放到类Building下面
//	Building  building;
//};
//
//class Building
//{
//public:
//	friend string Breather::Get_bathroom();
//	Building()
//	{
//		parlor = "客厅";
//		bathroom = "卧室";
//	}
//public:
//	string parlor;
//private:
//	string bathroom;
//};
//
///**************Breather类中用到类Building的两个函数定义***************/
//Breather::Breather()
//{
//	//building = new Building;
//	Building p1;
//	building = p1;
//}
//string Breather::Get_bathroom()
//{
//	return building.bathroom;
//}
///******************************************************************/
//int main()
//{
//	Breather breather;
//	cout << breather.Get_bathroom() << endl;;
//
//	return 0;
//}
//class Person;
//class Building;
//class Person
//{
//public:
//	Building* building;
//	Person();
//	void ShowHouse1();
//	void ShowHouse2();
//};
//class Building
//{
//	friend void Person::ShowHouse1();
//	friend class Person;
//private:
//	string sitroom;
//public:
//	string bedroom;
//	Building();
//
//};
//Building::Building()
//{
//	sitroom = "卧室";
//	bedroom = "客厅";
//
//}
//Person::Person()
//{
//	building = new Building;
//}
//
//void Person::ShowHouse2()
//{
//	cout << "void Person::ShowHouse1():" << building->bedroom << endl;
//	cout << "void Person::ShowHouse1():" << building->sitroom << endl;
//}
//void Person::ShowHouse1()
//{
//	cout << "void Person::ShowHouse1():" << building->bedroom << endl;
//	cout << "void Person::ShowHouse1():" << building->sitroom << endl;
//
//}

//int main()
//{
//	Person p1;
//	p1.ShowHouse1();
//	p1.ShowHouse2();
//	return 0;
//}
//
//class Person;
//class Building;
//class Building
//{
//	//friend void Person::ShowHouse();
//private:
//	string bedroom;
//public:
//	string sitroom;
//	Building()
//	{
//		bedroom = "卧室";
//		sitroom = "客厅";
//	}
//
//};
//class Person
//{
//public:
//	Building building;//我们不能这样定义！！！！
//	void ShowHouse()
//	{
//		//cout << "void Person::ShowHouse():" << building.bedroom << endl;//
//		cout << "void Person::ShowHouse():" << building.sitroom << endl;
//	}
//};
//
//
//int main()
//{
//	Person p1;
//	p1.ShowHouse();
//	return 0;
//}
//class Building
//{
//	friend class Man;
//private:
//	string sitroom;
//public:
//	string bedroom;
//	Building()
//	{
//		sitroom = "客厅";
//		bedroom = "卧室";
//	}
//
//};
//class Man
//{
//public:
//	Building *building;
//	Man()
//	{
//		building = new Building;
//	}
//
//	void Show1()
//	{
//		cout << building->bedroom << endl;
//		cout << building->sitroom << endl;
//
//	}
//	void setHouse()
//	{
//		building->bedroom = "苍井";
//		building->sitroom = "空";
//	}
//
//};
//int main()
//{
//	Man zhansan;
//	zhansan.Show1();
//	zhansan.setHouse();
//	zhansan.Show1();
//	return 0;
//}
//class Person
//{
//public:
//	int age;
//	int weight;
//public:
//	Person(int age, int weight)
//	{
//		this->age = age;
//		this->weight = weight;
//	}
//	Person()
//	{
//		age = 0;
//		weight = 0;
//	}
//	/*Person operator+(const Person&p)
//	{
//		Person tmp;
//		tmp.age = p.age + age;
//		tmp.weight = p.weight + weight;
//		return tmp;
//	}*///成员函数实现
//	int GetAge()const
//	{
//		return age;
//	}
//	int GetWeight()const
//	{
//		return weight;
//	}
//	void SetAge(int age)
//	{
//		this->age = age;
//	}
//	void SetWeight(int weight)
//	{
//		this->weight = weight;
//	}
//	//void operator<<(ostream &out)//成员函数重载<<
//	//{
//	//	out << age << weight << endl;
//	//}
//	Person operator++(int)//成员函数重载后置++
//	{
//		Person tmp=*this;
//		age += 1;
//		weight += 1;
//		return tmp;
//	}
//	Person& operator++()//成员函数重载前置++
//	{
//		this->age++;
//		this->weight++;
//		return *this;
//	}
//};
//Person operator+(const Person&p1, const Person& p2)//重载加法
//{
//	Person tmp;
//
//	tmp.SetAge(p1.GetAge() + p2.GetAge());
//	tmp.SetWeight(p1.GetWeight() + p2.GetWeight());
//	return tmp;
//}
//Person operator+(int n,Person &p)//重载加法
//{
//	Person tmp;
//	tmp.SetAge ( p.GetAge() + n);
//	tmp.SetWeight ( p.GetWeight() + n);
//	return tmp;
//}


//void test1()
//{
//	Person p1(10, 10);
//	Person p2(20, 20);
//	//p2 = 10+p1;
//	//p2 = p1 + 10;
//}

//ostream& operator<<(ostream& cout, Person p)//全局函数重载<<
//{
//	
//	cout << p.age << " " << p.age;
//	return cout;
//}
//void test2()
//{
//	Person p2(10, 10);
//	//p2 << cout;//成员函数重载<<
//	cout << p2 << 10 << 20 << endl;;
//}
//void test3()//实现自增
//{
//	Person p1(10, 10);
//	//cout<<(p1++)<<endl;
//	//p1++;
//	//cout << (++p1) << endl;;
//cout<< ++(++p1);
//	cout << p1<<endl;;
//}
//void test4()
//{
//	
//	Person p1;
//	Person p2=p1++;
//	int a = 0;
//	Person& p3 = p1;
//	cout << ((a++));
//        p3++;
//	cout << p2 << endl;
//}
//void test5()
//{
//
//}
//int main()
//{
//	//test2();
//	//test3();
//	test4();
//	return 0;
//}
//int main()
//{
//	Person p1(10,20);
//	Person p2(20, 30);
//	Person p4;
//	Person p3=p1+p2;
//	p4=operator+(p1, p2);
//	//p3 = p1 + p2;
//	//p4 = p1 + p2 + p3;
//	cout << p4.GetAge() << endl;
//	cout << p4.GetWeight() << endl;
//	return 0;
//}
//Person& operator++(Person& p)//p1++//全局函数实现前置++
//{
//	p.age += 1;
//	p.weight += 1;
//	return p;
//}
//ostream& operator<<(ostream& cout, Person& p)//全局函数重载<<
//{
//	cout << p.GetAge() << " " << p.GetWeight();
//	return cout;
//}
//int main()
//{
//	Person p1;
//	//cout << p1++;
//	cout << ++p1;
//	return 0;
//}
//int main()
//{
//	Person p1;
//	cout << p1++;
//	cout << ;
//	return 0;
//}
//class Person
//{
//public:
//	int age;
//	Person()
//	{
//		age = 0;
//	}
//	Person& operator++()//前置++
//	{
//		this->age++;
//		return *this;
//	}
//	Person operator++(int)//后置
//	{
//		Person tmp = *this;
//		this->age++;
//		return tmp;
//	}
//
//};
//ostream& operator<<(ostream&cout,Person& p)
//{
//	cout << p.age;
//	return cout;
//}
//int main()
//{
//	/*Person p1;
//	cout<<p1++;
//	cout<<++p1;
//	cout << p1 << endl;*/
//	Person p1;
//	p1();
//	return 0;
//}