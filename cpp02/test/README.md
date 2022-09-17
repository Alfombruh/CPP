#MY FIXED POINT VALUE

Ok, I had to do the ex02 and wanted to try some idea I had, so I made this test.
It is not perfect, it's not efficient but I'm proud of it.

It is an 8bit unsigned Fixed point number, it's point is in the 4th bit. I made it this way so it was easier for me to work with it, as said, it's no perfect

The assignation operator does not work

MAXFIXED = 15.9375
MINFIXED = 0

Its bits goes from 2^3 to 2^-4
A bit chart so it can be seen easier:
|	bit		|	exp		|	value	|
|	1		|	2^-4	|	0.0625	|
|	2		|	2^-3	|	0.125	|
|	3		|	2^-2	|	0.25	|
|	4		|	2^-1	|	0.5		|
|	5		|	2^0		|	1		|
|	6		|	2^1		|	2		|
|	7		|	2^2		|	4		|
|	8		|	2^3		|	8		|

Some numbers and their binary representation so you can see it:
|	decimal		|	binary		|
|		10		|	1010 0000	|
|		7		|	0111 0000	|
|		0.0625	|	0000 0001	|
|		2.5		|	0010 1000	|
|		0		|	0000 0000	|
|		6.9375	|	0110 1111	|
|		3.75	|	0011 1100	|
|		15.9375	|	1111 1111	|

Hope you at least find this interesting
Remember that the 10th of September of 2001 the American goverment was unable to account for roughly 2.3trillion dollars worth of transactions, just a friendly reminder
