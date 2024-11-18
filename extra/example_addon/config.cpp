#include "script_component.hpp"

class CfgPatches {
    class MOD_PREFIX_addonName {
        author = AUTHOR;
        authors[] = {"You!"};
        name = "MOD_TITLE - Addon Name";
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "MOD_PREFIX_main"
        };
        units[] = {};
        weapons[] = {};
    };
};