class CfgPatches
{
    class BNA_KC_NoBurnScreams
    {
        units[] = {};
		weapons[] = {};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"WBK_PhoenixTreal_FlamethrowerMOD"
                // Original scream sound effect classes
		};
    };
};


class CfgSounds
{
    sounds[] = {};

    // Overwrite default WBK sound effects with a "empty" sound file
    class hit_by_flame_1 { sound[] = {"BNA_KC_NoBurnScreams\Blank_Sound.ogg", 0, 0}; };
    class hit_by_flame_2 { sound[] = {"BNA_KC_NoBurnScreams\Blank_Sound.ogg", 0, 0}; };
    class hit_by_flame_3 { sound[] = {"BNA_KC_NoBurnScreams\Blank_Sound.ogg", 0, 0}; };
    class hit_by_flame_4 { sound[] = {"BNA_KC_NoBurnScreams\Blank_Sound.ogg", 0, 0}; };
    
    class burnttodeath_distant1 { sound[] = {"BNA_KC_NoBurnScreams\Blank_Sound.ogg", 0, 0}; };
    class burnttodeath_distant2 { sound[] = {"BNA_KC_NoBurnScreams\Blank_Sound.ogg", 0, 0}; };
    class burnttodeath_distant3 { sound[] = {"BNA_KC_NoBurnScreams\Blank_Sound.ogg", 0, 0}; };
    class burnttodeath_distant4 { sound[] = {"BNA_KC_NoBurnScreams\Blank_Sound.ogg", 0, 0}; };
    class burnttodeath_distant5 { sound[] = {"BNA_KC_NoBurnScreams\Blank_Sound.ogg", 0, 0}; };
    class burnttodeath_distant6 { sound[] = {"BNA_KC_NoBurnScreams\Blank_Sound.ogg", 0, 0}; };

    class burnttodeath1 { sound[] = {"BNA_KC_NoBurnScreams\Blank_Sound.ogg", 0, 0}; };
    class burnttodeath2 { sound[] = {"BNA_KC_NoBurnScreams\Blank_Sound.ogg", 0, 0}; };
    class burnttodeath3 { sound[] = {"BNA_KC_NoBurnScreams\Blank_Sound.ogg", 0, 0}; };
    class burnttodeath4 { sound[] = {"BNA_KC_NoBurnScreams\Blank_Sound.ogg", 0, 0}; };
    class burnttodeath5 { sound[] = {"BNA_KC_NoBurnScreams\Blank_Sound.ogg", 0, 0}; };
    class burnttodeath6 { sound[] = {"BNA_KC_NoBurnScreams\Blank_Sound.ogg", 0, 0}; };
};