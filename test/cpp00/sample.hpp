#ifndef SAMPLE_H
#define SAMPLE_H

class Sample {

public:

	float const pi;
	int			qd;

	Sample( float const f );
	~Sample( void );

	void	bar(void) const; //this const makes it imposible to change values inside of bar();
	//if you write a member fuction that doesnt change the instance of your classs define it as const, if you change any values inside of this const fucntion it wont compile
};

#endif
