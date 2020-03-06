removeAllWeapons this;
removeAllItems this;
removeAllAssignedItems this;
removeUniform this;
removeVest this;
removeBackpack this;
removeHeadgear this;
removeGoggles this;

_RandomHeadgear = selectRandom ["H_LIB_UK_Helmet_Mk2_Camo"];
this addHeadgear _RandomHeadgear;
_RandomGoggles = selectRandom ["G_LIB_Binoculars"];
this addGoggles _RandomGoggles;
this forceAddUniform "U_LIB_UK_P37";
this addVest "V_LIB_UK_P37_Rifleman";
this addBackpack "B_LIB_UK_HSack_Cape", "B_LIB_UK_HSack", "B_LIB_UK_HSack_Tea";

this addWeapon "LIB_LeeEnfield_No1";
this addPrimaryWeaponItem "LIB_10Rnd_770x56";
this addWeapon "fow_w_webley";
this addHandgunItem "fow_6Rnd_455";


this addItemToUniform "FirstAidKit";
for "_i" from 1 to 5 do {this addItemToVest "LIB_10Rnd_770x56";};
for "_i" from 1 to 2 do {this addItemToVest "fow_6Rnd_455";};
for "_i" from 1 to 2 do {this addItemToVest "LIB_MillsBomb";};

this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "LIB_Binocular_UK";
