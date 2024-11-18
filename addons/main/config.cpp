#include "script_component.hpp"

class CfgPatches {
    class MOD_PREFIX_main {
        author = AUTHOR;
        authors[] = {"DartRuffian"};
        name = "MOD_TITLE - Main";
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "cba_main"
        };
        units[] = {};
        weapons[] = {};
    };
};

#include "CfgSettings.hpp"