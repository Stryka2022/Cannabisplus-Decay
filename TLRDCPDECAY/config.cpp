class CfgPatches 
{
    class TLRDCPDECAY
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {};
    };
};

class CfgMods 
{
    class TLRDCPDECAY
    {
        dir = "TLRDCPDECAY";
        picture = "";  // Path to a mod logo picture
        action = "";   // Action performed when clicking on the mod entry
        name = "TLRDCPDECAY";
		credits = "MISFITNO1";
		author = "MISFITNO1";
        hideName = 1;
        hidePicture = 1;
        version = "1.0";
        extra = 0;
        type= "mod";
        
        dependencies[] = {"World"};
        
        class defs
        {
            class worldScriptModule
            {
                value = "";
                files[] = {"TLRDCPDECAY/Scripts/4_World"};
            };
        };
    };
};
