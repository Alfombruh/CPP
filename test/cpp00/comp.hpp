#ifndef COMP_H
#define COMP_H

class Sample{

public:

	Sample(int v);
	~Sample(void);

	int		getFoo(void) const;
	int		compare(Sample * other) const;

private:

	int		_Foo;
};

#endif
