#ifndef POINTERS_H
#define POINTERS_H

class Sample{

public:
	int		foo;

	Sample(void);
	~Sample(void);

	static int getInst(void);

	void	bar(void) const;

private:

	static int privInst;
};

#endif
