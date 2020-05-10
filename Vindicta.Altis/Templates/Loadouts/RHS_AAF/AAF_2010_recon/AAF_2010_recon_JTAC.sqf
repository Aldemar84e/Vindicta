removeAllWeapons this;
removeAllItems this;
removeAllAssignedItems this;
removeUniform this;
removeVest this;
removeBackpack this;
removeHeadgear this;
removeGoggles this;

_RandomVest = selectRandom ["V_Chestrig_rgr","rhsgref_chestrig","V_TacVest_oli","V_I_G_resistanceLeader_F"];
this addVest _RandomVest;
_RandomGoggles = selectRandom ["FGN_AAF_Shemag_tan","FGN_AAF_Shemag_green","G_Bandanna_oli","","",""];
this addGoggles _RandomGoggles;
_RandomHeadgear = selectRandom ["FGN_AAF_Boonie_Lizard","H_Watchcap_khk","H_Shemag_olive_hs","H_Cap_headphones","H_ShemagOpen_tan"];
this addHeadgear _RandomHeadgear;
this forceaddUniform "FGN_AAF_M93_Lizard";
this addBackpack "FGN_AAF_Bergen_SL_Olive";

this addWeapon "rhs_weap_m4a1_carryhandle_m203";
this addPrimaryWeaponItem "rhsusf_acc_M952V";
this addPrimaryWeaponItem "rhs_mag_30Rnd_556x45_M855_Stanag";
this addPrimaryWeaponItem "rhs_mag_M433_HEDP";
this addWeapon "rhs_weap_tt33";
this addHandgunItem "rhs_mag_762x25_8";
this addWeapon "Binocular";

this addItemToUniform "FirstAidKit";
for "_i" from 1 to 2 do {this addItemToUniform "rhs_mag_762x25_8";};
for "_i" from 1 to 4 do {this addItemToVest "rhs_grenade_mkiiia1_mag";};
for "_i" from 1 to 2 do {this addItemToVest "rhs_grenade_mki_mag";};
for "_i" from 1 to 2 do {this addItemToVest "rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red";};
for "_i" from 1 to 4 do {this addItemToVest "rhs_mag_30Rnd_556x45_M855_Stanag";};
for "_i" from 1 to 10 do {this addItemToBackpack "rhs_mag_M433_HEDP";};
for "_i" from 1 to 2 do {this addItemToBackpack "rhs_mag_m714_White";};
for "_i" from 1 to 6 do {this addItemToBackpack "rhs_mag_M585_white";};
for "_i" from 1 to 2 do {this addItemToBackpack "rhs_mag_M397_HET";};
for "_i" from 1 to 2 do {this addItemToBackpack "rhs_mag_m661_green";};
for "_i" from 1 to 2 do {this addItemToBackpack "rhs_mag_m662_red";};
for "_i" from 1 to 2 do {this addItemToBackpack "rhs_mag_m713_Red";};
for "_i" from 1 to 2 do {this addItemToBackpack "rhs_mag_m715_Green";};
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ItemWatch";
this linkItem "ItemRadio";
this linkItem "ItemGPS";