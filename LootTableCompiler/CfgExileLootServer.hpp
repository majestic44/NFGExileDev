class CfgExileLootServer
{
	class LootTables
	{

		/*
			Percental Item Group Spawn Chances of CivillianLowerClass:

			Restraints        = 0.70%
			PistolAttachments = 2.10%
			ShotgunAmmo       = 2.10%
			USattachments     = 2.10%
			USpistols         = 2.80%
			USammo            = 3.50%
			VcClothing        = 3.50%
			VcBackpacks       = 3.50%
			VcVests           = 3.50%
			VcHeadgear        = 3.50%
			VCpistols         = 5.59%
			VCammo            = 5.59%
			Chemlights        = 6.99%
			Drinks            = 6.99%
			RoadFlares        = 6.99%
			Food              = 19.58%
			Trash             = 20.98%
		*/
		CivillianLowerClass[] = {"Food", "Food", "Drinks", "RoadFlares", "Drinks", "Trash", "VcVests", "Food", "USpistols", "PistolAttachments", "VCammo", "USammo", "USattachments", "PistolAttachments", "USattachments", "Trash", "VcBackpacks", "VCammo", "USpistols", "Trash", "Chemlights", "Trash", "Trash", "Food", "Chemlights", "Food", "VcClothing", "Drinks", "Chemlights", "VCammo", "Drinks", "VCpistols", "Food", "Food", "Trash", "Drinks", "Food", "VCammo", "VcClothing", "Trash", "Trash", "USpistols", "Food", "VcVests", "Trash", "Drinks", "Food", "ShotgunAmmo", "Trash", "VCpistols", "VcBackpacks", "VCammo", "RoadFlares", "Trash", "VCpistols", "Food", "Trash", "VcVests", "RoadFlares", "VcBackpacks", "Food", "Trash", "RoadFlares", "VcClothing", "Trash", "USammo", "RoadFlares", "Trash", "VcClothing", "Trash", "Food", "VcClothing", "Chemlights", "USammo", "VCammo", "VcVests", "VCammo", "USpistols", "Food", "Trash", "Drinks", "Trash", "Chemlights", "VcHeadgear", "USattachments", "Drinks", "RoadFlares", "Food", "Food", "Drinks", "ShotgunAmmo", "RoadFlares", "Trash", "VCpistols", "Trash", "VcHeadgear", "Food", "Trash", "Food", "VcBackpacks", "VCpistols", "VCpistols", "Drinks", "VcVests", "VcHeadgear", "Chemlights", "RoadFlares", "Chemlights", "PistolAttachments", "Trash", "ShotgunAmmo", "Trash", "VCammo", "Trash", "Food", "RoadFlares", "Trash", "VCpistols", "Food", "Food", "Chemlights", "Trash", "Trash", "Trash", "VCpistols", "VcHeadgear", "Trash", "Food", "Food", "Food", "USammo", "Food", "Chemlights", "Trash", "RoadFlares", "Food", "VcBackpacks", "USammo", "Food", "Restraints", "Food", "Chemlights", "VcHeadgear"};

		/*
			Percental Item Group Spawn Chances of CivillianUpperClass:

			Restraints    = 0.92%
			USattachments = 2.75%
			VCattachments = 2.75%
			VCrifles      = 2.75%
			VCammo        = 2.75%
			USrifles      = 3.67%
			USammo        = 3.67%
			CivilianVests = 4.59%
			USpistols     = 4.59%
			Drinks        = 9.17%
			RoadFlares    = 9.17%
			Food          = 25.69%
			Trash         = 27.52%
		*/
		CivillianUpperClass[] = {"USammo", "Food", "Food", "USattachments", "CivilianVests", "Food", "Food", "Drinks", "Trash", "VCrifles", "Food", "VCattachments", "Drinks", "Trash", "USpistols", "Food", "USattachments", "Restraints", "VCrifles", "Food", "RoadFlares", "USpistols", "Trash", "Drinks", "Trash", "Drinks", "Drinks", "USammo", "USrifles", "Drinks", "Trash", "RoadFlares", "Food", "CivilianVests", "USattachments", "Trash", "Food", "Trash", "Food", "Food", "Trash", "Trash", "Trash", "USrifles", "Trash", "CivilianVests", "Trash", "Trash", "Food", "VCammo", "Food", "VCattachments", "Food", "CivilianVests", "Food", "Drinks", "RoadFlares", "USrifles", "Food", "RoadFlares", "RoadFlares", "Food", "USrifles", "RoadFlares", "Trash", "Trash", "Food", "Food", "Trash", "VCammo", "Food", "Food", "VCrifles", "RoadFlares", "RoadFlares", "RoadFlares", "Trash", "RoadFlares", "Drinks", "Food", "USpistols", "Trash", "Drinks", "Trash", "USammo", "Food", "Food", "Trash", "Drinks", "Trash", "CivilianVests", "Food", "Trash", "Trash", "Food", "Food", "Trash", "Trash", "Trash", "USpistols", "USpistols", "Trash", "USammo", "Food", "VCattachments", "Trash", "Trash", "VCammo", "Trash"};

		/*
			Percental Item Group Spawn Chances of Shop:

			USattachments   = 0.97%
			USammo          = 0.97%
			USlmg           = 0.97%
			USPistolAmmo    = 1.94%
			IndustrialItems = 2.91%
			MedicalItems    = 2.91%
			Restraints      = 2.91%
			SmokeGrenades   = 3.88%
			Chemlights      = 4.85%
			USrifles        = 4.85%
			RoadFlares      = 4.85%
			VCrifles        = 4.85%
			VCammo          = 4.85%
			USPistols       = 9.71%
			Drinks          = 14.56%
			Food            = 14.56%
			Trash           = 19.42%
		*/
		Shop[] = {"VCrifles", "VCrifles", "Food", "Food", "Chemlights", "Food", "Trash", "Drinks", "IndustrialItems", "Drinks", "Food", "USPistols", "USrifles", "Trash", "IndustrialItems", "USrifles", "Drinks", "Trash", "MedicalItems", "Food", "USPistols", "RoadFlares", "Drinks", "USrifles", "USPistolAmmo", "Drinks", "Restraints", "Chemlights", "Trash", "Food", "Food", "USPistols", "Drinks", "USPistolAmmo", "VCrifles", "Trash", "USlmg", "Trash", "SmokeGrenades", "Chemlights", "Chemlights", "VCammo", "Trash", "RoadFlares", "USPistols", "Trash", "VCrifles", "Trash", "Trash", "SmokeGrenades", "Trash", "Trash", "Food", "USPistols", "MedicalItems", "Trash", "Food", "USPistols", "USPistols", "VCrifles", "VCammo", "RoadFlares", "Drinks", "Trash", "RoadFlares", "VCammo", "Trash", "VCammo", "IndustrialItems", "Trash", "USPistols", "SmokeGrenades", "USrifles", "Food", "Food", "Drinks", "USammo", "Trash", "Drinks", "Food", "RoadFlares", "MedicalItems", "Trash", "Restraints", "SmokeGrenades", "VCammo", "Drinks", "Food", "Trash", "Drinks", "Drinks", "Trash", "Drinks", "Food", "USrifles", "USPistols", "Drinks", "Chemlights", "USPistols", "Food", "USattachments", "Restraints", "Drinks"};

		/*
			Percental Item Group Spawn Chances of Industrial:

			Restraints      = 4.35%
			RoadFlares      = 13.04%
			Vehicle         = 21.74%
			Trash           = 26.09%
			IndustrialItems = 34.78%
		*/
		Industrial[] = {"Trash", "RoadFlares", "Trash", "IndustrialItems", "Vehicle", "Vehicle", "Vehicle", "IndustrialItems", "IndustrialItems", "Trash", "IndustrialItems", "Trash", "Trash", "IndustrialItems", "IndustrialItems", "Trash", "RoadFlares", "IndustrialItems", "IndustrialItems", "Vehicle", "Vehicle", "Restraints", "RoadFlares"};

		/*
			Percental Item Group Spawn Chances of Factories:

			Electronics     = 10.00%
			Trash           = 40.00%
			IndustrialItems = 50.00%
		*/
		Factories[] = {"IndustrialItems", "IndustrialItems", "Trash", "IndustrialItems", "Electronics", "IndustrialItems", "Trash", "Trash", "IndustrialItems", "Trash"};

		/*
			Percental Item Group Spawn Chances of VehicleService:

			Restraints      = 4.35%
			RoadFlares      = 13.04%
			IndustrialItems = 21.74%
			Trash           = 26.09%
			Vehicle         = 34.78%
		*/
		VehicleService[] = {"Vehicle", "RoadFlares", "Trash", "Restraints", "Trash", "Trash", "IndustrialItems", "IndustrialItems", "Vehicle", "Vehicle", "IndustrialItems", "Vehicle", "Trash", "Vehicle", "IndustrialItems", "Vehicle", "IndustrialItems", "Trash", "Trash", "RoadFlares", "Vehicle", "RoadFlares", "Vehicle"};

		/*
			Percental Item Group Spawn Chances of Military:

			USpistols         = 5.68%
			USrifles          = 6.82%
			USlmg             = 6.82%
			USsnipers         = 5.68%
			USattachments     = 5.68%
			USammo            = 6.82%
			UStraps           = 5.68%
			HandGrenades      = 5.68%
			Explosives        = 5.68%
			MedicalItems      = 5.68%
			Restraints        = 5.68%
			MilitaryBackpacks = 5.68%
			MilitaryHeadgear  = 5.68%
			MilitaryVests     = 5.68%
			SmokeGrenades     = 5.68%
			MilitaryClothing  = 5.68%
			Trash             = 5.68%
		*/
		Military[] = {"USammo", "Restraints", "USrifles", "MedicalItems", "HandGrenades", "MedicalItems", "Trash", "Explosives", "HandGrenades", "MilitaryClothing", "MilitaryClothing", "USattachments", "UStraps", "Restraints", "MilitaryClothing", "UStraps", "SmokeGrenades", "USlmg", "Trash", "MilitaryHeadgear", "Explosives", "Trash", "USsnipers", "USpistols", "MilitaryHeadgear", "USlmg", "MilitaryVests", "HandGrenades", "USammo", "USrifles", "USattachments", "MilitaryBackpacks", "USlmg", "Explosives", "MilitaryVests", "SmokeGrenades", "USammo", "MilitaryHeadgear", "UStraps", "USlmg", "Restraints", "USrifles", "USsnipers", "MilitaryHeadgear", "MedicalItems", "USrifles", "Explosives", "USpistols", "USsnipers", "USammo", "HandGrenades", "MedicalItems", "MilitaryClothing", "USrifles", "USpistols", "USsnipers", "Trash", "MilitaryBackpacks", "MilitaryBackpacks", "MilitaryClothing", "UStraps", "USammo", "Trash", "UStraps", "USattachments", "USammo", "MilitaryVests", "MilitaryVests", "USlmg", "HandGrenades", "MilitaryBackpacks", "MilitaryVests", "SmokeGrenades", "USattachments", "Restraints", "USrifles", "USattachments", "MilitaryHeadgear", "USsnipers", "SmokeGrenades", "Explosives", "Restraints", "SmokeGrenades", "USpistols", "MilitaryBackpacks", "USlmg", "MedicalItems", "USpistols"};

		/*
			Percental Item Group Spawn Chances of Medical:

			Trash        = 23.08%
			MedicalItems = 76.92%
		*/
		Medical[] = {"MedicalItems", "MedicalItems", "MedicalItems", "MedicalItems", "MedicalItems", "Trash", "MedicalItems", "MedicalItems", "Trash", "Trash", "MedicalItems", "MedicalItems", "MedicalItems"};

		/*
			Percental Item Group Spawn Chances of Tourist:

			USammo            = 2.94%
			USattachments     = 2.94%
			Explosives        = 5.88%
			HandGrenades      = 5.88%
			MedicalItems      = 5.88%
			Restraints        = 5.88%
			MilitaryBackpacks = 11.76%
			MilitaryHeadgear  = 11.76%
			DLCRifles         = 23.53%
			USsnipers         = 23.53%
		*/
		Tourist[] = {"USsnipers", "USattachments", "USsnipers", "DLCRifles", "DLCRifles", "USsnipers", "DLCRifles", "HandGrenades", "USsnipers", "USsnipers", "MilitaryHeadgear", "Restraints", "HandGrenades", "USsnipers", "MilitaryBackpacks", "MilitaryBackpacks", "MilitaryBackpacks", "MilitaryHeadgear", "DLCRifles", "DLCRifles", "Explosives", "DLCRifles", "USammo", "MedicalItems", "DLCRifles", "USsnipers", "MilitaryHeadgear", "DLCRifles", "Explosives", "Restraints", "MilitaryBackpacks", "MedicalItems", "MilitaryHeadgear", "USsnipers"};

		/*
			Percental Item Group Spawn Chances of Radiation:

			USammo            = 3.33%
			USattachments     = 3.33%
			EpicWeapons       = 6.67%
			HandGrenades      = 6.67%
			MedicalItems      = 6.67%
			Restraints        = 6.67%
			Explosives        = 16.67%
			MilitaryBackpacks = 16.67%
			MilitaryHeadgear  = 16.67%
			USsnipers         = 16.67%
		*/
		Radiation[] = {"Restraints", "MilitaryHeadgear", "Explosives", "Explosives", "USsnipers", "Restraints", "MilitaryHeadgear", "HandGrenades", "USsnipers", "USammo", "Explosives", "MilitaryHeadgear", "MilitaryBackpacks", "Explosives", "MedicalItems", "USattachments", "HandGrenades", "Explosives", "EpicWeapons", "MedicalItems", "MilitaryBackpacks", "USsnipers", "MilitaryBackpacks", "MilitaryBackpacks", "MilitaryHeadgear", "EpicWeapons", "USsnipers", "MilitaryBackpacks", "MilitaryHeadgear", "USsnipers"};
	};

	class ItemGroups
	{

		/*
			Percental Item Spawn Chances of Food:

			Exile_Item_CookingPot        = 2.08%
			Exile_Item_CanOpener         = 3.47%
			Exile_Item_Matches           = 3.47%
			Exile_Item_EMRE              = 2.08%
			Exile_Item_GloriousKnakworst = 4.17%
			Exile_Item_Surstromming      = 4.86%
			Exile_Item_SausageGravy      = 4.86%
			Exile_Item_ChristmasTinner   = 4.86%
			Exile_Item_MacasCheese       = 4.86%
			Exile_Item_BBQSandwich       = 4.86%
			Exile_Item_CatFood           = 4.86%
			Exile_Item_Dogfood           = 4.86%
			Exile_Item_BeefParts         = 4.86%
			Exile_Item_Cheathas          = 4.86%
			Exile_Item_DsNuts            = 4.86%
			Exile_Item_Noodles           = 4.86%
			Exile_Item_CockONut          = 5.56%
			Exile_Item_SeedAstics        = 5.56%
			Exile_Item_Raisins           = 6.25%
			Exile_Item_Moobar            = 6.25%
			Exile_Item_InstantCoffee     = 7.64%
		*/
		Food[] = {"Exile_Item_CockONut", "Exile_Item_Dogfood", "Exile_Item_Cheathas", "Exile_Item_BBQSandwich", "Exile_Item_MacasCheese", "Exile_Item_Cheathas", "Exile_Item_Matches", "Exile_Item_Raisins", "Exile_Item_BeefParts", "Exile_Item_Matches", "Exile_Item_Moobar", "Exile_Item_BeefParts", "Exile_Item_Surstromming", "Exile_Item_MacasCheese", "Exile_Item_MacasCheese", "Exile_Item_Raisins", "Exile_Item_InstantCoffee", "Exile_Item_MacasCheese", "Exile_Item_Noodles", "Exile_Item_Raisins", "Exile_Item_EMRE", "Exile_Item_Moobar", "Exile_Item_Noodles", "Exile_Item_SausageGravy", "Exile_Item_Cheathas", "Exile_Item_InstantCoffee", "Exile_Item_DsNuts", "Exile_Item_CockONut", "Exile_Item_CanOpener", "Exile_Item_InstantCoffee", "Exile_Item_BBQSandwich", "Exile_Item_Moobar", "Exile_Item_Surstromming", "Exile_Item_DsNuts", "Exile_Item_SeedAstics", "Exile_Item_MacasCheese", "Exile_Item_BBQSandwich", "Exile_Item_InstantCoffee", "Exile_Item_Noodles", "Exile_Item_BBQSandwich", "Exile_Item_InstantCoffee", "Exile_Item_CockONut", "Exile_Item_Matches", "Exile_Item_EMRE", "Exile_Item_Noodles", "Exile_Item_CanOpener", "Exile_Item_Cheathas", "Exile_Item_Moobar", "Exile_Item_BeefParts", "Exile_Item_CatFood", "Exile_Item_Raisins", "Exile_Item_Noodles", "Exile_Item_ChristmasTinner", "Exile_Item_InstantCoffee", "Exile_Item_BeefParts", "Exile_Item_CatFood", "Exile_Item_Noodles", "Exile_Item_CanOpener", "Exile_Item_InstantCoffee", "Exile_Item_ChristmasTinner", "Exile_Item_CockONut", "Exile_Item_GloriousKnakworst", "Exile_Item_Raisins", "Exile_Item_SausageGravy", "Exile_Item_GloriousKnakworst", "Exile_Item_MacasCheese", "Exile_Item_CockONut", "Exile_Item_DsNuts", "Exile_Item_InstantCoffee", "Exile_Item_BeefParts", "Exile_Item_Matches", "Exile_Item_CatFood", "Exile_Item_ChristmasTinner", "Exile_Item_CatFood", "Exile_Item_CanOpener", "Exile_Item_SausageGravy", "Exile_Item_Dogfood", "Exile_Item_Cheathas", "Exile_Item_ChristmasTinner", "Exile_Item_EMRE", "Exile_Item_Moobar", "Exile_Item_InstantCoffee", "Exile_Item_Moobar", "Exile_Item_Moobar", "Exile_Item_SeedAstics", "Exile_Item_DsNuts", "Exile_Item_Dogfood", "Exile_Item_SeedAstics", "Exile_Item_Raisins", "Exile_Item_Moobar", "Exile_Item_DsNuts", "Exile_Item_GloriousKnakworst", "Exile_Item_Surstromming", "Exile_Item_SausageGravy", "Exile_Item_ChristmasTinner", "Exile_Item_DsNuts", "Exile_Item_GloriousKnakworst", "Exile_Item_CanOpener", "Exile_Item_DsNuts", "Exile_Item_CockONut", "Exile_Item_SausageGravy", "Exile_Item_Raisins", "Exile_Item_CockONut", "Exile_Item_Raisins", "Exile_Item_Surstromming", "Exile_Item_SausageGravy", "Exile_Item_Cheathas", "Exile_Item_CatFood", "Exile_Item_BBQSandwich", "Exile_Item_Cheathas", "Exile_Item_GloriousKnakworst", "Exile_Item_SausageGravy", "Exile_Item_ChristmasTinner", "Exile_Item_Dogfood", "Exile_Item_SeedAstics", "Exile_Item_Noodles", "Exile_Item_Surstromming", "Exile_Item_Dogfood", "Exile_Item_Dogfood", "Exile_Item_Surstromming", "Exile_Item_CookingPot", "Exile_Item_Raisins", "Exile_Item_Moobar", "Exile_Item_CockONut", "Exile_Item_Dogfood", "Exile_Item_BBQSandwich", "Exile_Item_Surstromming", "Exile_Item_ChristmasTinner", "Exile_Item_MacasCheese", "Exile_Item_InstantCoffee", "Exile_Item_GloriousKnakworst", "Exile_Item_CookingPot", "Exile_Item_SeedAstics", "Exile_Item_SeedAstics", "Exile_Item_SeedAstics", "Exile_Item_BeefParts", "Exile_Item_BeefParts", "Exile_Item_CatFood", "Exile_Item_Matches", "Exile_Item_InstantCoffee", "Exile_Item_CatFood", "Exile_Item_SeedAstics", "Exile_Item_BBQSandwich", "Exile_Item_CookingPot"};

		/*
			Percental Item Spawn Chances of Drinks:

			Exile_Item_Beer                    = 7.14%
			Exile_Item_EnergyDrink             = 7.14%
			Exile_Item_PlasticBottleFreshWater = 7.14%
			Exile_Item_PowerDrink              = 7.14%
			Exile_Item_MountainDupe            = 14.29%
			Exile_Item_ChocolateMilk           = 21.43%
			Exile_Item_PlasticBottleDirtyWater = 35.71%
		*/
		Drinks[] = {"Exile_Item_PlasticBottleFreshWater", "Exile_Item_Beer", "Exile_Item_PlasticBottleDirtyWater", "Exile_Item_PlasticBottleDirtyWater", "Exile_Item_ChocolateMilk", "Exile_Item_MountainDupe", "Exile_Item_PlasticBottleDirtyWater", "Exile_Item_MountainDupe", "Exile_Item_EnergyDrink", "Exile_Item_PlasticBottleDirtyWater", "Exile_Item_ChocolateMilk", "Exile_Item_PowerDrink", "Exile_Item_PlasticBottleDirtyWater", "Exile_Item_ChocolateMilk"};

		/*
			Percental Item Spawn Chances of USpistols:

			uns_mkvFlarePistol = 12.50%
			uns_MX991_w        = 12.50%
			uns_MX991_g        = 12.50%
			uns_MX991_m1911    = 12.50%
			uns_38spec         = 12.50%
			uns_sw_m10         = 12.50%
			uns_m1911          = 12.50%
			uns_coltcmdr       = 12.50%
		*/
		USpistols[] = {"uns_38spec", "uns_coltcmdr", "uns_MX991_m1911", "uns_MX991_w", "uns_38spec", "uns_coltcmdr", "uns_m1911", "uns_coltcmdr", "uns_sw_m10", "uns_sw_m10", "uns_MX991_g", "uns_MX991_w", "uns_m1911", "uns_MX991_g", "uns_coltcmdr", "uns_MX991_w", "uns_mkvFlarePistol", "uns_MX991_g", "uns_MX991_w", "uns_mkvFlarePistol", "uns_coltcmdr", "uns_m1911", "uns_MX991_m1911", "uns_coltcmdr", "uns_MX991_w", "uns_mkvFlarePistol", "uns_MX991_w", "uns_sw_m10", "uns_MX991_g", "uns_coltcmdr", "uns_38spec", "uns_38spec", "uns_mkvFlarePistol", "uns_MX991_w", "uns_MX991_m1911", "uns_mkvFlarePistol", "uns_sw_m10", "uns_MX991_g", "uns_mkvFlarePistol", "uns_MX991_g", "uns_coltcmdr", "uns_38spec", "uns_sw_m10", "uns_MX991_g", "uns_MX991_m1911", "uns_coltcmdr", "uns_sw_m10", "uns_mkvFlarePistol", "uns_MX991_m1911", "uns_MX991_m1911", "uns_coltcmdr", "uns_38spec", "uns_38spec", "uns_MX991_g", "uns_mkvFlarePistol", "uns_mkvFlarePistol", "uns_MX991_m1911", "uns_MX991_g", "uns_MX991_m1911", "uns_sw_m10", "uns_MX991_w", "uns_mkvFlarePistol", "uns_coltcmdr", "uns_38spec", "uns_MX991_m1911", "uns_m1911", "uns_mkvFlarePistol", "uns_MX991_w", "uns_m1911", "uns_sw_m10", "uns_coltcmdr", "uns_sw_m10", "uns_coltcmdr", "uns_MX991_m1911", "uns_m1911", "uns_38spec", "uns_MX991_w", "uns_sw_m10", "uns_MX991_m1911", "uns_MX991_g", "uns_38spec", "uns_mkvFlarePistol", "uns_MX991_w", "uns_m1911", "uns_MX991_g", "uns_MX991_m1911", "uns_38spec", "uns_m1911", "uns_mkvFlarePistol", "uns_MX991_w", "uns_MX991_m1911", "uns_sw_m10", "uns_sw_m10", "uns_MX991_w", "uns_coltcmdr", "uns_m1911", "uns_sw_m10", "uns_m1911", "uns_m1911", "uns_sw_m10", "uns_MX991_g", "uns_coltcmdr", "uns_MX991_w", "uns_MX991_m1911", "uns_MX991_m1911", "uns_38spec", "uns_m1911", "uns_m1911", "uns_MX991_w", "uns_MX991_g", "uns_MX991_g", "uns_MX991_g", "uns_38spec", "uns_38spec", "uns_mkvFlarePistol", "uns_sw_m10", "uns_38spec", "uns_m1911", "uns_mkvFlarePistol", "uns_m1911"};

		/*
			Percental Item Spawn Chances of VCpistols:

			uns_mkvFlarePistol = 14.29%
			uns_MX991_w        = 14.29%
			uns_nagant_m1895   = 14.29%
			uns_p64            = 14.29%
			uns_makarov        = 14.29%
			uns_Tt33           = 14.29%
			uns_tt30           = 14.29%
		*/
		VCpistols[] = {"uns_tt30", "uns_Tt33", "uns_Tt33", "uns_p64", "uns_Tt33", "uns_makarov", "uns_MX991_w", "uns_MX991_w", "uns_p64", "uns_Tt33", "uns_Tt33", "uns_makarov", "uns_nagant_m1895", "uns_tt30", "uns_tt30", "uns_MX991_w", "uns_nagant_m1895", "uns_MX991_w", "uns_makarov", "uns_mkvFlarePistol", "uns_tt30", "uns_nagant_m1895", "uns_MX991_w", "uns_nagant_m1895", "uns_makarov", "uns_MX991_w", "uns_p64", "uns_p64", "uns_tt30", "uns_tt30", "uns_MX991_w", "uns_Tt33", "uns_mkvFlarePistol", "uns_p64", "uns_Tt33", "uns_MX991_w", "uns_nagant_m1895", "uns_nagant_m1895", "uns_Tt33", "uns_makarov", "uns_Tt33", "uns_tt30", "uns_Tt33", "uns_Tt33", "uns_nagant_m1895", "uns_p64", "uns_MX991_w", "uns_makarov", "uns_nagant_m1895", "uns_mkvFlarePistol", "uns_mkvFlarePistol", "uns_MX991_w", "uns_p64", "uns_makarov", "uns_tt30", "uns_tt30", "uns_p64", "uns_tt30", "uns_mkvFlarePistol", "uns_mkvFlarePistol", "uns_p64", "uns_makarov", "uns_p64", "uns_Tt33", "uns_nagant_m1895", "uns_mkvFlarePistol", "uns_Tt33", "uns_makarov", "uns_tt30", "uns_tt30", "uns_mkvFlarePistol", "uns_nagant_m1895", "uns_nagant_m1895", "uns_p64", "uns_MX991_w", "uns_Tt33", "uns_makarov", "uns_MX991_w", "uns_tt30", "uns_makarov", "uns_MX991_w", "uns_tt30", "uns_p64", "uns_makarov", "uns_p64", "uns_mkvFlarePistol", "uns_mkvFlarePistol", "uns_MX991_w", "uns_mkvFlarePistol", "uns_MX991_w", "uns_mkvFlarePistol", "uns_nagant_m1895", "uns_makarov", "uns_mkvFlarePistol", "uns_nagant_m1895", "uns_mkvFlarePistol", "uns_nagant_m1895", "uns_tt30", "uns_p64", "uns_Tt33", "uns_makarov", "uns_makarov", "uns_p64", "uns_nagant_m1895", "uns_mkvFlarePistol"};

		/*
			Percental Item Spawn Chances of USrifles:

			uns_m3a1          = 4.35%
			uns_ithaca37      = 4.35%
			uns_m1897riot     = 4.35%
			uns_m1897         = 4.35%
			uns_model12       = 4.35%
			uns_m16           = 4.35%
			uns_m16_m203      = 4.35%
			uns_m16_xm148     = 4.35%
			uns_m79           = 4.35%
			uns_uzif          = 4.35%
			uns_uzi           = 4.35%
			uns_M16A1         = 4.35%
			uns_M16A1_HBAR    = 4.35%
			uns_m16a1_m203    = 4.35%
			uns_xm177e1       = 4.35%
			uns_xm177e1_m203  = 4.35%
			uns_xm177e1_xm148 = 4.35%
			uns_xm177e2       = 4.35%
			uns_xm177e2_grip  = 4.35%
			uns_xm177e2_short = 4.35%
			uns_xm177e2_stock = 4.35%
			uns_xm177e2_m203  = 4.35%
			uns_thompson      = 4.35%
		*/
		USrifles[] = {"uns_uzif", "uns_m1897", "uns_m16_m203", "uns_uzif", "uns_m16_m203", "uns_model12", "uns_ithaca37", "uns_xm177e2_m203", "uns_uzi", "uns_thompson", "uns_xm177e2_m203", "uns_xm177e2_short", "uns_xm177e2_stock", "uns_m3a1", "uns_m1897", "uns_m16", "uns_xm177e2_m203", "uns_xm177e2_short", "uns_M16A1_HBAR", "uns_xm177e2_grip", "uns_m16_xm148", "uns_M16A1_HBAR", "uns_xm177e2_m203", "uns_m16a1_m203", "uns_m3a1", "uns_m1897riot", "uns_xm177e1", "uns_thompson", "uns_m3a1", "uns_m16_m203", "uns_m1897", "uns_m16_xm148", "uns_xm177e2_stock", "uns_m1897riot", "uns_xm177e2_m203", "uns_m16a1_m203", "uns_uzi", "uns_xm177e1_xm148", "uns_xm177e1_xm148", "uns_xm177e2_short", "uns_m1897", "uns_m16_xm148", "uns_m3a1", "uns_m1897riot", "uns_m16", "uns_xm177e2_short", "uns_ithaca37", "uns_m79", "uns_m16a1_m203", "uns_thompson", "uns_m16a1_m203", "uns_uzif", "uns_m16", "uns_m16a1_m203", "uns_m79", "uns_M16A1_HBAR", "uns_m1897riot", "uns_m16_xm148", "uns_uzif", "uns_M16A1", "uns_m79", "uns_m1897riot", "uns_m79", "uns_m1897riot", "uns_xm177e1_xm148", "uns_xm177e2_stock", "uns_model12", "uns_xm177e2", "uns_xm177e2_short", "uns_m79", "uns_M16A1", "uns_m1897", "uns_xm177e1_xm148", "uns_model12", "uns_xm177e2_m203", "uns_M16A1", "uns_m16_m203", "uns_m3a1", "uns_xm177e1", "uns_m16_m203", "uns_xm177e2_m203", "uns_xm177e2", "uns_xm177e2", "uns_xm177e2_short", "uns_m16_m203", "uns_m1897", "uns_m1897", "uns_M16A1", "uns_xm177e2", "uns_m16_m203", "uns_xm177e1_m203", "uns_xm177e2_grip", "uns_xm177e2_stock", "uns_M16A1_HBAR", "uns_m3a1", "uns_uzif", "uns_xm177e2_grip", "uns_xm177e2_grip", "uns_uzi", "uns_uzi", "uns_m79", "uns_xm177e1_m203", "uns_M16A1_HBAR", "uns_xm177e2_m203", "uns_m1897", "uns_m16_xm148", "uns_m16a1_m203", "uns_model12", "uns_m3a1", "uns_xm177e2_m203", "uns_m16a1_m203", "uns_xm177e2", "uns_m16_m203", "uns_uzi", "uns_m16_xm148", "uns_xm177e2_m203", "uns_M16A1_HBAR", "uns_uzif", "uns_xm177e1_xm148", "uns_ithaca37", "uns_xm177e2_short", "uns_M16A1_HBAR", "uns_xm177e1_m203", "uns_M16A1_HBAR", "uns_thompson", "uns_xm177e2_short", "uns_m16", "uns_uzif", "uns_xm177e2", "uns_xm177e2_grip", "uns_m79", "uns_xm177e1_m203", "uns_xm177e1", "uns_m16a1_m203", "uns_xm177e1", "uns_M16A1_HBAR", "uns_ithaca37", "uns_uzif", "uns_m79", "uns_thompson", "uns_m16_xm148", "uns_xm177e2_short", "uns_xm177e2_stock", "uns_xm177e2_stock", "uns_M16A1", "uns_xm177e2_stock", "uns_m1897riot", "uns_xm177e1_xm148", "uns_xm177e1", "uns_xm177e2_short", "uns_model12", "uns_xm177e2_m203", "uns_m3a1", "uns_model12", "uns_M16A1_HBAR", "uns_ithaca37", "uns_m16_xm148", "uns_xm177e2", "uns_xm177e2_short", "uns_thompson", "uns_xm177e2_m203", "uns_thompson", "uns_model12", "uns_xm177e1", "uns_xm177e2_grip", "uns_m79", "uns_uzi", "uns_m1897riot", "uns_thompson", "uns_ithaca37", "uns_m1897", "uns_xm177e2_grip", "uns_M16A1", "uns_m79", "uns_m16_xm148", "uns_xm177e2_grip", "uns_xm177e2_short", "uns_m16a1_m203", "uns_xm177e2", "uns_m16a1_m203", "uns_uzif", "uns_xm177e1_m203", "uns_M16A1", "uns_xm177e1", "uns_model12", "uns_m3a1", "uns_uzif", "uns_m16_xm148", "uns_m16_xm148", "uns_M16A1", "uns_xm177e2_stock", "uns_xm177e2", "uns_m16a1_m203", "uns_M16A1", "uns_M16A1_HBAR", "uns_m16", "uns_xm177e2", "uns_xm177e1_m203", "uns_thompson", "uns_xm177e2_stock", "uns_xm177e1_xm148", "uns_xm177e2_m203", "uns_m1897", "uns_xm177e2_short", "uns_m16_xm148", "uns_xm177e1_m203", "uns_m16", "uns_xm177e2_short", "uns_m3a1", "uns_xm177e2", "uns_xm177e2", "uns_M16A1", "uns_M16A1", "uns_m16_m203", "uns_xm177e1", "uns_ithaca37", "uns_thompson", "uns_xm177e2_grip", "uns_m16", "uns_xm177e2_grip", "uns_xm177e2", "uns_m16", "uns_model12", "uns_model12", "uns_xm177e1_xm148", "uns_m16a1_m203", "uns_m16_xm148", "uns_m16", "uns_m79", "uns_uzi", "uns_M16A1", "uns_m16_m203", "uns_model12", "uns_xm177e1_xm148", "uns_m16_m203", "uns_m3a1", "uns_xm177e1_m203", "uns_uzi", "uns_xm177e2_stock", "uns_M16A1_HBAR", "uns_m16_m203", "uns_xm177e1", "uns_xm177e1_m203", "uns_xm177e1", "uns_m1897", "uns_thompson", "uns_m16", "uns_m79", "uns_m1897", "uns_m79", "uns_m1897riot", "uns_m1897riot", "uns_m16", "uns_m79", "uns_ithaca37", "uns_m16a1_m203", "uns_ithaca37", "uns_m1897", "uns_m3a1", "uns_xm177e2_stock", "uns_uzi", "uns_xm177e1", "uns_M16A1_HBAR", "uns_xm177e2", "uns_xm177e2", "uns_m16", "uns_xm177e2_stock", "uns_xm177e2_stock", "uns_xm177e1_xm148", "uns_uzif", "uns_uzi", "uns_xm177e1_m203", "uns_xm177e1_xm148", "uns_M16A1_HBAR", "uns_xm177e1_m203", "uns_model12", "uns_m1897riot", "uns_m16_xm148", "uns_uzif", "uns_xm177e2_stock", "uns_m1897", "uns_ithaca37", "uns_m1897", "uns_xm177e2_short", "uns_M16A1_HBAR", "uns_xm177e1", "uns_xm177e1", "uns_xm177e1", "uns_xm177e1_m203", "uns_m16_m203", "uns_uzi", "uns_uzi", "uns_uzif", "uns_M16A1", "uns_uzif", "uns_m16", "uns_m1897riot", "uns_ithaca37", "uns_m16", "uns_xm177e1", "uns_model12", "uns_uzif", "uns_M16A1", "uns_m79", "uns_xm177e1_m203", "uns_xm177e1_xm148", "uns_xm177e2_grip", "uns_xm177e2_m203", "uns_model12", "uns_xm177e2_grip", "uns_ithaca37", "uns_xm177e2_m203", "uns_xm177e1_xm148", "uns_M16A1", "uns_xm177e2_grip", "uns_ithaca37", "uns_ithaca37", "uns_thompson", "uns_thompson", "uns_m16", "uns_m3a1", "uns_xm177e1_m203", "uns_m16a1_m203", "uns_uzi", "uns_xm177e2_stock", "uns_m16_xm148", "uns_m16a1_m203", "uns_xm177e1_xm148", "uns_xm177e1_xm148", "uns_m1897riot", "uns_thompson", "uns_model12", "uns_m3a1", "uns_m16_m203", "uns_thompson", "uns_ithaca37", "uns_m1897riot", "uns_m16_m203", "uns_m1897riot", "uns_xm177e1_m203", "uns_m3a1", "uns_xm177e2_grip", "uns_uzi", "uns_uzi", "uns_xm177e2_grip"};

		/*
			Percental Item Spawn Chances of VCrifles:

			uns_pm63f          = 6.67%
			uns_sa61f          = 6.67%
			uns_thompsonvc     = 6.67%
			uns_type100        = 6.67%
			uns_mat49          = 6.67%
			uns_PPS43f         = 6.67%
			uns_PPS43          = 6.67%
			uns_PPS52          = 6.67%
			uns_k50m           = 6.67%
			uns_k50mdrum       = 6.67%
			uns_ppsh41         = 6.67%
			uns_type50         = 6.67%
			uns_mp40           = 6.67%
			uns_baikal_sawnoff = 6.67%
			uns_baikal         = 6.67%
		*/
		VCrifles[] = {"uns_thompsonvc", "uns_type100", "uns_thompsonvc", "uns_ppsh41", "uns_k50m", "uns_type50", "uns_baikal_sawnoff", "uns_PPS43f", "uns_PPS52", "uns_PPS43f", "uns_k50m", "uns_mp40", "uns_baikal", "uns_mat49", "uns_baikal_sawnoff", "uns_PPS43f", "uns_thompsonvc", "uns_pm63f", "uns_pm63f", "uns_type50", "uns_PPS43f", "uns_baikal", "uns_k50m", "uns_PPS52", "uns_mat49", "uns_type50", "uns_k50m", "uns_ppsh41", "uns_baikal", "uns_PPS52", "uns_thompsonvc", "uns_pm63f", "uns_pm63f", "uns_PPS43f", "uns_PPS52", "uns_PPS43f", "uns_PPS43", "uns_type50", "uns_baikal_sawnoff", "uns_ppsh41", "uns_k50mdrum", "uns_mp40", "uns_type50", "uns_PPS52", "uns_baikal", "uns_baikal_sawnoff", "uns_pm63f", "uns_k50mdrum", "uns_ppsh41", "uns_PPS43", "uns_pm63f", "uns_type100", "uns_k50mdrum", "uns_PPS43", "uns_baikal_sawnoff", "uns_PPS52", "uns_thompsonvc", "uns_PPS43f", "uns_k50m", "uns_baikal", "uns_mp40", "uns_baikal_sawnoff", "uns_baikal_sawnoff", "uns_PPS52", "uns_ppsh41", "uns_k50mdrum", "uns_ppsh41", "uns_k50m", "uns_k50mdrum", "uns_mat49", "uns_sa61f", "uns_mat49", "uns_k50mdrum", "uns_k50mdrum", "uns_mp40", "uns_baikal", "uns_PPS43f", "uns_sa61f", "uns_k50m", "uns_type100", "uns_sa61f", "uns_type100", "uns_sa61f", "uns_baikal", "uns_k50m", "uns_thompsonvc", "uns_sa61f", "uns_PPS52", "uns_pm63f", "uns_k50m", "uns_pm63f", "uns_mat49", "uns_PPS52", "uns_k50m", "uns_ppsh41", "uns_k50mdrum", "uns_type50", "uns_baikal", "uns_pm63f", "uns_baikal", "uns_type50", "uns_type100", "uns_thompsonvc", "uns_mp40", "uns_PPS43", "uns_k50mdrum", "uns_sa61f", "uns_mat49", "uns_type100", "uns_mp40", "uns_mp40", "uns_PPS43", "uns_pm63f", "uns_baikal", "uns_PPS43", "uns_type100", "uns_type100", "uns_mat49", "uns_k50mdrum", "uns_sa61f", "uns_PPS52", "uns_ppsh41", "uns_PPS52", "uns_PPS43", "uns_mat49", "uns_sa61f", "uns_PPS52", "uns_type100", "uns_mp40", "uns_mat49", "uns_pm63f", "uns_baikal", "uns_thompsonvc", "uns_PPS52", "uns_baikal", "uns_sa61f", "uns_pm63f", "uns_mp40", "uns_baikal", "uns_pm63f", "uns_type50", "uns_baikal_sawnoff", "uns_thompsonvc", "uns_ppsh41", "uns_mat49", "uns_baikal", "uns_k50m", "uns_mp40", "uns_sa61f", "uns_mp40", "uns_PPS43f", "uns_PPS43f", "uns_thompsonvc", "uns_thompsonvc", "uns_k50mdrum", "uns_PPS52", "uns_mp40", "uns_mat49", "uns_mat49", "uns_thompsonvc", "uns_k50mdrum", "uns_mp40", "uns_baikal_sawnoff", "uns_k50m", "uns_type100", "uns_ppsh41", "uns_PPS43", "uns_type50", "uns_type50", "uns_pm63f", "uns_ppsh41", "uns_type50", "uns_sa61f", "uns_PPS43", "uns_PPS43f", "uns_ppsh41", "uns_type100", "uns_PPS43", "uns_sa61f", "uns_type50", "uns_PPS43f", "uns_mp40", "uns_type100", "uns_type50", "uns_thompsonvc", "uns_baikal_sawnoff", "uns_k50mdrum", "uns_baikal_sawnoff", "uns_baikal_sawnoff", "uns_PPS43", "uns_baikal_sawnoff", "uns_mp40", "uns_ppsh41", "uns_mat49", "uns_PPS52", "uns_thompsonvc", "uns_sa61f", "uns_PPS43", "uns_PPS43", "uns_k50m", "uns_k50m", "uns_mat49", "uns_baikal_sawnoff", "uns_PPS43f", "uns_PPS43f", "uns_k50mdrum", "uns_type50", "uns_pm63f", "uns_sa61f", "uns_ppsh41", "uns_type100", "uns_ppsh41", "uns_PPS43f", "uns_type100", "uns_k50m", "uns_PPS43", "uns_sa61f", "uns_baikal_sawnoff", "uns_type100", "uns_type50", "uns_k50mdrum", "uns_thompsonvc", "uns_mat49", "uns_baikal", "uns_PPS43"};

		/*
			Percental Item Spawn Chances of USlmg:

			uns_m60        = 33.33%
			uns_m60support = 33.33%
			uns_bar        = 33.33%
		*/
		USlmg[] = {"uns_m60", "uns_m60support", "uns_m60", "uns_m60support", "uns_m60support", "uns_m60", "uns_m60support", "uns_m60support", "uns_m60support", "uns_bar", "uns_bar", "uns_m60", "uns_m60", "uns_m60", "uns_m60support", "uns_m60support", "uns_bar", "uns_bar", "uns_bar", "uns_bar", "uns_m60", "uns_m60", "uns_bar", "uns_m60support", "uns_bar", "uns_m60", "uns_m60", "uns_m60", "uns_m60support", "uns_m60support", "uns_m60", "uns_bar", "uns_bar", "uns_bar", "uns_bar", "uns_m60", "uns_m60", "uns_bar", "uns_m60support", "uns_m60", "uns_m60support", "uns_bar", "uns_m60support", "uns_bar", "uns_m60support"};

		/*
			Percental Item Spawn Chances of VClmg:

			uns_rpd           = 16.67%
			uns_RPDsupport    = 16.67%
			uns_DP28          = 16.67%
			uns_MG42          = 16.67%
			uns_mg42_bakelite = 16.67%
			uns_MG42support   = 16.67%
		*/
		VClmg[] = {"uns_RPDsupport", "uns_rpd", "uns_DP28", "uns_DP28", "uns_rpd", "uns_mg42_bakelite", "uns_DP28", "uns_RPDsupport", "uns_mg42_bakelite", "uns_mg42_bakelite", "uns_mg42_bakelite", "uns_mg42_bakelite", "uns_DP28", "uns_RPDsupport", "uns_rpd", "uns_mg42_bakelite", "uns_DP28", "uns_DP28", "uns_mg42_bakelite", "uns_MG42support", "uns_MG42support", "uns_rpd", "uns_MG42", "uns_mg42_bakelite", "uns_MG42", "uns_RPDsupport", "uns_MG42", "uns_DP28", "uns_MG42support", "uns_rpd", "uns_mg42_bakelite", "uns_RPDsupport", "uns_MG42support", "uns_rpd", "uns_DP28", "uns_rpd", "uns_RPDsupport", "uns_MG42support", "uns_RPDsupport", "uns_DP28", "uns_MG42support", "uns_RPDsupport", "uns_RPDsupport", "uns_MG42support", "uns_MG42", "uns_MG42support", "uns_MG42", "uns_RPDsupport", "uns_RPDsupport", "uns_mg42_bakelite", "uns_DP28", "uns_mg42_bakelite", "uns_MG42support", "uns_mg42_bakelite", "uns_mg42_bakelite", "uns_DP28", "uns_DP28", "uns_RPDsupport", "uns_MG42", "uns_rpd", "uns_MG42support", "uns_DP28", "uns_RPDsupport", "uns_rpd", "uns_MG42", "uns_DP28", "uns_rpd", "uns_mg42_bakelite", "uns_rpd", "uns_MG42", "uns_MG42", "uns_rpd", "uns_MG42support", "uns_MG42", "uns_MG42support", "uns_MG42", "uns_rpd", "uns_RPDsupport", "uns_MG42", "uns_MG42", "uns_MG42support", "uns_MG42", "uns_rpd", "uns_DP28", "uns_MG42", "uns_MG42support", "uns_MG42support", "uns_RPDsupport", "uns_rpd", "uns_mg42_bakelite"};

		/*
			Percental Item Spawn Chances of USsnipers:

			uns_model70         = 10.00%
			uns_m14             = 10.00%
			uns_model70_iron    = 10.00%
			uns_m1carbine       = 10.00%
			uns_m1carbine_pouch = 10.00%
			uns_m1carbine_gl    = 10.00%
			uns_m2carbine       = 10.00%
			uns_m2carbine_gl    = 10.00%
			uns_m1garand        = 10.00%
			uns_M40_base        = 10.00%
		*/
		USsnipers[] = {"uns_m14", "uns_M40_base", "uns_model70_iron", "uns_M40_base", "uns_m2carbine", "uns_model70_iron", "uns_m1garand", "uns_model70", "uns_model70", "uns_m1carbine_gl", "uns_m2carbine", "uns_m1garand", "uns_m1garand", "uns_m1carbine", "uns_m2carbine_gl", "uns_m1carbine_gl", "uns_m1garand", "uns_m1carbine_pouch", "uns_m1carbine_gl", "uns_M40_base", "uns_m1carbine", "uns_m2carbine", "uns_m2carbine_gl", "uns_m1carbine_gl", "uns_m1carbine_gl", "uns_m1garand", "uns_m1carbine_gl", "uns_m2carbine_gl", "uns_M40_base", "uns_m2carbine", "uns_m2carbine_gl", "uns_m2carbine", "uns_m1garand", "uns_m1carbine_pouch", "uns_m1carbine", "uns_m1carbine", "uns_m14", "uns_M40_base", "uns_m2carbine_gl", "uns_m14", "uns_m1carbine_gl", "uns_M40_base", "uns_m2carbine_gl", "uns_model70", "uns_M40_base", "uns_m2carbine", "uns_m1carbine", "uns_m1carbine_gl", "uns_model70_iron", "uns_model70", "uns_m1garand", "uns_m2carbine", "uns_m2carbine", "uns_m1carbine_pouch", "uns_m1carbine_pouch", "uns_m1carbine_pouch", "uns_model70", "uns_m1carbine_gl", "uns_model70_iron", "uns_m1garand", "uns_M40_base", "uns_m2carbine_gl", "uns_model70", "uns_m2carbine_gl", "uns_m14", "uns_m14", "uns_m1carbine", "uns_model70_iron", "uns_m1carbine", "uns_m2carbine", "uns_m1carbine_pouch", "uns_m1carbine_pouch", "uns_m1carbine", "uns_m14", "uns_m1carbine", "uns_m2carbine_gl", "uns_m1carbine_gl", "uns_M40_base", "uns_m14", "uns_m14", "uns_m1carbine", "uns_m2carbine_gl", "uns_model70", "uns_model70_iron", "uns_model70_iron", "uns_m1carbine_gl", "uns_m1carbine_gl", "uns_m1carbine_pouch", "uns_m2carbine_gl", "uns_m14", "uns_M40_base", "uns_model70_iron", "uns_model70", "uns_m1garand", "uns_m1carbine_pouch", "uns_m14", "uns_m1carbine_pouch", "uns_m1garand", "uns_M40_base", "uns_m2carbine_gl", "uns_m1garand", "uns_M40_base", "uns_m14", "uns_model70", "uns_m1carbine_pouch", "uns_M40_base", "uns_m14", "uns_m2carbine", "uns_model70_iron", "uns_m14", "uns_m1garand", "uns_m1carbine", "uns_model70_iron", "uns_m1carbine_gl", "uns_model70", "uns_m1carbine_pouch", "uns_m1carbine", "uns_m2carbine", "uns_m2carbine_gl", "uns_model70_iron", "uns_m2carbine", "uns_model70", "uns_m1carbine_pouch", "uns_model70", "uns_m1carbine_pouch", "uns_m1carbine_pouch", "uns_model70_iron", "uns_m1garand", "uns_m14", "uns_model70", "uns_m2carbine_gl", "uns_m1carbine", "uns_model70_iron", "uns_m1carbine_gl", "uns_model70", "uns_m2carbine", "uns_m14", "uns_m1carbine_gl", "uns_model70_iron", "uns_m1carbine", "uns_model70", "uns_m2carbine", "uns_m1garand", "uns_m2carbine", "uns_model70_iron", "uns_M40_base", "uns_M40_base", "uns_m1carbine", "uns_m2carbine_gl", "uns_m1garand"};

		/*
			Percental Item Spawn Chances of VCsnipers:

			uns_mas4956       = 4.35%
			uns_SVD           = 4.35%
			uns_type99        = 4.35%
			uns_STG_44        = 4.35%
			uns_svt           = 4.35%
			uns_sks           = 4.35%
			uns_kar98k        = 4.35%
			uns_mosin         = 4.35%
			uns_type99_gl     = 4.35%
			uns_mas36         = 4.35%
			uns_mas36_gl      = 4.35%
			uns_mas36short    = 4.35%
			uns_mas36short_gl = 4.35%
			uns_mas4956_gl    = 4.35%
			uns_type56        = 4.35%
			uns_ak47          = 4.35%
			uns_aks47f        = 4.35%
			uns_aks47         = 4.35%
			uns_ak47_49       = 4.35%
			uns_ak47_52       = 4.35%
			uns_akm           = 4.35%
			uns_akms          = 4.35%
			uns_akmsf         = 4.35%
		*/
		VCsnipers[] = {"uns_kar98k", "uns_type56", "uns_mas36short", "uns_mas4956", "uns_SVD", "uns_mas36short_gl", "uns_ak47_49", "uns_aks47", "uns_aks47f", "uns_aks47f", "uns_mosin", "uns_svt", "uns_svt", "uns_akmsf", "uns_mas36short", "uns_kar98k", "uns_ak47_49", "uns_mas36short_gl", "uns_type99", "uns_kar98k", "uns_mas4956_gl", "uns_akms", "uns_mas4956", "uns_mosin", "uns_mas36", "uns_ak47", "uns_ak47_49", "uns_ak47", "uns_STG_44", "uns_svt", "uns_sks", "uns_type99_gl", "uns_type99", "uns_ak47_52", "uns_mas36short_gl", "uns_ak47_49", "uns_ak47_49", "uns_ak47", "uns_mas4956", "uns_akm", "uns_aks47f", "uns_ak47_49", "uns_akm", "uns_type56", "uns_svt", "uns_mas36_gl", "uns_mosin", "uns_aks47", "uns_aks47", "uns_akmsf", "uns_svt", "uns_akmsf", "uns_svt", "uns_type99", "uns_type56", "uns_mas36_gl", "uns_type99_gl", "uns_STG_44", "uns_mas4956_gl", "uns_ak47_52", "uns_SVD", "uns_svt", "uns_ak47_49", "uns_type99_gl", "uns_sks", "uns_aks47f", "uns_mosin", "uns_mas36short_gl", "uns_type99", "uns_mas4956", "uns_sks", "uns_mas36", "uns_mosin", "uns_mas36_gl", "uns_mas36short_gl", "uns_kar98k", "uns_sks", "uns_type99_gl", "uns_mas4956_gl", "uns_sks", "uns_mas4956", "uns_mas36", "uns_mas36short", "uns_ak47_49", "uns_ak47_49", "uns_mas36short_gl", "uns_aks47f", "uns_STG_44", "uns_ak47_52", "uns_mas36short_gl", "uns_aks47f", "uns_svt", "uns_mas4956_gl", "uns_mas4956", "uns_aks47", "uns_kar98k", "uns_svt", "uns_akm", "uns_mas4956", "uns_mas36", "uns_akmsf", "uns_mas36_gl", "uns_type99", "uns_mas36short", "uns_type56", "uns_mas36_gl", "uns_mas36", "uns_aks47f", "uns_mas4956_gl", "uns_sks", "uns_ak47_52", "uns_sks", "uns_akmsf", "uns_SVD", "uns_mas36short", "uns_mas36", "uns_svt", "uns_type99_gl", "uns_mas36_gl", "uns_ak47_52", "uns_mas4956", "uns_akm", "uns_aks47", "uns_akm", "uns_ak47_49", "uns_STG_44", "uns_sks", "uns_ak47_49", "uns_akm", "uns_aks47", "uns_mas36short_gl", "uns_SVD", "uns_akms", "uns_mas36short_gl", "uns_type56", "uns_ak47", "uns_sks", "uns_akms", "uns_aks47f", "uns_mas4956", "uns_akms", "uns_mas36short", "uns_mas36short_gl", "uns_type56", "uns_aks47f", "uns_STG_44", "uns_mas36_gl", "uns_aks47", "uns_SVD", "uns_mas36", "uns_aks47f", "uns_mas36short", "uns_akms", "uns_STG_44", "uns_SVD", "uns_sks", "uns_kar98k", "uns_mas36", "uns_akm", "uns_svt", "uns_aks47", "uns_type99", "uns_SVD", "uns_ak47_52", "uns_ak47", "uns_aks47", "uns_type99", "uns_ak47_52", "uns_akmsf", "uns_ak47", "uns_mas4956_gl", "uns_type99", "uns_akms", "uns_akm", "uns_ak47", "uns_ak47", "uns_mosin", "uns_STG_44", "uns_type99_gl", "uns_kar98k", "uns_mas36", "uns_mas36short_gl", "uns_mas4956_gl", "uns_kar98k", "uns_mas36_gl", "uns_aks47f", "uns_SVD", "uns_sks", "uns_ak47", "uns_mas4956", "uns_aks47", "uns_type56", "uns_mas36short_gl", "uns_ak47_52", "uns_mas4956_gl", "uns_mas36_gl", "uns_sks", "uns_svt", "uns_ak47", "uns_ak47", "uns_mas4956_gl", "uns_mas4956_gl", "uns_type99_gl", "uns_type99_gl", "uns_kar98k", "uns_mosin", "uns_SVD", "uns_ak47", "uns_ak47_49", "uns_type99", "uns_type56", "uns_aks47", "uns_svt", "uns_mas4956", "uns_STG_44", "uns_svt", "uns_ak47_49", "uns_ak47_52", "uns_mosin", "uns_mas36short", "uns_STG_44", "uns_type99", "uns_akms", "uns_type99_gl", "uns_SVD", "uns_akm", "uns_akmsf", "uns_type99_gl", "uns_akmsf", "uns_aks47", "uns_kar98k", "uns_STG_44", "uns_akms", "uns_mas4956", "uns_mas36", "uns_mas4956", "uns_type99", "uns_mosin", "uns_SVD", "uns_sks", "uns_mas36_gl", "uns_sks", "uns_akmsf", "uns_mas36short_gl", "uns_mas36", "uns_aks47", "uns_aks47", "uns_mas36short", "uns_kar98k", "uns_akm", "uns_mas36", "uns_type56", "uns_mas36_gl", "uns_ak47_49", "uns_ak47_52", "uns_mas36_gl", "uns_mas4956", "uns_mas4956_gl", "uns_ak47_52", "uns_akmsf", "uns_type56", "uns_mas36short_gl", "uns_akms", "uns_akms", "uns_aks47", "uns_type99", "uns_kar98k", "uns_aks47f", "uns_mas4956_gl", "uns_akmsf", "uns_STG_44", "uns_mas36short", "uns_mosin", "uns_SVD", "uns_STG_44", "uns_mas4956_gl", "uns_type56", "uns_mas4956_gl", "uns_kar98k", "uns_akm", "uns_type56", "uns_mas36short", "uns_kar98k", "uns_ak47", "uns_STG_44", "uns_type99_gl", "uns_akmsf", "uns_SVD", "uns_ak47_52", "uns_akms", "uns_mas4956_gl", "uns_mosin", "uns_akm", "uns_mas36_gl", "uns_type99_gl", "uns_aks47f", "uns_akms", "uns_akm", "uns_akmsf", "uns_akms", "uns_type99", "uns_type99_gl", "uns_mosin", "uns_type56", "uns_type56", "uns_ak47", "uns_kar98k", "uns_akmsf", "uns_mas36", "uns_type99_gl", "uns_akm", "uns_ak47", "uns_STG_44", "uns_svt", "uns_SVD", "uns_sks", "uns_mas36short", "uns_type99", "uns_ak47_49", "uns_mas36short", "uns_akmsf", "uns_mas36_gl", "uns_mosin", "uns_type99", "uns_mosin", "uns_ak47_52", "uns_type99_gl", "uns_aks47f", "uns_mas4956", "uns_type56", "uns_STG_44", "uns_aks47f", "uns_mas36_gl", "uns_mas36short", "uns_mas36", "uns_ak47_52", "uns_akm", "uns_ak47_52", "uns_akms", "uns_SVD", "uns_akms", "uns_mas36", "uns_mas36short_gl", "uns_mosin", "uns_mas36short"};

		/*
			Percental Item Spawn Chances of USattachments:

			uns_o_Unertl8x           = 4.35%
			uns_s_M16                = 4.35%
			uns_s_M14                = 4.35%
			uns_o_LeatherwoodART     = 4.35%
			uns_o_LeatherwoodART_m14 = 4.35%
			uns_o_LeatherwoodART_m16 = 4.35%
			uns_o_ANPVS2             = 4.35%
			uns_o_colt4x             = 4.35%
			uns_o_RedfieldART        = 4.35%
			uns_s_M1911              = 4.35%
			uns_b_m70_camo           = 4.35%
			uns_b_m40_camo           = 4.35%
			uns_b_smle_camo          = 4.35%
			uns_BA30                 = 4.35%
			uns_BA30_green           = 4.35%
			uns_b_m1                 = 4.35%
			uns_b_m4                 = 4.35%
			uns_b_m6                 = 4.35%
			uns_b_m7                 = 4.35%
			uns_b_m1917              = 4.35%
			uns_o_M84                = 4.35%
			uns_o_RedfieldART_m70    = 4.35%
			uns_o_Unertl8x_m70       = 4.35%
		*/
		USattachments[] = {"uns_b_m4", "uns_s_M14", "uns_o_LeatherwoodART_m16", "uns_o_RedfieldART_m70", "uns_o_RedfieldART", "uns_s_M16", "uns_s_M1911", "uns_s_M1911", "uns_o_Unertl8x_m70", "uns_BA30", "uns_o_colt4x", "uns_o_Unertl8x_m70", "uns_o_RedfieldART_m70", "uns_o_RedfieldART_m70", "uns_BA30", "uns_b_m6", "uns_o_LeatherwoodART_m14", "uns_o_LeatherwoodART", "uns_b_m70_camo", "uns_s_M1911", "uns_o_ANPVS2", "uns_b_m1917", "uns_o_LeatherwoodART_m14", "uns_b_m70_camo", "uns_o_LeatherwoodART", "uns_s_M1911", "uns_o_M84", "uns_b_m1917", "uns_s_M16", "uns_b_m70_camo", "uns_o_colt4x", "uns_o_Unertl8x", "uns_o_RedfieldART_m70", "uns_b_m40_camo", "uns_o_colt4x", "uns_b_m1", "uns_o_RedfieldART", "uns_BA30", "uns_BA30_green", "uns_b_m7", "uns_BA30_green", "uns_o_colt4x", "uns_b_m7", "uns_b_m1917", "uns_b_m40_camo", "uns_o_Unertl8x_m70", "uns_b_m7", "uns_o_M84", "uns_o_ANPVS2", "uns_s_M16", "uns_o_colt4x", "uns_o_Unertl8x_m70", "uns_b_m40_camo", "uns_b_m40_camo", "uns_s_M1911", "uns_b_smle_camo", "uns_b_m7", "uns_b_m1", "uns_b_m4", "uns_s_M16", "uns_o_Unertl8x_m70", "uns_o_ANPVS2", "uns_b_m4", "uns_o_RedfieldART", "uns_o_Unertl8x_m70", "uns_s_M16", "uns_b_m4", "uns_b_m4", "uns_s_M16", "uns_b_m70_camo", "uns_o_Unertl8x", "uns_b_m7", "uns_BA30_green", "uns_o_LeatherwoodART_m14", "uns_b_m1917", "uns_b_m4", "uns_o_RedfieldART", "uns_b_m4", "uns_o_RedfieldART", "uns_b_m40_camo", "uns_BA30", "uns_o_RedfieldART", "uns_BA30_green", "uns_b_m40_camo", "uns_o_colt4x", "uns_s_M1911", "uns_b_m6", "uns_o_ANPVS2", "uns_b_smle_camo", "uns_o_LeatherwoodART", "uns_b_m1", "uns_b_m6", "uns_b_m6", "uns_o_LeatherwoodART_m14", "uns_b_m40_camo", "uns_b_m70_camo", "uns_b_m1", "uns_b_m7", "uns_o_Unertl8x", "uns_o_Unertl8x", "uns_o_LeatherwoodART_m14", "uns_o_M84", "uns_o_Unertl8x", "uns_o_Unertl8x", "uns_BA30", "uns_b_m4", "uns_BA30", "uns_o_RedfieldART", "uns_b_m40_camo", "uns_b_smle_camo", "uns_s_M16", "uns_b_m1917", "uns_o_M84", "uns_o_LeatherwoodART_m16", "uns_s_M16", "uns_BA30_green", "uns_o_RedfieldART_m70", "uns_b_m7", "uns_o_RedfieldART_m70", "uns_o_LeatherwoodART_m14", "uns_o_LeatherwoodART", "uns_s_M14", "uns_b_m70_camo", "uns_o_RedfieldART_m70", "uns_s_M1911", "uns_o_LeatherwoodART_m14", "uns_b_smle_camo", "uns_o_ANPVS2", "uns_b_m1917", "uns_b_m6", "uns_b_smle_camo", "uns_b_m1917", "uns_o_colt4x", "uns_s_M14", "uns_b_m1917", "uns_b_m40_camo", "uns_b_m7", "uns_s_M1911", "uns_o_LeatherwoodART_m14", "uns_o_Unertl8x", "uns_o_LeatherwoodART_m14", "uns_b_m70_camo", "uns_o_colt4x", "uns_o_RedfieldART_m70", "uns_BA30_green", "uns_o_ANPVS2", "uns_b_smle_camo", "uns_b_smle_camo", "uns_b_m1917", "uns_b_smle_camo", "uns_s_M16", "uns_o_LeatherwoodART_m16", "uns_BA30", "uns_BA30_green", "uns_BA30_green", "uns_b_m4", "uns_s_M1911", "uns_o_ANPVS2", "uns_b_m1", "uns_s_M1911", "uns_b_m70_camo", "uns_s_M14", "uns_s_M16", "uns_o_LeatherwoodART_m16", "uns_o_RedfieldART_m70", "uns_s_M16", "uns_b_m7", "uns_o_colt4x", "uns_b_m70_camo", "uns_o_colt4x", "uns_b_m6", "uns_b_m1", "uns_b_m6", "uns_o_RedfieldART_m70", "uns_o_ANPVS2", "uns_o_RedfieldART", "uns_b_m1", "uns_b_m1", "uns_BA30", "uns_o_LeatherwoodART_m16", "uns_o_M84", "uns_o_Unertl8x", "uns_o_M84", "uns_o_LeatherwoodART_m16", "uns_b_m4", "uns_b_m70_camo", "uns_s_M14", "uns_o_LeatherwoodART", "uns_b_m40_camo", "uns_s_M14", "uns_b_m6", "uns_o_ANPVS2", "uns_s_M16", "uns_o_LeatherwoodART_m16", "uns_b_smle_camo", "uns_o_Unertl8x", "uns_o_Unertl8x_m70", "uns_b_m7", "uns_o_LeatherwoodART_m14", "uns_o_RedfieldART_m70", "uns_s_M16", "uns_b_m6", "uns_o_LeatherwoodART_m14", "uns_o_Unertl8x_m70", "uns_o_M84", "uns_o_ANPVS2", "uns_o_LeatherwoodART_m16", "uns_o_LeatherwoodART_m14", "uns_o_LeatherwoodART", "uns_s_M14", "uns_o_LeatherwoodART", "uns_o_colt4x", "uns_s_M14", "uns_b_smle_camo", "uns_b_m1917", "uns_BA30_green", "uns_o_LeatherwoodART", "uns_b_m40_camo", "uns_s_M1911", "uns_b_m1", "uns_o_RedfieldART_m70", "uns_o_RedfieldART", "uns_s_M1911", "uns_o_Unertl8x_m70", "uns_s_M14", "uns_o_Unertl8x_m70", "uns_b_m1", "uns_o_LeatherwoodART_m16", "uns_o_LeatherwoodART", "uns_BA30", "uns_b_m4", "uns_o_RedfieldART", "uns_o_RedfieldART", "uns_b_m4", "uns_o_LeatherwoodART_m16", "uns_b_m40_camo", "uns_o_Unertl8x", "uns_s_M14", "uns_b_m1917", "uns_o_Unertl8x", "uns_o_ANPVS2", "uns_s_M14", "uns_o_M84", "uns_s_M1911", "uns_b_m7", "uns_BA30", "uns_o_LeatherwoodART_m16", "uns_s_M16", "uns_b_m7", "uns_o_LeatherwoodART", "uns_BA30_green", "uns_o_RedfieldART", "uns_b_m70_camo", "uns_BA30_green", "uns_o_Unertl8x", "uns_o_colt4x", "uns_b_smle_camo", "uns_o_LeatherwoodART_m16", "uns_b_m70_camo", "uns_s_M14", "uns_o_RedfieldART", "uns_o_M84", "uns_b_m7", "uns_b_m6", "uns_BA30", "uns_b_m40_camo", "uns_o_ANPVS2", "uns_o_RedfieldART", "uns_o_Unertl8x", "uns_s_M14", "uns_o_Unertl8x_m70", "uns_s_M16", "uns_o_LeatherwoodART_m16", "uns_o_LeatherwoodART_m16", "uns_o_colt4x", "uns_o_Unertl8x", "uns_o_Unertl8x_m70", "uns_o_colt4x", "uns_b_m70_camo", "uns_o_M84", "uns_b_m6", "uns_o_RedfieldART", "uns_o_LeatherwoodART", "uns_BA30", "uns_b_m7", "uns_BA30", "uns_o_LeatherwoodART", "uns_b_m1917", "uns_o_M84", "uns_o_ANPVS2", "uns_b_m4", "uns_o_LeatherwoodART_m14", "uns_o_LeatherwoodART_m14", "uns_b_m70_camo", "uns_o_ANPVS2", "uns_b_m1", "uns_o_LeatherwoodART", "uns_b_m4", "uns_b_m1917", "uns_o_Unertl8x", "uns_b_m70_camo", "uns_o_LeatherwoodART_m16", "uns_b_m40_camo", "uns_o_M84", "uns_b_m1917", "uns_b_m6", "uns_o_LeatherwoodART_m14", "uns_b_m6", "uns_BA30_green", "uns_BA30", "uns_b_m1", "uns_o_RedfieldART_m70", "uns_b_smle_camo", "uns_o_Unertl8x_m70", "uns_BA30_green", "uns_b_m6", "uns_b_smle_camo", "uns_BA30_green", "uns_o_RedfieldART_m70", "uns_b_m1", "uns_BA30_green", "uns_b_m1917", "uns_b_m1", "uns_b_smle_camo", "uns_o_RedfieldART_m70", "uns_s_M14", "uns_o_M84", "uns_b_m40_camo", "uns_o_LeatherwoodART", "uns_s_M14", "uns_b_m1", "uns_b_m4", "uns_o_Unertl8x_m70", "uns_o_LeatherwoodART", "uns_b_smle_camo", "uns_BA30", "uns_o_ANPVS2", "uns_b_m6", "uns_s_M1911", "uns_o_Unertl8x_m70", "uns_s_M1911", "uns_o_M84", "uns_b_m7", "uns_o_colt4x", "uns_o_M84"};

		/*
			Percental Item Spawn Chances of VCattachments:

			uns_o_APXSOM    = 20.00%
			uns_o_PSO1      = 20.00%
			uns_o_Akatihi4x = 20.00%
			uns_b_mas49     = 20.00%
			uns_b_type30    = 20.00%
		*/
		VCattachments[] = {"uns_o_PSO1", "uns_b_type30", "uns_b_type30", "uns_b_mas49", "uns_o_PSO1", "uns_b_type30", "uns_o_Akatihi4x", "uns_b_mas49", "uns_b_mas49", "uns_o_Akatihi4x", "uns_b_mas49", "uns_o_APXSOM", "uns_b_type30", "uns_o_APXSOM", "uns_b_mas49", "uns_o_APXSOM", "uns_b_mas49", "uns_b_type30", "uns_o_Akatihi4x", "uns_o_PSO1", "uns_o_APXSOM", "uns_o_Akatihi4x", "uns_o_APXSOM", "uns_b_type30", "uns_o_PSO1", "uns_b_mas49", "uns_o_PSO1", "uns_o_APXSOM", "uns_o_Akatihi4x", "uns_b_type30", "uns_o_APXSOM", "uns_o_PSO1", "uns_b_mas49", "uns_o_Akatihi4x", "uns_b_mas49", "uns_o_PSO1", "uns_o_APXSOM", "uns_b_type30", "uns_b_type30", "uns_o_PSO1", "uns_b_mas49", "uns_b_mas49", "uns_b_type30", "uns_o_PSO1", "uns_o_Akatihi4x", "uns_o_Akatihi4x", "uns_o_PSO1", "uns_b_mas49", "uns_o_APXSOM", "uns_b_type30", "uns_o_Akatihi4x", "uns_o_PSO1", "uns_o_Akatihi4x", "uns_o_Akatihi4x", "uns_o_PSO1", "uns_o_APXSOM", "uns_o_PSO1", "uns_b_type30", "uns_o_APXSOM", "uns_o_PSO1", "uns_o_APXSOM", "uns_o_APXSOM", "uns_o_APXSOM", "uns_b_mas49", "uns_o_APXSOM", "uns_o_Akatihi4x", "uns_b_type30", "uns_o_Akatihi4x", "uns_b_mas49", "uns_b_type30", "uns_o_Akatihi4x", "uns_b_type30", "uns_o_PSO1", "uns_b_mas49", "uns_o_Akatihi4x"};

		/*
			Percental Item Spawn Chances of USammo:

			uns_38specmag                    = 1.52%
			uns_357mag                       = 1.52%
			uns_m1911mag                     = 1.52%
			uns_coltcmdrmag                  = 1.52%
			uns_m3a1mag                      = 1.52%
			uns_m3a1mag_T                    = 1.52%
			uns_12gaugemag_4                 = 1.52%
			uns_12gaugemag_4f                = 1.52%
			uns_12gaugemag_6                 = 1.52%
			uns_12gaugemag_6f                = 1.52%
			uns_m14mag                       = 1.52%
			uns_m14mag_T                     = 1.52%
			uns_m14mag_NT                    = 1.52%
			uns_model70mag                   = 1.52%
			uns_model70mag_T                 = 1.52%
			uns_m40mag_T                     = 1.52%
			uns_m40mag                       = 1.52%
			uns_20Rnd_556x45_Stanag          = 1.52%
			uns_30Rnd_556x45_Stanag          = 1.52%
			uns_20Rnd_556x45_Stanag_T        = 1.52%
			uns_30Rnd_556x45_Stanag_T        = 1.52%
			uns_20Rnd_556x45_Stanag_NT       = 1.52%
			uns_30Rnd_556x45_Stanag_NT       = 1.52%
			uns_30Rnd_556x45_Stanag_xm177    = 1.52%
			uns_30Rnd_556x45_Stanag_xm177_NT = 1.52%
			uns_30Rnd_556x45_Stanag_xm177_T  = 1.52%
			uns_m60mag                       = 1.52%
			uns_m60mag_200                   = 1.52%
			uns_springfieldmag               = 1.52%
			uns_springfieldmag_T             = 1.52%
			uns_m1garandmag                  = 1.52%
			uns_m1garandmag_T                = 1.52%
			uns_m72rocket                    = 1.52%
			Uns_1Rnd_HE_M406                 = 1.52%
			Uns_1Rnd_HE_M381                 = 1.52%
			uns_m406vest                     = 1.52%
			uns_40mm_white                   = 1.52%
			uns_40mm_green                   = 1.52%
			uns_40mm_red                     = 1.52%
			uns_40mm_yellow                  = 1.52%
			uns_40mm_mkv_White               = 1.52%
			uns_40mm_mkv_Red                 = 1.52%
			uns_40mm_mkv_Yellow              = 1.52%
			uns_40mm_mkv_Green               = 1.52%
			uns_1Rnd_Smoke_MKV               = 1.52%
			uns_1Rnd_SmokeGreen_MKV          = 1.52%
			uns_1Rnd_SmokeRed_MKV            = 1.52%
			uns_1Rnd_SmokeYellow_MKV         = 1.52%
			uns_1Rnd_Smoke_40mm              = 1.52%
			uns_1Rnd_SmokeGreen_40mm         = 1.52%
			uns_1Rnd_SmokeRed_40mm           = 1.52%
			uns_1Rnd_SmokeYellow_40mm        = 1.52%
			uns_barmag                       = 1.52%
			uns_barmag_T                     = 1.52%
			uns_barmag_NT                    = 1.52%
			uns_20Rnd_556x45_StanagSD        = 1.52%
			uns_30Rnd_556x45_StanagSD        = 1.52%
			uns_garandmag                    = 1.52%
			uns_garandmag_T                  = 1.52%
			uns_m1carbinemag                 = 1.52%
			uns_m1carbinemag_T               = 1.52%
			uns_m1carbinemag_NT              = 1.52%
			uns_thompsonmag_30               = 1.52%
			uns_thompsonmag_30_T             = 1.52%
			uns_thompsonmag_30_NT            = 1.52%
			uns_m1911SDmag                   = 1.52%
		*/
		USammo[] = {"uns_40mm_mkv_Yellow", "uns_20Rnd_556x45_StanagSD", "uns_40mm_red", "uns_m1911mag", "uns_20Rnd_556x45_StanagSD", "uns_m72rocket", "uns_1Rnd_SmokeRed_40mm", "uns_m1carbinemag_NT", "uns_30Rnd_556x45_StanagSD", "uns_1Rnd_Smoke_MKV", "uns_m406vest", "uns_m40mag", "uns_springfieldmag", "uns_barmag_NT", "uns_30Rnd_556x45_Stanag_T", "uns_1Rnd_SmokeRed_40mm", "uns_m72rocket", "uns_12gaugemag_6f", "uns_1Rnd_SmokeRed_40mm", "uns_m1carbinemag_NT", "uns_30Rnd_556x45_Stanag_T", "uns_garandmag", "uns_30Rnd_556x45_Stanag_xm177_T", "Uns_1Rnd_HE_M406", "uns_model70mag_T", "uns_357mag", "uns_m14mag_T", "Uns_1Rnd_HE_M406", "uns_30Rnd_556x45_StanagSD", "uns_40mm_mkv_White", "Uns_1Rnd_HE_M406", "uns_40mm_mkv_Green", "uns_barmag_NT", "uns_30Rnd_556x45_Stanag_NT", "Uns_1Rnd_HE_M381", "uns_20Rnd_556x45_Stanag_T", "uns_1Rnd_SmokeRed_MKV", "uns_1Rnd_SmokeYellow_MKV", "uns_m60mag_200", "uns_30Rnd_556x45_Stanag_xm177_NT", "uns_m14mag", "uns_40mm_mkv_Yellow", "uns_40mm_mkv_Red", "uns_garandmag_T", "uns_barmag_T", "uns_40mm_mkv_Green", "uns_40mm_white", "uns_40mm_yellow", "uns_12gaugemag_4", "uns_40mm_mkv_White", "uns_m40mag_T", "uns_38specmag", "uns_20Rnd_556x45_StanagSD", "uns_m1garandmag", "uns_40mm_mkv_White", "uns_30Rnd_556x45_Stanag_T", "uns_1Rnd_Smoke_MKV", "uns_1Rnd_SmokeYellow_MKV", "uns_40mm_green", "uns_thompsonmag_30_NT", "uns_1Rnd_SmokeGreen_40mm", "uns_m60mag_200", "uns_40mm_mkv_White", "uns_1Rnd_SmokeYellow_MKV", "uns_m60mag", "uns_1Rnd_SmokeGreen_MKV", "uns_m14mag_T", "uns_40mm_mkv_Red", "uns_barmag_NT", "Uns_1Rnd_HE_M381", "uns_38specmag", "uns_40mm_green", "uns_20Rnd_556x45_Stanag_NT", "uns_barmag", "uns_barmag_NT", "uns_barmag", "uns_40mm_mkv_Yellow", "uns_garandmag_T", "uns_m1carbinemag_T", "uns_40mm_mkv_Red", "uns_thompsonmag_30_T", "uns_coltcmdrmag", "uns_1Rnd_SmokeRed_MKV", "uns_thompsonmag_30_T", "uns_30Rnd_556x45_Stanag_xm177_T", "uns_1Rnd_Smoke_40mm", "Uns_1Rnd_HE_M406", "uns_m40mag_T", "uns_12gaugemag_6f", "uns_12gaugemag_4f", "uns_40mm_green", "uns_20Rnd_556x45_Stanag", "uns_30Rnd_556x45_StanagSD", "uns_40mm_yellow", "uns_30Rnd_556x45_StanagSD", "uns_1Rnd_SmokeGreen_40mm", "uns_springfieldmag", "uns_1Rnd_SmokeYellow_MKV", "uns_30Rnd_556x45_Stanag_T", "uns_12gaugemag_4f", "uns_model70mag_T", "uns_m3a1mag", "Uns_1Rnd_HE_M406", "uns_m14mag_T", "uns_1Rnd_SmokeRed_40mm", "uns_garandmag_T", "uns_springfieldmag_T", "uns_model70mag_T", "uns_30Rnd_556x45_Stanag_xm177", "uns_springfieldmag_T", "uns_m40mag", "uns_thompsonmag_30_T", "uns_m14mag_T", "uns_m40mag_T", "uns_20Rnd_556x45_Stanag_NT", "uns_garandmag_T", "uns_357mag", "uns_1Rnd_Smoke_40mm", "Uns_1Rnd_HE_M381", "uns_12gaugemag_4f", "uns_40mm_green", "uns_thompsonmag_30_NT", "uns_springfieldmag", "uns_thompsonmag_30_T", "uns_1Rnd_SmokeYellow_MKV", "uns_m60mag_200", "uns_m40mag", "uns_springfieldmag_T", "uns_springfieldmag", "uns_m60mag", "uns_1Rnd_Smoke_MKV", "uns_40mm_green", "uns_40mm_green", "uns_barmag", "uns_20Rnd_556x45_Stanag_T", "uns_m1garandmag", "uns_model70mag", "uns_m3a1mag_T", "uns_m1garandmag_T", "uns_1Rnd_SmokeGreen_MKV", "uns_30Rnd_556x45_Stanag_T", "uns_30Rnd_556x45_Stanag_xm177_T", "uns_1Rnd_SmokeGreen_MKV", "uns_m1911mag", "uns_barmag_T", "uns_m1garandmag_T", "uns_m40mag", "uns_barmag_NT", "uns_1Rnd_Smoke_40mm", "uns_20Rnd_556x45_Stanag_T", "uns_40mm_white", "uns_m3a1mag", "uns_1Rnd_Smoke_MKV", "uns_barmag_NT", "uns_m60mag_200", "uns_thompsonmag_30", "uns_thompsonmag_30", "uns_garandmag", "uns_1Rnd_SmokeGreen_40mm", "uns_m14mag_NT", "uns_barmag_NT", "uns_model70mag", "uns_30Rnd_556x45_Stanag_NT", "uns_barmag", "uns_1Rnd_Smoke_40mm", "uns_40mm_mkv_Green", "uns_thompsonmag_30_NT", "uns_20Rnd_556x45_Stanag_NT", "uns_40mm_mkv_Yellow", "uns_1Rnd_SmokeYellow_MKV", "uns_30Rnd_556x45_Stanag_xm177_NT", "uns_12gaugemag_6f", "uns_1Rnd_SmokeGreen_40mm", "uns_barmag_T", "uns_m72rocket", "uns_garandmag_T", "uns_1Rnd_SmokeRed_MKV", "uns_1Rnd_SmokeRed_MKV", "uns_m406vest", "uns_m3a1mag_T", "uns_12gaugemag_4f", "uns_12gaugemag_6f", "uns_40mm_green", "uns_20Rnd_556x45_Stanag_NT", "uns_m1carbinemag", "uns_1Rnd_SmokeRed_MKV", "uns_30Rnd_556x45_StanagSD", "uns_30Rnd_556x45_Stanag_xm177", "uns_m40mag_T", "uns_garandmag_T", "uns_m60mag", "uns_40mm_mkv_White", "uns_m3a1mag_T", "uns_40mm_red", "uns_12gaugemag_4f", "uns_m1carbinemag_NT", "uns_m1garandmag_T", "uns_springfieldmag_T", "uns_m14mag_NT", "uns_38specmag", "uns_40mm_mkv_Red", "Uns_1Rnd_HE_M406", "uns_20Rnd_556x45_Stanag", "uns_garandmag", "uns_40mm_mkv_Green", "uns_springfieldmag_T", "uns_m1garandmag", "uns_m1carbinemag", "uns_garandmag", "uns_12gaugemag_6f", "uns_thompsonmag_30", "uns_m406vest", "uns_m1carbinemag", "uns_1Rnd_Smoke_40mm", "uns_30Rnd_556x45_Stanag_xm177", "uns_springfieldmag", "uns_12gaugemag_4", "uns_40mm_green", "uns_30Rnd_556x45_StanagSD", "uns_m72rocket", "uns_thompsonmag_30", "uns_40mm_red", "uns_40mm_mkv_Yellow", "uns_40mm_mkv_Yellow", "uns_20Rnd_556x45_Stanag_NT", "uns_38specmag", "uns_m40mag_T", "uns_30Rnd_556x45_Stanag", "uns_m1911SDmag", "uns_m1garandmag_T", "uns_model70mag", "uns_20Rnd_556x45_Stanag", "uns_40mm_mkv_Green", "uns_1Rnd_SmokeYellow_MKV", "uns_40mm_green", "uns_40mm_white", "uns_40mm_red", "uns_30Rnd_556x45_Stanag_T", "uns_1Rnd_SmokeRed_MKV", "uns_m14mag", "uns_model70mag_T", "uns_thompsonmag_30", "uns_20Rnd_556x45_Stanag", "uns_20Rnd_556x45_Stanag_NT", "uns_20Rnd_556x45_StanagSD", "uns_12gaugemag_4f", "uns_m1carbinemag_NT", "uns_12gaugemag_4", "uns_20Rnd_556x45_Stanag", "uns_m1911SDmag", "uns_m60mag_200", "uns_20Rnd_556x45_Stanag_T", "uns_thompsonmag_30", "uns_springfieldmag", "uns_1Rnd_Smoke_MKV", "uns_m1911mag", "uns_thompsonmag_30_T", "uns_20Rnd_556x45_Stanag_NT", "uns_40mm_mkv_White", "uns_40mm_white", "uns_model70mag_T", "uns_20Rnd_556x45_Stanag_NT", "uns_springfieldmag", "uns_m72rocket", "uns_m14mag_T", "uns_springfieldmag_T", "uns_springfieldmag_T", "uns_model70mag", "uns_1Rnd_SmokeGreen_MKV", "uns_barmag_NT", "uns_357mag", "uns_38specmag", "uns_12gaugemag_6", "uns_m14mag", "uns_1Rnd_SmokeGreen_40mm", "uns_m1carbinemag_T", "uns_barmag", "uns_40mm_yellow", "uns_40mm_mkv_Red", "uns_30Rnd_556x45_Stanag_NT", "uns_1Rnd_SmokeGreen_MKV", "uns_m40mag_T", "uns_1Rnd_Smoke_40mm", "uns_m60mag", "uns_30Rnd_556x45_Stanag_xm177_T", "uns_m1carbinemag_T", "uns_30Rnd_556x45_Stanag_xm177_T", "uns_m14mag_T", "uns_m1carbinemag", "uns_20Rnd_556x45_Stanag_T", "uns_1Rnd_Smoke_40mm", "uns_m1carbinemag_NT", "uns_1Rnd_SmokeRed_40mm", "uns_38specmag", "uns_garandmag", "uns_m1garandmag_T", "uns_garandmag_T", "uns_12gaugemag_4", "uns_1Rnd_Smoke_40mm", "uns_coltcmdrmag", "Uns_1Rnd_HE_M381", "uns_barmag_T", "uns_m1carbinemag_T", "uns_thompsonmag_30_NT", "uns_m3a1mag", "uns_barmag_T", "uns_m406vest", "uns_1Rnd_Smoke_MKV", "uns_12gaugemag_6", "uns_1Rnd_SmokeYellow_MKV", "uns_coltcmdrmag", "uns_30Rnd_556x45_Stanag", "uns_30Rnd_556x45_Stanag_xm177_T", "uns_m1carbinemag_T", "uns_30Rnd_556x45_Stanag_xm177", "Uns_1Rnd_HE_M406", "uns_m1carbinemag", "uns_30Rnd_556x45_Stanag_xm177_NT", "uns_thompsonmag_30_NT", "uns_30Rnd_556x45_StanagSD", "uns_springfieldmag_T", "uns_1Rnd_SmokeRed_40mm", "uns_m14mag_NT", "uns_40mm_mkv_White", "uns_springfieldmag_T", "uns_12gaugemag_4f", "uns_1Rnd_SmokeYellow_40mm", "uns_m1carbinemag_NT", "uns_20Rnd_556x45_Stanag_NT", "uns_m1911SDmag", "uns_m40mag_T", "uns_m40mag", "uns_m3a1mag", "uns_1Rnd_Smoke_40mm", "uns_20Rnd_556x45_StanagSD", "uns_40mm_yellow", "uns_20Rnd_556x45_Stanag_T", "uns_20Rnd_556x45_Stanag", "uns_30Rnd_556x45_Stanag", "uns_40mm_green", "uns_m1garandmag_T", "uns_m60mag_200", "uns_m40mag_T", "uns_1Rnd_SmokeRed_40mm", "uns_40mm_red", "uns_30Rnd_556x45_Stanag_NT", "uns_40mm_white", "uns_12gaugemag_4f", "uns_m72rocket", "uns_m3a1mag_T", "uns_m14mag", "uns_barmag_T", "uns_357mag", "uns_thompsonmag_30_T", "uns_1Rnd_SmokeRed_MKV", "uns_40mm_red", "uns_m60mag_200", "uns_m406vest", "uns_30Rnd_556x45_Stanag_xm177_NT", "uns_barmag", "uns_m40mag_T", "uns_m60mag", "uns_20Rnd_556x45_Stanag", "uns_30Rnd_556x45_Stanag_xm177_T", "uns_20Rnd_556x45_Stanag", "uns_12gaugemag_4f", "uns_20Rnd_556x45_Stanag_NT", "uns_40mm_mkv_Red", "uns_40mm_mkv_Red", "uns_m14mag_NT", "uns_1Rnd_SmokeYellow_40mm", "uns_springfieldmag_T", "uns_40mm_yellow", "uns_40mm_white", "uns_m40mag_T", "uns_springfieldmag_T", "uns_1Rnd_Smoke_MKV", "uns_m1garandmag", "uns_12gaugemag_4", "uns_m1carbinemag_NT", "uns_m60mag", "uns_springfieldmag_T", "uns_thompsonmag_30", "uns_20Rnd_556x45_StanagSD", "uns_m1garandmag", "uns_m14mag", "uns_357mag", "uns_40mm_mkv_Green", "uns_m60mag_200", "uns_m3a1mag_T", "uns_m3a1mag_T", "uns_1Rnd_Smoke_MKV", "uns_40mm_white", "uns_1Rnd_SmokeYellow_40mm", "uns_30Rnd_556x45_Stanag_T", "uns_m3a1mag", "uns_m3a1mag_T", "uns_30Rnd_556x45_StanagSD", "uns_m40mag", "Uns_1Rnd_HE_M381", "uns_40mm_mkv_Green", "uns_barmag_T", "uns_40mm_mkv_Red", "uns_barmag", "uns_30Rnd_556x45_Stanag_xm177_T", "uns_m406vest", "uns_thompsonmag_30_NT", "uns_1Rnd_Smoke_40mm", "uns_m1garandmag_T", "uns_1Rnd_SmokeYellow_40mm", "uns_40mm_green", "uns_30Rnd_556x45_Stanag_T", "uns_m3a1mag_T", "uns_m40mag_T", "uns_m14mag_NT", "uns_40mm_yellow", "uns_thompsonmag_30", "uns_barmag_NT", "uns_thompsonmag_30_T", "uns_12gaugemag_6f", "uns_40mm_white", "uns_m406vest", "uns_m40mag", "uns_m14mag_T", "uns_garandmag", "uns_1Rnd_SmokeRed_MKV", "uns_model70mag_T", "uns_m14mag_T", "uns_1Rnd_SmokeYellow_40mm", "uns_1Rnd_SmokeGreen_40mm", "uns_30Rnd_556x45_Stanag_xm177_NT", "uns_m60mag_200", "uns_1Rnd_Smoke_40mm", "uns_1Rnd_SmokeYellow_40mm", "uns_m40mag_T", "uns_thompsonmag_30", "uns_1Rnd_SmokeRed_MKV", "uns_thompsonmag_30_T", "uns_20Rnd_556x45_Stanag_T", "uns_garandmag_T", "uns_m1garandmag_T", "uns_30Rnd_556x45_Stanag_xm177", "uns_m1garandmag", "uns_barmag_T", "uns_30Rnd_556x45_Stanag", "uns_m1carbinemag", "uns_garandmag", "uns_barmag", "uns_m72rocket", "uns_coltcmdrmag", "uns_model70mag_T", "uns_40mm_mkv_Yellow", "uns_40mm_mkv_White", "uns_m1carbinemag_T", "Uns_1Rnd_HE_M406", "uns_m40mag", "uns_30Rnd_556x45_Stanag_xm177_T", "uns_12gaugemag_6", "uns_springfieldmag", "uns_30Rnd_556x45_Stanag", "uns_30Rnd_556x45_Stanag_xm177_NT", "uns_garandmag_T", "uns_springfieldmag", "uns_20Rnd_556x45_Stanag_T", "uns_20Rnd_556x45_Stanag_T", "uns_40mm_red", "uns_30Rnd_556x45_Stanag_xm177_NT", "uns_40mm_yellow", "uns_1Rnd_Smoke_40mm", "uns_12gaugemag_6", "uns_20Rnd_556x45_Stanag", "uns_m1911SDmag", "uns_m1garandmag_T", "uns_barmag", "uns_40mm_mkv_Green", "uns_40mm_red", "uns_1Rnd_SmokeGreen_40mm", "uns_m14mag_NT", "uns_30Rnd_556x45_Stanag_NT", "uns_30Rnd_556x45_Stanag_xm177_NT", "uns_m1carbinemag_T", "uns_12gaugemag_6", "uns_thompsonmag_30_NT", "uns_12gaugemag_4f", "uns_1Rnd_SmokeRed_MKV", "uns_40mm_mkv_Yellow", "uns_m1carbinemag", "uns_1Rnd_SmokeGreen_40mm", "uns_garandmag", "uns_springfieldmag", "uns_m1911mag", "uns_30Rnd_556x45_StanagSD", "uns_thompsonmag_30_NT", "uns_30Rnd_556x45_Stanag_T", "uns_m72rocket", "uns_30Rnd_556x45_Stanag", "uns_20Rnd_556x45_StanagSD", "uns_m14mag_NT", "uns_thompsonmag_30_T", "uns_12gaugemag_6f", "uns_m60mag_200", "uns_m1911SDmag", "uns_1Rnd_SmokeGreen_MKV", "uns_1Rnd_SmokeGreen_MKV", "uns_m14mag_T", "uns_1Rnd_SmokeGreen_MKV", "uns_barmag_T", "uns_coltcmdrmag", "uns_m1911mag", "uns_m1carbinemag_NT", "uns_model70mag", "uns_thompsonmag_30", "uns_garandmag_T", "uns_m14mag_T", "uns_12gaugemag_6", "uns_m60mag", "uns_coltcmdrmag", "uns_m14mag_T", "uns_38specmag", "uns_30Rnd_556x45_Stanag_xm177_T", "uns_m40mag_T", "uns_30Rnd_556x45_Stanag_T", "uns_springfieldmag", "uns_thompsonmag_30", "uns_357mag", "uns_m1garandmag_T", "uns_12gaugemag_6f", "uns_40mm_mkv_White", "uns_40mm_white", "uns_40mm_green", "uns_1Rnd_SmokeGreen_MKV", "uns_springfieldmag", "uns_m14mag", "uns_1Rnd_SmokeRed_40mm", "uns_coltcmdrmag", "uns_1Rnd_Smoke_MKV", "uns_357mag", "uns_barmag", "uns_40mm_mkv_Yellow", "Uns_1Rnd_HE_M381", "uns_40mm_mkv_Yellow", "uns_1Rnd_SmokeYellow_40mm", "uns_thompsonmag_30_T", "uns_1Rnd_SmokeRed_40mm", "uns_1Rnd_SmokeYellow_40mm", "uns_m1carbinemag_T", "uns_30Rnd_556x45_Stanag_xm177", "uns_30Rnd_556x45_Stanag_xm177_NT", "uns_1Rnd_SmokeRed_MKV", "uns_barmag", "uns_model70mag_T", "uns_1Rnd_SmokeGreen_MKV", "uns_12gaugemag_4", "uns_40mm_mkv_Green", "uns_357mag", "Uns_1Rnd_HE_M406", "uns_1Rnd_SmokeYellow_MKV", "uns_m1911mag", "uns_1Rnd_SmokeGreen_MKV", "Uns_1Rnd_HE_M381", "uns_model70mag_T", "uns_springfieldmag", "uns_30Rnd_556x45_Stanag_xm177", "uns_40mm_mkv_Red", "uns_m1garandmag", "uns_30Rnd_556x45_Stanag_NT", "uns_40mm_mkv_Red", "uns_m60mag", "uns_38specmag", "uns_40mm_yellow", "uns_thompsonmag_30_NT", "uns_20Rnd_556x45_Stanag_T", "uns_m14mag", "uns_12gaugemag_4f", "uns_m3a1mag_T", "uns_1Rnd_SmokeYellow_MKV", "uns_40mm_mkv_White", "uns_coltcmdrmag", "uns_m40mag", "Uns_1Rnd_HE_M381", "uns_1Rnd_SmokeYellow_40mm", "uns_30Rnd_556x45_Stanag_xm177_T", "uns_m14mag_T", "uns_40mm_green", "uns_m3a1mag", "uns_model70mag", "uns_m1carbinemag_NT", "uns_m14mag_NT", "uns_m40mag", "uns_1Rnd_Smoke_MKV", "uns_30Rnd_556x45_Stanag", "uns_m3a1mag_T", "uns_40mm_mkv_Red", "uns_garandmag_T", "uns_12gaugemag_4", "uns_m40mag_T", "uns_1Rnd_SmokeGreen_MKV", "uns_m60mag", "uns_40mm_green", "uns_m1911SDmag", "uns_barmag_NT", "uns_30Rnd_556x45_Stanag", "uns_model70mag", "uns_30Rnd_556x45_Stanag", "uns_m14mag_NT", "uns_m1carbinemag", "uns_1Rnd_Smoke_40mm", "uns_30Rnd_556x45_Stanag_xm177_NT", "uns_springfieldmag_T", "uns_1Rnd_SmokeRed_40mm", "uns_1Rnd_SmokeGreen_40mm", "uns_m1garandmag", "uns_12gaugemag_6f", "uns_m40mag", "uns_m1garandmag", "uns_30Rnd_556x45_Stanag_NT", "uns_12gaugemag_4", "uns_30Rnd_556x45_Stanag_xm177_T", "uns_40mm_red", "uns_m1garandmag_T", "uns_12gaugemag_6f", "uns_m1911SDmag", "uns_m1carbinemag", "uns_model70mag", "uns_m406vest", "uns_m40mag", "uns_1Rnd_SmokeGreen_40mm", "uns_barmag_NT", "Uns_1Rnd_HE_M406", "uns_1Rnd_SmokeYellow_MKV", "uns_40mm_yellow", "uns_30Rnd_556x45_Stanag_T", "uns_m406vest", "uns_m60mag_200", "uns_1Rnd_SmokeRed_MKV", "uns_30Rnd_556x45_Stanag_xm177", "uns_12gaugemag_6", "uns_20Rnd_556x45_Stanag_T", "uns_30Rnd_556x45_Stanag_xm177_NT", "uns_357mag", "uns_1Rnd_SmokeRed_MKV", "uns_m60mag_200", "uns_m40mag_T", "uns_40mm_mkv_Green", "uns_thompsonmag_30_T", "uns_model70mag_T", "uns_30Rnd_556x45_Stanag_xm177", "uns_30Rnd_556x45_Stanag_xm177_T", "uns_m40mag", "uns_40mm_mkv_Red", "uns_m14mag", "uns_40mm_yellow", "uns_12gaugemag_4", "Uns_1Rnd_HE_M381", "uns_m14mag_T", "uns_model70mag_T", "uns_m1carbinemag", "uns_30Rnd_556x45_Stanag_xm177", "uns_1Rnd_SmokeYellow_MKV", "uns_m1carbinemag_T", "uns_1Rnd_Smoke_MKV", "uns_20Rnd_556x45_StanagSD", "uns_m14mag", "uns_coltcmdrmag", "uns_m1911mag", "uns_30Rnd_556x45_Stanag", "uns_coltcmdrmag", "Uns_1Rnd_HE_M381", "uns_38specmag", "uns_m3a1mag_T", "uns_30Rnd_556x45_Stanag_NT", "uns_1Rnd_SmokeYellow_40mm", "uns_garandmag", "uns_barmag_T", "uns_thompsonmag_30", "uns_30Rnd_556x45_Stanag_NT", "uns_barmag_NT", "uns_thompsonmag_30_NT", "uns_40mm_red", "Uns_1Rnd_HE_M381", "uns_m14mag_NT", "uns_barmag_NT", "uns_1Rnd_Smoke_MKV", "uns_20Rnd_556x45_StanagSD", "uns_40mm_mkv_Green", "uns_thompsonmag_30_NT", "uns_40mm_mkv_Red", "uns_barmag", "uns_20Rnd_556x45_Stanag_T", "uns_m1carbinemag_NT", "uns_m1garandmag_T", "uns_m72rocket", "uns_40mm_yellow", "uns_thompsonmag_30", "uns_m3a1mag_T", "uns_m1garandmag", "uns_12gaugemag_4", "uns_m406vest", "uns_40mm_white", "uns_m1carbinemag_NT", "uns_1Rnd_SmokeGreen_40mm", "uns_30Rnd_556x45_StanagSD", "uns_12gaugemag_6", "uns_20Rnd_556x45_Stanag", "uns_1Rnd_SmokeGreen_MKV", "uns_12gaugemag_6f", "uns_40mm_mkv_Yellow", "uns_m1911mag", "Uns_1Rnd_HE_M406", "uns_garandmag_T", "uns_m1garandmag", "uns_garandmag", "uns_m14mag", "uns_40mm_white", "uns_1Rnd_SmokeRed_MKV", "uns_m1911SDmag", "uns_coltcmdrmag", "uns_20Rnd_556x45_Stanag", "uns_40mm_mkv_White", "uns_1Rnd_SmokeRed_40mm", "Uns_1Rnd_HE_M406", "uns_12gaugemag_6", "uns_springfieldmag", "uns_12gaugemag_6", "uns_30Rnd_556x45_Stanag_xm177", "uns_30Rnd_556x45_Stanag_NT", "uns_springfieldmag", "uns_30Rnd_556x45_Stanag_T", "uns_m1carbinemag_T", "uns_m14mag_NT", "uns_barmag", "uns_357mag", "uns_thompsonmag_30_NT", "uns_coltcmdrmag", "uns_m1carbinemag", "uns_m14mag_NT", "uns_m14mag_NT", "uns_m1911mag", "uns_barmag_NT", "uns_40mm_red", "uns_40mm_mkv_White", "uns_springfieldmag_T", "uns_m3a1mag", "uns_38specmag", "uns_30Rnd_556x45_Stanag_xm177_NT", "uns_12gaugemag_6", "uns_m1carbinemag_T", "uns_30Rnd_556x45_Stanag_NT", "uns_1Rnd_SmokeYellow_40mm", "uns_model70mag", "uns_m1carbinemag_NT", "uns_20Rnd_556x45_Stanag", "uns_40mm_yellow", "uns_m72rocket", "uns_20Rnd_556x45_Stanag", "uns_m1garandmag_T", "uns_m3a1mag", "uns_20Rnd_556x45_Stanag_NT", "uns_30Rnd_556x45_Stanag_T", "uns_20Rnd_556x45_StanagSD", "uns_1Rnd_SmokeGreen_40mm", "uns_40mm_white", "Uns_1Rnd_HE_M406", "uns_40mm_mkv_White", "uns_m1carbinemag_NT", "uns_12gaugemag_4f", "uns_1Rnd_Smoke_MKV", "uns_garandmag", "uns_m14mag", "uns_garandmag_T", "uns_thompsonmag_30", "uns_1Rnd_SmokeRed_40mm", "uns_m1carbinemag_T", "uns_m1carbinemag_T", "uns_30Rnd_556x45_Stanag_xm177_NT", "uns_coltcmdrmag", "uns_40mm_mkv_Red", "uns_m406vest", "uns_m1garandmag_T", "uns_barmag_T", "uns_40mm_mkv_Green", "uns_m1garandmag", "uns_12gaugemag_4f", "uns_40mm_mkv_Yellow", "uns_m1911mag", "uns_1Rnd_SmokeYellow_MKV", "uns_12gaugemag_6f", "uns_barmag", "uns_30Rnd_556x45_Stanag_xm177_NT", "uns_40mm_yellow", "uns_40mm_mkv_White", "uns_m14mag", "uns_357mag", "uns_12gaugemag_4", "uns_30Rnd_556x45_Stanag_NT", "uns_m40mag", "uns_m406vest", "uns_1Rnd_SmokeYellow_MKV", "uns_40mm_green", "uns_m3a1mag_T", "uns_m3a1mag", "uns_38specmag", "uns_357mag", "uns_m406vest", "uns_coltcmdrmag", "uns_1Rnd_SmokeRed_40mm", "uns_20Rnd_556x45_StanagSD", "uns_barmag", "uns_20Rnd_556x45_Stanag_NT", "uns_1Rnd_Smoke_MKV", "uns_30Rnd_556x45_StanagSD", "uns_m1911SDmag", "uns_garandmag_T", "uns_30Rnd_556x45_Stanag_xm177", "uns_m60mag", "uns_30Rnd_556x45_Stanag_NT", "uns_357mag", "uns_20Rnd_556x45_Stanag", "uns_40mm_white", "uns_30Rnd_556x45_Stanag_NT", "uns_model70mag", "uns_1Rnd_SmokeYellow_40mm", "uns_20Rnd_556x45_Stanag_NT", "uns_model70mag", "uns_m1911SDmag", "uns_357mag", "uns_1Rnd_SmokeRed_40mm", "uns_m1carbinemag_NT", "uns_thompsonmag_30_T", "uns_20Rnd_556x45_StanagSD", "uns_1Rnd_Smoke_40mm", "uns_12gaugemag_6", "uns_30Rnd_556x45_StanagSD", "uns_m1carbinemag", "uns_m1911SDmag", "uns_30Rnd_556x45_Stanag", "uns_20Rnd_556x45_StanagSD", "uns_12gaugemag_6", "uns_12gaugemag_4", "uns_thompsonmag_30", "uns_30Rnd_556x45_Stanag", "uns_30Rnd_556x45_Stanag_xm177", "uns_40mm_red", "uns_1Rnd_SmokeYellow_MKV", "uns_thompsonmag_30_NT", "uns_barmag_T", "uns_m14mag_NT", "uns_m1911SDmag", "uns_m3a1mag", "uns_m1911mag", "uns_m14mag", "uns_m1garandmag", "uns_m1911mag", "uns_model70mag_T", "uns_20Rnd_556x45_Stanag_T", "uns_30Rnd_556x45_Stanag_xm177", "uns_30Rnd_556x45_Stanag", "uns_38specmag", "uns_m1carbinemag_NT", "uns_m14mag_T", "uns_40mm_red", "Uns_1Rnd_HE_M406", "uns_30Rnd_556x45_Stanag_xm177", "uns_m3a1mag", "uns_40mm_red", "uns_20Rnd_556x45_Stanag_T", "uns_1Rnd_SmokeRed_MKV", "uns_1Rnd_SmokeRed_40mm", "uns_30Rnd_556x45_Stanag_NT", "uns_thompsonmag_30_T", "uns_m60mag", "uns_m14mag_T", "uns_1Rnd_SmokeGreen_40mm", "uns_40mm_mkv_Red", "uns_40mm_yellow", "Uns_1Rnd_HE_M381", "uns_30Rnd_556x45_Stanag_T", "uns_40mm_mkv_Yellow", "uns_model70mag_T", "uns_thompsonmag_30_T", "uns_m14mag_NT", "Uns_1Rnd_HE_M381", "uns_m72rocket", "uns_357mag", "uns_30Rnd_556x45_StanagSD", "uns_m1garandmag_T", "uns_springfieldmag_T", "uns_m1carbinemag", "uns_12gaugemag_4", "uns_40mm_mkv_Yellow", "uns_barmag_T", "uns_m60mag", "uns_20Rnd_556x45_Stanag_NT", "uns_garandmag_T", "uns_30Rnd_556x45_Stanag_xm177_T", "uns_m1911SDmag", "uns_38specmag", "uns_m1911mag", "Uns_1Rnd_HE_M381", "uns_model70mag", "uns_20Rnd_556x45_StanagSD", "uns_m60mag", "uns_m72rocket", "uns_40mm_red", "uns_m3a1mag", "uns_12gaugemag_6", "uns_m3a1mag", "uns_thompsonmag_30_T", "uns_40mm_white", "uns_m60mag_200", "uns_12gaugemag_6", "uns_model70mag", "uns_m60mag_200", "uns_m14mag", "uns_m14mag", "uns_12gaugemag_4", "uns_40mm_white", "uns_30Rnd_556x45_Stanag_xm177_T", "uns_12gaugemag_4f", "uns_model70mag_T", "uns_m406vest", "uns_1Rnd_SmokeGreen_MKV", "uns_20Rnd_556x45_Stanag_T", "uns_30Rnd_556x45_StanagSD", "uns_model70mag", "uns_m72rocket", "uns_30Rnd_556x45_Stanag_T", "uns_garandmag", "uns_m40mag", "uns_m1911SDmag", "uns_m1911mag", "uns_m1garandmag", "uns_m1carbinemag", "uns_40mm_mkv_Green", "uns_m1911SDmag", "uns_30Rnd_556x45_Stanag_xm177_NT", "uns_40mm_mkv_Green", "uns_12gaugemag_6f", "uns_m60mag_200", "uns_m3a1mag", "uns_1Rnd_Smoke_40mm", "uns_m3a1mag", "uns_thompsonmag_30_NT", "uns_m60mag", "uns_40mm_mkv_White", "uns_12gaugemag_4", "uns_m1carbinemag_T", "uns_40mm_mkv_Green", "uns_garandmag", "uns_1Rnd_Smoke_MKV", "uns_30Rnd_556x45_Stanag", "uns_coltcmdrmag", "Uns_1Rnd_HE_M381", "Uns_1Rnd_HE_M406", "uns_m1carbinemag", "uns_m3a1mag_T", "uns_barmag_T", "uns_model70mag_T", "uns_1Rnd_SmokeYellow_40mm", "uns_m72rocket", "uns_model70mag", "uns_barmag_NT", "uns_40mm_yellow", "uns_1Rnd_SmokeGreen_MKV", "uns_30Rnd_556x45_StanagSD", "uns_1Rnd_SmokeGreen_40mm", "uns_20Rnd_556x45_Stanag_NT", "uns_m60mag", "uns_20Rnd_556x45_StanagSD", "uns_m3a1mag_T", "uns_1Rnd_SmokeYellow_40mm", "uns_garandmag", "uns_m1garandmag", "uns_40mm_mkv_Yellow", "uns_1Rnd_SmokeGreen_40mm", "uns_m72rocket", "uns_barmag_T", "uns_12gaugemag_6f", "uns_12gaugemag_6f", "uns_38specmag", "uns_m1911mag", "uns_m406vest", "uns_1Rnd_SmokeYellow_40mm", "uns_garandmag", "uns_thompsonmag_30_NT", "uns_m1carbinemag_T", "uns_20Rnd_556x45_Stanag", "uns_30Rnd_556x45_Stanag", "uns_12gaugemag_4f", "uns_38specmag"};

		/*
			Percental Item Spawn Chances of VCammo:

			uns_12gaugemag_2         = 1.59%
			uns_nagant_m1895mag      = 1.59%
			uns_6Rnd_czak            = 1.59%
			uns_makarovmag           = 1.59%
			uns_tokarevmag           = 1.59%
			uns_20Rnd_APS            = 1.59%
			uns_25Rnd_pm_pa          = 1.59%
			uns_20Rnd_sa61_pa        = 1.59%
			uns_20Rnd_sa61           = 1.59%
			uns_thompsonmag_20       = 1.59%
			uns_thompsonmag_20_T     = 1.59%
			uns_thompsonmag_20_NT    = 1.59%
			uns_25Rnd_pm             = 1.59%
			uns_mat49mag_T           = 1.59%
			uns_mat49mag_NT          = 1.59%
			uns_mat49mag             = 1.59%
			uns_mat49_20_mag         = 1.59%
			uns_type100mag           = 1.59%
			uns_type100_NT           = 1.59%
			uns_type100_T            = 1.59%
			uns_k50mag               = 1.59%
			uns_k50mag_NT            = 1.59%
			uns_k50mag_T             = 1.59%
			uns_ppshmag              = 1.59%
			uns_ppshmag_T            = 1.59%
			uns_ppshmag_NT           = 1.59%
			uns_mp40mag              = 1.59%
			uns_30Rnd_kurtz_stg      = 1.59%
			uns_ak47mag              = 1.59%
			uns_ak47mag_T            = 1.59%
			uns_ak47mag_NT           = 1.59%
			uns_svtmag               = 1.59%
			uns_svtmag_T             = 1.59%
			uns_sksmag               = 1.59%
			uns_sksmag_T             = 1.59%
			uns_sksmag_NT            = 1.59%
			uns_kar98kmag            = 1.59%
			uns_kar98kmag_T          = 1.59%
			uns_mosinmag             = 1.59%
			uns_mosinmag_T           = 1.59%
			uns_type99mag            = 1.59%
			uns_type99mag_T          = 1.59%
			uns_mas36mag             = 1.59%
			uns_mas36mag_T           = 1.59%
			uns_mas4956mag           = 1.59%
			uns_mas4956mag_T         = 1.59%
			uns_rpdmag               = 1.59%
			uns_50Rnd_792x57_Mg42    = 1.59%
			uns_250Rnd_792x57_Mg42   = 1.59%
			uns_1Rnd_22mm_lume       = 1.59%
			uns_B40grenade           = 1.59%
			uns_rpg2grenade          = 1.59%
			uns_rpg7grenade          = 1.59%
			uns_40mm_mkv_White       = 1.59%
			uns_40mm_mkv_Red         = 1.59%
			uns_40mm_mkv_Yellow      = 1.59%
			uns_40mm_mkv_Green       = 1.59%
			uns_1Rnd_Smoke_MKV       = 1.59%
			uns_1Rnd_SmokeGreen_MKV  = 1.59%
			uns_1Rnd_SmokeRed_MKV    = 1.59%
			uns_1Rnd_SmokeYellow_MKV = 1.59%
			uns_svdmag               = 1.59%
			uns_svdmag_T             = 1.59%
		*/
		VCammo[] = {"uns_ppshmag", "uns_40mm_mkv_White", "uns_k50mag_T", "uns_rpg2grenade", "uns_svtmag", "uns_nagant_m1895mag", "uns_thompsonmag_20", "uns_mp40mag", "uns_rpg2grenade", "uns_30Rnd_kurtz_stg", "uns_tokarevmag", "uns_1Rnd_Smoke_MKV", "uns_6Rnd_czak", "uns_ppshmag", "uns_thompsonmag_20_T", "uns_mat49mag_NT", "uns_k50mag_NT", "uns_mat49mag_NT", "uns_svdmag", "uns_6Rnd_czak", "uns_kar98kmag_T", "uns_mat49mag", "uns_mas36mag_T", "uns_rpg2grenade", "uns_svtmag_T", "uns_250Rnd_792x57_Mg42", "uns_20Rnd_sa61", "uns_mat49mag", "uns_1Rnd_SmokeRed_MKV", "uns_mas36mag_T", "uns_sksmag", "uns_1Rnd_SmokeGreen_MKV", "uns_rpdmag", "uns_makarovmag", "uns_svdmag", "uns_40mm_mkv_Green", "uns_1Rnd_Smoke_MKV", "uns_B40grenade", "uns_6Rnd_czak", "uns_B40grenade", "uns_rpg2grenade", "uns_kar98kmag", "uns_k50mag", "uns_type99mag_T", "uns_svtmag_T", "uns_mp40mag", "uns_sksmag_T", "uns_50Rnd_792x57_Mg42", "uns_ak47mag_T", "uns_k50mag_T", "uns_mat49mag", "uns_ak47mag_NT", "uns_k50mag_NT", "uns_k50mag", "uns_type100mag", "uns_type99mag_T", "uns_thompsonmag_20_NT", "uns_svdmag_T", "uns_k50mag", "uns_type100mag", "uns_tokarevmag", "uns_kar98kmag_T", "uns_50Rnd_792x57_Mg42", "uns_ak47mag", "uns_type99mag", "uns_ak47mag_NT", "uns_ppshmag_NT", "uns_type99mag", "uns_25Rnd_pm_pa", "uns_20Rnd_APS", "uns_B40grenade", "uns_mas4956mag_T", "uns_k50mag", "uns_type100_NT", "uns_1Rnd_22mm_lume", "uns_svdmag_T", "uns_250Rnd_792x57_Mg42", "uns_svtmag", "uns_ak47mag_NT", "uns_svtmag", "uns_20Rnd_sa61_pa", "uns_12gaugemag_2", "uns_type100_NT", "uns_B40grenade", "uns_svdmag_T", "uns_sksmag", "uns_20Rnd_APS", "uns_sksmag_NT", "uns_thompsonmag_20_T", "uns_1Rnd_SmokeYellow_MKV", "uns_12gaugemag_2", "uns_6Rnd_czak", "uns_k50mag", "uns_20Rnd_APS", "uns_40mm_mkv_Green", "uns_ak47mag", "uns_20Rnd_sa61_pa", "uns_thompsonmag_20_T", "uns_sksmag", "uns_40mm_mkv_Yellow", "uns_mosinmag_T", "uns_mas4956mag", "uns_1Rnd_Smoke_MKV", "uns_thompsonmag_20_T", "uns_ak47mag", "uns_20Rnd_APS", "uns_svdmag", "uns_k50mag_NT", "uns_mat49mag_NT", "uns_40mm_mkv_White", "uns_40mm_mkv_White", "uns_25Rnd_pm_pa", "uns_250Rnd_792x57_Mg42", "uns_1Rnd_SmokeRed_MKV", "uns_mosinmag", "uns_mat49_20_mag", "uns_nagant_m1895mag", "uns_kar98kmag_T", "uns_type99mag_T", "uns_tokarevmag", "uns_sksmag_T", "uns_svdmag", "uns_20Rnd_sa61_pa", "uns_ppshmag_NT", "uns_sksmag_T", "uns_mat49mag", "uns_kar98kmag", "uns_thompsonmag_20_NT", "uns_svtmag_T", "uns_mosinmag", "uns_mat49mag_T", "uns_ak47mag_NT", "uns_mat49mag_T", "uns_type100_NT", "uns_40mm_mkv_Green", "uns_makarovmag", "uns_thompsonmag_20_NT", "uns_12gaugemag_2", "uns_20Rnd_APS", "uns_1Rnd_22mm_lume", "uns_mat49mag_T", "uns_type100_T", "uns_mas36mag_T", "uns_type100_T", "uns_thompsonmag_20_NT", "uns_1Rnd_Smoke_MKV", "uns_20Rnd_APS", "uns_type100_NT", "uns_mat49mag_NT", "uns_B40grenade", "uns_25Rnd_pm", "uns_svdmag", "uns_mosinmag", "uns_1Rnd_SmokeGreen_MKV", "uns_25Rnd_pm_pa", "uns_type99mag_T", "uns_25Rnd_pm", "uns_40mm_mkv_Green", "uns_1Rnd_SmokeYellow_MKV", "uns_sksmag", "uns_ppshmag_T", "uns_mas4956mag_T", "uns_thompsonmag_20_T", "uns_40mm_mkv_Red", "uns_mas4956mag", "uns_thompsonmag_20", "uns_mp40mag", "uns_ppshmag_T", "uns_ppshmag_NT", "uns_mas4956mag_T", "uns_1Rnd_Smoke_MKV", "uns_svdmag", "uns_svdmag_T", "uns_1Rnd_22mm_lume", "uns_1Rnd_SmokeYellow_MKV", "uns_ppshmag_T", "uns_ppshmag", "uns_1Rnd_SmokeYellow_MKV", "uns_svdmag", "uns_20Rnd_sa61_pa", "uns_kar98kmag_T", "uns_mas4956mag_T", "uns_mat49mag_NT", "uns_ppshmag", "uns_k50mag_T", "uns_sksmag", "uns_mas4956mag", "uns_mat49mag_NT", "uns_ppshmag_T", "uns_rpg2grenade", "uns_type100_NT", "uns_tokarevmag", "uns_svdmag_T", "uns_40mm_mkv_Yellow", "uns_40mm_mkv_White", "uns_ak47mag", "uns_30Rnd_kurtz_stg", "uns_ppshmag", "uns_makarovmag", "uns_mosinmag_T", "uns_ppshmag_T", "uns_ppshmag", "uns_ak47mag_T", "uns_mat49_20_mag", "uns_rpg7grenade", "uns_25Rnd_pm_pa", "uns_rpg7grenade", "uns_20Rnd_sa61", "uns_250Rnd_792x57_Mg42", "uns_25Rnd_pm_pa", "uns_sksmag", "uns_50Rnd_792x57_Mg42", "uns_rpg2grenade", "uns_mat49mag", "uns_ak47mag_T", "uns_sksmag_NT", "uns_mas4956mag", "uns_40mm_mkv_White", "uns_nagant_m1895mag", "uns_40mm_mkv_Green", "uns_mat49mag_NT", "uns_30Rnd_kurtz_stg", "uns_20Rnd_APS", "uns_40mm_mkv_White", "uns_B40grenade", "uns_250Rnd_792x57_Mg42", "uns_30Rnd_kurtz_stg", "uns_mat49mag_T", "uns_6Rnd_czak", "uns_rpdmag", "uns_25Rnd_pm_pa", "uns_mas36mag", "uns_40mm_mkv_White", "uns_1Rnd_SmokeRed_MKV", "uns_k50mag_NT", "uns_30Rnd_kurtz_stg", "uns_k50mag_NT", "uns_ppshmag", "uns_kar98kmag", "uns_sksmag", "uns_20Rnd_APS", "uns_25Rnd_pm", "uns_20Rnd_sa61", "uns_type99mag", "uns_1Rnd_SmokeYellow_MKV", "uns_mosinmag", "uns_25Rnd_pm_pa", "uns_type100_T", "uns_12gaugemag_2", "uns_makarovmag", "uns_40mm_mkv_Yellow", "uns_1Rnd_22mm_lume", "uns_k50mag_T", "uns_ak47mag_NT", "uns_1Rnd_SmokeRed_MKV", "uns_type100_T", "uns_makarovmag", "uns_1Rnd_22mm_lume", "uns_mp40mag", "uns_mas4956mag", "uns_20Rnd_sa61", "uns_ppshmag_NT", "uns_svtmag_T", "uns_makarovmag", "uns_25Rnd_pm", "uns_makarovmag", "uns_ak47mag", "uns_25Rnd_pm_pa", "uns_1Rnd_Smoke_MKV", "uns_mas36mag_T", "uns_type99mag", "uns_mat49mag_T", "uns_sksmag", "uns_mat49mag_T", "uns_sksmag_T", "uns_k50mag", "uns_nagant_m1895mag", "uns_40mm_mkv_Yellow", "uns_20Rnd_sa61", "uns_k50mag_NT", "uns_1Rnd_22mm_lume", "uns_mat49mag", "uns_ppshmag_NT", "uns_thompsonmag_20_T", "uns_50Rnd_792x57_Mg42", "uns_50Rnd_792x57_Mg42", "uns_40mm_mkv_Yellow", "uns_mat49mag", "uns_mat49mag_T", "uns_type99mag", "uns_svdmag_T", "uns_6Rnd_czak", "uns_50Rnd_792x57_Mg42", "uns_40mm_mkv_Yellow", "uns_40mm_mkv_Red", "uns_50Rnd_792x57_Mg42", "uns_k50mag_NT", "uns_sksmag_T", "uns_mat49_20_mag", "uns_1Rnd_Smoke_MKV", "uns_40mm_mkv_Yellow", "uns_ak47mag", "uns_k50mag_NT", "uns_mat49mag_T", "uns_mat49_20_mag", "uns_1Rnd_Smoke_MKV", "uns_k50mag_NT", "uns_40mm_mkv_Red", "uns_svdmag_T", "uns_ak47mag", "uns_250Rnd_792x57_Mg42", "uns_type100_T", "uns_ppshmag", "uns_mas36mag_T", "uns_thompsonmag_20", "uns_tokarevmag", "uns_6Rnd_czak", "uns_25Rnd_pm", "uns_svtmag", "uns_ak47mag_T", "uns_makarovmag", "uns_1Rnd_SmokeRed_MKV", "uns_20Rnd_sa61_pa", "uns_mosinmag", "uns_sksmag_NT", "uns_thompsonmag_20_NT", "uns_B40grenade", "uns_ak47mag_T", "uns_250Rnd_792x57_Mg42", "uns_1Rnd_22mm_lume", "uns_thompsonmag_20_NT", "uns_sksmag_T", "uns_type99mag", "uns_20Rnd_APS", "uns_1Rnd_SmokeGreen_MKV", "uns_1Rnd_SmokeGreen_MKV", "uns_12gaugemag_2", "uns_type100mag", "uns_makarovmag", "uns_svdmag_T", "uns_mat49mag_NT", "uns_mosinmag", "uns_30Rnd_kurtz_stg", "uns_mas36mag", "uns_ppshmag_T", "uns_mp40mag", "uns_mat49mag", "uns_nagant_m1895mag", "uns_20Rnd_sa61", "uns_1Rnd_22mm_lume", "uns_20Rnd_sa61_pa", "uns_B40grenade", "uns_1Rnd_22mm_lume", "uns_thompsonmag_20", "uns_20Rnd_APS", "uns_k50mag", "uns_type99mag", "uns_12gaugemag_2", "uns_thompsonmag_20_T", "uns_k50mag_T", "uns_ppshmag_NT", "uns_kar98kmag", "uns_mas36mag", "uns_mat49mag_NT", "uns_svtmag_T", "uns_1Rnd_SmokeRed_MKV", "uns_mat49mag", "uns_kar98kmag_T", "uns_ppshmag_NT", "uns_type100_T", "uns_mas36mag_T", "uns_thompsonmag_20_T", "uns_kar98kmag_T", "uns_25Rnd_pm", "uns_mosinmag", "uns_sksmag", "uns_type100_T", "uns_thompsonmag_20", "uns_mas36mag", "uns_thompsonmag_20", "uns_mas36mag", "uns_tokarevmag", "uns_1Rnd_SmokeRed_MKV", "uns_mas4956mag", "uns_25Rnd_pm", "uns_ak47mag", "uns_50Rnd_792x57_Mg42", "uns_1Rnd_SmokeYellow_MKV", "uns_type100_NT", "uns_ak47mag_T", "uns_kar98kmag", "uns_mat49_20_mag", "uns_svdmag", "uns_1Rnd_22mm_lume", "uns_nagant_m1895mag", "uns_mat49mag_NT", "uns_k50mag_T", "uns_mat49mag_T", "uns_thompsonmag_20_NT", "uns_mas4956mag_T", "uns_6Rnd_czak", "uns_40mm_mkv_Green", "uns_rpg2grenade", "uns_rpdmag", "uns_thompsonmag_20_NT", "uns_mosinmag_T", "uns_mas36mag_T", "uns_ak47mag", "uns_type100mag", "uns_ak47mag_T", "uns_25Rnd_pm_pa", "uns_40mm_mkv_Red", "uns_1Rnd_SmokeRed_MKV", "uns_1Rnd_SmokeYellow_MKV", "uns_thompsonmag_20_T", "uns_mat49_20_mag", "uns_250Rnd_792x57_Mg42", "uns_rpg2grenade", "uns_6Rnd_czak", "uns_ak47mag", "uns_20Rnd_APS", "uns_rpg7grenade", "uns_type99mag", "uns_type100mag", "uns_ppshmag_NT", "uns_12gaugemag_2", "uns_rpg2grenade", "uns_svdmag_T", "uns_svtmag", "uns_svdmag", "uns_20Rnd_sa61", "uns_mas4956mag_T", "uns_mosinmag", "uns_40mm_mkv_Green", "uns_12gaugemag_2", "uns_ppshmag_NT", "uns_k50mag_T", "uns_mas36mag", "uns_20Rnd_sa61", "uns_mat49_20_mag", "uns_1Rnd_SmokeGreen_MKV", "uns_mas36mag", "uns_ak47mag", "uns_rpdmag", "uns_sksmag_NT", "uns_k50mag_T", "uns_type100_NT", "uns_thompsonmag_20_NT", "uns_makarovmag", "uns_1Rnd_SmokeRed_MKV", "uns_makarovmag", "uns_tokarevmag", "uns_type99mag_T", "uns_sksmag_T", "uns_k50mag_NT", "uns_mosinmag", "uns_12gaugemag_2", "uns_mosinmag_T", "uns_k50mag_T", "uns_k50mag_T", "uns_thompsonmag_20_T", "uns_50Rnd_792x57_Mg42", "uns_mp40mag", "uns_svtmag_T", "uns_rpdmag", "uns_sksmag_T", "uns_svtmag", "uns_20Rnd_sa61_pa", "uns_ak47mag_NT", "uns_mat49_20_mag", "uns_thompsonmag_20_NT", "uns_rpg2grenade", "uns_svtmag_T", "uns_type100_NT", "uns_rpg7grenade", "uns_30Rnd_kurtz_stg", "uns_250Rnd_792x57_Mg42", "uns_type100_T", "uns_k50mag", "uns_k50mag", "uns_mosinmag", "uns_type100mag", "uns_kar98kmag", "uns_50Rnd_792x57_Mg42", "uns_svtmag_T", "uns_mas36mag_T", "uns_mas4956mag_T", "uns_rpdmag", "uns_20Rnd_APS", "uns_svtmag_T", "uns_25Rnd_pm", "uns_kar98kmag", "uns_sksmag", "uns_mas4956mag", "uns_1Rnd_Smoke_MKV", "uns_mas36mag", "uns_type100_NT", "uns_mp40mag", "uns_1Rnd_SmokeRed_MKV", "uns_k50mag_NT", "uns_mat49mag_T", "uns_mas4956mag_T", "uns_ak47mag_NT", "uns_1Rnd_SmokeYellow_MKV", "uns_thompsonmag_20_NT", "uns_rpdmag", "uns_ppshmag_T", "uns_kar98kmag", "uns_k50mag_T", "uns_ak47mag_T", "uns_6Rnd_czak", "uns_50Rnd_792x57_Mg42", "uns_rpdmag", "uns_rpg7grenade", "uns_mat49mag", "uns_mat49_20_mag", "uns_40mm_mkv_Yellow", "uns_1Rnd_SmokeRed_MKV", "uns_B40grenade", "uns_20Rnd_sa61_pa", "uns_rpg7grenade", "uns_kar98kmag", "uns_40mm_mkv_Green", "uns_svtmag", "uns_nagant_m1895mag", "uns_ppshmag_T", "uns_sksmag_NT", "uns_tokarevmag", "uns_thompsonmag_20_T", "uns_12gaugemag_2", "uns_mp40mag", "uns_svtmag", "uns_12gaugemag_2", "uns_mp40mag", "uns_6Rnd_czak", "uns_rpg2grenade", "uns_nagant_m1895mag", "uns_30Rnd_kurtz_stg", "uns_sksmag_NT", "uns_type100_NT", "uns_1Rnd_SmokeGreen_MKV", "uns_40mm_mkv_Red", "uns_sksmag_T", "uns_40mm_mkv_Yellow", "uns_svtmag_T", "uns_mas36mag", "uns_ak47mag_NT", "uns_sksmag_NT", "uns_1Rnd_SmokeYellow_MKV", "uns_mat49_20_mag", "uns_ppshmag_T", "uns_type99mag", "uns_ppshmag_NT", "uns_sksmag_NT", "uns_svdmag", "uns_type100mag", "uns_k50mag_NT", "uns_rpg7grenade", "uns_mas36mag", "uns_thompsonmag_20_NT", "uns_50Rnd_792x57_Mg42", "uns_mosinmag_T", "uns_svdmag_T", "uns_40mm_mkv_Yellow", "uns_mp40mag", "uns_kar98kmag", "uns_svtmag", "uns_kar98kmag", "uns_rpdmag", "uns_thompsonmag_20_T", "uns_sksmag_NT", "uns_nagant_m1895mag", "uns_30Rnd_kurtz_stg", "uns_6Rnd_czak", "uns_mas36mag_T", "uns_thompsonmag_20_T", "uns_type100_T", "uns_20Rnd_sa61", "uns_sksmag", "uns_25Rnd_pm", "uns_50Rnd_792x57_Mg42", "uns_makarovmag", "uns_ppshmag", "uns_tokarevmag", "uns_rpg7grenade", "uns_type100mag", "uns_sksmag_T", "uns_svtmag_T", "uns_mosinmag_T", "uns_type100_T", "uns_1Rnd_Smoke_MKV", "uns_1Rnd_22mm_lume", "uns_svtmag", "uns_30Rnd_kurtz_stg", "uns_40mm_mkv_Yellow", "uns_kar98kmag_T", "uns_mat49mag_NT", "uns_type100_NT", "uns_nagant_m1895mag", "uns_mas4956mag", "uns_type99mag_T", "uns_sksmag_T", "uns_svdmag_T", "uns_type100mag", "uns_k50mag_T", "uns_1Rnd_Smoke_MKV", "uns_svtmag", "uns_k50mag_T", "uns_mas4956mag", "uns_tokarevmag", "uns_mosinmag", "uns_nagant_m1895mag", "uns_kar98kmag_T", "uns_makarovmag", "uns_rpdmag", "uns_mat49mag", "uns_type100mag", "uns_1Rnd_SmokeGreen_MKV", "uns_6Rnd_czak", "uns_ak47mag_NT", "uns_ak47mag_NT", "uns_ppshmag", "uns_sksmag", "uns_type99mag_T", "uns_1Rnd_Smoke_MKV", "uns_k50mag", "uns_1Rnd_SmokeYellow_MKV", "uns_k50mag", "uns_ppshmag_NT", "uns_1Rnd_SmokeGreen_MKV", "uns_mat49mag", "uns_type100_NT", "uns_thompsonmag_20_T", "uns_svdmag", "uns_1Rnd_SmokeYellow_MKV", "uns_1Rnd_Smoke_MKV", "uns_type100_T", "uns_nagant_m1895mag", "uns_mas4956mag_T", "uns_ak47mag_T", "uns_40mm_mkv_Red", "uns_40mm_mkv_Red", "uns_1Rnd_22mm_lume", "uns_k50mag_NT", "uns_mas36mag", "uns_mas4956mag_T", "uns_k50mag", "uns_20Rnd_APS", "uns_1Rnd_SmokeYellow_MKV", "uns_svdmag", "uns_type99mag", "uns_svtmag", "uns_mosinmag_T", "uns_25Rnd_pm", "uns_ppshmag", "uns_rpg7grenade", "uns_1Rnd_22mm_lume", "uns_ppshmag_T", "uns_type100_T", "uns_kar98kmag_T", "uns_mas36mag", "uns_mas36mag", "uns_20Rnd_sa61_pa", "uns_thompsonmag_20", "uns_30Rnd_kurtz_stg", "uns_250Rnd_792x57_Mg42", "uns_1Rnd_SmokeRed_MKV", "uns_40mm_mkv_Red", "uns_thompsonmag_20", "uns_thompsonmag_20", "uns_ppshmag_T", "uns_mat49mag", "uns_40mm_mkv_Red", "uns_mas36mag_T", "uns_12gaugemag_2", "uns_rpdmag", "uns_sksmag", "uns_svtmag", "uns_40mm_mkv_Red", "uns_25Rnd_pm_pa", "uns_rpg7grenade", "uns_40mm_mkv_Yellow", "uns_k50mag", "uns_40mm_mkv_Yellow", "uns_thompsonmag_20", "uns_mas4956mag", "uns_type100mag", "uns_1Rnd_SmokeGreen_MKV", "uns_1Rnd_SmokeGreen_MKV", "uns_ak47mag", "uns_25Rnd_pm", "uns_12gaugemag_2", "uns_type100mag", "uns_40mm_mkv_Red", "uns_ak47mag_NT", "uns_thompsonmag_20", "uns_type99mag", "uns_20Rnd_sa61_pa", "uns_thompsonmag_20", "uns_12gaugemag_2", "uns_mat49mag_NT", "uns_kar98kmag_T", "uns_rpg2grenade", "uns_1Rnd_22mm_lume", "uns_40mm_mkv_White", "uns_25Rnd_pm_pa", "uns_sksmag", "uns_mat49mag_T", "uns_sksmag_NT", "uns_svtmag_T", "uns_kar98kmag_T", "uns_20Rnd_sa61_pa", "uns_mp40mag", "uns_B40grenade", "uns_rpg2grenade", "uns_ak47mag_T", "uns_20Rnd_sa61_pa", "uns_nagant_m1895mag", "uns_40mm_mkv_Yellow", "uns_mosinmag_T", "uns_1Rnd_SmokeRed_MKV", "uns_ppshmag_T", "uns_thompsonmag_20", "uns_ak47mag_T", "uns_type99mag_T", "uns_ppshmag_T", "uns_ppshmag", "uns_ak47mag", "uns_25Rnd_pm", "uns_1Rnd_SmokeRed_MKV", "uns_40mm_mkv_Green", "uns_mp40mag", "uns_type99mag_T", "uns_ak47mag_T", "uns_250Rnd_792x57_Mg42", "uns_40mm_mkv_White", "uns_mas4956mag", "uns_ak47mag_NT", "uns_type99mag", "uns_svdmag_T", "uns_mosinmag_T", "uns_1Rnd_SmokeGreen_MKV", "uns_50Rnd_792x57_Mg42", "uns_type100mag", "uns_thompsonmag_20_NT", "uns_20Rnd_APS", "uns_mp40mag", "uns_mas36mag_T", "uns_mosinmag", "uns_mas4956mag_T", "uns_40mm_mkv_White", "uns_type99mag_T", "uns_sksmag_NT", "uns_6Rnd_czak", "uns_B40grenade", "uns_mat49mag_NT", "uns_20Rnd_sa61", "uns_mat49mag", "uns_25Rnd_pm", "uns_mosinmag_T", "uns_rpg7grenade", "uns_ppshmag_NT", "uns_1Rnd_SmokeGreen_MKV", "uns_sksmag_NT", "uns_nagant_m1895mag", "uns_12gaugemag_2", "uns_mat49mag_T", "uns_tokarevmag", "uns_kar98kmag", "uns_type99mag", "uns_40mm_mkv_Red", "uns_25Rnd_pm_pa", "uns_mas4956mag", "uns_tokarevmag", "uns_40mm_mkv_White", "uns_1Rnd_SmokeYellow_MKV", "uns_type99mag_T", "uns_type100_NT", "uns_50Rnd_792x57_Mg42", "uns_20Rnd_APS", "uns_1Rnd_SmokeGreen_MKV", "uns_thompsonmag_20_NT", "uns_tokarevmag", "uns_mas4956mag_T", "uns_ppshmag_T", "uns_rpg7grenade", "uns_ak47mag_T", "uns_25Rnd_pm_pa", "uns_kar98kmag", "uns_kar98kmag", "uns_20Rnd_sa61_pa", "uns_ppshmag", "uns_mosinmag_T", "uns_kar98kmag", "uns_sksmag_NT", "uns_40mm_mkv_Green", "uns_250Rnd_792x57_Mg42", "uns_mosinmag_T", "uns_kar98kmag_T", "uns_25Rnd_pm_pa", "uns_25Rnd_pm", "uns_40mm_mkv_White", "uns_1Rnd_Smoke_MKV", "uns_mas4956mag_T", "uns_mas36mag", "uns_ppshmag", "uns_mas4956mag", "uns_mat49mag_T", "uns_thompsonmag_20", "uns_type100mag", "uns_40mm_mkv_White", "uns_mat49_20_mag", "uns_type99mag", "uns_40mm_mkv_Red", "uns_ppshmag_NT", "uns_k50mag_NT", "uns_40mm_mkv_Red", "uns_ak47mag_T", "uns_ppshmag_T", "uns_type99mag", "uns_20Rnd_sa61_pa", "uns_30Rnd_kurtz_stg", "uns_B40grenade", "uns_mas36mag_T", "uns_sksmag_T", "uns_40mm_mkv_Green", "uns_svtmag", "uns_mosinmag", "uns_type100_NT", "uns_nagant_m1895mag", "uns_B40grenade", "uns_mas36mag_T", "uns_kar98kmag_T", "uns_sksmag_NT", "uns_25Rnd_pm_pa", "uns_40mm_mkv_Green", "uns_sksmag", "uns_25Rnd_pm", "uns_ppshmag", "uns_B40grenade", "uns_type99mag_T", "uns_mosinmag_T", "uns_sksmag_T", "uns_sksmag_NT", "uns_30Rnd_kurtz_stg", "uns_mas36mag_T", "uns_mas36mag", "uns_type100mag", "uns_k50mag_T", "uns_40mm_mkv_Green", "uns_mosinmag", "uns_rpdmag", "uns_ak47mag_NT", "uns_k50mag_NT", "uns_mas4956mag", "uns_type100_T", "uns_svdmag", "uns_mosinmag_T", "uns_tokarevmag", "uns_thompsonmag_20_NT", "uns_type100_T", "uns_svtmag_T", "uns_40mm_mkv_Red", "uns_mas4956mag_T", "uns_40mm_mkv_Yellow", "uns_mp40mag", "uns_tokarevmag", "uns_ak47mag", "uns_type100_NT", "uns_B40grenade", "uns_k50mag_T", "uns_250Rnd_792x57_Mg42", "uns_k50mag", "uns_40mm_mkv_Green", "uns_20Rnd_sa61_pa", "uns_40mm_mkv_White", "uns_250Rnd_792x57_Mg42", "uns_svtmag", "uns_30Rnd_kurtz_stg", "uns_svdmag", "uns_ak47mag_NT", "uns_svdmag_T", "uns_1Rnd_SmokeYellow_MKV", "uns_mat49_20_mag", "uns_svdmag", "uns_rpg2grenade", "uns_mat49mag_NT", "uns_mas4956mag", "uns_20Rnd_sa61", "uns_ppshmag_NT", "uns_mosinmag", "uns_1Rnd_SmokeGreen_MKV", "uns_makarovmag", "uns_mas4956mag_T", "uns_rpg7grenade", "uns_rpg2grenade", "uns_kar98kmag_T", "uns_30Rnd_kurtz_stg", "uns_thompsonmag_20_T", "uns_1Rnd_Smoke_MKV", "uns_ak47mag", "uns_mat49_20_mag", "uns_mat49mag_T", "uns_mosinmag_T", "uns_mat49_20_mag", "uns_ak47mag_T", "uns_type99mag_T", "uns_rpdmag", "uns_20Rnd_sa61", "uns_40mm_mkv_Green", "uns_rpdmag", "uns_mat49mag", "uns_type99mag_T", "uns_20Rnd_sa61", "uns_1Rnd_SmokeRed_MKV", "uns_mat49mag_T", "uns_mp40mag", "uns_sksmag_T", "uns_mat49mag_NT", "uns_20Rnd_sa61", "uns_ppshmag_NT", "uns_sksmag_T", "uns_250Rnd_792x57_Mg42", "uns_svtmag_T", "uns_svtmag_T", "uns_svdmag_T", "uns_k50mag", "uns_6Rnd_czak", "uns_rpdmag", "uns_mat49_20_mag", "uns_rpg7grenade", "uns_kar98kmag_T", "uns_1Rnd_22mm_lume", "uns_thompsonmag_20", "uns_rpg7grenade", "uns_ak47mag_NT", "uns_20Rnd_sa61", "uns_mas36mag_T", "uns_40mm_mkv_White", "uns_makarovmag", "uns_svdmag_T", "uns_type99mag_T", "uns_type100_T", "uns_1Rnd_SmokeGreen_MKV", "uns_1Rnd_SmokeYellow_MKV"};

		/*
			Percental Item Spawn Chances of UStraps:

			uns_mk2gren                   = 4.17%
			uns_m61gren                   = 4.17%
			uns_m67gren                   = 4.17%
			uns_m14gren                   = 4.17%
			uns_m18Purple                 = 4.17%
			uns_m18Yellow                 = 4.17%
			uns_m18Green                  = 4.17%
			uns_m18red                    = 4.17%
			uns_m18white                  = 4.17%
			uns_m18Orange                 = 4.17%
			uns_m18Blue                   = 4.17%
			uns_traps_flare_mag           = 4.17%
			uns_traps_m7_mag              = 4.17%
			uns_traps_nade_mag            = 4.17%
			uns_traps_nade_mag3           = 4.17%
			uns_traps_nade_mag7           = 4.17%
			uns_traps_claymore_mag        = 4.17%
			uns_traps_claymore_remote_mag = 4.17%
			uns_traps_mine_mag            = 4.17%
			uns_mine_m14_mag              = 4.17%
			uns_mine_IN_mag               = 4.17%
			uns_mine_TM_mag               = 4.17%
			uns_M118_mag_remote           = 4.17%
			PipeBomb                      = 4.17%
		*/
		UStraps[] = {"PipeBomb", "uns_m18white", "uns_m18Green", "uns_traps_nade_mag7", "PipeBomb", "uns_mine_m14_mag", "uns_mine_m14_mag", "uns_traps_mine_mag", "uns_traps_mine_mag", "uns_traps_flare_mag", "uns_mine_TM_mag", "uns_m18Yellow", "uns_traps_nade_mag7", "uns_m18Green", "uns_m18white", "uns_traps_mine_mag", "PipeBomb", "uns_m14gren", "uns_traps_flare_mag", "uns_traps_flare_mag", "uns_traps_m7_mag", "uns_m18Green", "uns_traps_claymore_mag", "uns_m18Green", "uns_m18white", "uns_m18red", "uns_M118_mag_remote", "uns_m14gren", "uns_traps_flare_mag", "uns_m18red", "uns_traps_nade_mag", "uns_m67gren", "uns_m61gren", "uns_m18Green", "uns_M118_mag_remote", "uns_mine_IN_mag", "uns_mk2gren", "uns_traps_mine_mag", "uns_m18red", "uns_m18red", "uns_m18red", "uns_m67gren", "uns_traps_nade_mag3", "uns_m61gren", "uns_m14gren", "uns_m61gren", "uns_mk2gren", "uns_m18white", "uns_m18Blue", "PipeBomb", "uns_mine_TM_mag", "uns_traps_nade_mag", "uns_traps_flare_mag", "uns_m18white", "uns_m18Blue", "uns_mine_m14_mag", "uns_traps_mine_mag", "uns_traps_nade_mag", "uns_m18Yellow", "uns_traps_m7_mag", "PipeBomb", "uns_m18red", "uns_m18Purple", "uns_mine_m14_mag", "uns_m18red", "uns_traps_claymore_remote_mag", "uns_traps_m7_mag", "uns_m18Blue", "uns_m18white", "uns_m14gren", "uns_m67gren", "uns_mine_TM_mag", "uns_traps_claymore_mag", "uns_m18Blue", "uns_traps_mine_mag", "uns_m18Purple", "PipeBomb", "uns_m18white", "uns_m18Purple", "uns_m61gren", "uns_m14gren", "uns_m18Blue", "PipeBomb", "uns_mine_IN_mag", "uns_traps_nade_mag", "uns_m18Yellow", "uns_traps_mine_mag", "uns_m18Yellow", "uns_m18Green", "uns_mine_TM_mag", "uns_traps_flare_mag", "uns_traps_m7_mag", "uns_mine_IN_mag", "uns_traps_mine_mag", "uns_traps_flare_mag", "uns_traps_mine_mag", "uns_traps_nade_mag", "uns_mk2gren", "uns_mine_TM_mag", "uns_mine_IN_mag", "uns_traps_claymore_mag", "uns_traps_nade_mag3", "uns_m18Blue", "PipeBomb", "uns_traps_nade_mag3", "uns_traps_nade_mag3", "uns_traps_claymore_mag", "uns_mine_TM_mag", "uns_mk2gren", "uns_traps_nade_mag7", "uns_mine_IN_mag", "uns_traps_nade_mag7", "uns_traps_m7_mag", "uns_mine_IN_mag", "PipeBomb", "uns_m14gren", "uns_mine_m14_mag", "uns_traps_nade_mag3", "uns_M118_mag_remote", "uns_m18Orange", "uns_traps_claymore_mag", "uns_traps_claymore_remote_mag", "uns_mk2gren", "uns_mine_IN_mag", "uns_mine_IN_mag", "uns_traps_nade_mag", "uns_traps_claymore_mag", "uns_m18Green", "uns_M118_mag_remote", "uns_traps_flare_mag", "uns_m67gren", "uns_m18Purple", "uns_traps_m7_mag", "uns_m67gren", "uns_m18white", "uns_mine_TM_mag", "uns_traps_mine_mag", "uns_m18Orange", "uns_m18Orange", "uns_traps_mine_mag", "uns_traps_claymore_remote_mag", "uns_M118_mag_remote", "uns_traps_nade_mag7", "uns_traps_nade_mag7", "uns_traps_nade_mag3", "uns_traps_claymore_remote_mag", "uns_mine_m14_mag", "uns_mk2gren", "uns_m14gren", "uns_m18Green", "uns_M118_mag_remote", "uns_m18red", "uns_m18Yellow", "uns_m18Purple", "uns_m18red", "uns_mine_TM_mag", "uns_m18Yellow", "uns_m18Purple", "uns_m18Blue", "uns_mk2gren", "uns_mine_TM_mag", "uns_traps_m7_mag", "uns_traps_claymore_remote_mag", "uns_mine_m14_mag", "uns_traps_nade_mag7", "uns_traps_m7_mag", "uns_traps_m7_mag", "uns_m18Purple", "uns_m18white", "uns_traps_nade_mag", "uns_mk2gren", "uns_m18red", "uns_M118_mag_remote", "uns_mk2gren", "uns_mine_TM_mag", "uns_m18white", "uns_mine_m14_mag", "uns_m18Green", "uns_m18Yellow", "uns_m14gren", "uns_m67gren", "uns_traps_mine_mag", "uns_traps_nade_mag7", "uns_m61gren", "uns_mine_m14_mag", "uns_m18Purple", "uns_traps_nade_mag3", "uns_traps_nade_mag7", "uns_m18Orange", "uns_traps_nade_mag7", "uns_traps_flare_mag", "uns_m18Purple", "uns_m61gren", "uns_traps_m7_mag", "uns_traps_claymore_remote_mag", "uns_m18Blue", "uns_M118_mag_remote", "uns_traps_claymore_remote_mag", "uns_m61gren", "uns_traps_claymore_remote_mag", "uns_m18Orange", "uns_m67gren", "uns_m18Green", "uns_traps_mine_mag", "uns_m18Orange", "uns_traps_nade_mag", "uns_m61gren", "uns_m14gren", "uns_m14gren", "uns_m18Yellow", "uns_m18Green", "uns_m18Green", "uns_m18Blue", "uns_m61gren", "uns_traps_nade_mag3", "uns_traps_claymore_remote_mag", "PipeBomb", "uns_traps_mine_mag", "uns_traps_claymore_mag", "uns_m61gren", "uns_traps_claymore_remote_mag", "uns_traps_flare_mag", "uns_m18white", "uns_m14gren", "uns_traps_nade_mag3", "uns_m18Blue", "uns_m18Orange", "uns_m18Orange", "uns_traps_claymore_mag", "uns_mine_m14_mag", "uns_m67gren", "uns_m14gren", "uns_mine_IN_mag", "uns_m14gren", "uns_mine_m14_mag", "uns_m67gren", "uns_mk2gren", "uns_mine_TM_mag", "uns_m18Orange", "uns_traps_m7_mag", "uns_m18red", "uns_m18Purple", "uns_traps_claymore_remote_mag", "uns_traps_claymore_remote_mag", "PipeBomb", "uns_traps_nade_mag7", "uns_m61gren", "uns_traps_flare_mag", "uns_traps_claymore_remote_mag", "uns_traps_m7_mag", "uns_traps_m7_mag", "uns_m67gren", "uns_mine_TM_mag", "uns_M118_mag_remote", "uns_m18Blue", "uns_M118_mag_remote", "uns_m18Yellow", "uns_m18Orange", "uns_m18Purple", "uns_m18Yellow", "uns_traps_nade_mag", "uns_m18Orange", "PipeBomb", "uns_mine_m14_mag", "uns_traps_m7_mag", "uns_m18white", "uns_m18Green", "uns_traps_nade_mag7", "PipeBomb", "uns_m18Blue", "uns_m18red", "uns_m61gren", "uns_mine_IN_mag", "uns_traps_nade_mag3", "uns_m18Purple", "uns_mine_m14_mag", "uns_mine_m14_mag", "uns_traps_claymore_mag", "PipeBomb", "uns_m18Purple", "uns_mk2gren", "uns_m18red", "uns_m14gren", "uns_traps_claymore_mag", "uns_traps_claymore_mag", "uns_traps_claymore_mag", "uns_traps_nade_mag", "uns_m18Green", "uns_mine_TM_mag", "uns_m67gren", "uns_traps_nade_mag3", "uns_m18white", "uns_traps_nade_mag3", "uns_m18Yellow", "uns_traps_flare_mag", "uns_traps_nade_mag", "uns_m18Blue", "uns_m18white", "uns_m18Purple", "uns_traps_claymore_mag", "uns_m14gren", "uns_m67gren", "uns_m67gren", "uns_traps_nade_mag7", "uns_traps_nade_mag", "uns_traps_m7_mag", "uns_mk2gren", "uns_traps_nade_mag", "uns_M118_mag_remote", "uns_traps_nade_mag3", "uns_m67gren", "uns_m61gren", "uns_M118_mag_remote", "uns_mine_IN_mag", "uns_traps_flare_mag", "uns_m18red", "uns_m18Yellow", "uns_m61gren", "uns_M118_mag_remote", "uns_mine_m14_mag", "uns_m18Green", "uns_traps_flare_mag", "uns_mine_IN_mag", "uns_traps_mine_mag", "uns_m18red", "uns_m61gren", "uns_traps_nade_mag7", "uns_traps_nade_mag3", "uns_m18Orange", "uns_traps_nade_mag7", "uns_mine_IN_mag", "uns_mine_IN_mag", "uns_mk2gren", "uns_traps_claymore_remote_mag", "uns_m18Yellow", "uns_traps_nade_mag", "uns_traps_claymore_mag", "uns_m18Orange", "uns_mine_TM_mag", "uns_m18Purple", "uns_traps_claymore_remote_mag", "uns_M118_mag_remote", "PipeBomb", "uns_mk2gren", "uns_M118_mag_remote", "uns_m67gren", "uns_traps_flare_mag", "uns_m18Orange", "uns_mine_TM_mag", "uns_mk2gren", "uns_m18Orange", "uns_m18Blue", "uns_m18white", "uns_m18Yellow", "uns_traps_nade_mag", "uns_m18Blue", "uns_traps_claymore_mag", "uns_mine_IN_mag", "uns_m18Yellow", "uns_traps_nade_mag3"};

		/*
			Percental Item Spawn Chances of VCtraps:

			uns_molotov_mag = 16.67%
			uns_f1gren      = 16.67%
			uns_rg42gren    = 16.67%
			uns_rgd33gren   = 16.67%
			uns_t67gren     = 16.67%
			uns_rdg2        = 16.67%
		*/
		VCtraps[] = {"uns_rdg2", "uns_t67gren", "uns_molotov_mag", "uns_rdg2", "uns_t67gren", "uns_molotov_mag", "uns_rg42gren", "uns_molotov_mag", "uns_rg42gren", "uns_rgd33gren", "uns_f1gren", "uns_rdg2", "uns_molotov_mag", "uns_t67gren", "uns_molotov_mag", "uns_rdg2", "uns_rdg2", "uns_rg42gren", "uns_rg42gren", "uns_molotov_mag", "uns_f1gren", "uns_f1gren", "uns_rg42gren", "uns_rgd33gren", "uns_f1gren", "uns_f1gren", "uns_rdg2", "uns_rdg2", "uns_rgd33gren", "uns_f1gren", "uns_rgd33gren", "uns_rgd33gren", "uns_t67gren", "uns_rdg2", "uns_t67gren", "uns_t67gren", "uns_rg42gren", "uns_rg42gren", "uns_t67gren", "uns_rg42gren", "uns_f1gren", "uns_rgd33gren", "uns_t67gren", "uns_rgd33gren", "uns_rg42gren", "uns_rgd33gren", "uns_t67gren", "uns_f1gren", "uns_molotov_mag", "uns_rdg2", "uns_t67gren", "uns_molotov_mag", "uns_f1gren", "uns_rgd33gren", "uns_molotov_mag", "uns_rdg2", "uns_rg42gren", "uns_rg42gren", "uns_molotov_mag", "uns_f1gren", "uns_t67gren", "uns_rdg2", "uns_rg42gren", "uns_molotov_mag", "uns_f1gren", "uns_rdg2", "uns_rgd33gren", "uns_f1gren", "uns_rgd33gren", "uns_f1gren", "uns_rg42gren", "uns_rdg2", "uns_f1gren", "uns_rg42gren", "uns_molotov_mag", "uns_rgd33gren", "uns_molotov_mag", "uns_t67gren", "uns_f1gren", "uns_t67gren", "uns_t67gren", "uns_rg42gren", "uns_molotov_mag", "uns_rdg2", "uns_molotov_mag", "uns_rdg2", "uns_rgd33gren", "uns_rgd33gren", "uns_t67gren", "uns_rgd33gren"};

		/*
			Percental Item Spawn Chances of HandGrenades:

			uns_v40gren  = 16.67%
			uns_m61gren  = 16.67%
			uns_m67gren  = 16.67%
			uns_m34gren  = 16.67%
			uns_m14gren  = 16.67%
			uns_m308gren = 16.67%
		*/
		HandGrenades[] = {"uns_m67gren", "uns_m34gren", "uns_m308gren", "uns_m61gren", "uns_m34gren", "uns_m61gren", "uns_m308gren", "uns_m67gren", "uns_m61gren", "uns_m67gren", "uns_m308gren", "uns_m14gren", "uns_v40gren", "uns_m308gren", "uns_m67gren", "uns_m34gren", "uns_m61gren", "uns_m34gren", "uns_m308gren", "uns_m34gren", "uns_m34gren", "uns_m67gren", "uns_m14gren", "uns_m308gren", "uns_v40gren", "uns_m34gren", "uns_m14gren", "uns_m308gren", "uns_m34gren", "uns_m61gren", "uns_m14gren", "uns_m308gren", "uns_m61gren", "uns_m14gren", "uns_m34gren", "uns_m14gren", "uns_m67gren", "uns_m14gren", "uns_m308gren", "uns_m14gren", "uns_m14gren", "uns_v40gren", "uns_m308gren", "uns_m14gren", "uns_v40gren", "uns_m61gren", "uns_v40gren", "uns_m14gren", "uns_m14gren", "uns_v40gren", "uns_m308gren", "uns_m67gren", "uns_m308gren", "uns_v40gren", "uns_m67gren", "uns_m61gren", "uns_m308gren", "uns_m34gren", "uns_m34gren", "uns_v40gren", "uns_m67gren", "uns_m61gren", "uns_m67gren", "uns_v40gren", "uns_m61gren", "uns_m34gren", "uns_v40gren", "uns_m14gren", "uns_m67gren", "uns_m61gren", "uns_m34gren", "uns_v40gren", "uns_m34gren", "uns_m308gren", "uns_m61gren", "uns_m67gren", "uns_m67gren", "uns_m34gren", "uns_m61gren", "uns_v40gren", "uns_m61gren", "uns_m308gren", "uns_v40gren", "uns_v40gren", "uns_m14gren", "uns_m67gren", "uns_m61gren", "uns_v40gren", "uns_m14gren", "uns_m67gren"};

		/*
			Percental Item Spawn Chances of Explosives:

			SatchelCharge_Remote_Mag = 50.00%
			DemoCharge_Remote_Mag    = 50.00%
		*/
		Explosives[] = {"DemoCharge_Remote_Mag", "DemoCharge_Remote_Mag", "SatchelCharge_Remote_Mag", "DemoCharge_Remote_Mag", "SatchelCharge_Remote_Mag", "SatchelCharge_Remote_Mag", "SatchelCharge_Remote_Mag", "DemoCharge_Remote_Mag", "SatchelCharge_Remote_Mag", "DemoCharge_Remote_Mag", "SatchelCharge_Remote_Mag", "DemoCharge_Remote_Mag", "SatchelCharge_Remote_Mag", "SatchelCharge_Remote_Mag", "DemoCharge_Remote_Mag", "SatchelCharge_Remote_Mag", "DemoCharge_Remote_Mag", "SatchelCharge_Remote_Mag", "DemoCharge_Remote_Mag", "SatchelCharge_Remote_Mag", "DemoCharge_Remote_Mag", "SatchelCharge_Remote_Mag", "DemoCharge_Remote_Mag", "DemoCharge_Remote_Mag", "DemoCharge_Remote_Mag", "SatchelCharge_Remote_Mag", "DemoCharge_Remote_Mag", "SatchelCharge_Remote_Mag", "DemoCharge_Remote_Mag", "SatchelCharge_Remote_Mag"};

		/*
			Percental Item Spawn Chances of MilitaryClothing:

			UNS_ARMY_BDU      = 4.76%
			UNS_ARMY_BDU_F    = 4.76%
			UNS_ARMY_BDU_65   = 4.76%
			UNS_TIGER_BDU     = 4.76%
			UNS_TIGER2_BDU    = 4.76%
			UNS_TIGER3_BDU    = 4.76%
			UNS_DUCK_BDU      = 4.76%
			UNS_USMC_BDU_65   = 4.76%
			UNS_USMC_BDU_65_2 = 4.76%
			UNS_USMC_FLAK_65  = 4.76%
			UNS_USMC_FLAK2_65 = 4.76%
			UNS_USMC_BDU      = 4.76%
			UNS_USMC_BDU_S    = 4.76%
			UNS_USMC_Flak     = 4.76%
			UNS_USMC_Flak_F   = 4.76%
			UNS_USMC_Flak_S   = 4.76%
			UNS_USMC_Flak_E   = 4.76%
			UNS_USMC_Flak_ES  = 4.76%
			UNS_USMC_LERDL    = 4.76%
			UNS_JPilot_BDU    = 4.76%
			UNS_Pilot_BDU     = 4.76%
		*/
		MilitaryClothing[] = {"UNS_USMC_Flak_S", "UNS_USMC_Flak_E", "UNS_USMC_Flak", "UNS_ARMY_BDU_65", "UNS_DUCK_BDU", "UNS_USMC_BDU", "UNS_USMC_BDU_65", "UNS_USMC_Flak_E", "UNS_USMC_Flak_E", "UNS_JPilot_BDU", "UNS_USMC_BDU_65_2", "UNS_USMC_BDU_65", "UNS_DUCK_BDU", "UNS_USMC_BDU", "UNS_USMC_BDU", "UNS_USMC_FLAK2_65", "UNS_USMC_FLAK_65", "UNS_USMC_LERDL", "UNS_ARMY_BDU", "UNS_ARMY_BDU_65", "UNS_DUCK_BDU", "UNS_USMC_Flak_F", "UNS_USMC_FLAK_65", "UNS_USMC_BDU", "UNS_TIGER_BDU", "UNS_ARMY_BDU_F", "UNS_ARMY_BDU_65", "UNS_USMC_Flak", "UNS_USMC_Flak_ES", "UNS_USMC_BDU_65_2", "UNS_TIGER_BDU", "UNS_USMC_Flak_S", "UNS_JPilot_BDU", "UNS_USMC_BDU_S", "UNS_USMC_BDU_65_2", "UNS_JPilot_BDU", "UNS_USMC_FLAK2_65", "UNS_ARMY_BDU", "UNS_ARMY_BDU_F", "UNS_USMC_Flak_ES", "UNS_ARMY_BDU_65", "UNS_USMC_BDU", "UNS_USMC_FLAK_65", "UNS_USMC_Flak_E", "UNS_Pilot_BDU", "UNS_TIGER_BDU", "UNS_USMC_FLAK2_65", "UNS_USMC_LERDL", "UNS_USMC_Flak_E", "UNS_DUCK_BDU", "UNS_USMC_BDU", "UNS_USMC_BDU_65", "UNS_USMC_FLAK_65", "UNS_USMC_BDU_65_2", "UNS_TIGER2_BDU", "UNS_ARMY_BDU_F", "UNS_USMC_Flak_E", "UNS_Pilot_BDU", "UNS_USMC_Flak_ES", "UNS_ARMY_BDU_F", "UNS_ARMY_BDU", "UNS_JPilot_BDU", "UNS_TIGER_BDU", "UNS_USMC_LERDL", "UNS_TIGER_BDU", "UNS_USMC_BDU_S", "UNS_ARMY_BDU_F", "UNS_ARMY_BDU_65", "UNS_USMC_Flak_ES", "UNS_JPilot_BDU", "UNS_USMC_LERDL", "UNS_USMC_LERDL", "UNS_TIGER2_BDU", "UNS_USMC_Flak_E", "UNS_TIGER3_BDU", "UNS_Pilot_BDU", "UNS_DUCK_BDU", "UNS_USMC_BDU_65", "UNS_USMC_Flak_S", "UNS_DUCK_BDU", "UNS_USMC_FLAK2_65", "UNS_Pilot_BDU", "UNS_USMC_FLAK2_65", "UNS_USMC_Flak_ES", "UNS_JPilot_BDU", "UNS_USMC_BDU_65", "UNS_USMC_Flak_S", "UNS_USMC_Flak", "UNS_USMC_FLAK2_65", "UNS_TIGER2_BDU", "UNS_ARMY_BDU", "UNS_ARMY_BDU", "UNS_USMC_Flak_ES", "UNS_Pilot_BDU", "UNS_DUCK_BDU", "UNS_USMC_Flak_ES", "UNS_JPilot_BDU", "UNS_USMC_Flak_E", "UNS_USMC_BDU", "UNS_USMC_BDU_S", "UNS_Pilot_BDU", "UNS_TIGER3_BDU", "UNS_USMC_LERDL", "UNS_TIGER2_BDU", "UNS_TIGER3_BDU", "UNS_USMC_Flak_F", "UNS_ARMY_BDU", "UNS_DUCK_BDU", "UNS_USMC_Flak", "UNS_USMC_Flak_E", "UNS_ARMY_BDU", "UNS_TIGER2_BDU", "UNS_JPilot_BDU", "UNS_USMC_Flak_F", "UNS_JPilot_BDU", "UNS_ARMY_BDU_F", "UNS_TIGER2_BDU", "UNS_USMC_Flak_S", "UNS_Pilot_BDU", "UNS_TIGER_BDU", "UNS_USMC_BDU_S", "UNS_ARMY_BDU", "UNS_USMC_Flak_ES", "UNS_USMC_BDU", "UNS_USMC_Flak_S", "UNS_TIGER3_BDU", "UNS_USMC_FLAK2_65", "UNS_USMC_FLAK2_65", "UNS_USMC_BDU_65", "UNS_USMC_Flak_E", "UNS_USMC_FLAK_65", "UNS_USMC_Flak", "UNS_USMC_BDU_65", "UNS_USMC_FLAK_65", "UNS_DUCK_BDU", "UNS_USMC_BDU_65", "UNS_USMC_BDU", "UNS_USMC_BDU_65_2", "UNS_ARMY_BDU", "UNS_USMC_FLAK_65", "UNS_ARMY_BDU_65", "UNS_TIGER_BDU", "UNS_TIGER2_BDU", "UNS_USMC_BDU_65_2", "UNS_USMC_LERDL", "UNS_USMC_BDU_65", "UNS_Pilot_BDU", "UNS_USMC_Flak_S", "UNS_USMC_FLAK2_65", "UNS_USMC_Flak_ES", "UNS_ARMY_BDU_65", "UNS_USMC_BDU_65", "UNS_USMC_Flak_ES", "UNS_TIGER2_BDU", "UNS_USMC_Flak_ES", "UNS_USMC_Flak_F", "UNS_USMC_BDU_65", "UNS_USMC_BDU_65_2", "UNS_DUCK_BDU", "UNS_JPilot_BDU", "UNS_TIGER3_BDU", "UNS_USMC_BDU_S", "UNS_USMC_LERDL", "UNS_USMC_BDU", "UNS_USMC_BDU_S", "UNS_TIGER3_BDU", "UNS_USMC_Flak_F", "UNS_USMC_BDU", "UNS_USMC_Flak_F", "UNS_TIGER_BDU", "UNS_ARMY_BDU", "UNS_USMC_FLAK_65", "UNS_TIGER_BDU", "UNS_USMC_Flak_E", "UNS_USMC_Flak_S", "UNS_JPilot_BDU", "UNS_TIGER3_BDU", "UNS_USMC_BDU_S", "UNS_TIGER3_BDU", "UNS_USMC_Flak_F", "UNS_TIGER3_BDU", "UNS_USMC_FLAK2_65", "UNS_USMC_BDU_S", "UNS_USMC_Flak_ES", "UNS_TIGER2_BDU", "UNS_TIGER2_BDU", "UNS_USMC_FLAK_65", "UNS_USMC_Flak_F", "UNS_USMC_BDU", "UNS_USMC_FLAK2_65", "UNS_ARMY_BDU_F", "UNS_ARMY_BDU_F", "UNS_JPilot_BDU", "UNS_TIGER2_BDU", "UNS_TIGER3_BDU", "UNS_ARMY_BDU_F", "UNS_USMC_Flak_ES", "UNS_USMC_BDU_S", "UNS_USMC_Flak_F", "UNS_USMC_Flak_ES", "UNS_USMC_BDU_S", "UNS_ARMY_BDU_65", "UNS_TIGER_BDU", "UNS_USMC_BDU_65", "UNS_USMC_BDU_S", "UNS_USMC_BDU_65", "UNS_ARMY_BDU_F", "UNS_TIGER_BDU", "UNS_USMC_FLAK_65", "UNS_USMC_LERDL", "UNS_TIGER_BDU", "UNS_USMC_LERDL", "UNS_USMC_Flak_E", "UNS_TIGER2_BDU", "UNS_ARMY_BDU_65", "UNS_USMC_Flak_F", "UNS_USMC_Flak_F", "UNS_USMC_Flak_S", "UNS_USMC_Flak", "UNS_DUCK_BDU", "UNS_USMC_LERDL", "UNS_TIGER2_BDU", "UNS_ARMY_BDU_65", "UNS_TIGER3_BDU", "UNS_USMC_LERDL", "UNS_USMC_Flak_F", "UNS_TIGER3_BDU", "UNS_DUCK_BDU", "UNS_TIGER3_BDU", "UNS_USMC_FLAK_65", "UNS_USMC_Flak", "UNS_USMC_FLAK2_65", "UNS_USMC_Flak_S", "UNS_JPilot_BDU", "UNS_USMC_BDU_65_2", "UNS_USMC_FLAK2_65", "UNS_USMC_Flak", "UNS_USMC_BDU_65_2", "UNS_USMC_Flak_S", "UNS_Pilot_BDU", "UNS_USMC_BDU_S", "UNS_Pilot_BDU", "UNS_USMC_BDU_65_2", "UNS_ARMY_BDU_F", "UNS_TIGER_BDU", "UNS_ARMY_BDU", "UNS_ARMY_BDU_F", "UNS_ARMY_BDU_F", "UNS_USMC_Flak", "UNS_USMC_BDU_S", "UNS_USMC_BDU_S", "UNS_USMC_FLAK_65", "UNS_USMC_FLAK2_65", "UNS_Pilot_BDU", "UNS_TIGER_BDU", "UNS_USMC_BDU_65_2", "UNS_USMC_Flak_F", "UNS_Pilot_BDU", "UNS_ARMY_BDU_65", "UNS_USMC_LERDL", "UNS_USMC_Flak", "UNS_USMC_Flak_S", "UNS_TIGER3_BDU", "UNS_TIGER2_BDU", "UNS_JPilot_BDU", "UNS_USMC_BDU_65_2", "UNS_Pilot_BDU", "UNS_ARMY_BDU", "UNS_USMC_BDU_65_2", "UNS_USMC_LERDL", "UNS_USMC_Flak", "UNS_ARMY_BDU_65", "UNS_USMC_BDU_65", "UNS_USMC_FLAK_65", "UNS_USMC_BDU_65", "UNS_USMC_FLAK_65", "UNS_USMC_Flak_F", "UNS_ARMY_BDU", "UNS_JPilot_BDU", "UNS_ARMY_BDU", "UNS_USMC_Flak_S", "UNS_ARMY_BDU_65", "UNS_DUCK_BDU", "UNS_Pilot_BDU", "UNS_USMC_Flak_E", "UNS_USMC_FLAK_65", "UNS_ARMY_BDU_65", "UNS_USMC_Flak_E", "UNS_USMC_BDU_65_2", "UNS_ARMY_BDU", "UNS_USMC_Flak", "UNS_USMC_BDU", "UNS_USMC_Flak", "UNS_Pilot_BDU", "UNS_USMC_Flak_S", "UNS_TIGER2_BDU", "UNS_USMC_BDU", "UNS_DUCK_BDU", "UNS_ARMY_BDU_65", "UNS_USMC_Flak", "UNS_ARMY_BDU_F", "UNS_USMC_LERDL", "UNS_TIGER3_BDU", "UNS_TIGER_BDU", "UNS_USMC_BDU_65_2", "UNS_USMC_BDU_S", "UNS_ARMY_BDU_F", "UNS_USMC_Flak_S", "UNS_USMC_Flak_ES", "UNS_USMC_Flak_F", "UNS_USMC_FLAK2_65", "UNS_USMC_BDU", "UNS_USMC_Flak", "UNS_USMC_Flak_E", "UNS_DUCK_BDU"};

		/*
			Percental Item Spawn Chances of VcClothing:

			UNS_VC_S     = 8.33%
			UNS_VC_U     = 8.33%
			UNS_NVA_G    = 8.33%
			UNS_NVA_K    = 8.33%
			UNS_NVA_KS   = 8.33%
			UNS_DCCR_G   = 8.33%
			UNS_DCCR_B   = 8.33%
			UNS_DCCR_TGS = 8.33%
			UNS_DCCR_BBS = 8.33%
			UNS_DCCR_BTS = 8.33%
			UNS_DCCR_GTS = 8.33%
			UNS_CIV_U    = 8.33%
		*/
		VcClothing[] = {"UNS_NVA_KS", "UNS_DCCR_B", "UNS_DCCR_BBS", "UNS_CIV_U", "UNS_DCCR_BTS", "UNS_CIV_U", "UNS_NVA_G", "UNS_CIV_U", "UNS_VC_S", "UNS_DCCR_GTS", "UNS_NVA_KS", "UNS_NVA_K", "UNS_DCCR_BBS", "UNS_DCCR_TGS", "UNS_DCCR_GTS", "UNS_DCCR_GTS", "UNS_NVA_G", "UNS_NVA_KS", "UNS_DCCR_BTS", "UNS_VC_U", "UNS_VC_U", "UNS_VC_S", "UNS_NVA_KS", "UNS_DCCR_GTS", "UNS_DCCR_BBS", "UNS_CIV_U", "UNS_VC_S", "UNS_NVA_KS", "UNS_VC_S", "UNS_DCCR_G", "UNS_DCCR_BBS", "UNS_DCCR_G", "UNS_DCCR_BBS", "UNS_NVA_KS", "UNS_DCCR_GTS", "UNS_CIV_U", "UNS_NVA_G", "UNS_DCCR_GTS", "UNS_VC_S", "UNS_VC_S", "UNS_DCCR_B", "UNS_NVA_KS", "UNS_DCCR_BTS", "UNS_CIV_U", "UNS_DCCR_BTS", "UNS_DCCR_GTS", "UNS_DCCR_G", "UNS_DCCR_B", "UNS_NVA_G", "UNS_VC_U", "UNS_DCCR_GTS", "UNS_DCCR_BTS", "UNS_NVA_G", "UNS_DCCR_TGS", "UNS_NVA_K", "UNS_CIV_U", "UNS_NVA_K", "UNS_DCCR_TGS", "UNS_DCCR_B", "UNS_CIV_U", "UNS_DCCR_BTS", "UNS_DCCR_BTS", "UNS_VC_U", "UNS_DCCR_G", "UNS_DCCR_G", "UNS_CIV_U", "UNS_NVA_G", "UNS_VC_U", "UNS_DCCR_G", "UNS_NVA_KS", "UNS_VC_S", "UNS_CIV_U", "UNS_CIV_U", "UNS_DCCR_BTS", "UNS_DCCR_B", "UNS_DCCR_G", "UNS_DCCR_G", "UNS_DCCR_GTS", "UNS_NVA_K", "UNS_DCCR_G", "UNS_VC_S", "UNS_DCCR_BBS", "UNS_NVA_K", "UNS_NVA_K", "UNS_DCCR_TGS", "UNS_NVA_G", "UNS_VC_U", "UNS_DCCR_B", "UNS_VC_S", "UNS_DCCR_GTS", "UNS_DCCR_BTS", "UNS_VC_S", "UNS_DCCR_G", "UNS_DCCR_BBS", "UNS_CIV_U", "UNS_DCCR_G", "UNS_VC_U", "UNS_NVA_G", "UNS_DCCR_BTS", "UNS_DCCR_TGS", "UNS_DCCR_GTS", "UNS_DCCR_G", "UNS_DCCR_G", "UNS_NVA_K", "UNS_DCCR_TGS", "UNS_DCCR_B", "UNS_DCCR_GTS", "UNS_DCCR_TGS", "UNS_DCCR_BTS", "UNS_DCCR_TGS", "UNS_NVA_KS", "UNS_VC_U", "UNS_VC_U", "UNS_CIV_U", "UNS_DCCR_B", "UNS_NVA_G", "UNS_NVA_K", "UNS_NVA_KS", "UNS_DCCR_BBS", "UNS_DCCR_BTS", "UNS_DCCR_TGS", "UNS_VC_S", "UNS_VC_S", "UNS_DCCR_BBS", "UNS_DCCR_TGS", "UNS_VC_U", "UNS_NVA_K", "UNS_NVA_G", "UNS_DCCR_GTS", "UNS_DCCR_B", "UNS_DCCR_G", "UNS_DCCR_BBS", "UNS_DCCR_TGS", "UNS_DCCR_BBS", "UNS_VC_U", "UNS_DCCR_BBS", "UNS_NVA_K", "UNS_DCCR_BTS", "UNS_NVA_G", "UNS_DCCR_B", "UNS_DCCR_GTS", "UNS_NVA_G", "UNS_CIV_U", "UNS_VC_U", "UNS_DCCR_TGS", "UNS_VC_U", "UNS_NVA_K", "UNS_NVA_G", "UNS_DCCR_B", "UNS_VC_S", "UNS_CIV_U", "UNS_DCCR_BTS", "UNS_NVA_K", "UNS_DCCR_GTS", "UNS_NVA_KS", "UNS_DCCR_B", "UNS_DCCR_TGS", "UNS_VC_U", "UNS_DCCR_TGS", "UNS_NVA_G", "UNS_DCCR_TGS", "UNS_NVA_KS", "UNS_NVA_G", "UNS_NVA_KS", "UNS_VC_S", "UNS_NVA_K", "UNS_NVA_KS", "UNS_DCCR_B", "UNS_DCCR_BBS", "UNS_DCCR_G", "UNS_NVA_K", "UNS_VC_S", "UNS_DCCR_B", "UNS_DCCR_BBS", "UNS_VC_U", "UNS_NVA_K", "UNS_DCCR_BBS", "UNS_DCCR_BTS", "UNS_NVA_KS", "UNS_DCCR_B"};

		/*
			Percental Item Spawn Chances of MilitaryBackpacks:

			UNS_BA22_Para       = 3.23%
			UNS_Alice_F1        = 3.23%
			UNS_Alice_F2        = 3.23%
			UNS_Alice_FR        = 3.23%
			UNS_Alice_SOG2      = 3.23%
			UNS_ARMY_RTO        = 3.23%
			UNS_ARMY_RTO2       = 3.23%
			UNS_USMC_RTO        = 3.23%
			UNS_Alice_MED2      = 3.23%
			UNS_Alice_1         = 3.23%
			UNS_Alice_2         = 3.23%
			UNS_Alice_3         = 3.23%
			UNS_Alice_4         = 3.23%
			UNS_Alice_5         = 3.23%
			UNS_Alice_F3        = 3.23%
			UNS_Alice_F4        = 3.23%
			UNS_Alice_F10       = 3.23%
			UNS_Alice_F11       = 3.23%
			UNS_USMC_E1         = 3.23%
			UNS_USMC_E2         = 3.23%
			UNS_USMC_E3         = 3.23%
			UNS_USMC_E4         = 3.23%
			UNS_USMC_E5         = 3.23%
			UNS_USMC_R1         = 3.23%
			UNS_USMC_R2         = 3.23%
			UNS_USMC_R3         = 3.23%
			UNS_ANZAC_RUCK      = 3.23%
			UNS_TROP_R1         = 3.23%
			UNS_TROP_R2         = 3.23%
			UNS_TROP_R3         = 3.23%
			uns_sas_alicepack_1 = 3.23%
		*/
		MilitaryBackpacks[] = {"UNS_BA22_Para", "UNS_Alice_MED2", "UNS_Alice_4", "UNS_Alice_1", "UNS_Alice_2", "UNS_Alice_FR", "UNS_Alice_5", "UNS_Alice_MED2", "UNS_Alice_SOG2", "UNS_Alice_F2", "UNS_USMC_E2", "UNS_TROP_R2", "UNS_ARMY_RTO", "UNS_Alice_1", "UNS_Alice_4", "UNS_Alice_F4", "UNS_Alice_2", "UNS_Alice_2", "UNS_USMC_E2", "UNS_TROP_R3", "UNS_USMC_E2", "UNS_Alice_F2", "UNS_USMC_R2", "UNS_TROP_R3", "UNS_USMC_E5", "UNS_Alice_4", "UNS_USMC_E1", "UNS_TROP_R2", "UNS_TROP_R1", "UNS_Alice_3", "UNS_USMC_E2", "UNS_ANZAC_RUCK", "UNS_USMC_R2", "UNS_Alice_F11", "UNS_USMC_E3", "UNS_Alice_SOG2", "UNS_Alice_4", "UNS_ARMY_RTO2", "UNS_Alice_5", "UNS_USMC_E1", "UNS_USMC_R1", "UNS_USMC_E2", "UNS_Alice_SOG2", "UNS_Alice_3", "UNS_Alice_1", "UNS_TROP_R3", "UNS_USMC_R3", "UNS_Alice_4", "uns_sas_alicepack_1", "UNS_Alice_F2", "UNS_USMC_R3", "UNS_Alice_MED2", "UNS_Alice_SOG2", "UNS_Alice_SOG2", "UNS_USMC_E5", "UNS_Alice_MED2", "UNS_Alice_FR", "UNS_USMC_E3", "UNS_Alice_2", "UNS_Alice_F3", "UNS_TROP_R2", "UNS_Alice_FR", "UNS_Alice_3", "UNS_Alice_F2", "UNS_ARMY_RTO", "UNS_Alice_F10", "UNS_Alice_4", "UNS_Alice_F11", "UNS_USMC_E3", "UNS_ARMY_RTO", "uns_sas_alicepack_1", "UNS_Alice_MED2", "UNS_USMC_E4", "UNS_USMC_RTO", "UNS_USMC_R1", "UNS_USMC_E3", "UNS_Alice_F1", "UNS_USMC_R3", "UNS_Alice_F11", "UNS_Alice_F3", "uns_sas_alicepack_1", "UNS_Alice_F3", "UNS_Alice_FR", "UNS_Alice_1", "UNS_Alice_FR", "UNS_ARMY_RTO", "UNS_Alice_F2", "UNS_TROP_R1", "UNS_ARMY_RTO2", "UNS_USMC_RTO", "UNS_Alice_F3", "UNS_Alice_F1", "UNS_ARMY_RTO", "UNS_USMC_E3", "UNS_Alice_F10", "UNS_BA22_Para", "UNS_USMC_E1", "UNS_Alice_5", "UNS_TROP_R3", "UNS_Alice_FR", "UNS_USMC_R2", "UNS_ANZAC_RUCK", "UNS_Alice_4", "UNS_USMC_E4", "UNS_Alice_4", "UNS_Alice_F11", "UNS_USMC_E5", "UNS_Alice_FR", "UNS_Alice_F11", "UNS_ANZAC_RUCK", "UNS_USMC_E2", "UNS_Alice_5", "UNS_Alice_MED2", "UNS_USMC_RTO", "UNS_Alice_F4", "UNS_Alice_2", "UNS_ANZAC_RUCK", "UNS_ARMY_RTO2", "UNS_USMC_R3", "UNS_Alice_FR", "UNS_BA22_Para", "UNS_ARMY_RTO2", "UNS_Alice_F2", "UNS_USMC_R2", "UNS_Alice_F3", "UNS_ARMY_RTO2", "UNS_Alice_F10", "UNS_ANZAC_RUCK", "UNS_Alice_1", "UNS_ARMY_RTO2", "UNS_USMC_RTO", "UNS_Alice_F11", "UNS_Alice_F4", "UNS_USMC_E2", "UNS_USMC_E3", "UNS_USMC_E3", "UNS_Alice_F10", "UNS_Alice_SOG2", "UNS_TROP_R1", "UNS_Alice_MED2", "UNS_USMC_E5", "UNS_Alice_2", "UNS_Alice_5", "UNS_Alice_F4", "UNS_USMC_E1", "UNS_Alice_5", "UNS_Alice_F10", "UNS_ANZAC_RUCK", "UNS_TROP_R2", "UNS_USMC_R1", "UNS_ANZAC_RUCK", "UNS_Alice_3", "UNS_Alice_F4", "UNS_USMC_E1", "UNS_TROP_R2", "UNS_TROP_R2", "UNS_Alice_MED2", "UNS_TROP_R2", "UNS_Alice_F11", "UNS_USMC_R3", "UNS_Alice_F3", "UNS_TROP_R2", "UNS_Alice_F3", "UNS_Alice_F4", "UNS_Alice_2", "UNS_Alice_F1", "UNS_Alice_1", "uns_sas_alicepack_1", "uns_sas_alicepack_1", "UNS_USMC_R1", "UNS_USMC_E4", "UNS_Alice_MED2", "UNS_Alice_F10", "UNS_TROP_R1", "UNS_ARMY_RTO2", "UNS_Alice_2", "UNS_USMC_E1", "UNS_Alice_F1", "UNS_Alice_F1", "UNS_BA22_Para", "UNS_Alice_F4", "UNS_Alice_1", "UNS_USMC_R2", "UNS_ARMY_RTO2", "uns_sas_alicepack_1", "UNS_USMC_R3", "UNS_TROP_R3", "UNS_Alice_F10", "UNS_ARMY_RTO", "UNS_USMC_E4", "UNS_TROP_R3", "UNS_Alice_2", "UNS_Alice_FR", "UNS_TROP_R1", "UNS_Alice_MED2", "UNS_USMC_R3", "UNS_Alice_SOG2", "UNS_TROP_R3", "UNS_TROP_R1", "UNS_USMC_RTO", "UNS_USMC_E3", "UNS_USMC_E1", "UNS_USMC_E5", "UNS_USMC_E4", "UNS_Alice_FR", "UNS_USMC_R3", "UNS_USMC_E1", "UNS_TROP_R2", "UNS_USMC_E2", "UNS_Alice_F2", "UNS_TROP_R2", "UNS_Alice_F4", "UNS_Alice_F4", "UNS_TROP_R3", "UNS_ANZAC_RUCK", "UNS_USMC_R2", "UNS_USMC_R1", "UNS_Alice_SOG2", "UNS_USMC_E2", "UNS_Alice_F2", "UNS_Alice_2", "UNS_USMC_R3", "UNS_ARMY_RTO", "UNS_Alice_1", "UNS_Alice_4", "UNS_BA22_Para", "UNS_USMC_R3", "UNS_USMC_R2", "UNS_ARMY_RTO", "UNS_Alice_F10", "UNS_USMC_E5", "UNS_Alice_F3", "UNS_Alice_3", "UNS_Alice_F11", "UNS_TROP_R3", "UNS_Alice_F2", "UNS_Alice_3", "UNS_Alice_3", "UNS_Alice_4", "UNS_USMC_E5", "UNS_USMC_E5", "UNS_Alice_3", "UNS_BA22_Para", "UNS_USMC_E4", "UNS_USMC_RTO", "UNS_Alice_1", "UNS_USMC_E1", "UNS_ANZAC_RUCK", "UNS_USMC_E2", "UNS_BA22_Para", "UNS_Alice_F3", "UNS_USMC_E5", "UNS_Alice_F4", "UNS_Alice_F10", "UNS_USMC_R1", "UNS_Alice_F11", "UNS_ARMY_RTO", "UNS_USMC_E3", "UNS_ANZAC_RUCK", "UNS_Alice_F1", "uns_sas_alicepack_1", "UNS_USMC_R1", "UNS_USMC_R1", "UNS_BA22_Para", "UNS_BA22_Para", "UNS_USMC_R1", "UNS_Alice_F2", "UNS_Alice_4", "UNS_BA22_Para", "UNS_USMC_R1", "UNS_TROP_R1", "UNS_Alice_F11", "UNS_USMC_E1", "UNS_TROP_R1", "UNS_Alice_F2", "UNS_Alice_SOG2", "UNS_Alice_FR", "UNS_Alice_5", "UNS_USMC_E2", "UNS_USMC_E2", "UNS_Alice_F2", "UNS_Alice_F11", "UNS_BA22_Para", "UNS_Alice_3", "UNS_Alice_2", "UNS_USMC_E3", "UNS_USMC_E4", "UNS_USMC_E3", "UNS_Alice_4", "UNS_USMC_R1", "UNS_USMC_E2", "UNS_USMC_E3", "UNS_Alice_5", "UNS_TROP_R3", "UNS_USMC_R2", "UNS_Alice_F2", "UNS_TROP_R1", "UNS_Alice_SOG2", "uns_sas_alicepack_1", "UNS_Alice_F1", "UNS_Alice_F10", "UNS_TROP_R1", "UNS_ARMY_RTO", "UNS_Alice_F10", "UNS_Alice_5", "UNS_TROP_R1", "UNS_USMC_R2", "UNS_USMC_E3", "UNS_USMC_E5", "UNS_Alice_SOG2", "UNS_Alice_F10", "UNS_USMC_E4", "UNS_Alice_5", "UNS_USMC_R1", "UNS_Alice_5", "UNS_Alice_F1", "UNS_Alice_F2", "UNS_USMC_R2", "UNS_USMC_R1", "UNS_TROP_R2", "UNS_Alice_MED2", "UNS_TROP_R3", "uns_sas_alicepack_1", "UNS_ARMY_RTO2", "UNS_Alice_F3", "UNS_TROP_R1", "UNS_Alice_MED2", "UNS_TROP_R3", "UNS_USMC_E4", "UNS_USMC_E4", "UNS_Alice_1", "UNS_TROP_R1", "UNS_Alice_F1", "UNS_ARMY_RTO2", "UNS_USMC_RTO", "UNS_Alice_F10", "UNS_USMC_R2", "UNS_Alice_FR", "UNS_USMC_R3", "UNS_Alice_F11", "UNS_Alice_F3", "UNS_Alice_F4", "UNS_USMC_E2", "UNS_USMC_RTO", "UNS_Alice_F1", "UNS_Alice_F3", "UNS_ANZAC_RUCK", "UNS_Alice_F2", "UNS_USMC_E2", "UNS_ARMY_RTO", "UNS_Alice_F1", "UNS_ANZAC_RUCK", "UNS_USMC_R2", "UNS_Alice_F3", "UNS_TROP_R3", "UNS_ANZAC_RUCK", "UNS_USMC_E1", "UNS_ARMY_RTO", "UNS_USMC_R1", "UNS_TROP_R1", "UNS_Alice_SOG2", "UNS_ARMY_RTO", "UNS_USMC_E4", "UNS_Alice_F4", "UNS_Alice_5", "UNS_ANZAC_RUCK", "UNS_USMC_R1", "UNS_USMC_E5", "UNS_Alice_SOG2", "UNS_TROP_R2", "UNS_USMC_RTO", "UNS_Alice_SOG2", "UNS_Alice_F4", "UNS_Alice_2", "UNS_Alice_SOG2", "UNS_USMC_E1", "UNS_Alice_FR", "UNS_Alice_3", "UNS_Alice_4", "UNS_Alice_F10", "UNS_Alice_F1", "UNS_ANZAC_RUCK", "UNS_Alice_5", "UNS_USMC_E5", "UNS_Alice_F4", "UNS_USMC_R3", "uns_sas_alicepack_1", "UNS_Alice_F1", "UNS_ARMY_RTO", "UNS_Alice_4", "UNS_ARMY_RTO2", "UNS_ARMY_RTO2", "UNS_Alice_MED2", "UNS_Alice_3", "UNS_ARMY_RTO", "UNS_USMC_E5", "UNS_Alice_3", "UNS_USMC_R3", "UNS_USMC_E4", "UNS_Alice_F4", "UNS_USMC_RTO", "UNS_Alice_1", "UNS_USMC_E1", "UNS_Alice_2", "UNS_Alice_FR", "UNS_USMC_E1", "uns_sas_alicepack_1", "UNS_Alice_F1", "UNS_USMC_E1", "UNS_Alice_F3", "UNS_Alice_F11", "uns_sas_alicepack_1", "UNS_TROP_R2", "UNS_Alice_MED2", "UNS_USMC_R3", "UNS_Alice_3", "UNS_Alice_F1", "UNS_Alice_1", "UNS_Alice_F11", "uns_sas_alicepack_1", "UNS_Alice_3", "UNS_USMC_RTO", "UNS_USMC_RTO", "UNS_USMC_R2", "UNS_USMC_R2", "UNS_Alice_4", "UNS_USMC_R3", "UNS_BA22_Para", "UNS_TROP_R3", "UNS_USMC_R2", "UNS_Alice_MED2", "UNS_USMC_E5", "UNS_Alice_5", "UNS_TROP_R2", "UNS_TROP_R1", "UNS_BA22_Para", "UNS_BA22_Para", "UNS_Alice_F11", "UNS_ARMY_RTO2", "UNS_ARMY_RTO2", "UNS_Alice_1", "UNS_USMC_RTO", "UNS_Alice_1", "UNS_Alice_5", "UNS_Alice_2", "UNS_Alice_FR", "UNS_USMC_E3", "UNS_ARMY_RTO2", "UNS_Alice_F3", "UNS_USMC_E3", "uns_sas_alicepack_1", "UNS_USMC_E4", "UNS_USMC_E4", "UNS_USMC_RTO", "UNS_Alice_F10", "UNS_USMC_RTO", "UNS_Alice_3", "UNS_USMC_E4", "UNS_TROP_R3", "UNS_Alice_2", "UNS_TROP_R2", "UNS_USMC_E5", "UNS_Alice_1", "UNS_BA22_Para", "uns_sas_alicepack_1"};

		/*
			Percental Item Spawn Chances of VcBackpacks:

			UNS_NVA_RTO = 20.00%
			UNS_NVA_RPG = 20.00%
			UNS_NVA_MED = 20.00%
			UNS_NVA_R1  = 20.00%
			UNS_NVA_RC  = 20.00%
		*/
		VcBackpacks[] = {"UNS_NVA_R1", "UNS_NVA_R1", "UNS_NVA_R1", "UNS_NVA_R1", "UNS_NVA_RC", "UNS_NVA_RC", "UNS_NVA_RTO", "UNS_NVA_RTO", "UNS_NVA_RTO", "UNS_NVA_RTO", "UNS_NVA_RTO", "UNS_NVA_RC", "UNS_NVA_MED", "UNS_NVA_RPG", "UNS_NVA_R1", "UNS_NVA_RTO", "UNS_NVA_RTO", "UNS_NVA_R1", "UNS_NVA_MED", "UNS_NVA_MED", "UNS_NVA_MED", "UNS_NVA_RTO", "UNS_NVA_MED", "UNS_NVA_R1", "UNS_NVA_MED", "UNS_NVA_RTO", "UNS_NVA_RPG", "UNS_NVA_R1", "UNS_NVA_RTO", "UNS_NVA_RPG", "UNS_NVA_RC", "UNS_NVA_RC", "UNS_NVA_MED", "UNS_NVA_MED", "UNS_NVA_RTO", "UNS_NVA_RPG", "UNS_NVA_RTO", "UNS_NVA_RC", "UNS_NVA_R1", "UNS_NVA_RC", "UNS_NVA_RC", "UNS_NVA_R1", "UNS_NVA_R1", "UNS_NVA_RTO", "UNS_NVA_RTO", "UNS_NVA_RPG", "UNS_NVA_RC", "UNS_NVA_RC", "UNS_NVA_RC", "UNS_NVA_MED", "UNS_NVA_R1", "UNS_NVA_RPG", "UNS_NVA_RPG", "UNS_NVA_RC", "UNS_NVA_MED", "UNS_NVA_RC", "UNS_NVA_RPG", "UNS_NVA_RPG", "UNS_NVA_R1", "UNS_NVA_RC", "UNS_NVA_RPG", "UNS_NVA_RPG", "UNS_NVA_MED", "UNS_NVA_RTO", "UNS_NVA_RC", "UNS_NVA_MED", "UNS_NVA_RPG", "UNS_NVA_R1", "UNS_NVA_RPG", "UNS_NVA_R1", "UNS_NVA_MED", "UNS_NVA_RPG", "UNS_NVA_MED", "UNS_NVA_MED", "UNS_NVA_RPG"};

		/*
			Percental Item Spawn Chances of MilitaryVests:

			UNS_JP_Vest   = 2.56%
			UNS_FLAK      = 2.56%
			UNS_M1956_P1  = 2.56%
			UNS_M1956_T1  = 2.56%
			UNS_M1956_A1  = 2.56%
			UNS_M1956_A2  = 2.56%
			UNS_M1956_A3  = 2.56%
			UNS_M1956_A4  = 2.56%
			UNS_M1956_A5  = 2.56%
			UNS_M1956_A6  = 2.56%
			UNS_M1956_A7  = 2.56%
			UNS_M1956_A8  = 2.56%
			UNS_M1956_A9  = 2.56%
			UNS_M1956_A10 = 2.56%
			UNS_M1956_A11 = 2.56%
			UNS_M1956_A12 = 2.56%
			UNS_M1956_M1  = 2.56%
			UNS_M1956_M2  = 2.56%
			UNS_M1956_M3  = 2.56%
			UNS_M1956_M4  = 2.56%
			UNS_M1956_M5  = 2.56%
			UNS_M1956_M6  = 2.56%
			UNS_M1956_M7  = 2.56%
			UNS_M1956_M8  = 2.56%
			UNS_M1956_M9  = 2.56%
			UNS_M1956_M10 = 2.56%
			UNS_M1956_M11 = 2.56%
			UNS_M1956_M12 = 2.56%
			UNS_M1956_M13 = 2.56%
			UNS_M1956_M14 = 2.56%
			UNS_M1956_M15 = 2.56%
			UNS_M1956_M16 = 2.56%
			UNS_M1956_M17 = 2.56%
			UNS_M1956_M18 = 2.56%
			UNS_M1956_M19 = 2.56%
			UNS_M1956_S1  = 2.56%
			UNS_M1956_S2  = 2.56%
			UNS_M1956_S3  = 2.56%
			UNS_M1956_S4  = 2.56%
		*/
		MilitaryVests[] = {"UNS_FLAK", "UNS_M1956_A10", "UNS_M1956_M5", "UNS_M1956_S2", "UNS_M1956_S2", "UNS_M1956_S2", "UNS_M1956_A8", "UNS_M1956_S2", "UNS_M1956_A6", "UNS_FLAK", "UNS_M1956_A6", "UNS_M1956_S3", "UNS_M1956_S3", "UNS_M1956_A11", "UNS_M1956_M17", "UNS_M1956_S3", "UNS_M1956_A1", "UNS_M1956_S1", "UNS_M1956_M1", "UNS_M1956_M16", "UNS_M1956_M6", "UNS_FLAK", "UNS_M1956_M3", "UNS_M1956_S2", "UNS_M1956_A12", "UNS_M1956_M8", "UNS_M1956_M7", "UNS_M1956_A12", "UNS_JP_Vest", "UNS_M1956_A7", "UNS_M1956_M13", "UNS_M1956_M15", "UNS_M1956_M5", "UNS_M1956_S2", "UNS_M1956_S1", "UNS_M1956_A8", "UNS_M1956_A5", "UNS_M1956_M16", "UNS_M1956_M6", "UNS_M1956_S2", "UNS_M1956_A7", "UNS_M1956_M18", "UNS_M1956_A3", "UNS_M1956_M7", "UNS_M1956_A1", "UNS_M1956_A11", "UNS_M1956_M5", "UNS_M1956_M13", "UNS_M1956_M17", "UNS_M1956_M18", "UNS_M1956_A2", "UNS_M1956_M11", "UNS_M1956_M8", "UNS_M1956_A10", "UNS_M1956_S4", "UNS_M1956_M13", "UNS_M1956_M8", "UNS_M1956_M17", "UNS_M1956_M5", "UNS_M1956_M12", "UNS_M1956_A9", "UNS_M1956_S1", "UNS_M1956_M19", "UNS_M1956_M9", "UNS_M1956_A12", "UNS_M1956_A12", "UNS_M1956_A9", "UNS_M1956_A9", "UNS_M1956_A3", "UNS_M1956_S2", "UNS_M1956_M2", "UNS_M1956_M16", "UNS_M1956_A12", "UNS_M1956_M18", "UNS_M1956_M15", "UNS_M1956_S1", "UNS_M1956_M19", "UNS_M1956_T1", "UNS_M1956_M18", "UNS_M1956_A1", "UNS_M1956_M17", "UNS_M1956_A8", "UNS_M1956_M4", "UNS_M1956_A4", "UNS_M1956_M5", "UNS_M1956_S4", "UNS_M1956_M15", "UNS_M1956_A8", "UNS_M1956_M3", "UNS_M1956_A2", "UNS_M1956_M18", "UNS_M1956_A5", "UNS_M1956_M4", "UNS_M1956_M6", "UNS_M1956_A8", "UNS_M1956_M19", "UNS_M1956_M11", "UNS_M1956_P1", "UNS_M1956_A6", "UNS_M1956_M2", "UNS_M1956_M17", "UNS_M1956_M15", "UNS_M1956_M14", "UNS_M1956_S4", "UNS_M1956_M5", "UNS_M1956_P1", "UNS_M1956_M10", "UNS_M1956_P1", "UNS_M1956_M12", "UNS_M1956_M8", "UNS_M1956_M19", "UNS_M1956_S2", "UNS_M1956_A8", "UNS_M1956_A4", "UNS_M1956_A3", "UNS_M1956_M8", "UNS_M1956_M16", "UNS_M1956_T1", "UNS_M1956_A5", "UNS_M1956_S4", "UNS_M1956_A11", "UNS_M1956_M15", "UNS_M1956_S1", "UNS_FLAK", "UNS_M1956_A12", "UNS_M1956_T1", "UNS_M1956_S4", "UNS_M1956_A4", "UNS_M1956_S1", "UNS_M1956_M3", "UNS_M1956_M7", "UNS_M1956_A2", "UNS_M1956_M1", "UNS_M1956_A1", "UNS_M1956_S1", "UNS_M1956_M14", "UNS_M1956_M5", "UNS_M1956_M2", "UNS_M1956_M1", "UNS_M1956_M12", "UNS_M1956_A4", "UNS_M1956_S4", "UNS_M1956_M14", "UNS_M1956_A4", "UNS_JP_Vest", "UNS_M1956_M12", "UNS_M1956_M19", "UNS_M1956_M18", "UNS_M1956_M4", "UNS_M1956_M2", "UNS_M1956_P1", "UNS_M1956_M5", "UNS_M1956_M6", "UNS_M1956_M16", "UNS_M1956_M8", "UNS_M1956_S1", "UNS_M1956_M10", "UNS_M1956_A2", "UNS_M1956_P1", "UNS_M1956_M19", "UNS_M1956_M19", "UNS_FLAK", "UNS_M1956_M6", "UNS_M1956_M13", "UNS_M1956_M16", "UNS_M1956_A5", "UNS_M1956_A7", "UNS_M1956_M15", "UNS_M1956_A7", "UNS_M1956_M13", "UNS_M1956_A9", "UNS_M1956_A4", "UNS_M1956_S3", "UNS_M1956_A9", "UNS_M1956_A11", "UNS_M1956_M6", "UNS_M1956_S2", "UNS_M1956_M9", "UNS_M1956_M8", "UNS_FLAK", "UNS_M1956_A3", "UNS_M1956_S1", "UNS_M1956_A10", "UNS_M1956_M18", "UNS_M1956_T1", "UNS_M1956_M13", "UNS_M1956_A1", "UNS_M1956_A10", "UNS_M1956_M14", "UNS_M1956_M4", "UNS_M1956_M19", "UNS_M1956_S3", "UNS_M1956_S2", "UNS_M1956_M18", "UNS_M1956_M2", "UNS_M1956_M6", "UNS_JP_Vest", "UNS_JP_Vest", "UNS_M1956_M17", "UNS_M1956_A6", "UNS_M1956_A7", "UNS_FLAK", "UNS_M1956_A10", "UNS_M1956_T1", "UNS_M1956_M17", "UNS_M1956_A4", "UNS_M1956_A5", "UNS_M1956_A1", "UNS_M1956_A7", "UNS_M1956_M4", "UNS_M1956_M9", "UNS_M1956_M18", "UNS_M1956_A6", "UNS_M1956_A12", "UNS_M1956_M16", "UNS_M1956_M3", "UNS_M1956_A9", "UNS_JP_Vest", "UNS_M1956_M1", "UNS_M1956_M12", "UNS_M1956_A3", "UNS_M1956_M17", "UNS_M1956_M5", "UNS_M1956_T1", "UNS_M1956_M19", "UNS_FLAK", "UNS_M1956_M8", "UNS_M1956_M8", "UNS_M1956_M7", "UNS_M1956_M11", "UNS_M1956_M10", "UNS_M1956_A9", "UNS_M1956_A12", "UNS_M1956_M14", "UNS_M1956_M2", "UNS_M1956_P1", "UNS_M1956_M9", "UNS_M1956_A11", "UNS_M1956_A3", "UNS_M1956_M11", "UNS_M1956_A4", "UNS_M1956_A10", "UNS_M1956_M7", "UNS_M1956_A1", "UNS_M1956_A12", "UNS_M1956_A4", "UNS_M1956_A1", "UNS_M1956_S4", "UNS_M1956_M6", "UNS_JP_Vest", "UNS_M1956_A3", "UNS_M1956_M17", "UNS_M1956_A10", "UNS_M1956_A6", "UNS_M1956_S1", "UNS_M1956_M2", "UNS_M1956_T1", "UNS_M1956_A10", "UNS_M1956_M3", "UNS_M1956_M11", "UNS_M1956_P1", "UNS_M1956_S4", "UNS_M1956_P1", "UNS_M1956_M6", "UNS_M1956_S3", "UNS_M1956_S4", "UNS_M1956_A8", "UNS_M1956_S3", "UNS_M1956_M13", "UNS_M1956_M16", "UNS_M1956_T1", "UNS_M1956_S4", "UNS_M1956_M9", "UNS_M1956_M7", "UNS_M1956_A1", "UNS_M1956_M11", "UNS_M1956_A11", "UNS_M1956_M19", "UNS_M1956_M15", "UNS_M1956_A6", "UNS_M1956_M12", "UNS_M1956_M5", "UNS_M1956_P1", "UNS_M1956_M5", "UNS_M1956_M11", "UNS_M1956_M4", "UNS_M1956_M10", "UNS_M1956_S2", "UNS_M1956_S3", "UNS_M1956_S3", "UNS_M1956_M17", "UNS_M1956_A9", "UNS_M1956_M12", "UNS_M1956_S2", "UNS_M1956_S2", "UNS_M1956_A11", "UNS_M1956_A2", "UNS_M1956_A9", "UNS_M1956_M18", "UNS_M1956_M7", "UNS_M1956_M4", "UNS_M1956_M14", "UNS_M1956_M11", "UNS_M1956_S3", "UNS_M1956_A5", "UNS_M1956_S1", "UNS_M1956_M19", "UNS_M1956_A8", "UNS_M1956_M11", "UNS_M1956_S3", "UNS_M1956_A3", "UNS_M1956_A6", "UNS_M1956_A6", "UNS_M1956_A3", "UNS_M1956_M3", "UNS_M1956_M1", "UNS_M1956_M16", "UNS_M1956_A5", "UNS_M1956_A1", "UNS_M1956_S4", "UNS_M1956_M4", "UNS_M1956_A10", "UNS_M1956_M15", "UNS_M1956_M8", "UNS_M1956_M1", "UNS_M1956_A9", "UNS_M1956_M5", "UNS_M1956_M2", "UNS_M1956_A11", "UNS_M1956_A6", "UNS_M1956_S4", "UNS_M1956_M10", "UNS_M1956_A10", "UNS_M1956_A7", "UNS_M1956_M17", "UNS_M1956_M17", "UNS_M1956_T1", "UNS_M1956_M7", "UNS_M1956_M17", "UNS_M1956_A8", "UNS_M1956_M13", "UNS_M1956_A11", "UNS_M1956_S4", "UNS_M1956_M4", "UNS_M1956_M3", "UNS_M1956_M7", "UNS_M1956_M9", "UNS_FLAK", "UNS_M1956_A7", "UNS_M1956_M19", "UNS_M1956_M18", "UNS_JP_Vest", "UNS_M1956_M1", "UNS_M1956_M13", "UNS_M1956_A6", "UNS_M1956_M3", "UNS_M1956_M2", "UNS_M1956_M15", "UNS_M1956_M14", "UNS_M1956_T1", "UNS_M1956_M15", "UNS_M1956_A4", "UNS_M1956_A2", "UNS_M1956_M12", "UNS_M1956_P1", "UNS_M1956_T1", "UNS_M1956_A7", "UNS_M1956_M1", "UNS_M1956_M13", "UNS_M1956_A5", "UNS_M1956_P1", "UNS_M1956_M9", "UNS_M1956_A7", "UNS_M1956_M7", "UNS_M1956_A10", "UNS_M1956_A5", "UNS_M1956_S1", "UNS_M1956_A4", "UNS_JP_Vest", "UNS_M1956_A7", "UNS_M1956_M3", "UNS_M1956_T1", "UNS_M1956_M12", "UNS_M1956_M7", "UNS_M1956_S2", "UNS_M1956_M7", "UNS_M1956_M10", "UNS_FLAK", "UNS_M1956_A1", "UNS_M1956_A2", "UNS_M1956_A9", "UNS_M1956_A3", "UNS_M1956_M10", "UNS_M1956_A1", "UNS_M1956_A7", "UNS_M1956_A5", "UNS_M1956_M10", "UNS_M1956_M17", "UNS_M1956_M14", "UNS_M1956_M7", "UNS_M1956_A7", "UNS_M1956_M10", "UNS_M1956_M14", "UNS_M1956_A12", "UNS_M1956_M14", "UNS_M1956_M9", "UNS_M1956_M9", "UNS_M1956_M9", "UNS_M1956_M18", "UNS_M1956_A12", "UNS_JP_Vest", "UNS_M1956_A3", "UNS_M1956_M14", "UNS_M1956_M1", "UNS_M1956_A5", "UNS_M1956_M1", "UNS_M1956_M2", "UNS_M1956_A2", "UNS_M1956_S1", "UNS_M1956_M19", "UNS_M1956_M12", "UNS_M1956_M8", "UNS_M1956_M3", "UNS_M1956_M2", "UNS_M1956_M10", "UNS_M1956_A5", "UNS_M1956_M10", "UNS_M1956_A6", "UNS_M1956_M7", "UNS_M1956_M3", "UNS_M1956_M10", "UNS_M1956_M15", "UNS_M1956_A11", "UNS_M1956_S4", "UNS_JP_Vest", "UNS_FLAK", "UNS_M1956_M6", "UNS_M1956_M6", "UNS_M1956_P1", "UNS_M1956_M7", "UNS_M1956_P1", "UNS_M1956_A2", "UNS_M1956_M11", "UNS_M1956_M8", "UNS_M1956_M9", "UNS_M1956_S1", "UNS_M1956_M1", "UNS_M1956_M10", "UNS_M1956_A12", "UNS_M1956_A2", "UNS_M1956_M13", "UNS_M1956_M11", "UNS_FLAK", "UNS_M1956_M19", "UNS_M1956_M4", "UNS_M1956_A9", "UNS_M1956_M15", "UNS_M1956_M13", "UNS_M1956_A6", "UNS_M1956_A5", "UNS_M1956_M6", "UNS_JP_Vest", "UNS_M1956_P1", "UNS_JP_Vest", "UNS_M1956_A8", "UNS_M1956_M10", "UNS_M1956_M16", "UNS_M1956_A7", "UNS_M1956_A11", "UNS_M1956_M16", "UNS_M1956_M9", "UNS_M1956_M3", "UNS_FLAK", "UNS_FLAK", "UNS_M1956_M11", "UNS_M1956_M4", "UNS_M1956_S3", "UNS_M1956_M18", "UNS_M1956_S1", "UNS_M1956_A3", "UNS_M1956_M4", "UNS_M1956_M3", "UNS_M1956_A8", "UNS_M1956_M13", "UNS_M1956_S3", "UNS_M1956_S3", "UNS_M1956_A4", "UNS_M1956_T1", "UNS_M1956_T1", "UNS_M1956_A12", "UNS_M1956_M13", "UNS_M1956_M1", "UNS_M1956_A8", "UNS_M1956_A1", "UNS_M1956_M12", "UNS_M1956_M15", "UNS_M1956_M12", "UNS_M1956_A2", "UNS_M1956_A11", "UNS_M1956_A9", "UNS_M1956_M5", "UNS_M1956_A1", "UNS_M1956_A11", "UNS_M1956_M14", "UNS_M1956_P1", "UNS_M1956_M4", "UNS_M1956_A2", "UNS_M1956_A6", "UNS_M1956_M9", "UNS_M1956_M11", "UNS_M1956_M15", "UNS_M1956_M14", "UNS_M1956_A12", "UNS_M1956_M8", "UNS_M1956_A11", "UNS_M1956_M3", "UNS_M1956_M17", "UNS_M1956_M16", "UNS_M1956_M19", "UNS_M1956_M13", "UNS_M1956_A3", "UNS_M1956_A4", "UNS_M1956_M1", "UNS_M1956_M15", "UNS_M1956_M9", "UNS_M1956_M14", "UNS_M1956_A3", "UNS_M1956_A4", "UNS_M1956_A8", "UNS_M1956_M4", "UNS_M1956_A10", "UNS_M1956_A2", "UNS_M1956_M2", "UNS_JP_Vest", "UNS_M1956_M16", "UNS_JP_Vest", "UNS_M1956_S4", "UNS_M1956_A7", "UNS_M1956_M12", "UNS_M1956_S3", "UNS_M1956_T1", "UNS_M1956_A11", "UNS_M1956_A8", "UNS_M1956_M6", "UNS_M1956_A9", "UNS_M1956_M6", "UNS_M1956_A10", "UNS_M1956_M5", "UNS_M1956_A9", "UNS_M1956_A2", "UNS_M1956_M2", "UNS_M1956_A4", "UNS_M1956_A8", "UNS_M1956_M18", "UNS_M1956_A10", "UNS_M1956_M3", "UNS_M1956_A3", "UNS_M1956_M5", "UNS_M1956_A2", "UNS_M1956_M16", "UNS_M1956_A12", "UNS_M1956_A6", "UNS_M1956_M10", "UNS_FLAK", "UNS_M1956_A10", "UNS_M1956_A5", "UNS_M1956_M2", "UNS_M1956_M16", "UNS_M1956_A5", "UNS_M1956_M14", "UNS_M1956_M11", "UNS_M1956_M1", "UNS_M1956_A1", "UNS_M1956_M4", "UNS_M1956_M12", "UNS_M1956_M6", "UNS_M1956_M12", "UNS_M1956_M9", "UNS_M1956_M1", "UNS_M1956_M18", "UNS_M1956_M11", "UNS_M1956_M8", "UNS_M1956_M2", "UNS_JP_Vest", "UNS_M1956_M8"};

		/*
			Percental Item Spawn Chances of VcVests:

			UNS_VC_A1  = 5.88%
			UNS_VC_A2  = 5.88%
			UNS_VC_A3  = 5.88%
			UNS_VC_S1  = 5.88%
			UNS_VC_S2  = 5.88%
			UNS_VC_MG  = 5.88%
			UNS_VC_SP  = 5.88%
			UNS_VC_B1  = 5.88%
			UNS_NVA_A1 = 5.88%
			UNS_NVA_A2 = 5.88%
			UNS_NVA_A3 = 5.88%
			UNS_NVA_S1 = 5.88%
			UNS_NVA_S2 = 5.88%
			UNS_NVA_GR = 5.88%
			UNS_NVA_MG = 5.88%
			UNS_NVA_SP = 5.88%
			UNS_NVA_B1 = 5.88%
		*/
		VcVests[] = {"UNS_VC_S2", "UNS_NVA_GR", "UNS_VC_S2", "UNS_VC_SP", "UNS_NVA_S2", "UNS_NVA_B1", "UNS_NVA_SP", "UNS_NVA_A3", "UNS_VC_B1", "UNS_VC_S2", "UNS_NVA_A2", "UNS_NVA_B1", "UNS_VC_A3", "UNS_VC_A3", "UNS_VC_A3", "UNS_VC_A1", "UNS_VC_S1", "UNS_NVA_A3", "UNS_VC_A2", "UNS_NVA_MG", "UNS_VC_S1", "UNS_VC_MG", "UNS_NVA_A2", "UNS_NVA_A1", "UNS_NVA_MG", "UNS_NVA_GR", "UNS_NVA_MG", "UNS_VC_B1", "UNS_VC_S2", "UNS_VC_MG", "UNS_VC_A2", "UNS_NVA_B1", "UNS_VC_B1", "UNS_VC_A3", "UNS_NVA_GR", "UNS_VC_S1", "UNS_VC_A1", "UNS_NVA_S2", "UNS_NVA_S2", "UNS_NVA_S2", "UNS_VC_SP", "UNS_NVA_SP", "UNS_VC_A3", "UNS_VC_A1", "UNS_NVA_A1", "UNS_NVA_GR", "UNS_NVA_SP", "UNS_NVA_B1", "UNS_VC_S1", "UNS_VC_MG", "UNS_NVA_S2", "UNS_VC_A3", "UNS_VC_A1", "UNS_VC_A1", "UNS_NVA_B1", "UNS_VC_S2", "UNS_NVA_A2", "UNS_NVA_A3", "UNS_VC_S1", "UNS_VC_A2", "UNS_NVA_S2", "UNS_VC_S2", "UNS_NVA_B1", "UNS_NVA_GR", "UNS_NVA_A3", "UNS_VC_S1", "UNS_NVA_SP", "UNS_NVA_A3", "UNS_NVA_A1", "UNS_NVA_A1", "UNS_NVA_GR", "UNS_NVA_A2", "UNS_NVA_MG", "UNS_NVA_A1", "UNS_NVA_S2", "UNS_NVA_MG", "UNS_VC_B1", "UNS_NVA_A2", "UNS_VC_MG", "UNS_VC_SP", "UNS_NVA_A1", "UNS_VC_A1", "UNS_VC_A2", "UNS_VC_A1", "UNS_VC_S2", "UNS_VC_MG", "UNS_VC_MG", "UNS_NVA_A3", "UNS_NVA_GR", "UNS_NVA_S1", "UNS_NVA_A1", "UNS_VC_MG", "UNS_NVA_MG", "UNS_NVA_GR", "UNS_NVA_S1", "UNS_NVA_S2", "UNS_NVA_S1", "UNS_NVA_GR", "UNS_NVA_B1", "UNS_NVA_A1", "UNS_NVA_S2", "UNS_VC_S2", "UNS_VC_MG", "UNS_VC_S1", "UNS_NVA_S2", "UNS_NVA_B1", "UNS_NVA_A1", "UNS_NVA_S1", "UNS_VC_A2", "UNS_NVA_SP", "UNS_VC_SP", "UNS_NVA_MG", "UNS_VC_A3", "UNS_NVA_S1", "UNS_VC_MG", "UNS_VC_S2", "UNS_NVA_A1", "UNS_NVA_MG", "UNS_NVA_MG", "UNS_NVA_A3", "UNS_NVA_A2", "UNS_NVA_MG", "UNS_VC_B1", "UNS_VC_SP", "UNS_VC_B1", "UNS_NVA_SP", "UNS_NVA_GR", "UNS_NVA_MG", "UNS_VC_S1", "UNS_VC_SP", "UNS_NVA_GR", "UNS_VC_A1", "UNS_NVA_A3", "UNS_VC_A1", "UNS_NVA_MG", "UNS_NVA_A1", "UNS_NVA_B1", "UNS_VC_A2", "UNS_NVA_SP", "UNS_NVA_SP", "UNS_VC_A2", "UNS_NVA_B1", "UNS_VC_A3", "UNS_NVA_S2", "UNS_VC_B1", "UNS_NVA_A2", "UNS_VC_S2", "UNS_NVA_S2", "UNS_VC_S2", "UNS_VC_MG", "UNS_NVA_S1", "UNS_VC_A2", "UNS_NVA_B1", "UNS_NVA_SP", "UNS_NVA_SP", "UNS_VC_A1", "UNS_VC_SP", "UNS_VC_S2", "UNS_NVA_SP", "UNS_VC_MG", "UNS_VC_A2", "UNS_VC_SP", "UNS_NVA_A2", "UNS_VC_SP", "UNS_NVA_B1", "UNS_VC_B1", "UNS_NVA_S2", "UNS_NVA_A1", "UNS_VC_A1", "UNS_VC_A3", "UNS_VC_A2", "UNS_VC_A1", "UNS_NVA_A1", "UNS_VC_MG", "UNS_NVA_A3", "UNS_VC_SP", "UNS_VC_S1", "UNS_VC_B1", "UNS_VC_A3", "UNS_VC_SP", "UNS_NVA_GR", "UNS_NVA_S1", "UNS_NVA_A1", "UNS_VC_A3", "UNS_VC_S1", "UNS_NVA_A3", "UNS_NVA_A2", "UNS_VC_MG", "UNS_NVA_A3", "UNS_NVA_A2", "UNS_NVA_SP", "UNS_NVA_A3", "UNS_VC_A2", "UNS_VC_S1", "UNS_NVA_S1", "UNS_NVA_GR", "UNS_VC_S1", "UNS_VC_B1", "UNS_VC_A3", "UNS_NVA_GR", "UNS_NVA_MG", "UNS_VC_B1", "UNS_NVA_S1", "UNS_VC_A3", "UNS_NVA_A3", "UNS_VC_B1", "UNS_VC_A1", "UNS_NVA_A2", "UNS_NVA_SP", "UNS_NVA_A2", "UNS_NVA_S1", "UNS_NVA_B1", "UNS_VC_S1", "UNS_NVA_S1", "UNS_NVA_S1", "UNS_VC_A2", "UNS_NVA_A1", "UNS_VC_A2", "UNS_VC_A2", "UNS_NVA_SP", "UNS_NVA_A2", "UNS_VC_S2", "UNS_VC_S2", "UNS_NVA_MG", "UNS_VC_SP", "UNS_NVA_GR", "UNS_NVA_A2", "UNS_NVA_B1", "UNS_VC_S1", "UNS_VC_A1", "UNS_VC_S1", "UNS_VC_A2", "UNS_VC_B1", "UNS_VC_SP", "UNS_VC_MG", "UNS_NVA_MG", "UNS_NVA_SP", "UNS_VC_S2", "UNS_VC_MG", "UNS_VC_SP", "UNS_NVA_S2", "UNS_VC_SP", "UNS_NVA_S1", "UNS_VC_A3", "UNS_NVA_S1", "UNS_NVA_A2", "UNS_NVA_S1", "UNS_NVA_S2", "UNS_NVA_B1", "UNS_VC_A3", "UNS_VC_A1", "UNS_VC_B1", "UNS_NVA_A3", "UNS_NVA_A3", "UNS_VC_B1"};

		/*
			Percental Item Spawn Chances of MilitaryHeadgear:

			UNS_Beret_MRF    = 1.28%
			UNS_Beret_B      = 1.28%
			UNS_Beret_5      = 1.28%
			UNS_Beret_51LT   = 1.28%
			UNS_Beret_52LT   = 1.28%
			UNS_Beret_5CPT   = 1.28%
			UNS_Beret_5MAJ   = 1.28%
			UNS_Beret_5LTCOL = 1.28%
			UNS_Beret_5COL   = 1.28%
			UNS_Beret_AVAB   = 1.28%
			UNS_Beret_AVM    = 1.28%
			UNS_Beret_AVR    = 1.28%
			UNS_Boonie_TIG   = 1.28%
			UNS_Boonie_TIG1  = 1.28%
			UNS_Boonie_TIG2  = 1.28%
			UNS_Boonie_TIGF  = 1.28%
			UNS_Boonie_TIGF2 = 1.28%
			UNS_Boonie_TIGF3 = 1.28%
			UNS_Boonie_TIGF4 = 1.28%
			UNS_Boonie_OD    = 1.28%
			UNS_Boonie_OD2   = 1.28%
			UNS_Boonie_ODF   = 1.28%
			UNS_Boonie_ODP   = 1.28%
			UNS_Boonie_DK    = 1.28%
			UNS_Boonie_DKF   = 1.28%
			UNS_Boonie_ERDL  = 1.28%
			UNS_Bandana_OD   = 1.28%
			UNS_Bandana_OD2  = 1.28%
			UNS_USMC_Cover   = 1.28%
			UNS_M1_9A        = 1.28%
			UNS_M1_8A        = 1.28%
			UNS_M1_7A        = 1.28%
			UNS_M1_6A        = 1.28%
			UNS_M1_5A        = 1.28%
			UNS_M1_4A        = 1.28%
			UNS_M1_3A        = 1.28%
			UNS_M1_2A        = 1.28%
			UNS_M1_1A        = 1.28%
			UNS_M1_17        = 1.28%
			UNS_M1_16        = 1.28%
			UNS_M1_15        = 1.28%
			UNS_M1_14        = 1.28%
			UNS_M1_13        = 1.28%
			UNS_M1_12        = 1.28%
			UNS_M1_11        = 1.28%
			UNS_M1_10        = 1.28%
			UNS_M1_9         = 1.28%
			UNS_M1_8         = 1.28%
			UNS_M1_7         = 1.28%
			UNS_M1_6         = 1.28%
			UNS_M1_5         = 1.28%
			UNS_M1_4         = 1.28%
			UNS_M1_3         = 1.28%
			UNS_M1_2         = 1.28%
			UNS_M1_1         = 1.28%
			UNS_M1_AFT       = 1.28%
			UNS_M1_MP        = 1.28%
			UNS_M1_SP        = 1.28%
			UNS_M1_PBR       = 1.28%
			UNS_M1_1V1       = 1.28%
			UNS_M1_1V2       = 1.28%
			UNS_M1_1V1N      = 1.28%
			UNS_M1_1V3       = 1.28%
			UNS_M1_1V4       = 1.28%
			UNS_M1_1V5       = 1.28%
			UNS_M1_1V6       = 1.28%
			UNS_M1_1V7       = 1.28%
			UNS_M1_1V8       = 1.28%
			UNS_M1_1RM       = 1.28%
			UNS_TC_1         = 1.28%
			UNS_TC_2         = 1.28%
			UNS_HP_Helmet    = 1.28%
			UNS_JP_Helmet    = 1.28%
			UNS_JP_Helmet2   = 1.28%
			UNS_Headband_OD  = 1.28%
			UNS_Headband_OD2 = 1.28%
			UNS_Headband_ED  = 1.28%
			UNS_Headband_BK  = 1.28%
		*/
		MilitaryHeadgear[] = {"UNS_TC_2", "UNS_M1_14", "UNS_Boonie_ERDL", "UNS_M1_8A", "UNS_Boonie_OD", "UNS_M1_PBR", "UNS_M1_1V7", "UNS_M1_5", "UNS_Bandana_OD2", "UNS_Bandana_OD", "UNS_M1_PBR", "UNS_M1_7A", "UNS_M1_1A", "UNS_Boonie_TIGF", "UNS_TC_1", "UNS_Boonie_DK", "UNS_JP_Helmet2", "UNS_Boonie_ODP", "UNS_Beret_5COL", "UNS_Beret_5", "UNS_M1_10", "UNS_Beret_AVAB", "UNS_M1_15", "UNS_USMC_Cover", "UNS_JP_Helmet", "UNS_M1_1", "UNS_M1_17", "UNS_Boonie_TIGF", "UNS_Boonie_DKF", "UNS_M1_8", "UNS_USMC_Cover", "UNS_Beret_5LTCOL", "UNS_Beret_5", "UNS_M1_4", "UNS_USMC_Cover", "UNS_M1_1V4", "UNS_M1_PBR", "UNS_M1_6", "UNS_Boonie_ODP", "UNS_Boonie_OD2", "UNS_JP_Helmet", "UNS_M1_1V8", "UNS_Bandana_OD", "UNS_Boonie_ODF", "UNS_Boonie_TIG2", "UNS_M1_6A", "UNS_Boonie_DK", "UNS_M1_1V6", "UNS_Beret_5", "UNS_Headband_OD2", "UNS_Boonie_ERDL", "UNS_M1_1V8", "UNS_Beret_52LT", "UNS_Bandana_OD2", "UNS_Headband_ED", "UNS_M1_3", "UNS_M1_PBR", "UNS_M1_3", "UNS_M1_1V1", "UNS_HP_Helmet", "UNS_M1_1V3", "UNS_M1_9A", "UNS_Boonie_TIGF4", "UNS_M1_1V1", "UNS_Beret_5MAJ", "UNS_M1_1", "UNS_Beret_MRF", "UNS_M1_MP", "UNS_M1_3", "UNS_M1_9", "UNS_M1_3A", "UNS_Boonie_ODF", "UNS_Beret_B", "UNS_Boonie_TIG", "UNS_M1_1V3", "UNS_M1_12", "UNS_M1_8A", "UNS_Boonie_DK", "UNS_M1_15", "UNS_M1_PBR", "UNS_M1_4", "UNS_Boonie_TIGF2", "UNS_M1_SP", "UNS_Beret_MRF", "UNS_Beret_52LT", "UNS_M1_1A", "UNS_M1_10", "UNS_M1_4", "UNS_M1_11", "UNS_Boonie_ODP", "UNS_Boonie_TIG", "UNS_M1_1V1N", "UNS_JP_Helmet", "UNS_M1_1A", "UNS_Beret_5COL", "UNS_Boonie_DKF", "UNS_Boonie_DKF", "UNS_M1_10", "UNS_M1_8", "UNS_Boonie_ERDL", "UNS_Bandana_OD", "UNS_Beret_MRF", "UNS_Headband_BK", "UNS_M1_10", "UNS_Boonie_ODP", "UNS_M1_8A", "UNS_M1_6A", "UNS_Beret_AVM", "UNS_M1_1V6", "UNS_Boonie_ODF", "UNS_M1_9", "UNS_M1_9", "UNS_M1_1V7", "UNS_Boonie_TIGF4", "UNS_M1_11", "UNS_Boonie_TIG", "UNS_M1_6", "UNS_Beret_AVAB", "UNS_Boonie_TIGF2", "UNS_M1_9", "UNS_M1_9A", "UNS_Boonie_DK", "UNS_M1_1RM", "UNS_Beret_5MAJ", "UNS_Beret_B", "UNS_JP_Helmet", "UNS_M1_13", "UNS_JP_Helmet", "UNS_M1_9A", "UNS_M1_1V6", "UNS_Beret_51LT", "UNS_M1_7A", "UNS_M1_AFT", "UNS_Boonie_OD", "UNS_Beret_AVAB", "UNS_M1_1V4", "UNS_Beret_5", "UNS_M1_5", "UNS_M1_SP", "UNS_Boonie_TIGF2", "UNS_M1_MP", "UNS_M1_SP", "UNS_M1_7A", "UNS_M1_1RM", "UNS_M1_SP", "UNS_TC_1", "UNS_M1_1V2", "UNS_HP_Helmet", "UNS_M1_1", "UNS_M1_1RM", "UNS_Beret_AVR", "UNS_M1_7A", "UNS_Boonie_TIG", "UNS_M1_9", "UNS_M1_11", "UNS_Boonie_OD", "UNS_M1_7", "UNS_Boonie_ERDL", "UNS_Beret_AVM", "UNS_M1_1V2", "UNS_M1_6A", "UNS_JP_Helmet2", "UNS_Boonie_DKF", "UNS_TC_2", "UNS_Boonie_TIG2", "UNS_M1_1", "UNS_Boonie_ODF", "UNS_Beret_AVR", "UNS_M1_1V2", "UNS_Boonie_ERDL", "UNS_M1_4", "UNS_TC_2", "UNS_M1_5", "UNS_M1_1A", "UNS_Boonie_TIGF3", "UNS_M1_1V1N", "UNS_Boonie_OD2", "UNS_Headband_OD2", "UNS_M1_1RM", "UNS_HP_Helmet", "UNS_M1_SP", "UNS_M1_15", "UNS_M1_14", "UNS_M1_9A", "UNS_Boonie_TIGF", "UNS_Boonie_TIGF", "UNS_M1_3A", "UNS_M1_1V7", "UNS_M1_16", "UNS_M1_PBR", "UNS_M1_3A", "UNS_M1_1V8", "UNS_Boonie_ODP", "UNS_M1_6", "UNS_JP_Helmet2", "UNS_M1_4A", "UNS_JP_Helmet2", "UNS_Beret_B", "UNS_M1_1V8", "UNS_HP_Helmet", "UNS_M1_16", "UNS_M1_11", "UNS_Headband_OD2", "UNS_Beret_52LT", "UNS_Beret_5CPT", "UNS_TC_2", "UNS_M1_2A", "UNS_Beret_AVR", "UNS_Boonie_TIGF2", "UNS_M1_14", "UNS_Beret_AVR", "UNS_M1_1V4", "UNS_Boonie_TIGF3", "UNS_Boonie_ODP", "UNS_M1_1V2", "UNS_Beret_5MAJ", "UNS_M1_1V8", "UNS_M1_1V4", "UNS_Beret_5LTCOL", "UNS_M1_6A", "UNS_M1_AFT", "UNS_M1_11", "UNS_M1_6", "UNS_M1_2", "UNS_M1_6", "UNS_Beret_5CPT", "UNS_Boonie_TIG2", "UNS_Boonie_TIG2", "UNS_M1_8", "UNS_M1_4A", "UNS_Boonie_DKF", "UNS_M1_2A", "UNS_M1_6", "UNS_USMC_Cover", "UNS_Beret_5CPT", "UNS_M1_6", "UNS_M1_14", "UNS_M1_7", "UNS_Boonie_TIGF", "UNS_M1_9A", "UNS_M1_1V1N", "UNS_M1_12", "UNS_M1_SP", "UNS_Headband_BK", "UNS_M1_1V7", "UNS_M1_1V1", "UNS_Beret_5COL", "UNS_Beret_52LT", "UNS_M1_4A", "UNS_M1_1", "UNS_Boonie_TIGF", "UNS_M1_1V1N", "UNS_M1_4A", "UNS_TC_2", "UNS_M1_3", "UNS_M1_3A", "UNS_M1_8A", "UNS_M1_3A", "UNS_M1_5A", "UNS_M1_4", "UNS_Headband_OD2", "UNS_Boonie_DKF", "UNS_TC_1", "UNS_TC_2", "UNS_TC_1", "UNS_M1_14", "UNS_M1_1", "UNS_M1_1V2", "UNS_Beret_AVAB", "UNS_M1_SP", "UNS_M1_17", "UNS_M1_SP", "UNS_M1_3A", "UNS_M1_3", "UNS_M1_10", "UNS_Beret_AVAB", "UNS_M1_1V7", "UNS_Headband_BK", "UNS_Headband_OD2", "UNS_M1_13", "UNS_JP_Helmet2", "UNS_M1_7A", "UNS_M1_1V4", "UNS_M1_1A", "UNS_M1_6", "UNS_JP_Helmet", "UNS_M1_1V7", "UNS_M1_5A", "UNS_Boonie_DK", "UNS_M1_1V4", "UNS_M1_1V6", "UNS_Boonie_TIGF2", "UNS_Beret_5CPT", "UNS_Bandana_OD", "UNS_M1_7A", "UNS_Boonie_TIGF", "UNS_Boonie_DK", "UNS_M1_5", "UNS_Boonie_OD2", "UNS_M1_1V5", "UNS_M1_1V6", "UNS_M1_1V2", "UNS_Bandana_OD", "UNS_Boonie_TIG2", "UNS_Bandana_OD2", "UNS_M1_1V3", "UNS_M1_PBR", "UNS_Boonie_TIGF3", "UNS_Bandana_OD2", "UNS_M1_8", "UNS_M1_PBR", "UNS_M1_1V2", "UNS_M1_13", "UNS_Beret_5COL", "UNS_M1_MP", "UNS_Boonie_TIGF3", "UNS_Headband_OD", "UNS_M1_1RM", "UNS_M1_7", "UNS_Bandana_OD2", "UNS_Boonie_TIGF3", "UNS_M1_17", "UNS_M1_1V6", "UNS_M1_14", "UNS_M1_5A", "UNS_M1_10", "UNS_Boonie_TIG1", "UNS_Beret_5COL", "UNS_M1_16", "UNS_M1_MP", "UNS_HP_Helmet", "UNS_Beret_B", "UNS_Beret_51LT", "UNS_Beret_5MAJ", "UNS_M1_16", "UNS_USMC_Cover", "UNS_M1_6A", "UNS_Beret_5CPT", "UNS_M1_6", "UNS_M1_MP", "UNS_Boonie_ODP", "UNS_Boonie_ODP", "UNS_M1_1V5", "UNS_Boonie_TIGF2", "UNS_M1_16", "UNS_Boonie_ERDL", "UNS_Beret_AVM", "UNS_M1_5A", "UNS_M1_5A", "UNS_M1_2", "UNS_TC_1", "UNS_Boonie_OD2", "UNS_M1_1V8", "UNS_M1_3", "UNS_Beret_AVR", "UNS_Beret_AVR", "UNS_M1_12", "UNS_M1_11", "UNS_M1_1V1N", "UNS_Boonie_TIGF4", "UNS_M1_1V1", "UNS_Beret_5COL", "UNS_Headband_OD", "UNS_M1_1V2", "UNS_M1_AFT", "UNS_Beret_MRF", "UNS_Beret_AVM", "UNS_Beret_5COL", "UNS_Beret_5LTCOL", "UNS_M1_10", "UNS_M1_SP", "UNS_M1_16", "UNS_Boonie_TIGF4", "UNS_M1_15", "UNS_Boonie_TIGF3", "UNS_M1_14", "UNS_Bandana_OD2", "UNS_M1_1V1N", "UNS_M1_1V2", "UNS_M1_14", "UNS_JP_Helmet", "UNS_Beret_5LTCOL", "UNS_Boonie_TIGF4", "UNS_M1_3A", "UNS_M1_1V3", "UNS_M1_12", "UNS_Beret_5", "UNS_Boonie_TIGF", "UNS_M1_13", "UNS_M1_1V6", "UNS_M1_1V7", "UNS_M1_5", "UNS_Beret_AVR", "UNS_Boonie_TIG", "UNS_Boonie_TIG2", "UNS_Boonie_TIGF4", "UNS_Headband_BK", "UNS_Headband_OD", "UNS_M1_1V8", "UNS_M1_9A", "UNS_M1_7", "UNS_M1_SP", "UNS_Headband_ED", "UNS_M1_1V3", "UNS_M1_3", "UNS_M1_16", "UNS_Headband_BK", "UNS_M1_6A", "UNS_M1_15", "UNS_Headband_ED", "UNS_Beret_AVAB", "UNS_M1_9A", "UNS_M1_1V3", "UNS_M1_2", "UNS_M1_8", "UNS_M1_1V7", "UNS_Beret_MRF", "UNS_Beret_52LT", "UNS_Boonie_TIG1", "UNS_Beret_AVM", "UNS_Bandana_OD", "UNS_Headband_BK", "UNS_Beret_5LTCOL", "UNS_M1_9", "UNS_Beret_MRF", "UNS_Boonie_ODP", "UNS_M1_PBR", "UNS_M1_1V7", "UNS_M1_14", "UNS_Boonie_TIG2", "UNS_JP_Helmet2", "UNS_M1_2A", "UNS_M1_12", "UNS_Beret_5CPT", "UNS_Beret_5CPT", "UNS_Headband_ED", "UNS_M1_1V3", "UNS_M1_5", "UNS_M1_2", "UNS_Beret_5", "UNS_Headband_OD2", "UNS_Beret_B", "UNS_Boonie_DKF", "UNS_M1_5", "UNS_Beret_AVAB", "UNS_Beret_52LT", "UNS_Beret_5COL", "UNS_M1_7", "UNS_Boonie_TIGF3", "UNS_M1_15", "UNS_M1_3", "UNS_M1_1V2", "UNS_M1_12", "UNS_M1_9A", "UNS_Headband_ED", "UNS_M1_2A", "UNS_M1_2", "UNS_Boonie_OD", "UNS_Bandana_OD2", "UNS_M1_8", "UNS_Beret_AVM", "UNS_M1_4", "UNS_USMC_Cover", "UNS_Boonie_OD", "UNS_M1_1RM", "UNS_M1_16", "UNS_M1_1V2", "UNS_Headband_ED", "UNS_M1_3A", "UNS_Bandana_OD", "UNS_JP_Helmet", "UNS_Beret_5MAJ", "UNS_M1_1V1N", "UNS_M1_8A", "UNS_Beret_AVM", "UNS_M1_1V1", "UNS_M1_PBR", "UNS_M1_3", "UNS_M1_1V8", "UNS_M1_4A", "UNS_M1_11", "UNS_Boonie_DK", "UNS_Beret_AVR", "UNS_Headband_OD", "UNS_Beret_51LT", "UNS_M1_13", "UNS_Boonie_TIG1", "UNS_M1_1V7", "UNS_M1_SP", "UNS_M1_17", "UNS_M1_1A", "UNS_M1_1RM", "UNS_M1_1V5", "UNS_M1_7A", "UNS_Beret_B", "UNS_TC_1", "UNS_M1_AFT", "UNS_Beret_MRF", "UNS_M1_1V4", "UNS_M1_10", "UNS_M1_1V1", "UNS_JP_Helmet", "UNS_Boonie_TIGF4", "UNS_M1_6", "UNS_M1_MP", "UNS_M1_8", "UNS_M1_8", "UNS_M1_8A", "UNS_M1_1", "UNS_M1_MP", "UNS_Beret_AVR", "UNS_Beret_5CPT", "UNS_M1_1V5", "UNS_M1_9A", "UNS_Boonie_TIGF3", "UNS_M1_SP", "UNS_Boonie_TIGF", "UNS_M1_9", "UNS_M1_3", "UNS_M1_7", "UNS_Beret_52LT", "UNS_M1_10", "UNS_Beret_5CPT", "UNS_Bandana_OD", "UNS_M1_3A", "UNS_M1_1V5", "UNS_M1_1V4", "UNS_M1_11", "UNS_M1_9A", "UNS_Beret_MRF", "UNS_M1_8A", "UNS_Boonie_TIGF4", "UNS_Beret_MRF", "UNS_M1_6A", "UNS_USMC_Cover", "UNS_M1_7", "UNS_Beret_52LT", "UNS_USMC_Cover", "UNS_M1_2", "UNS_M1_12", "UNS_Beret_AVAB", "UNS_Boonie_OD", "UNS_M1_1V5", "UNS_M1_6A", "UNS_M1_8", "UNS_M1_2A", "UNS_M1_5", "UNS_Headband_BK", "UNS_Beret_B", "UNS_M1_16", "UNS_Beret_5LTCOL", "UNS_M1_1V5", "UNS_Boonie_OD", "UNS_M1_9A", "UNS_M1_1V1N", "UNS_M1_11", "UNS_M1_1V4", "UNS_M1_AFT", "UNS_M1_17", "UNS_M1_15", "UNS_TC_1", "UNS_Boonie_TIGF2", "UNS_Boonie_TIGF2", "UNS_Beret_AVR", "UNS_Bandana_OD2", "UNS_Boonie_TIGF4", "UNS_Boonie_OD2", "UNS_M1_1V5", "UNS_Boonie_TIG", "UNS_JP_Helmet", "UNS_Beret_AVM", "UNS_Headband_OD", "UNS_M1_5", "UNS_Headband_OD", "UNS_M1_16", "UNS_Boonie_TIGF4", "UNS_USMC_Cover", "UNS_Boonie_DKF", "UNS_M1_11", "UNS_Boonie_ODP", "UNS_Beret_51LT", "UNS_Boonie_OD2", "UNS_M1_13", "UNS_M1_1V3", "UNS_Boonie_TIG", "UNS_Boonie_ODP", "UNS_M1_7", "UNS_Boonie_ODP", "UNS_M1_8A", "UNS_Beret_52LT", "UNS_Boonie_TIGF", "UNS_Boonie_TIGF", "UNS_Boonie_TIGF3", "UNS_M1_5A", "UNS_M1_AFT", "UNS_M1_5A", "UNS_M1_1V5", "UNS_Boonie_TIG1", "UNS_HP_Helmet", "UNS_M1_8", "UNS_M1_1A", "UNS_Beret_5LTCOL", "UNS_Headband_ED", "UNS_M1_15", "UNS_M1_1V6", "UNS_TC_2", "UNS_M1_13", "UNS_Boonie_ODF", "UNS_Boonie_TIG2", "UNS_TC_1", "UNS_M1_13", "UNS_M1_1", "UNS_M1_AFT", "UNS_Beret_5COL", "UNS_Beret_MRF", "UNS_M1_1V6", "UNS_Beret_AVR", "UNS_JP_Helmet2", "UNS_Boonie_ERDL", "UNS_Beret_AVM", "UNS_Beret_5", "UNS_M1_14", "UNS_M1_1V5", "UNS_Boonie_TIG", "UNS_Beret_51LT", "UNS_M1_1V3", "UNS_Beret_5LTCOL", "UNS_M1_1V5", "UNS_M1_9A", "UNS_M1_16", "UNS_M1_11", "UNS_M1_8A", "UNS_Boonie_OD", "UNS_Boonie_ODF", "UNS_M1_5A", "UNS_Beret_52LT", "UNS_M1_12", "UNS_HP_Helmet", "UNS_M1_6A", "UNS_M1_15", "UNS_M1_1V6", "UNS_Beret_51LT", "UNS_Beret_5", "UNS_M1_3A", "UNS_M1_10", "UNS_Boonie_OD2", "UNS_M1_17", "UNS_Bandana_OD2", "UNS_Headband_ED", "UNS_M1_8", "UNS_M1_5A", "UNS_M1_7", "UNS_Beret_5", "UNS_M1_1V3", "UNS_Beret_51LT", "UNS_M1_1V8", "UNS_Boonie_TIG", "UNS_TC_1", "UNS_Boonie_TIG2", "UNS_M1_9", "UNS_Boonie_ODF", "UNS_Boonie_TIGF", "UNS_Bandana_OD", "UNS_Boonie_TIGF3", "UNS_M1_12", "UNS_Boonie_TIGF4", "UNS_M1_2", "UNS_M1_1V8", "UNS_M1_3", "UNS_Boonie_TIGF2", "UNS_Boonie_DKF", "UNS_Headband_OD2", "UNS_Beret_5MAJ", "UNS_Headband_ED", "UNS_M1_PBR", "UNS_TC_2", "UNS_Beret_AVAB", "UNS_M1_SP", "UNS_M1_3A", "UNS_Boonie_TIGF4", "UNS_Boonie_OD", "UNS_M1_9A", "UNS_M1_16", "UNS_Boonie_TIG1", "UNS_Boonie_TIGF", "UNS_Bandana_OD2", "UNS_M1_4", "UNS_M1_3A", "UNS_Boonie_ODF", "UNS_USMC_Cover", "UNS_Boonie_ODP", "UNS_Beret_B", "UNS_M1_17", "UNS_M1_13", "UNS_M1_9A", "UNS_Beret_51LT", "UNS_Beret_AVM", "UNS_Boonie_TIG", "UNS_M1_PBR", "UNS_Beret_AVAB", "UNS_Headband_OD", "UNS_M1_2", "UNS_Headband_OD2", "UNS_Beret_AVM", "UNS_M1_13", "UNS_Beret_5CPT", "UNS_Boonie_TIG1", "UNS_Beret_AVAB", "UNS_M1_2A", "UNS_Bandana_OD", "UNS_Boonie_TIGF2", "UNS_M1_1RM", "UNS_Boonie_DK", "UNS_M1_2", "UNS_Headband_OD", "UNS_M1_1V6", "UNS_M1_1V6", "UNS_TC_2", "UNS_M1_6A", "UNS_M1_5", "UNS_M1_1V1", "UNS_Beret_AVAB", "UNS_Boonie_TIG1", "UNS_Beret_5MAJ", "UNS_M1_9A", "UNS_Boonie_ODF", "UNS_Beret_5LTCOL", "UNS_Boonie_OD2", "UNS_M1_12", "UNS_Beret_MRF", "UNS_M1_1V1", "UNS_TC_2", "UNS_M1_1V4", "UNS_Boonie_TIG1", "UNS_Bandana_OD2", "UNS_M1_5", "UNS_M1_1A", "UNS_Boonie_TIG2", "UNS_Beret_5MAJ", "UNS_Beret_MRF", "UNS_M1_2A", "UNS_M1_AFT", "UNS_M1_8", "UNS_M1_2A", "UNS_M1_1A", "UNS_Beret_52LT", "UNS_M1_1V7", "UNS_M1_6", "UNS_M1_AFT", "UNS_M1_5", "UNS_M1_AFT", "UNS_HP_Helmet", "UNS_M1_1V1N", "UNS_Boonie_TIG1", "UNS_HP_Helmet", "UNS_M1_2", "UNS_HP_Helmet", "UNS_M1_1V6", "UNS_M1_3", "UNS_Beret_5", "UNS_Beret_5MAJ", "UNS_M1_1V1N", "UNS_M1_2", "UNS_M1_1A", "UNS_Boonie_TIG2", "UNS_Beret_52LT", "UNS_M1_1V1", "UNS_M1_2", "UNS_Beret_5LTCOL", "UNS_Beret_AVM", "UNS_M1_5A", "UNS_TC_1", "UNS_M1_16", "UNS_M1_3", "UNS_Boonie_OD2", "UNS_M1_MP", "UNS_M1_6A", "UNS_Headband_ED", "UNS_M1_MP", "UNS_M1_1", "UNS_Headband_OD2", "UNS_Boonie_TIG2", "UNS_Boonie_DK", "UNS_M1_10", "UNS_M1_17", "UNS_M1_1V1", "UNS_M1_4A", "UNS_M1_1V4", "UNS_Boonie_TIG", "UNS_M1_1A", "UNS_M1_1V5", "UNS_Boonie_ODF", "UNS_M1_14", "UNS_M1_8", "UNS_Bandana_OD", "UNS_Beret_5LTCOL", "UNS_M1_9", "UNS_M1_1RM", "UNS_M1_5A", "UNS_M1_6", "UNS_Boonie_TIG", "UNS_M1_4", "UNS_TC_1", "UNS_M1_1V7", "UNS_Boonie_ODF", "UNS_M1_12", "UNS_M1_6", "UNS_M1_MP", "UNS_Boonie_TIG1", "UNS_JP_Helmet2", "UNS_Beret_5LTCOL", "UNS_Beret_5MAJ", "UNS_M1_1V2", "UNS_HP_Helmet", "UNS_M1_1", "UNS_Headband_OD", "UNS_Beret_5COL", "UNS_M1_9", "UNS_Boonie_TIGF3", "UNS_M1_5", "UNS_Beret_B", "UNS_M1_MP", "UNS_M1_AFT", "UNS_JP_Helmet2", "UNS_TC_1", "UNS_Beret_5", "UNS_Headband_OD", "UNS_M1_1V5", "UNS_Headband_ED", "UNS_Headband_BK", "UNS_M1_11", "UNS_Headband_BK", "UNS_Beret_B", "UNS_M1_3A", "UNS_Boonie_DKF", "UNS_Boonie_DKF", "UNS_M1_4", "UNS_M1_4A", "UNS_M1_14", "UNS_M1_1V1", "UNS_M1_4", "UNS_M1_17", "UNS_Beret_5CPT", "UNS_M1_PBR", "UNS_Beret_5COL", "UNS_USMC_Cover", "UNS_JP_Helmet2", "UNS_M1_1V8", "UNS_M1_5A", "UNS_USMC_Cover", "UNS_M1_10", "UNS_M1_1V8", "UNS_Boonie_OD2", "UNS_TC_2", "UNS_M1_6A", "UNS_M1_1V1", "UNS_Boonie_DK", "UNS_Beret_AVR", "UNS_Boonie_DK", "UNS_Beret_5COL", "UNS_M1_5", "UNS_M1_7", "UNS_Beret_AVAB", "UNS_Boonie_OD2", "UNS_M1_1V3", "UNS_Boonie_TIGF2", "UNS_M1_2A", "UNS_M1_1", "UNS_M1_1V8", "UNS_M1_7A", "UNS_Beret_5LTCOL", "UNS_M1_AFT", "UNS_M1_7A", "UNS_M1_1V1", "UNS_Headband_OD", "UNS_JP_Helmet2", "UNS_M1_10", "UNS_Headband_BK", "UNS_M1_2A", "UNS_Boonie_DKF", "UNS_Beret_AVR", "UNS_HP_Helmet", "UNS_TC_1", "UNS_Beret_AVAB", "UNS_Beret_MRF", "UNS_M1_15", "UNS_HP_Helmet", "UNS_M1_17", "UNS_M1_4A", "UNS_M1_4", "UNS_M1_1RM", "UNS_Beret_5", "UNS_M1_4A", "UNS_Boonie_TIGF2", "UNS_M1_11", "UNS_M1_8A", "UNS_Boonie_TIGF2", "UNS_M1_3", "UNS_Headband_OD", "UNS_M1_9", "UNS_M1_1V1N", "UNS_M1_16", "UNS_Boonie_TIGF2", "UNS_Beret_5COL", "UNS_M1_16", "UNS_TC_1", "UNS_Headband_BK", "UNS_Boonie_ERDL", "UNS_TC_2", "UNS_Beret_AVAB", "UNS_M1_5A", "UNS_Boonie_ODP", "UNS_Boonie_TIG2", "UNS_JP_Helmet", "UNS_Boonie_ERDL", "UNS_M1_1V3", "UNS_Boonie_ODF", "UNS_Headband_BK", "UNS_Boonie_TIG1", "UNS_Boonie_ODP", "UNS_Beret_51LT", "UNS_M1_5A", "UNS_M1_2A", "UNS_M1_12", "UNS_JP_Helmet", "UNS_M1_7", "UNS_M1_9", "UNS_M1_AFT", "UNS_Beret_5MAJ", "UNS_M1_AFT", "UNS_M1_1V6", "UNS_Boonie_OD2", "UNS_M1_11", "UNS_M1_1", "UNS_M1_1V8", "UNS_Headband_ED", "UNS_M1_5", "UNS_M1_MP", "UNS_M1_1RM", "UNS_Boonie_TIG2", "UNS_Beret_51LT", "UNS_M1_1V8", "UNS_Boonie_TIG", "UNS_Beret_AVR", "UNS_M1_3A", "UNS_M1_15", "UNS_M1_4", "UNS_M1_1V4", "UNS_Beret_AVM", "UNS_M1_1", "UNS_Boonie_ERDL", "UNS_Beret_B", "UNS_JP_Helmet", "UNS_Boonie_TIG1", "UNS_M1_15", "UNS_Boonie_ODF", "UNS_Headband_OD2", "UNS_Beret_5CPT", "UNS_Beret_5", "UNS_Boonie_TIGF2", "UNS_Beret_B", "UNS_Bandana_OD", "UNS_M1_4A", "UNS_JP_Helmet", "UNS_Boonie_ODF", "UNS_Beret_5LTCOL", "UNS_Beret_B", "UNS_JP_Helmet2", "UNS_Boonie_ODF", "UNS_TC_2", "UNS_M1_7A", "UNS_M1_7", "UNS_M1_7A", "UNS_Bandana_OD2", "UNS_M1_17", "UNS_M1_10", "UNS_M1_SP", "UNS_M1_MP", "UNS_M1_4", "UNS_M1_9", "UNS_Beret_5", "UNS_M1_4", "UNS_Boonie_OD2", "UNS_M1_13", "UNS_Bandana_OD", "UNS_Beret_5CPT", "UNS_USMC_Cover", "UNS_M1_7", "UNS_M1_1V1N", "UNS_M1_6", "UNS_Boonie_TIG1", "UNS_Boonie_OD", "UNS_M1_12", "UNS_Beret_5MAJ", "UNS_M1_13", "UNS_M1_13", "UNS_M1_1", "UNS_JP_Helmet", "UNS_Beret_51LT", "UNS_M1_1RM", "UNS_Boonie_DK", "UNS_M1_SP", "UNS_Beret_5COL", "UNS_M1_6A", "UNS_M1_4A", "UNS_M1_2", "UNS_Beret_5LTCOL", "UNS_Headband_OD2", "UNS_M1_1V4", "UNS_M1_17", "UNS_Beret_5CPT", "UNS_M1_7A", "UNS_Boonie_ERDL", "UNS_Headband_OD2", "UNS_Boonie_DKF", "UNS_M1_10", "UNS_TC_2", "UNS_Boonie_DKF", "UNS_M1_15", "UNS_HP_Helmet", "UNS_M1_7A", "UNS_Boonie_ERDL", "UNS_M1_1V4", "UNS_M1_7A", "UNS_Beret_52LT", "UNS_Beret_MRF", "UNS_M1_17", "UNS_M1_15", "UNS_Beret_51LT", "UNS_M1_1A", "UNS_Boonie_OD", "UNS_M1_1V7", "UNS_Boonie_DK", "UNS_Beret_AVR", "UNS_USMC_Cover", "UNS_Bandana_OD2", "UNS_M1_7A", "UNS_Boonie_ERDL", "UNS_Headband_BK", "UNS_Beret_MRF", "UNS_M1_6A", "UNS_M1_1V3", "UNS_Headband_BK", "UNS_JP_Helmet2", "UNS_Boonie_TIG2", "UNS_Boonie_TIGF4", "UNS_Boonie_OD2", "UNS_Boonie_TIGF", "UNS_M1_7", "UNS_Headband_ED", "UNS_Boonie_TIG", "UNS_Beret_5MAJ", "UNS_Beret_51LT", "UNS_Bandana_OD2", "UNS_Headband_OD", "UNS_Headband_BK", "UNS_JP_Helmet2", "UNS_M1_14", "UNS_M1_1V2", "UNS_M1_1A", "UNS_M1_MP", "UNS_M1_15", "UNS_M1_1A", "UNS_Beret_52LT", "UNS_M1_8A", "UNS_Headband_OD2", "UNS_M1_3", "UNS_M1_8", "UNS_M1_1V5", "UNS_Beret_51LT", "UNS_Headband_ED", "UNS_Boonie_TIGF3", "UNS_M1_5A", "UNS_M1_9", "UNS_M1_AFT", "UNS_TC_2", "UNS_Beret_AVM", "UNS_Boonie_TIG1", "UNS_Beret_51LT", "UNS_M1_1V7", "UNS_M1_17", "UNS_Bandana_OD", "UNS_Boonie_TIG", "UNS_M1_14", "UNS_M1_12", "UNS_M1_4", "UNS_Boonie_OD", "UNS_Beret_5CPT", "UNS_M1_1V2", "UNS_Boonie_DK", "UNS_M1_6A", "UNS_M1_1V1", "UNS_M1_11", "UNS_M1_3A", "UNS_M1_8", "UNS_Boonie_TIGF3", "UNS_M1_1V5", "UNS_Boonie_OD", "UNS_Beret_52LT", "UNS_Boonie_TIGF4", "UNS_Boonie_TIG1", "UNS_M1_1V1N", "UNS_M1_13", "UNS_M1_1V4", "UNS_Boonie_OD", "UNS_M1_PBR", "UNS_M1_1V1", "UNS_Boonie_DK", "UNS_M1_4A", "UNS_Bandana_OD", "UNS_Beret_5MAJ", "UNS_M1_2", "UNS_M1_8A", "UNS_M1_4A", "UNS_Beret_B", "UNS_M1_4A", "UNS_M1_1V2", "UNS_M1_8A", "UNS_Boonie_DKF", "UNS_M1_2A", "UNS_M1_14", "UNS_M1_1RM", "UNS_M1_1A", "UNS_M1_2A", "UNS_M1_1RM", "UNS_M1_9", "UNS_Beret_5", "UNS_Boonie_OD2", "UNS_JP_Helmet2", "UNS_Boonie_TIGF4", "UNS_Boonie_ERDL", "UNS_Boonie_TIGF3", "UNS_M1_1RM", "UNS_Headband_ED", "UNS_USMC_Cover", "UNS_M1_13", "UNS_M1_1V3", "UNS_Headband_OD", "UNS_Headband_OD2", "UNS_HP_Helmet", "UNS_Boonie_TIGF", "UNS_M1_1V3", "UNS_Headband_OD2", "UNS_Boonie_ERDL", "UNS_M1_1V1N", "UNS_Bandana_OD2", "UNS_M1_4A", "UNS_M1_6", "UNS_M1_PBR", "UNS_M1_7", "UNS_M1_2A", "UNS_Boonie_TIGF3", "UNS_M1_17", "UNS_Headband_OD", "UNS_M1_1", "UNS_M1_12", "UNS_M1_8A", "UNS_M1_8A", "UNS_M1_1V6", "UNS_Boonie_OD", "UNS_M1_MP", "UNS_Beret_B", "UNS_Beret_AVM", "UNS_M1_2A", "UNS_M1_2", "UNS_TC_1", "UNS_Beret_5MAJ", "UNS_M1_1V7", "UNS_Beret_5COL", "UNS_M1_1V1N"};

		/*
			Percental Item Spawn Chances of VcHeadgear:

			UNS_Headband_VC = 8.33%
			UNS_Conehat_VC  = 8.33%
			UNS_Boonie_VC   = 8.33%
			UNS_NVA_HG      = 8.33%
			UNS_NVA_HGG     = 8.33%
			UNS_NVA_HK      = 8.33%
			UNS_NVA_HKG     = 8.33%
			UNS_PAVN_HN     = 8.33%
			UNS_PAVN_HC     = 8.33%
			UNS_PAVN_HG     = 8.33%
			UNS_NVA_CH      = 8.33%
			UNS_NVA_PL      = 8.33%
		*/
		VcHeadgear[] = {"UNS_NVA_HK", "UNS_PAVN_HC", "UNS_Boonie_VC", "UNS_PAVN_HC", "UNS_NVA_HK", "UNS_PAVN_HG", "UNS_PAVN_HG", "UNS_Headband_VC", "UNS_Conehat_VC", "UNS_NVA_HGG", "UNS_NVA_HG", "UNS_PAVN_HG", "UNS_NVA_HKG", "UNS_Boonie_VC", "UNS_Boonie_VC", "UNS_PAVN_HC", "UNS_NVA_PL", "UNS_Conehat_VC", "UNS_NVA_HK", "UNS_Conehat_VC", "UNS_Conehat_VC", "UNS_NVA_HKG", "UNS_NVA_PL", "UNS_Headband_VC", "UNS_NVA_PL", "UNS_NVA_HG", "UNS_NVA_HKG", "UNS_Conehat_VC", "UNS_NVA_HKG", "UNS_Boonie_VC", "UNS_NVA_HK", "UNS_Headband_VC", "UNS_NVA_HG", "UNS_NVA_CH", "UNS_NVA_PL", "UNS_NVA_CH", "UNS_PAVN_HN", "UNS_NVA_HGG", "UNS_NVA_HK", "UNS_PAVN_HN", "UNS_NVA_CH", "UNS_NVA_HKG", "UNS_Headband_VC", "UNS_Headband_VC", "UNS_NVA_PL", "UNS_PAVN_HN", "UNS_NVA_PL", "UNS_PAVN_HC", "UNS_PAVN_HC", "UNS_Conehat_VC", "UNS_NVA_HG", "UNS_NVA_PL", "UNS_PAVN_HC", "UNS_PAVN_HG", "UNS_NVA_HKG", "UNS_NVA_CH", "UNS_Conehat_VC", "UNS_NVA_CH", "UNS_PAVN_HC", "UNS_Headband_VC", "UNS_PAVN_HG", "UNS_Boonie_VC", "UNS_NVA_HG", "UNS_PAVN_HG", "UNS_Boonie_VC", "UNS_Boonie_VC", "UNS_NVA_CH", "UNS_NVA_HGG", "UNS_PAVN_HG", "UNS_NVA_HK", "UNS_PAVN_HC", "UNS_PAVN_HN", "UNS_NVA_HKG", "UNS_NVA_HGG", "UNS_Headband_VC", "UNS_Conehat_VC", "UNS_NVA_HGG", "UNS_NVA_HGG", "UNS_Boonie_VC", "UNS_NVA_HGG", "UNS_NVA_CH", "UNS_PAVN_HN", "UNS_PAVN_HN", "UNS_NVA_HGG", "UNS_Boonie_VC", "UNS_NVA_CH", "UNS_PAVN_HC", "UNS_PAVN_HC", "UNS_NVA_HGG", "UNS_NVA_HG", "UNS_NVA_PL", "UNS_PAVN_HC", "UNS_NVA_PL", "UNS_NVA_CH", "UNS_NVA_HGG", "UNS_NVA_HG", "UNS_NVA_HKG", "UNS_Conehat_VC", "UNS_NVA_PL", "UNS_NVA_HG", "UNS_PAVN_HG", "UNS_NVA_HK", "UNS_PAVN_HG", "UNS_NVA_PL", "UNS_Boonie_VC", "UNS_NVA_CH", "UNS_NVA_HK", "UNS_Conehat_VC", "UNS_NVA_HK", "UNS_NVA_HG", "UNS_Boonie_VC", "UNS_PAVN_HN", "UNS_PAVN_HG", "UNS_NVA_HKG", "UNS_PAVN_HG", "UNS_NVA_HKG", "UNS_PAVN_HG", "UNS_NVA_HK", "UNS_PAVN_HG", "UNS_NVA_CH", "UNS_Headband_VC", "UNS_Conehat_VC", "UNS_NVA_HKG", "UNS_NVA_HK", "UNS_NVA_PL", "UNS_NVA_HGG", "UNS_NVA_CH", "UNS_Headband_VC", "UNS_Headband_VC", "UNS_PAVN_HN", "UNS_NVA_HKG", "UNS_Boonie_VC", "UNS_NVA_PL", "UNS_NVA_HG", "UNS_NVA_HKG", "UNS_PAVN_HN", "UNS_NVA_HKG", "UNS_NVA_HG", "UNS_NVA_HK", "UNS_PAVN_HC", "UNS_NVA_HG", "UNS_PAVN_HN", "UNS_Conehat_VC", "UNS_NVA_HGG", "UNS_NVA_HG", "UNS_Headband_VC", "UNS_Boonie_VC", "UNS_Conehat_VC", "UNS_NVA_HK", "UNS_PAVN_HC", "UNS_NVA_HG", "UNS_NVA_HKG", "UNS_NVA_HK", "UNS_PAVN_HC", "UNS_PAVN_HG", "UNS_Conehat_VC", "UNS_PAVN_HN", "UNS_NVA_CH", "UNS_PAVN_HN", "UNS_PAVN_HC", "UNS_Conehat_VC", "UNS_Headband_VC", "UNS_NVA_CH", "UNS_PAVN_HG", "UNS_NVA_CH", "UNS_PAVN_HN", "UNS_Headband_VC", "UNS_Boonie_VC", "UNS_Headband_VC", "UNS_Boonie_VC", "UNS_PAVN_HN", "UNS_NVA_PL", "UNS_NVA_HGG", "UNS_Headband_VC", "UNS_NVA_HGG", "UNS_NVA_PL", "UNS_NVA_HGG", "UNS_NVA_HK", "UNS_PAVN_HN", "UNS_NVA_HG"};

		/*
			Percental Item Spawn Chances of MedicalItems:

			UNS_MedKit               = 20.00%
			Exile_Item_Bandage       = 20.00%
			Exile_Item_Vishpirin     = 20.00%
			Exile_Item_InstaDoc      = 20.00%
			Exile_Item_Defibrillator = 20.00%
		*/
		MedicalItems[] = {"UNS_MedKit", "Exile_Item_Vishpirin", "Exile_Item_Vishpirin", "Exile_Item_Vishpirin", "Exile_Item_Defibrillator", "UNS_MedKit", "UNS_MedKit", "UNS_MedKit", "Exile_Item_Defibrillator", "Exile_Item_Bandage", "UNS_MedKit", "Exile_Item_Bandage", "Exile_Item_InstaDoc", "Exile_Item_InstaDoc", "Exile_Item_InstaDoc", "Exile_Item_Vishpirin", "Exile_Item_Defibrillator", "UNS_MedKit", "UNS_MedKit", "Exile_Item_Vishpirin", "Exile_Item_InstaDoc", "Exile_Item_Defibrillator", "Exile_Item_Defibrillator", "Exile_Item_Vishpirin", "Exile_Item_Defibrillator", "UNS_MedKit", "Exile_Item_Bandage", "Exile_Item_Defibrillator", "Exile_Item_Bandage", "Exile_Item_InstaDoc", "Exile_Item_Defibrillator", "Exile_Item_Vishpirin", "Exile_Item_Defibrillator", "Exile_Item_Bandage", "Exile_Item_InstaDoc", "UNS_MedKit", "Exile_Item_InstaDoc", "Exile_Item_Vishpirin", "Exile_Item_Defibrillator", "UNS_MedKit", "Exile_Item_Vishpirin", "UNS_MedKit", "Exile_Item_Bandage", "Exile_Item_Vishpirin", "UNS_MedKit", "Exile_Item_Bandage", "Exile_Item_Bandage", "UNS_MedKit", "Exile_Item_Bandage", "Exile_Item_InstaDoc", "Exile_Item_Bandage", "Exile_Item_Defibrillator", "Exile_Item_Defibrillator", "Exile_Item_Defibrillator", "Exile_Item_Bandage", "Exile_Item_Vishpirin", "Exile_Item_InstaDoc", "Exile_Item_InstaDoc", "Exile_Item_Bandage", "UNS_MedKit", "Exile_Item_Bandage", "Exile_Item_Defibrillator", "Exile_Item_InstaDoc", "Exile_Item_InstaDoc", "Exile_Item_InstaDoc", "Exile_Item_InstaDoc", "Exile_Item_Defibrillator", "Exile_Item_Vishpirin", "Exile_Item_Bandage", "Exile_Item_Vishpirin", "Exile_Item_Vishpirin", "Exile_Item_Bandage", "Exile_Item_InstaDoc", "UNS_MedKit", "Exile_Item_Vishpirin"};

		/*
			Percental Item Spawn Chances of IndustrialItems:

			Exile_Item_ThermalScannerPro    = 0.64%
			Exile_Item_Knife                = 1.27%
			Exile_Item_Cement               = 1.91%
			Exile_Item_FloodLightKit        = 1.91%
			Exile_Item_PortableGeneratorKit = 1.91%
			Exile_Item_CamoTentKit          = 2.55%
			Exile_Item_MetalBoard           = 2.55%
			Exile_Item_Foolbox              = 2.55%
			Exile_Item_Sand                 = 2.55%
			Exile_Item_Grinder              = 3.18%
			Exile_Item_MetalScrews          = 3.18%
			Exile_Melee_SledgeHammer        = 3.18%
			Exile_Item_Hammer               = 3.18%
			Exile_Item_ExtensionCord        = 5.10%
			Exile_Item_LightBulb            = 5.73%
			Exile_Item_WaterCanisterEmpty   = 6.37%
			Exile_Melee_Shovel              = 6.37%
			Exile_Item_JunkMetal            = 7.01%
			Exile_Item_Handsaw              = 8.28%
			Exile_Item_Pliers               = 8.28%
			Exile_Item_ScrewDriver          = 8.28%
			Exile_Melee_Axe                 = 14.01%
		*/
		IndustrialItems[] = {"Exile_Item_LightBulb", "Exile_Item_Pliers", "Exile_Item_JunkMetal", "Exile_Item_ExtensionCord", "Exile_Melee_Axe", "Exile_Item_ScrewDriver", "Exile_Item_Grinder", "Exile_Melee_Axe", "Exile_Item_Grinder", "Exile_Item_JunkMetal", "Exile_Item_WaterCanisterEmpty", "Exile_Item_Pliers", "Exile_Item_Pliers", "Exile_Item_Cement", "Exile_Item_LightBulb", "Exile_Melee_Shovel", "Exile_Item_Handsaw", "Exile_Item_ExtensionCord", "Exile_Melee_Shovel", "Exile_Item_Handsaw", "Exile_Item_Pliers", "Exile_Item_ScrewDriver", "Exile_Melee_Axe", "Exile_Item_JunkMetal", "Exile_Melee_Shovel", "Exile_Item_Hammer", "Exile_Item_MetalScrews", "Exile_Item_ScrewDriver", "Exile_Item_LightBulb", "Exile_Item_Foolbox", "Exile_Item_Knife", "Exile_Item_ExtensionCord", "Exile_Item_CamoTentKit", "Exile_Item_WaterCanisterEmpty", "Exile_Item_MetalScrews", "Exile_Melee_Axe", "Exile_Item_WaterCanisterEmpty", "Exile_Item_Grinder", "Exile_Melee_SledgeHammer", "Exile_Item_Hammer", "Exile_Item_ExtensionCord", "Exile_Item_ExtensionCord", "Exile_Item_Pliers", "Exile_Item_ThermalScannerPro", "Exile_Item_MetalBoard", "Exile_Melee_Shovel", "Exile_Item_LightBulb", "Exile_Melee_Axe", "Exile_Melee_Axe", "Exile_Item_Pliers", "Exile_Item_ScrewDriver", "Exile_Item_Handsaw", "Exile_Item_Cement", "Exile_Melee_Axe", "Exile_Item_JunkMetal", "Exile_Melee_Shovel", "Exile_Melee_Shovel", "Exile_Item_ScrewDriver", "Exile_Melee_Axe", "Exile_Item_Handsaw", "Exile_Item_Hammer", "Exile_Melee_Shovel", "Exile_Melee_Axe", "Exile_Item_Hammer", "Exile_Item_Handsaw", "Exile_Item_ScrewDriver", "Exile_Item_LightBulb", "Exile_Item_WaterCanisterEmpty", "Exile_Item_ScrewDriver", "Exile_Item_Pliers", "Exile_Item_FloodLightKit", "Exile_Melee_SledgeHammer", "Exile_Item_Pliers", "Exile_Item_JunkMetal", "Exile_Item_Cement", "Exile_Item_ExtensionCord", "Exile_Item_Sand", "Exile_Item_MetalBoard", "Exile_Item_Pliers", "Exile_Item_ExtensionCord", "Exile_Item_ScrewDriver", "Exile_Item_Hammer", "Exile_Item_WaterCanisterEmpty", "Exile_Item_WaterCanisterEmpty", "Exile_Item_Handsaw", "Exile_Item_Handsaw", "Exile_Item_Pliers", "Exile_Item_Grinder", "Exile_Item_MetalBoard", "Exile_Melee_Axe", "Exile_Item_Sand", "Exile_Item_Foolbox", "Exile_Melee_SledgeHammer", "Exile_Melee_Shovel", "Exile_Melee_Shovel", "Exile_Item_ScrewDriver", "Exile_Item_JunkMetal", "Exile_Item_ScrewDriver", "Exile_Melee_Axe", "Exile_Melee_Axe", "Exile_Item_Foolbox", "Exile_Item_FloodLightKit", "Exile_Melee_SledgeHammer", "Exile_Melee_Axe", "Exile_Melee_Axe", "Exile_Item_Sand", "Exile_Item_MetalScrews", "Exile_Item_JunkMetal", "Exile_Item_Knife", "Exile_Item_Handsaw", "Exile_Item_ScrewDriver", "Exile_Item_WaterCanisterEmpty", "Exile_Item_Pliers", "Exile_Item_Handsaw", "Exile_Item_Pliers", "Exile_Item_WaterCanisterEmpty", "Exile_Item_Sand", "Exile_Item_Grinder", "Exile_Melee_Shovel", "Exile_Item_ExtensionCord", "Exile_Melee_Axe", "Exile_Item_CamoTentKit", "Exile_Item_FloodLightKit", "Exile_Item_LightBulb", "Exile_Melee_Axe", "Exile_Item_LightBulb", "Exile_Item_Handsaw", "Exile_Item_WaterCanisterEmpty", "Exile_Item_JunkMetal", "Exile_Melee_Axe", "Exile_Item_JunkMetal", "Exile_Item_ScrewDriver", "Exile_Melee_Axe", "Exile_Item_ScrewDriver", "Exile_Melee_Axe", "Exile_Item_PortableGeneratorKit", "Exile_Melee_Axe", "Exile_Item_CamoTentKit", "Exile_Item_CamoTentKit", "Exile_Item_MetalBoard", "Exile_Item_Handsaw", "Exile_Item_MetalScrews", "Exile_Item_WaterCanisterEmpty", "Exile_Melee_SledgeHammer", "Exile_Item_JunkMetal", "Exile_Melee_Axe", "Exile_Item_Handsaw", "Exile_Item_MetalScrews", "Exile_Item_LightBulb", "Exile_Item_JunkMetal", "Exile_Item_LightBulb", "Exile_Item_Handsaw", "Exile_Melee_Axe", "Exile_Item_PortableGeneratorKit", "Exile_Item_PortableGeneratorKit", "Exile_Item_Pliers", "Exile_Item_Foolbox"};

		/*
			Percental Item Spawn Chances of Vehicle:

			uns_ItemFuelcan      = 50.00%
			uns_ItemFuelcanEmpty = 50.00%
		*/
		Vehicle[] = {"uns_ItemFuelcanEmpty", "uns_ItemFuelcanEmpty", "uns_ItemFuelcanEmpty", "uns_ItemFuelcanEmpty", "uns_ItemFuelcan", "uns_ItemFuelcan", "uns_ItemFuelcan", "uns_ItemFuelcan", "uns_ItemFuelcanEmpty", "uns_ItemFuelcan", "uns_ItemFuelcanEmpty", "uns_ItemFuelcanEmpty", "uns_ItemFuelcan", "uns_ItemFuelcanEmpty", "uns_ItemFuelcanEmpty", "uns_ItemFuelcan", "uns_ItemFuelcan", "uns_ItemFuelcan", "uns_ItemFuelcan", "uns_ItemFuelcan", "uns_ItemFuelcanEmpty", "uns_ItemFuelcanEmpty", "uns_ItemFuelcan", "uns_ItemFuelcanEmpty", "uns_ItemFuelcan", "uns_ItemFuelcanEmpty", "uns_ItemFuelcanEmpty", "uns_ItemFuelcan", "uns_ItemFuelcanEmpty", "uns_ItemFuelcan"};

		/*
			Percental Item Spawn Chances of Extras:

			uns_item_zippo = 25.00%
			uns_leaflet12  = 25.00%
			uns_leaflet13  = 25.00%
			uns_ItemSiphon = 25.00%
		*/
		Extras[] = {"uns_leaflet12", "uns_leaflet13", "uns_leaflet12", "uns_leaflet13", "uns_item_zippo", "uns_leaflet12", "uns_ItemSiphon", "uns_item_zippo", "uns_ItemSiphon", "uns_item_zippo", "uns_item_zippo", "uns_ItemSiphon", "uns_leaflet13", "uns_ItemSiphon", "uns_ItemSiphon", "uns_leaflet12", "uns_ItemSiphon", "uns_leaflet12", "uns_leaflet12", "uns_leaflet12", "uns_leaflet13", "uns_leaflet13", "uns_leaflet13", "uns_ItemSiphon", "uns_leaflet13", "uns_leaflet12", "uns_ItemSiphon", "uns_item_zippo", "uns_leaflet13", "uns_ItemSiphon", "uns_ItemSiphon", "uns_ItemSiphon", "uns_item_zippo", "uns_leaflet13", "uns_leaflet12", "uns_item_zippo", "uns_leaflet12", "uns_ItemSiphon", "uns_leaflet12", "uns_leaflet13", "uns_leaflet12", "uns_leaflet12", "uns_item_zippo", "uns_ItemSiphon", "uns_leaflet13", "uns_item_zippo", "uns_ItemSiphon", "uns_item_zippo", "uns_leaflet13", "uns_leaflet13", "uns_item_zippo", "uns_item_zippo", "uns_item_zippo", "uns_leaflet12", "uns_leaflet12", "uns_item_zippo", "uns_ItemSiphon", "uns_leaflet13", "uns_leaflet13", "uns_item_zippo"};

		/*
			Percental Item Spawn Chances of RoadFlares:

			FlareGreen_F  = 25.00%
			FlareRed_F    = 25.00%
			FlareWhite_F  = 25.00%
			FlareYellow_F = 25.00%
		*/
		RoadFlares[] = {"FlareWhite_F", "FlareGreen_F", "FlareRed_F", "FlareYellow_F"};

		/*
			Percental Item Spawn Chances of SmokeGrenades:

			uns_m18purple = 14.29%
			uns_m18yellow = 14.29%
			uns_m18green  = 14.29%
			uns_m18red    = 14.29%
			uns_m18white  = 14.29%
			uns_m18orange = 14.29%
			uns_m18blue   = 14.29%
		*/
		SmokeGrenades[] = {"uns_m18white", "uns_m18purple", "uns_m18purple", "uns_m18white", "uns_m18yellow", "uns_m18green", "uns_m18purple", "uns_m18yellow", "uns_m18white", "uns_m18purple", "uns_m18orange", "uns_m18blue", "uns_m18blue", "uns_m18blue", "uns_m18yellow", "uns_m18orange", "uns_m18orange", "uns_m18orange", "uns_m18yellow", "uns_m18purple", "uns_m18red", "uns_m18blue", "uns_m18red", "uns_m18red", "uns_m18purple", "uns_m18orange", "uns_m18blue", "uns_m18blue", "uns_m18white", "uns_m18orange", "uns_m18white", "uns_m18white", "uns_m18orange", "uns_m18blue", "uns_m18red", "uns_m18red", "uns_m18green", "uns_m18green", "uns_m18purple", "uns_m18purple", "uns_m18green", "uns_m18green", "uns_m18green", "uns_m18red", "uns_m18yellow", "uns_m18white", "uns_m18yellow", "uns_m18yellow", "uns_m18yellow", "uns_m18red", "uns_m18white", "uns_m18orange", "uns_m18yellow", "uns_m18green", "uns_m18blue", "uns_m18red", "uns_m18yellow", "uns_m18red", "uns_m18orange", "uns_m18red", "uns_m18yellow", "uns_m18red", "uns_m18purple", "uns_m18blue", "uns_m18orange", "uns_m18blue", "uns_m18blue", "uns_m18green", "uns_m18yellow", "uns_m18green", "uns_m18orange", "uns_m18white", "uns_m18red", "uns_m18purple", "uns_m18orange", "uns_m18red", "uns_m18white", "uns_m18orange", "uns_m18blue", "uns_m18yellow", "uns_m18blue", "uns_m18green", "uns_m18purple", "uns_m18orange", "uns_m18green", "uns_m18green", "uns_m18green", "uns_m18white", "uns_m18purple", "uns_m18white", "uns_m18yellow", "uns_m18orange", "uns_m18white", "uns_m18purple", "uns_m18yellow", "uns_m18green", "uns_m18blue", "uns_m18white", "uns_m18green", "uns_m18red", "uns_m18red", "uns_m18purple", "uns_m18purple", "uns_m18white", "uns_m18blue"};

		/*
			Percental Item Spawn Chances of Restraints:

			Exile_Item_ZipTie = 100.00%
		*/
		Restraints[] = {"Exile_Item_ZipTie"};

		/*
			Percental Item Spawn Chances of Electronics:

			Exile_Item_Laptop        = 50.00%
			Exile_Item_BaseCameraKit = 50.00%
		*/
		Electronics[] = {"Exile_Item_BaseCameraKit", "Exile_Item_Laptop"};

		/*
			Percental Item Spawn Chances of Trash:

			Exile_Item_Magazine01  = 6.25%
			Exile_Item_Magazine02  = 6.25%
			Exile_Item_Magazine03  = 6.25%
			Exile_Item_Magazine04  = 6.25%
			Exile_Item_EMRE        = 25.00%
			Exile_Item_BeefParts   = 25.00%
			Exile_Item_ToiletPaper = 25.00%
		*/
		Trash[] = {"Exile_Item_ToiletPaper", "Exile_Item_BeefParts", "Exile_Item_BeefParts", "Exile_Item_EMRE", "Exile_Item_ToiletPaper", "Exile_Item_Magazine04", "Exile_Item_Magazine01", "Exile_Item_EMRE", "Exile_Item_ToiletPaper", "Exile_Item_ToiletPaper", "Exile_Item_Magazine02", "Exile_Item_EMRE", "Exile_Item_BeefParts", "Exile_Item_EMRE", "Exile_Item_Magazine03", "Exile_Item_BeefParts"};

		/*
			Percental Item Spawn Chances of Unused:

			Exile_Item_CordlessScrewdriver = 12.50%
			Exile_Item_FireExtinguisher    = 12.50%
			Exile_Item_Rope                = 12.50%
			Exile_Item_Carwheel            = 12.50%
			Exile_Item_Defibrillator       = 12.50%
			Exile_Item_SleepingMat         = 12.50%
			Exile_Item_Wrench              = 12.50%
			Exile_Item_OilCanister         = 12.50%
		*/
		Unused[] = {"Exile_Item_CordlessScrewdriver", "Exile_Item_FireExtinguisher", "Exile_Item_Carwheel", "Exile_Item_Rope", "Exile_Item_Wrench", "Exile_Item_OilCanister", "Exile_Item_SleepingMat", "Exile_Item_Defibrillator"};
	};
};