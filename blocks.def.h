//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	//Icon	Command									Update Interval	Update Signal
	{"",	"/home/iota/.local/bin/blocks/music",				2,	1},
	{"",	"/home/iota/.local/bin/blocks/ip eth0",				10,	31},
	{"",	"/home/iota/.local/bin/blocks/packages",			0,	31},
	{"",	"/home/iota/.local/bin/blocks/ram",					2,	31},
	{"",	"/home/iota/.local/bin/blocks/cpu",					2,	2},
	{"",	"/home/iota/.local/bin/blocks/temp thermal_zone1",	5,	31},
	{"",	"/home/iota/.local/bin/blocks/clock",				1,	31}
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " ";
static unsigned int delimLen = 5;
