#include <bits/stdc++.h>
using namespace std;

class A {
public:
	A()
	{
	cout << "This is a A class\n";
	}
};

class B : public A {
    public:
    B(){}
};

class C{};

class D : public A, public C{};

class E : public B{};

int main()
{
  
	B obj;

    D obj2;

 
    E obj3;
	return 0;
}
