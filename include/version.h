#ifndef	FO4VRBETTERSCOPES_VERSION_INCLUDED
#define FO4VRBETTERSCOPES_VERSION_INCLUDED

#define MAKE_STR_HELPER(a_str) #a_str
#define MAKE_STR(a_str) MAKE_STR_HELPER(a_str)

#define FO4VRBETTERSCOPES_VERSION_MAJOR	0
#define FO4VRBETTERSCOPES_VERSION_MINOR	0
#define FO4VRBETTERSCOPES_VERSION_PATCH	0
#define FO4VRBETTERSCOPES_VERSION_BETA	9
#define FO4VRBETTERSCOPES_VERSION_VERSTRING	MAKE_STR(FO4VRBETTERSCOPES_VERSION_MAJOR) "." MAKE_STR(FO4VRBETTERSCOPES_VERSION_MINOR) "." MAKE_STR(FO4VRBETTERSCOPES_VERSION_PATCH) "." MAKE_STR(FO4VRBETTERSCOPES_VERSION_BETA)

#endif
