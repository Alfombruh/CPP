#ifndef TEST_H
#define TEST_H

class Sample{

public:
	
	int		publicFoo;

	Sample(void);
	~Sample(void);

	void publicBar(void) const;
	int		getFoo(void) const;
	void	setFoo(int v);
	int		compare(Sample * other) const;

private:

	int		_Foo;
	int		_privateFoo;

	void	_privateBar(void) const;
};

#endif
