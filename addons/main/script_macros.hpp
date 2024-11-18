#define WEAP_XX(WEAP, COUNT) class DOUBLES(_xx,WEAP) { \
    weapon = QUOTE(WEAP); \
    count = COUNT; \
}

#define MAG_XX(MAG, COUNT) class DOUBLES(_xx,MAG) { \
    magazine = QUOTE(MAG); \
    count = COUNT; \
}

#define ITEM_XX(ITEM, COUNT) class DOUBLES(_xx,ITEM) { \
    name = QUOTE(ITEM); \
    count = COUNT; \
}

// ACE Cargo
#define CARGO_XX(ITEM, COUNT) class ITEM { \
    type = QUOTE(ITEM); \
    amount = COUNT; \
}

// Debug textures, mainly for testing hiddenSelections
#define DBUG_TEX_RED "#(rgb,8,8,3)color(1,0,0,1)"
#define DBUG_TEX_GRN "#(rgb,8,8,3)color(0,1,0,1)"
#define DBUG_TEX_BLU "#(rgb,8,8,3)color(0,0,1,1)"
#define DBUG_TEX_PUR "#(rgb,8,8,3)color(1,0,1,1)"
#define DBUG_TEX_YEL "#(rgb,8,8,3)color(1,1,0,1)"