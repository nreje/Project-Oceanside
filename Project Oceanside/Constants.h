const int MM_JP1_START = 0x40B670;
const int MM_US0_START = 0x40b140;
const int MM_JP0_START = 0x40B3B0;
const int MM_JP0_LINK_SIZE = 0x30;
const int MM_JP1_LINK_SIZE = 0x30;
const int MM_US0_LINK_SIZE = 0x10;

enum SolverTypes {
	SuccessiveActorSolver,
	RandomAssortment,
	Test,
	DFSRM,
	nop
};

enum Version
{
	MM_US,
	MM_JP,
};

enum SolverStep
{
	ALLOCATE = 0xdddd,
	DEALLOCATE,
	CHANGE_ROOM,
	SUPERSLIDE
};