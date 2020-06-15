const int MM_JP1_START = 0x40B670;
const int MM_US0_START = 0x40b140;
const int MM_JP0_START = 0x40B3B0;
const int MM_JP_GC_START = 0x3A5870;
const int MM_JP0_LINK_SIZE = 0x30;
const int MM_JP1_LINK_SIZE = 0x30;
const int MM_US0_LINK_SIZE = 0x10;
const int OoT_N2_START = 0x1E2AA0;
const int OoT_N2_LINK_SIZE = 0x30;

enum SolverTypes {
	SuccessiveActorSolver,
	RandomAssortment,
	Test,
	DFSRM,
	OneRandomPerm,
	nop
};

enum Version
{
	MM_US,
	MM_JP,
	MM_JP_GC,
	OoT_N2
};

enum SolverStep
{
	ALLOCATE = 0xdddd,
	DEALLOCATE,
	CHANGE_ROOM,
	SUPERSLIDE,
	USE_PLANE,
	LOAD_INITIAL_ROOM,
	CARRY
};