//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	//Icon	Command										Update Interval	Update Signal
	{"",	"/home/iota/.local/bin/blocks/music",		2,				1},
	//{"",	"/home/iota/.local/bin/blocks/bluetooth",	10,				0},
	{"",	"/home/iota/.local/bin/blocks/ip eth0",		10,				0},
	{"",	"/home/iota/.local/bin/blocks/ip wlp5s0",	10,				0},
	{"",	"/home/iota/.local/bin/blocks/packages",	0,				0},
	{"",	"/home/iota/.local/bin/blocks/rss",			60,				5},
	{"",	"/home/iota/.local/bin/blocks/ram",			2,				0},
	{"",	"/home/iota/.local/bin/blocks/cpu",			2,				2},
	{"",	"/home/iota/.local/bin/blocks/temperature",	5,				0},
	//{"",	"/home/iota/.local/bin/blocks/backlight",	0,				3},
	{"",	"/home/iota/.local/bin/blocks/volume",		0,				4},
	//{"",	"/home/iota/.local/bin/blocks/battery",		10,				0},
	{"",	"/home/iota/.local/bin/blocks/clock",		1,				0}
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " ";
static unsigned int delimLen = 5;
