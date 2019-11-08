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
		CivillianLowerClass[] = {"VCammo", "Trash", "VCammo", "VcBackpacks", "Drinks", "RoadFlares", "VCpistols", "Trash", "Drinks", "Chemlights", "Drinks", "VCammo", "VcVests", "Drinks", "Trash", "Trash", "RoadFlares", "Drinks", "Food", "Trash", "VcHeadgear", "VCpistols", "Trash", "VcClothing", "Chemlights", "Trash", "Food", "RoadFlares", "VcVests", "Trash", "USpistols", "Trash", "USpistols", "Food", "USammo", "Food", "Food", "Trash", "VcVests", "Trash", "Food", "Food", "Food", "PistolAttachments", "USpistols", "VcVests", "USattachments", "Food", "RoadFlares", "Trash", "Trash", "RoadFlares", "VcBackpacks", "VCammo", "Food", "USattachments", "USattachments", "VCammo", "Food", "PistolAttachments", "Food", "Trash", "Chemlights", "VcVests", "ShotgunAmmo", "VcClothing", "Trash", "Trash", "Trash", "Trash", "Food", "VcClothing", "Trash", "VcBackpacks", "Food", "Trash", "Chemlights", "Restraints", "Food", "VcHeadgear", "Chemlights", "Trash", "Trash", "VCpistols", "Food", "VcHeadgear", "RoadFlares", "Drinks", "VcClothing", "Trash", "VCpistols", "Food", "VCammo", "Chemlights", "VcBackpacks", "Drinks", "Food", "Chemlights", "ShotgunAmmo", "ShotgunAmmo", "USammo", "Trash", "VCpistols", "Food", "Trash", "Food", "PistolAttachments", "VCpistols", "RoadFlares", "VcHeadgear", "Food", "Drinks", "Food", "Drinks", "Trash", "Drinks", "VcHeadgear", "Trash", "USammo", "USammo", "VCammo", "Chemlights", "Food", "RoadFlares", "Food", "RoadFlares", "Trash", "Trash", "Food", "VCammo", "Food", "Food", "Trash", "Food", "USpistols", "Chemlights", "USammo", "VcClothing", "Chemlights", "VcBackpacks", "RoadFlares", "VCpistols", "VCpistols"};

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
		CivillianUpperClass[] = {"Food", "USrifles", "VCattachments", "Food", "Food", "Food", "RoadFlares", "Drinks", "USpistols", "Food", "USattachments", "Trash", "Trash", "Trash", "Trash", "USpistols", "Trash", "RoadFlares", "RoadFlares", "VCrifles", "Drinks", "Food", "Food", "CivilianVests", "Trash", "CivilianVests", "Restraints", "Trash", "Food", "Food", "Drinks", "Food", "Trash", "USrifles", "RoadFlares", "Trash", "Trash", "Food", "USammo", "Food", "USrifles", "Drinks", "VCrifles", "Drinks", "USattachments", "RoadFlares", "RoadFlares", "Trash", "USrifles", "Food", "Trash", "RoadFlares", "USpistols", "Trash", "Food", "VCammo", "RoadFlares", "Trash", "Food", "Food", "VCammo", "CivilianVests", "Trash", "Food", "Trash", "Trash", "Trash", "VCammo", "Trash", "Trash", "Trash", "Trash", "USattachments", "Trash", "Food", "USammo", "VCattachments", "RoadFlares", "Drinks", "Trash", "Food", "Trash", "Trash", "CivilianVests", "Drinks", "Food", "Drinks", "VCrifles", "Food", "Food", "Trash", "Food", "VCattachments", "RoadFlares", "USammo", "CivilianVests", "USammo", "Trash", "Drinks", "Food", "Food", "Food", "Drinks", "USpistols", "USpistols", "Trash", "Food", "Trash", "Food"};

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
		Shop[] = {"Chemlights", "USattachments", "USrifles", "Trash", "Food", "Trash", "Food", "Trash", "VCrifles", "VCammo", "Food", "USPistols", "VCrifles", "Drinks", "Drinks", "Food", "Food", "Trash", "USPistols", "MedicalItems", "RoadFlares", "Food", "Food", "Drinks", "Trash", "Food", "USlmg", "USrifles", "VCrifles", "IndustrialItems", "Drinks", "Chemlights", "USPistols", "USrifles", "VCrifles", "Drinks", "Trash", "Restraints", "Food", "Drinks", "Drinks", "VCammo", "Drinks", "Trash", "RoadFlares", "Trash", "MedicalItems", "Trash", "Trash", "Trash", "Chemlights", "IndustrialItems", "Drinks", "Food", "Trash", "SmokeGrenades", "RoadFlares", "Trash", "SmokeGrenades", "Trash", "Trash", "IndustrialItems", "RoadFlares", "VCammo", "Trash", "Chemlights", "Restraints", "Drinks", "USrifles", "USPistols", "USPistolAmmo", "Restraints", "VCrifles", "USPistols", "Food", "VCammo", "USPistolAmmo", "Drinks", "Drinks", "Trash", "Chemlights", "Food", "Food", "Drinks", "Drinks", "USrifles", "Trash", "Trash", "Drinks", "RoadFlares", "USammo", "SmokeGrenades", "USPistols", "Trash", "MedicalItems", "Food", "USPistols", "Food", "VCammo", "USPistols", "SmokeGrenades", "USPistols", "USPistols"};

		/*
			Percental Item Group Spawn Chances of Industrial:

			Restraints      = 4.35%
			RoadFlares      = 13.04%
			Vehicle         = 21.74%
			Trash           = 26.09%
			IndustrialItems = 34.78%
		*/
		Industrial[] = {"IndustrialItems", "IndustrialItems", "IndustrialItems", "Vehicle", "IndustrialItems", "Restraints", "RoadFlares", "IndustrialItems", "IndustrialItems", "Trash", "RoadFlares", "Trash", "Trash", "RoadFlares", "Vehicle", "IndustrialItems", "IndustrialItems", "Vehicle", "Trash", "Trash", "Vehicle", "Trash", "Vehicle"};

		/*
			Percental Item Group Spawn Chances of Factories:

			Electronics     = 10.00%
			Trash           = 40.00%
			IndustrialItems = 50.00%
		*/
		Factories[] = {"IndustrialItems", "IndustrialItems", "IndustrialItems", "Trash", "Trash", "IndustrialItems", "Trash", "Electronics", "IndustrialItems", "Trash"};

		/*
			Percental Item Group Spawn Chances of VehicleService:

			Restraints      = 4.35%
			RoadFlares      = 13.04%
			IndustrialItems = 21.74%
			Trash           = 26.09%
			Vehicle         = 34.78%
		*/
		VehicleService[] = {"Vehicle", "Vehicle", "Vehicle", "Restraints", "Trash", "IndustrialItems", "Trash", "IndustrialItems", "IndustrialItems", "Vehicle", "IndustrialItems", "RoadFlares", "RoadFlares", "Vehicle", "IndustrialItems", "Trash", "Vehicle", "Vehicle", "Trash", "Trash", "RoadFlares", "Vehicle", "Trash"};

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
		Military[] = {"Explosives", "HandGrenades", "MedicalItems", "USpistols", "USpistols", "USrifles", "MilitaryVests", "HandGrenades", "MilitaryClothing", "Trash", "MilitaryHeadgear", "USammo", "USrifles", "USammo", "USlmg", "USammo", "MilitaryBackpacks", "Trash", "Trash", "USsnipers", "USlmg", "MedicalItems", "USpistols", "HandGrenades", "USlmg", "SmokeGrenades", "USattachments", "MilitaryBackpacks", "SmokeGrenades", "MilitaryHeadgear", "Restraints", "MedicalItems", "MedicalItems", "MilitaryVests", "Restraints", "MilitaryVests", "MilitaryBackpacks", "Restraints", "USlmg", "MilitaryClothing", "SmokeGrenades", "Explosives", "MilitaryClothing", "USsnipers", "MilitaryClothing", "USattachments", "MilitaryClothing", "USsnipers", "HandGrenades", "MilitaryHeadgear", "MilitaryHeadgear", "USattachments", "MedicalItems", "USlmg", "Trash", "USammo", "UStraps", "UStraps", "Explosives", "MilitaryVests", "USsnipers", "USlmg", "MilitaryHeadgear", "Explosives", "USrifles", "Restraints", "USattachments", "USrifles", "USammo", "Explosives", "UStraps", "SmokeGrenades", "UStraps", "USpistols", "MilitaryVests", "MilitaryBackpacks", "USrifles", "Trash", "UStraps", "USammo", "SmokeGrenades", "USattachments", "Restraints", "USrifles", "HandGrenades", "USpistols", "USsnipers", "MilitaryBackpacks"};

		/*
			Percental Item Group Spawn Chances of Medical:

			Trash        = 23.08%
			MedicalItems = 76.92%
		*/
		Medical[] = {"MedicalItems", "Trash", "MedicalItems", "MedicalItems", "MedicalItems", "Trash", "MedicalItems", "MedicalItems", "MedicalItems", "MedicalItems", "MedicalItems", "Trash", "MedicalItems"};

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
		Tourist[] = {"MilitaryHeadgear", "USammo", "USsnipers", "Restraints", "DLCRifles", "MilitaryHeadgear", "USsnipers", "Explosives", "USsnipers", "MilitaryHeadgear", "MedicalItems", "Explosives", "MilitaryBackpacks", "DLCRifles", "DLCRifles", "DLCRifles", "Restraints", "USattachments", "MilitaryHeadgear", "DLCRifles", "HandGrenades", "USsnipers", "USsnipers", "MilitaryBackpacks", "MedicalItems", "DLCRifles", "MilitaryBackpacks", "DLCRifles", "USsnipers", "USsnipers", "HandGrenades", "USsnipers", "DLCRifles", "MilitaryBackpacks"};

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
		Radiation[] = {"MilitaryBackpacks", "MedicalItems", "MilitaryHeadgear", "MilitaryBackpacks", "USsnipers", "MilitaryBackpacks", "USsnipers", "EpicWeapons", "USammo", "USsnipers", "MilitaryHeadgear", "Explosives", "MilitaryHeadgear", "Explosives", "EpicWeapons", "MilitaryHeadgear", "HandGrenades", "Restraints", "USsnipers", "MilitaryHeadgear", "MedicalItems", "Explosives", "USattachments", "MilitaryBackpacks", "Explosives", "USsnipers", "Explosives", "MilitaryBackpacks", "Restraints", "HandGrenades"};
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
		Food[] = {"Exile_Item_Matches", "Exile_Item_CatFood", "Exile_Item_CockONut", "Exile_Item_SeedAstics", "Exile_Item_Raisins", "Exile_Item_BeefParts", "Exile_Item_SeedAstics", "Exile_Item_Surstromming", "Exile_Item_CockONut", "Exile_Item_CockONut", "Exile_Item_SeedAstics", "Exile_Item_Cheathas", "Exile_Item_Raisins", "Exile_Item_Dogfood", "Exile_Item_CanOpener", "Exile_Item_ChristmasTinner", "Exile_Item_ChristmasTinner", "Exile_Item_SausageGravy", "Exile_Item_MacasCheese", "Exile_Item_InstantCoffee", "Exile_Item_BBQSandwich", "Exile_Item_Cheathas", "Exile_Item_CookingPot", "Exile_Item_Matches", "Exile_Item_Raisins", "Exile_Item_InstantCoffee", "Exile_Item_Matches", "Exile_Item_BBQSandwich", "Exile_Item_GloriousKnakworst", "Exile_Item_Dogfood", "Exile_Item_ChristmasTinner", "Exile_Item_Moobar", "Exile_Item_Surstromming", "Exile_Item_Dogfood", "Exile_Item_Raisins", "Exile_Item_CockONut", "Exile_Item_Moobar", "Exile_Item_InstantCoffee", "Exile_Item_Moobar", "Exile_Item_Cheathas", "Exile_Item_MacasCheese", "Exile_Item_ChristmasTinner", "Exile_Item_GloriousKnakworst", "Exile_Item_Moobar", "Exile_Item_Noodles", "Exile_Item_BeefParts", "Exile_Item_InstantCoffee", "Exile_Item_SeedAstics", "Exile_Item_GloriousKnakworst", "Exile_Item_BBQSandwich", "Exile_Item_Surstromming", "Exile_Item_DsNuts", "Exile_Item_Raisins", "Exile_Item_DsNuts", "Exile_Item_InstantCoffee", "Exile_Item_DsNuts", "Exile_Item_BBQSandwich", "Exile_Item_Raisins", "Exile_Item_MacasCheese", "Exile_Item_CatFood", "Exile_Item_CatFood", "Exile_Item_DsNuts", "Exile_Item_Surstromming", "Exile_Item_InstantCoffee", "Exile_Item_SeedAstics", "Exile_Item_Cheathas", "Exile_Item_MacasCheese", "Exile_Item_CockONut", "Exile_Item_SausageGravy", "Exile_Item_DsNuts", "Exile_Item_Matches", "Exile_Item_Moobar", "Exile_Item_ChristmasTinner", "Exile_Item_Dogfood", "Exile_Item_MacasCheese", "Exile_Item_Noodles", "Exile_Item_Matches", "Exile_Item_BeefParts", "Exile_Item_CatFood", "Exile_Item_Noodles", "Exile_Item_InstantCoffee", "Exile_Item_Noodles", "Exile_Item_Cheathas", "Exile_Item_Noodles", "Exile_Item_Moobar", "Exile_Item_Noodles", "Exile_Item_EMRE", "Exile_Item_SausageGravy", "Exile_Item_Moobar", "Exile_Item_SausageGravy", "Exile_Item_BeefParts", "Exile_Item_InstantCoffee", "Exile_Item_CanOpener", "Exile_Item_CanOpener", "Exile_Item_Surstromming", "Exile_Item_Raisins", "Exile_Item_Dogfood", "Exile_Item_BBQSandwich", "Exile_Item_CookingPot", "Exile_Item_DsNuts", "Exile_Item_ChristmasTinner", "Exile_Item_MacasCheese", "Exile_Item_Dogfood", "Exile_Item_Moobar", "Exile_Item_EMRE", "Exile_Item_CanOpener", "Exile_Item_CatFood", "Exile_Item_SeedAstics", "Exile_Item_CockONut", "Exile_Item_BeefParts", "Exile_Item_BBQSandwich", "Exile_Item_Cheathas", "Exile_Item_SausageGravy", "Exile_Item_Noodles", "Exile_Item_SausageGravy", "Exile_Item_Surstromming", "Exile_Item_SeedAstics", "Exile_Item_EMRE", "Exile_Item_CockONut", "Exile_Item_CockONut", "Exile_Item_BeefParts", "Exile_Item_CanOpener", "Exile_Item_Dogfood", "Exile_Item_GloriousKnakworst", "Exile_Item_InstantCoffee", "Exile_Item_SausageGravy", "Exile_Item_ChristmasTinner", "Exile_Item_GloriousKnakworst", "Exile_Item_Surstromming", "Exile_Item_InstantCoffee", "Exile_Item_MacasCheese", "Exile_Item_Cheathas", "Exile_Item_DsNuts", "Exile_Item_CookingPot", "Exile_Item_Raisins", "Exile_Item_CatFood", "Exile_Item_BeefParts", "Exile_Item_Moobar", "Exile_Item_GloriousKnakworst", "Exile_Item_CatFood", "Exile_Item_InstantCoffee", "Exile_Item_SeedAstics", "Exile_Item_BBQSandwich", "Exile_Item_Raisins"};

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
		Drinks[] = {"Exile_Item_PlasticBottleDirtyWater", "Exile_Item_PlasticBottleDirtyWater", "Exile_Item_ChocolateMilk", "Exile_Item_Beer", "Exile_Item_PlasticBottleDirtyWater", "Exile_Item_MountainDupe", "Exile_Item_ChocolateMilk", "Exile_Item_MountainDupe", "Exile_Item_EnergyDrink", "Exile_Item_PlasticBottleDirtyWater", "Exile_Item_ChocolateMilk", "Exile_Item_PlasticBottleDirtyWater", "Exile_Item_PlasticBottleFreshWater", "Exile_Item_PowerDrink"};

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
		USpistols[] = {"uns_38spec", "uns_38spec", "uns_coltcmdr", "uns_MX991_g", "uns_m1911", "uns_MX991_m1911", "uns_m1911", "uns_38spec", "uns_mkvFlarePistol", "uns_MX991_m1911", "uns_MX991_m1911", "uns_m1911", "uns_MX991_w", "uns_coltcmdr", "uns_m1911", "uns_m1911", "uns_sw_m10", "uns_sw_m10", "uns_MX991_w", "uns_mkvFlarePistol", "uns_MX991_m1911", "uns_m1911", "uns_coltcmdr", "uns_MX991_w", "uns_MX991_w", "uns_MX991_w", "uns_MX991_w", "uns_MX991_g", "uns_m1911", "uns_mkvFlarePistol", "uns_MX991_w", "uns_m1911", "uns_sw_m10", "uns_mkvFlarePistol", "uns_mkvFlarePistol", "uns_MX991_m1911", "uns_m1911", "uns_38spec", "uns_MX991_m1911", "uns_MX991_g", "uns_38spec", "uns_sw_m10", "uns_MX991_w", "uns_coltcmdr", "uns_mkvFlarePistol", "uns_sw_m10", "uns_m1911", "uns_38spec", "uns_coltcmdr", "uns_MX991_g", "uns_MX991_m1911", "uns_coltcmdr", "uns_38spec", "uns_coltcmdr", "uns_mkvFlarePistol", "uns_m1911", "uns_MX991_w", "uns_38spec", "uns_38spec", "uns_MX991_w", "uns_sw_m10", "uns_coltcmdr", "uns_coltcmdr", "uns_MX991_g", "uns_sw_m10", "uns_MX991_m1911", "uns_MX991_g", "uns_MX991_m1911", "uns_mkvFlarePistol", "uns_coltcmdr", "uns_mkvFlarePistol", "uns_MX991_g", "uns_sw_m10", "uns_38spec", "uns_38spec", "uns_coltcmdr", "uns_MX991_m1911", "uns_MX991_m1911", "uns_mkvFlarePistol", "uns_m1911", "uns_38spec", "uns_MX991_g", "uns_m1911", "uns_sw_m10", "uns_m1911", "uns_MX991_g", "uns_coltcmdr", "uns_sw_m10", "uns_m1911", "uns_coltcmdr", "uns_MX991_w", "uns_MX991_m1911", "uns_MX991_g", "uns_MX991_m1911", "uns_sw_m10", "uns_mkvFlarePistol", "uns_mkvFlarePistol", "uns_MX991_w", "uns_coltcmdr", "uns_MX991_w", "uns_mkvFlarePistol", "uns_MX991_g", "uns_MX991_w", "uns_sw_m10", "uns_38spec", "uns_mkvFlarePistol", "uns_MX991_g", "uns_MX991_g", "uns_sw_m10", "uns_MX991_g", "uns_MX991_m1911", "uns_38spec", "uns_sw_m10", "uns_coltcmdr", "uns_mkvFlarePistol", "uns_MX991_g", "uns_38spec", "uns_MX991_w", "uns_sw_m10", "uns_MX991_m1911"};

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
		VCpistols[] = {"uns_MX991_w", "uns_makarov", "uns_mkvFlarePistol", "uns_makarov", "uns_nagant_m1895", "uns_makarov", "uns_makarov", "uns_mkvFlarePistol", "uns_nagant_m1895", "uns_makarov", "uns_makarov", "uns_tt30", "uns_makarov", "uns_mkvFlarePistol", "uns_tt30", "uns_MX991_w", "uns_p64", "uns_nagant_m1895", "uns_mkvFlarePistol", "uns_nagant_m1895", "uns_makarov", "uns_p64", "uns_mkvFlarePistol", "uns_MX991_w", "uns_nagant_m1895", "uns_p64", "uns_nagant_m1895", "uns_MX991_w", "uns_nagant_m1895", "uns_tt30", "uns_nagant_m1895", "uns_mkvFlarePistol", "uns_tt30", "uns_p64", "uns_makarov", "uns_MX991_w", "uns_mkvFlarePistol", "uns_Tt33", "uns_p64", "uns_Tt33", "uns_tt30", "uns_Tt33", "uns_makarov", "uns_nagant_m1895", "uns_makarov", "uns_tt30", "uns_Tt33", "uns_Tt33", "uns_tt30", "uns_makarov", "uns_mkvFlarePistol", "uns_MX991_w", "uns_makarov", "uns_p64", "uns_tt30", "uns_MX991_w", "uns_Tt33", "uns_p64", "uns_tt30", "uns_MX991_w", "uns_tt30", "uns_tt30", "uns_nagant_m1895", "uns_nagant_m1895", "uns_Tt33", "uns_MX991_w", "uns_tt30", "uns_p64", "uns_p64", "uns_nagant_m1895", "uns_MX991_w", "uns_mkvFlarePistol", "uns_nagant_m1895", "uns_mkvFlarePistol", "uns_p64", "uns_MX991_w", "uns_makarov", "uns_mkvFlarePistol", "uns_MX991_w", "uns_MX991_w", "uns_nagant_m1895", "uns_p64", "uns_Tt33", "uns_Tt33", "uns_Tt33", "uns_MX991_w", "uns_tt30", "uns_Tt33", "uns_p64", "uns_mkvFlarePistol", "uns_MX991_w", "uns_p64", "uns_Tt33", "uns_mkvFlarePistol", "uns_Tt33", "uns_mkvFlarePistol", "uns_Tt33", "uns_p64", "uns_tt30", "uns_tt30", "uns_mkvFlarePistol", "uns_p64", "uns_nagant_m1895", "uns_Tt33", "uns_makarov"};

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
		USrifles[] = {"uns_m16_xm148", "uns_m16", "uns_uzi", "uns_uzif", "uns_m1897riot", "uns_xm177e2_grip", "uns_ithaca37", "uns_m1897", "uns_ithaca37", "uns_xm177e2_short", "uns_xm177e2", "uns_m16", "uns_xm177e1_xm148", "uns_m1897riot", "uns_m16a1_m203", "uns_xm177e2_short", "uns_xm177e1_xm148", "uns_xm177e1_m203", "uns_m16_xm148", "uns_m1897riot", "uns_M16A1", "uns_m16_m203", "uns_m16_m203", "uns_xm177e1", "uns_m1897", "uns_xm177e1", "uns_xm177e1", "uns_ithaca37", "uns_model12", "uns_xm177e2_m203", "uns_xm177e1", "uns_m16_xm148", "uns_xm177e2", "uns_uzif", "uns_M16A1", "uns_M16A1_HBAR", "uns_xm177e2_grip", "uns_xm177e2_grip", "uns_xm177e1_xm148", "uns_thompson", "uns_xm177e2_m203", "uns_m1897riot", "uns_m16a1_m203", "uns_m3a1", "uns_xm177e1_m203", "uns_m3a1", "uns_uzi", "uns_m16", "uns_model12", "uns_uzi", "uns_uzif", "uns_xm177e1_xm148", "uns_m3a1", "uns_xm177e2_stock", "uns_m1897", "uns_thompson", "uns_m16_xm148", "uns_m79", "uns_model12", "uns_uzi", "uns_thompson", "uns_ithaca37", "uns_m1897riot", "uns_xm177e2_m203", "uns_uzi", "uns_xm177e2_m203", "uns_uzi", "uns_xm177e1_m203", "uns_M16A1", "uns_m16_xm148", "uns_xm177e2_grip", "uns_uzif", "uns_m16", "uns_m16_m203", "uns_thompson", "uns_M16A1_HBAR", "uns_xm177e1", "uns_M16A1", "uns_m3a1", "uns_M16A1_HBAR", "uns_m79", "uns_m1897riot", "uns_m3a1", "uns_thompson", "uns_ithaca37", "uns_xm177e1_m203", "uns_m16a1_m203", "uns_ithaca37", "uns_xm177e1", "uns_m16", "uns_m1897riot", "uns_uzi", "uns_m16", "uns_ithaca37", "uns_m1897riot", "uns_m16_xm148", "uns_xm177e1", "uns_m79", "uns_xm177e2_short", "uns_m3a1", "uns_ithaca37", "uns_thompson", "uns_ithaca37", "uns_thompson", "uns_xm177e1_m203", "uns_thompson", "uns_m79", "uns_m16_xm148", "uns_m16a1_m203", "uns_m1897", "uns_uzi", "uns_m16_m203", "uns_M16A1_HBAR", "uns_m16", "uns_xm177e1_xm148", "uns_xm177e1_xm148", "uns_m16_xm148", "uns_M16A1", "uns_xm177e2_stock", "uns_m16_m203", "uns_xm177e2_grip", "uns_xm177e2", "uns_xm177e2_short", "uns_xm177e2_m203", "uns_m16_xm148", "uns_M16A1_HBAR", "uns_uzi", "uns_xm177e2_short", "uns_m16a1_m203", "uns_m16", "uns_M16A1", "uns_xm177e2_grip", "uns_xm177e1", "uns_m16a1_m203", "uns_m16", "uns_xm177e2", "uns_m16_m203", "uns_m3a1", "uns_m79", "uns_m1897", "uns_M16A1_HBAR", "uns_model12", "uns_m79", "uns_uzif", "uns_model12", "uns_m1897", "uns_m16_m203", "uns_model12", "uns_M16A1_HBAR", "uns_M16A1", "uns_m1897", "uns_uzif", "uns_xm177e1_m203", "uns_xm177e1_xm148", "uns_uzif", "uns_m79", "uns_xm177e2_stock", "uns_m16a1_m203", "uns_xm177e2_m203", "uns_uzi", "uns_xm177e2_grip", "uns_xm177e2_stock", "uns_xm177e1_xm148", "uns_thompson", "uns_model12", "uns_model12", "uns_xm177e2_short", "uns_xm177e1", "uns_xm177e2_short", "uns_uzif", "uns_M16A1_HBAR", "uns_thompson", "uns_model12", "uns_xm177e2_short", "uns_ithaca37", "uns_model12", "uns_m16a1_m203", "uns_xm177e1", "uns_xm177e2_grip", "uns_xm177e2_m203", "uns_m3a1", "uns_xm177e2", "uns_m3a1", "uns_M16A1", "uns_xm177e2_stock", "uns_m16_xm148", "uns_m16_m203", "uns_uzi", "uns_m16", "uns_uzif", "uns_m79", "uns_uzi", "uns_model12", "uns_xm177e2_short", "uns_m79", "uns_xm177e2_grip", "uns_M16A1", "uns_xm177e2_stock", "uns_xm177e2_m203", "uns_xm177e2_short", "uns_M16A1_HBAR", "uns_uzi", "uns_xm177e1_xm148", "uns_xm177e2_short", "uns_xm177e1_xm148", "uns_m16", "uns_m16_xm148", "uns_uzi", "uns_xm177e2_m203", "uns_xm177e1_xm148", "uns_m79", "uns_xm177e1_m203", "uns_M16A1", "uns_xm177e2_m203", "uns_m1897", "uns_m79", "uns_xm177e2_grip", "uns_model12", "uns_M16A1_HBAR", "uns_xm177e2_grip", "uns_m16_m203", "uns_xm177e1_m203", "uns_m16", "uns_xm177e2", "uns_xm177e2_short", "uns_xm177e2_m203", "uns_M16A1", "uns_xm177e1", "uns_m3a1", "uns_xm177e2", "uns_xm177e2_stock", "uns_xm177e2_grip", "uns_uzif", "uns_xm177e1_xm148", "uns_xm177e2_short", "uns_model12", "uns_m1897riot", "uns_xm177e1_xm148", "uns_xm177e2_stock", "uns_xm177e1", "uns_m16a1_m203", "uns_xm177e1_m203", "uns_xm177e2_grip", "uns_m16a1_m203", "uns_m16a1_m203", "uns_m1897riot", "uns_xm177e1_xm148", "uns_ithaca37", "uns_xm177e2_stock", "uns_xm177e2_stock", "uns_xm177e2_short", "uns_M16A1", "uns_M16A1", "uns_m16_m203", "uns_m16_m203", "uns_uzif", "uns_ithaca37", "uns_m1897riot", "uns_xm177e2", "uns_m3a1", "uns_m16", "uns_m16_m203", "uns_M16A1", "uns_thompson", "uns_m1897", "uns_m16_m203", "uns_xm177e2_stock", "uns_uzif", "uns_m1897riot", "uns_m79", "uns_m16", "uns_xm177e2", "uns_xm177e2", "uns_uzif", "uns_xm177e2_m203", "uns_xm177e1_m203", "uns_xm177e1_m203", "uns_m16_xm148", "uns_xm177e2_stock", "uns_xm177e1_xm148", "uns_xm177e2", "uns_ithaca37", "uns_m16_m203", "uns_m16a1_m203", "uns_M16A1_HBAR", "uns_xm177e2_short", "uns_thompson", "uns_M16A1_HBAR", "uns_xm177e2", "uns_xm177e1", "uns_xm177e1", "uns_xm177e2_m203", "uns_m16a1_m203", "uns_m1897", "uns_m79", "uns_m16_xm148", "uns_xm177e1_m203", "uns_xm177e2_grip", "uns_thompson", "uns_m3a1", "uns_m3a1", "uns_M16A1_HBAR", "uns_thompson", "uns_M16A1", "uns_m79", "uns_xm177e2_stock", "uns_m16a1_m203", "uns_m1897", "uns_m3a1", "uns_m16_m203", "uns_m16_xm148", "uns_xm177e2", "uns_M16A1_HBAR", "uns_m1897riot", "uns_m1897", "uns_xm177e1_m203", "uns_xm177e1_m203", "uns_uzi", "uns_model12", "uns_uzif", "uns_m79", "uns_ithaca37", "uns_m1897", "uns_m16_xm148", "uns_m3a1", "uns_xm177e1_m203", "uns_xm177e2_m203", "uns_m16a1_m203", "uns_xm177e1", "uns_M16A1_HBAR", "uns_m1897", "uns_m1897", "uns_m16", "uns_xm177e2", "uns_xm177e2_m203", "uns_m1897riot", "uns_xm177e2_grip", "uns_thompson", "uns_model12", "uns_xm177e2_stock", "uns_uzif", "uns_xm177e2_stock", "uns_xm177e2", "uns_ithaca37", "uns_m1897riot"};

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
		VCrifles[] = {"uns_PPS52", "uns_PPS52", "uns_ppsh41", "uns_k50mdrum", "uns_thompsonvc", "uns_PPS43", "uns_mp40", "uns_thompsonvc", "uns_baikal", "uns_mat49", "uns_baikal_sawnoff", "uns_type100", "uns_type50", "uns_PPS52", "uns_type100", "uns_k50mdrum", "uns_baikal_sawnoff", "uns_baikal", "uns_PPS43f", "uns_k50mdrum", "uns_thompsonvc", "uns_ppsh41", "uns_k50mdrum", "uns_PPS43", "uns_mp40", "uns_mat49", "uns_mp40", "uns_mp40", "uns_mat49", "uns_PPS52", "uns_pm63f", "uns_k50m", "uns_thompsonvc", "uns_type100", "uns_baikal", "uns_type100", "uns_k50m", "uns_PPS43", "uns_type100", "uns_baikal_sawnoff", "uns_pm63f", "uns_PPS43f", "uns_pm63f", "uns_type50", "uns_mat49", "uns_k50m", "uns_PPS43", "uns_ppsh41", "uns_pm63f", "uns_baikal", "uns_sa61f", "uns_ppsh41", "uns_PPS43", "uns_baikal", "uns_baikal_sawnoff", "uns_baikal", "uns_mat49", "uns_PPS52", "uns_type50", "uns_baikal", "uns_k50mdrum", "uns_k50mdrum", "uns_PPS52", "uns_PPS43", "uns_pm63f", "uns_PPS43f", "uns_k50m", "uns_mp40", "uns_PPS43f", "uns_baikal_sawnoff", "uns_ppsh41", "uns_PPS43", "uns_sa61f", "uns_mp40", "uns_k50mdrum", "uns_k50m", "uns_pm63f", "uns_PPS52", "uns_type100", "uns_PPS52", "uns_thompsonvc", "uns_k50m", "uns_sa61f", "uns_type100", "uns_k50mdrum", "uns_sa61f", "uns_k50m", "uns_k50mdrum", "uns_mp40", "uns_sa61f", "uns_baikal_sawnoff", "uns_PPS43f", "uns_PPS43f", "uns_k50mdrum", "uns_thompsonvc", "uns_thompsonvc", "uns_pm63f", "uns_ppsh41", "uns_PPS52", "uns_baikal", "uns_baikal_sawnoff", "uns_sa61f", "uns_PPS43f", "uns_k50mdrum", "uns_mat49", "uns_thompsonvc", "uns_k50m", "uns_sa61f", "uns_ppsh41", "uns_type100", "uns_thompsonvc", "uns_k50m", "uns_pm63f", "uns_type50", "uns_PPS43f", "uns_type50", "uns_type100", "uns_k50mdrum", "uns_PPS43f", "uns_pm63f", "uns_PPS43", "uns_sa61f", "uns_mat49", "uns_PPS52", "uns_baikal", "uns_PPS43", "uns_k50m", "uns_mp40", "uns_k50mdrum", "uns_type100", "uns_type50", "uns_ppsh41", "uns_type50", "uns_type50", "uns_baikal_sawnoff", "uns_thompsonvc", "uns_sa61f", "uns_baikal", "uns_mat49", "uns_mp40", "uns_type100", "uns_PPS43f", "uns_type50", "uns_baikal", "uns_ppsh41", "uns_pm63f", "uns_PPS43", "uns_type100", "uns_PPS43", "uns_PPS43f", "uns_k50m", "uns_ppsh41", "uns_k50m", "uns_mat49", "uns_PPS52", "uns_thompsonvc", "uns_mat49", "uns_ppsh41", "uns_thompsonvc", "uns_sa61f", "uns_k50mdrum", "uns_thompsonvc", "uns_mp40", "uns_baikal_sawnoff", "uns_type50", "uns_PPS43", "uns_mat49", "uns_k50mdrum", "uns_type50", "uns_baikal_sawnoff", "uns_k50m", "uns_baikal_sawnoff", "uns_PPS52", "uns_PPS43", "uns_PPS43f", "uns_PPS43f", "uns_PPS43f", "uns_type50", "uns_mp40", "uns_mp40", "uns_ppsh41", "uns_mp40", "uns_mp40", "uns_type50", "uns_mat49", "uns_baikal", "uns_pm63f", "uns_mp40", "uns_k50m", "uns_pm63f", "uns_PPS52", "uns_baikal", "uns_sa61f", "uns_sa61f", "uns_thompsonvc", "uns_ppsh41", "uns_pm63f", "uns_pm63f", "uns_baikal_sawnoff", "uns_thompsonvc", "uns_sa61f", "uns_k50m", "uns_ppsh41", "uns_baikal", "uns_PPS52", "uns_type100", "uns_mat49", "uns_type50", "uns_PPS43f", "uns_mat49", "uns_type100", "uns_baikal_sawnoff", "uns_baikal_sawnoff", "uns_mat49", "uns_type100", "uns_sa61f", "uns_pm63f", "uns_baikal", "uns_baikal_sawnoff", "uns_sa61f", "uns_ppsh41", "uns_PPS52", "uns_PPS43", "uns_type50", "uns_PPS43"};

		/*
			Percental Item Spawn Chances of USlmg:

			uns_m60        = 33.33%
			uns_m60support = 33.33%
			uns_bar        = 33.33%
		*/
		USlmg[] = {"uns_bar", "uns_bar", "uns_bar", "uns_bar", "uns_m60support", "uns_bar", "uns_bar", "uns_m60", "uns_m60support", "uns_m60", "uns_m60", "uns_m60support", "uns_m60support", "uns_m60", "uns_m60", "uns_bar", "uns_m60support", "uns_m60support", "uns_bar", "uns_m60", "uns_m60support", "uns_m60support", "uns_m60", "uns_m60support", "uns_m60", "uns_m60", "uns_m60support", "uns_m60", "uns_m60support", "uns_m60", "uns_bar", "uns_m60", "uns_bar", "uns_bar", "uns_m60", "uns_m60support", "uns_bar", "uns_m60", "uns_bar", "uns_bar", "uns_m60support", "uns_m60support", "uns_m60support", "uns_m60", "uns_bar"};

		/*
			Percental Item Spawn Chances of VClmg:

			uns_rpd           = 16.67%
			uns_RPDsupport    = 16.67%
			uns_DP28          = 16.67%
			uns_MG42          = 16.67%
			uns_mg42_bakelite = 16.67%
			uns_MG42support   = 16.67%
		*/
		VClmg[] = {"uns_RPDsupport", "uns_MG42support", "uns_MG42support", "uns_mg42_bakelite", "uns_RPDsupport", "uns_rpd", "uns_MG42support", "uns_DP28", "uns_DP28", "uns_MG42", "uns_MG42support", "uns_mg42_bakelite", "uns_rpd", "uns_MG42", "uns_DP28", "uns_RPDsupport", "uns_mg42_bakelite", "uns_mg42_bakelite", "uns_RPDsupport", "uns_rpd", "uns_mg42_bakelite", "uns_mg42_bakelite", "uns_rpd", "uns_rpd", "uns_MG42support", "uns_mg42_bakelite", "uns_RPDsupport", "uns_MG42support", "uns_RPDsupport", "uns_MG42support", "uns_DP28", "uns_RPDsupport", "uns_DP28", "uns_rpd", "uns_MG42", "uns_MG42support", "uns_rpd", "uns_MG42", "uns_mg42_bakelite", "uns_MG42support", "uns_RPDsupport", "uns_mg42_bakelite", "uns_rpd", "uns_mg42_bakelite", "uns_MG42", "uns_DP28", "uns_DP28", "uns_mg42_bakelite", "uns_MG42", "uns_RPDsupport", "uns_rpd", "uns_RPDsupport", "uns_MG42support", "uns_DP28", "uns_MG42", "uns_RPDsupport", "uns_rpd", "uns_MG42", "uns_DP28", "uns_MG42support", "uns_MG42support", "uns_DP28", "uns_mg42_bakelite", "uns_mg42_bakelite", "uns_DP28", "uns_rpd", "uns_MG42", "uns_MG42", "uns_DP28", "uns_MG42", "uns_DP28", "uns_DP28", "uns_MG42", "uns_MG42support", "uns_MG42", "uns_rpd", "uns_RPDsupport", "uns_MG42", "uns_RPDsupport", "uns_mg42_bakelite", "uns_RPDsupport", "uns_rpd", "uns_RPDsupport", "uns_MG42", "uns_DP28", "uns_mg42_bakelite", "uns_rpd", "uns_rpd", "uns_MG42support", "uns_MG42support"};

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
		USsnipers[] = {"uns_m1carbine_pouch", "uns_m1garand", "uns_m1garand", "uns_m1garand", "uns_m1garand", "uns_m1carbine_gl", "uns_m2carbine_gl", "uns_m14", "uns_m1carbine_gl", "uns_M40_base", "uns_M40_base", "uns_m1carbine", "uns_m1carbine_pouch", "uns_m14", "uns_m2carbine_gl", "uns_model70_iron", "uns_m2carbine_gl", "uns_m1carbine", "uns_m1garand", "uns_m1carbine", "uns_m1carbine_gl", "uns_m1garand", "uns_m2carbine", "uns_model70", "uns_m2carbine", "uns_m1carbine_pouch", "uns_model70_iron", "uns_m2carbine", "uns_M40_base", "uns_model70_iron", "uns_m2carbine", "uns_m14", "uns_m1carbine", "uns_m2carbine_gl", "uns_model70", "uns_m2carbine", "uns_model70", "uns_m2carbine_gl", "uns_m14", "uns_m1garand", "uns_m1carbine", "uns_m14", "uns_m2carbine_gl", "uns_m2carbine", "uns_model70", "uns_m2carbine_gl", "uns_m1carbine_gl", "uns_model70", "uns_m1carbine_pouch", "uns_m1carbine_gl", "uns_m1carbine_pouch", "uns_M40_base", "uns_m1carbine_gl", "uns_model70", "uns_m1garand", "uns_m14", "uns_m2carbine", "uns_model70", "uns_m1carbine_gl", "uns_m14", "uns_m14", "uns_m1carbine", "uns_m1carbine_gl", "uns_M40_base", "uns_m2carbine_gl", "uns_M40_base", "uns_model70", "uns_m14", "uns_m1carbine_pouch", "uns_m1garand", "uns_M40_base", "uns_M40_base", "uns_model70_iron", "uns_model70_iron", "uns_m1carbine_gl", "uns_model70", "uns_model70_iron", "uns_m1garand", "uns_m14", "uns_m1carbine_gl", "uns_m1garand", "uns_M40_base", "uns_m1garand", "uns_m1garand", "uns_m14", "uns_m1carbine_gl", "uns_M40_base", "uns_m2carbine", "uns_m1carbine_gl", "uns_m1carbine_gl", "uns_model70", "uns_m1carbine_pouch", "uns_m14", "uns_model70", "uns_model70_iron", "uns_model70", "uns_M40_base", "uns_model70_iron", "uns_m2carbine_gl", "uns_m1carbine", "uns_m1carbine", "uns_m2carbine_gl", "uns_m2carbine", "uns_M40_base", "uns_m2carbine", "uns_m1carbine_pouch", "uns_m1carbine_pouch", "uns_model70", "uns_model70_iron", "uns_m2carbine", "uns_model70_iron", "uns_m2carbine_gl", "uns_m2carbine", "uns_m2carbine", "uns_M40_base", "uns_m2carbine_gl", "uns_m2carbine", "uns_m2carbine_gl", "uns_m14", "uns_m1carbine", "uns_M40_base", "uns_m1carbine_gl", "uns_m1carbine", "uns_m1carbine", "uns_model70_iron", "uns_m1garand", "uns_model70", "uns_m14", "uns_m1carbine_gl", "uns_m1garand", "uns_model70", "uns_m2carbine_gl", "uns_m1carbine_pouch", "uns_m14", "uns_m1carbine_pouch", "uns_m1carbine", "uns_m1carbine_pouch", "uns_m1carbine_pouch", "uns_model70_iron", "uns_m1carbine_pouch", "uns_m1carbine", "uns_m2carbine", "uns_m2carbine_gl", "uns_m1carbine", "uns_model70_iron", "uns_model70_iron", "uns_m1carbine", "uns_m1carbine_pouch", "uns_model70_iron", "uns_M40_base"};

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
		VCsnipers[] = {"uns_mas4956", "uns_akmsf", "uns_akms", "uns_mas36short_gl", "uns_type99", "uns_akm", "uns_kar98k", "uns_kar98k", "uns_SVD", "uns_STG_44", "uns_mas36short_gl", "uns_type99_gl", "uns_aks47f", "uns_sks", "uns_mas4956_gl", "uns_mas36", "uns_mas36_gl", "uns_type99_gl", "uns_SVD", "uns_aks47f", "uns_kar98k", "uns_svt", "uns_mas4956_gl", "uns_akm", "uns_type99_gl", "uns_akms", "uns_ak47_52", "uns_svt", "uns_akmsf", "uns_mas36short", "uns_ak47_52", "uns_type56", "uns_mas4956", "uns_mosin", "uns_mas36", "uns_mas4956", "uns_type99_gl", "uns_mas36", "uns_mosin", "uns_type99", "uns_mas36short_gl", "uns_ak47_49", "uns_ak47_52", "uns_aks47", "uns_akm", "uns_ak47_49", "uns_mosin", "uns_type99", "uns_mas36short_gl", "uns_mas4956", "uns_aks47", "uns_ak47_49", "uns_sks", "uns_mas36short", "uns_mas36_gl", "uns_mas36short", "uns_ak47", "uns_mas36_gl", "uns_ak47_52", "uns_mas36short_gl", "uns_mas36", "uns_type56", "uns_mosin", "uns_sks", "uns_type99", "uns_type99", "uns_mas4956", "uns_akmsf", "uns_ak47", "uns_ak47", "uns_mosin", "uns_ak47_49", "uns_SVD", "uns_aks47f", "uns_sks", "uns_type99_gl", "uns_mas36short", "uns_mas36short", "uns_akmsf", "uns_mas4956_gl", "uns_akms", "uns_mas36_gl", "uns_type99", "uns_type99_gl", "uns_mas36short", "uns_mas4956_gl", "uns_aks47", "uns_mosin", "uns_ak47_49", "uns_svt", "uns_ak47_49", "uns_ak47", "uns_mas36short_gl", "uns_svt", "uns_mas36", "uns_mas4956_gl", "uns_kar98k", "uns_mosin", "uns_svt", "uns_type99_gl", "uns_mas36short", "uns_aks47", "uns_aks47f", "uns_kar98k", "uns_mas4956", "uns_ak47", "uns_akmsf", "uns_ak47_52", "uns_SVD", "uns_akm", "uns_sks", "uns_ak47", "uns_STG_44", "uns_akms", "uns_mas36_gl", "uns_sks", "uns_mas36short", "uns_mas4956", "uns_SVD", "uns_type56", "uns_kar98k", "uns_ak47_49", "uns_mas36", "uns_kar98k", "uns_type99", "uns_akms", "uns_mosin", "uns_mas36_gl", "uns_svt", "uns_ak47_49", "uns_akms", "uns_akm", "uns_mas36short", "uns_type99", "uns_akms", "uns_type56", "uns_mas4956_gl", "uns_mas4956_gl", "uns_SVD", "uns_mas36", "uns_sks", "uns_mas36", "uns_mas36_gl", "uns_mas36short_gl", "uns_sks", "uns_mas36_gl", "uns_mas36", "uns_type99", "uns_mas36_gl", "uns_mas36short", "uns_SVD", "uns_ak47_49", "uns_kar98k", "uns_ak47_49", "uns_ak47_52", "uns_mas4956", "uns_type56", "uns_SVD", "uns_mosin", "uns_ak47", "uns_ak47_52", "uns_akms", "uns_aks47f", "uns_STG_44", "uns_aks47f", "uns_aks47", "uns_mas36short_gl", "uns_svt", "uns_type56", "uns_type99", "uns_mas4956", "uns_type56", "uns_STG_44", "uns_type99_gl", "uns_type99", "uns_aks47", "uns_mas36", "uns_ak47", "uns_mas36short", "uns_akm", "uns_SVD", "uns_mas36short_gl", "uns_type99_gl", "uns_akmsf", "uns_SVD", "uns_mas36short_gl", "uns_akmsf", "uns_type56", "uns_type99_gl", "uns_akms", "uns_akmsf", "uns_akms", "uns_STG_44", "uns_kar98k", "uns_sks", "uns_mas36", "uns_STG_44", "uns_aks47f", "uns_sks", "uns_mosin", "uns_mas4956_gl", "uns_SVD", "uns_ak47_52", "uns_akm", "uns_aks47", "uns_STG_44", "uns_ak47", "uns_mosin", "uns_akm", "uns_SVD", "uns_SVD", "uns_akm", "uns_STG_44", "uns_mas4956_gl", "uns_aks47", "uns_type99", "uns_ak47_49", "uns_mas36_gl", "uns_aks47f", "uns_sks", "uns_aks47f", "uns_akmsf", "uns_mosin", "uns_akmsf", "uns_mas36short", "uns_sks", "uns_akm", "uns_akms", "uns_svt", "uns_STG_44", "uns_sks", "uns_mas4956_gl", "uns_ak47_52", "uns_STG_44", "uns_mas4956", "uns_type56", "uns_mas4956_gl", "uns_akms", "uns_mas36_gl", "uns_svt", "uns_sks", "uns_type56", "uns_STG_44", "uns_type99", "uns_mas36_gl", "uns_ak47_49", "uns_aks47", "uns_aks47f", "uns_mas4956", "uns_mas36short", "uns_ak47", "uns_mas36_gl", "uns_akm", "uns_akms", "uns_akmsf", "uns_aks47f", "uns_mas4956", "uns_mas4956_gl", "uns_akmsf", "uns_aks47", "uns_mas36", "uns_mas36", "uns_kar98k", "uns_svt", "uns_svt", "uns_mas36short_gl", "uns_akm", "uns_mas36short_gl", "uns_ak47_52", "uns_type56", "uns_ak47", "uns_ak47_52", "uns_kar98k", "uns_aks47f", "uns_aks47f", "uns_mas4956_gl", "uns_aks47", "uns_mas36", "uns_ak47_52", "uns_akmsf", "uns_kar98k", "uns_svt", "uns_type99", "uns_mas36short_gl", "uns_type99_gl", "uns_mas36short_gl", "uns_ak47_52", "uns_kar98k", "uns_aks47", "uns_akm", "uns_type56", "uns_mas4956_gl", "uns_SVD", "uns_SVD", "uns_svt", "uns_svt", "uns_mas36short", "uns_STG_44", "uns_akmsf", "uns_ak47_52", "uns_mas36short", "uns_ak47", "uns_svt", "uns_akms", "uns_kar98k", "uns_mosin", "uns_sks", "uns_akmsf", "uns_ak47_49", "uns_mas4956_gl", "uns_ak47_49", "uns_aks47f", "uns_mas36", "uns_mas36_gl", "uns_mas4956", "uns_ak47", "uns_aks47f", "uns_akm", "uns_type99_gl", "uns_akm", "uns_ak47", "uns_aks47", "uns_mas36_gl", "uns_STG_44", "uns_mas4956", "uns_STG_44", "uns_mas36short_gl", "uns_type56", "uns_kar98k", "uns_aks47", "uns_type99_gl", "uns_ak47_49", "uns_mosin", "uns_aks47", "uns_ak47", "uns_type99_gl", "uns_mas4956", "uns_akms", "uns_type56", "uns_ak47_52", "uns_type56", "uns_mosin", "uns_STG_44", "uns_type99_gl", "uns_type99"};

		/*
			Percental Item Spawn Chances of USattachments:

			uns_o_Unertl8x           = 4.17%
			uns_bp_M60               = 4.17%
			uns_s_M16                = 4.17%
			uns_s_M14                = 4.17%
			uns_o_LeatherwoodART     = 4.17%
			uns_o_LeatherwoodART_m14 = 4.17%
			uns_o_LeatherwoodART_m16 = 4.17%
			uns_o_ANPVS2             = 4.17%
			uns_o_colt4x             = 4.17%
			uns_o_RedfieldART        = 4.17%
			uns_s_M1911              = 4.17%
			uns_b_m70_camo           = 4.17%
			uns_b_m40_camo           = 4.17%
			uns_b_smle_camo          = 4.17%
			uns_BA30                 = 4.17%
			uns_BA30_green           = 4.17%
			uns_b_m1                 = 4.17%
			uns_b_m4                 = 4.17%
			uns_b_m6                 = 4.17%
			uns_b_m7                 = 4.17%
			uns_b_m1917              = 4.17%
			uns_o_M84                = 4.17%
			uns_o_RedfieldART_m70    = 4.17%
			uns_o_Unertl8x_m70       = 4.17%
		*/
		USattachments[] = {"uns_bp_M60", "uns_o_M84", "uns_o_RedfieldART", "uns_BA30", "uns_o_RedfieldART_m70", "uns_b_m6", "uns_b_m4", "uns_o_LeatherwoodART_m16", "uns_o_Unertl8x_m70", "uns_s_M14", "uns_b_m70_camo", "uns_o_LeatherwoodART_m16", "uns_b_m40_camo", "uns_o_RedfieldART_m70", "uns_b_m7", "uns_bp_M60", "uns_s_M16", "uns_BA30_green", "uns_b_smle_camo", "uns_s_M16", "uns_o_LeatherwoodART_m16", "uns_b_m6", "uns_o_RedfieldART_m70", "uns_s_M14", "uns_b_m1", "uns_o_M84", "uns_BA30_green", "uns_s_M16", "uns_b_smle_camo", "uns_o_LeatherwoodART", "uns_b_m7", "uns_b_m4", "uns_b_m40_camo", "uns_b_m7", "uns_b_m40_camo", "uns_b_smle_camo", "uns_o_ANPVS2", "uns_o_colt4x", "uns_b_m4", "uns_o_colt4x", "uns_b_smle_camo", "uns_BA30", "uns_o_LeatherwoodART", "uns_s_M1911", "uns_BA30", "uns_b_m70_camo", "uns_b_m40_camo", "uns_o_M84", "uns_b_m1917", "uns_o_Unertl8x", "uns_s_M1911", "uns_BA30_green", "uns_o_LeatherwoodART", "uns_o_ANPVS2", "uns_o_Unertl8x", "uns_o_Unertl8x_m70", "uns_BA30", "uns_b_m1917", "uns_s_M1911", "uns_BA30_green", "uns_o_RedfieldART", "uns_o_LeatherwoodART", "uns_b_m7", "uns_b_m1", "uns_bp_M60", "uns_bp_M60", "uns_o_LeatherwoodART", "uns_o_RedfieldART_m70", "uns_o_Unertl8x_m70", "uns_b_smle_camo", "uns_BA30", "uns_b_m40_camo", "uns_o_LeatherwoodART", "uns_b_m4", "uns_bp_M60", "uns_s_M1911", "uns_b_m4", "uns_bp_M60", "uns_b_smle_camo", "uns_o_ANPVS2", "uns_b_m1917", "uns_o_LeatherwoodART_m16", "uns_o_Unertl8x", "uns_o_LeatherwoodART", "uns_b_m40_camo", "uns_o_ANPVS2", "uns_b_m4", "uns_o_M84", "uns_o_LeatherwoodART_m16", "uns_b_m4", "uns_o_Unertl8x", "uns_bp_M60", "uns_b_m1917", "uns_BA30_green", "uns_o_RedfieldART", "uns_b_smle_camo", "uns_s_M1911", "uns_o_Unertl8x", "uns_b_m1", "uns_o_LeatherwoodART_m14", "uns_o_colt4x", "uns_b_m7", "uns_b_m7", "uns_s_M16", "uns_o_ANPVS2", "uns_o_LeatherwoodART_m14", "uns_s_M14", "uns_b_m1917", "uns_b_m70_camo", "uns_BA30_green", "uns_b_m1", "uns_b_m1", "uns_o_RedfieldART", "uns_BA30", "uns_o_LeatherwoodART_m14", "uns_b_m4", "uns_o_RedfieldART_m70", "uns_o_LeatherwoodART_m16", "uns_bp_M60", "uns_o_RedfieldART_m70", "uns_o_Unertl8x", "uns_b_m70_camo", "uns_b_m6", "uns_o_RedfieldART_m70", "uns_b_m70_camo", "uns_b_m70_camo", "uns_s_M14", "uns_s_M16", "uns_b_smle_camo", "uns_b_smle_camo", "uns_b_m1917", "uns_o_RedfieldART", "uns_b_m40_camo", "uns_b_m4", "uns_o_LeatherwoodART_m16", "uns_BA30", "uns_o_ANPVS2", "uns_o_colt4x", "uns_o_LeatherwoodART_m14", "uns_o_Unertl8x_m70", "uns_s_M14", "uns_o_LeatherwoodART_m14", "uns_b_m6", "uns_b_m70_camo", "uns_o_LeatherwoodART_m16", "uns_bp_M60", "uns_o_RedfieldART_m70", "uns_b_m1917", "uns_o_colt4x", "uns_b_m1", "uns_o_Unertl8x", "uns_o_RedfieldART_m70", "uns_b_m6", "uns_o_RedfieldART", "uns_o_LeatherwoodART_m14", "uns_s_M16", "uns_s_M16", "uns_o_RedfieldART_m70", "uns_s_M14", "uns_b_m70_camo", "uns_o_ANPVS2", "uns_o_colt4x", "uns_o_Unertl8x_m70", "uns_o_M84", "uns_o_Unertl8x_m70", "uns_o_LeatherwoodART", "uns_b_m1", "uns_BA30", "uns_o_LeatherwoodART", "uns_BA30", "uns_s_M1911", "uns_s_M1911", "uns_s_M14", "uns_o_colt4x", "uns_o_LeatherwoodART_m16", "uns_o_LeatherwoodART_m16", "uns_b_m1", "uns_BA30_green", "uns_o_Unertl8x_m70", "uns_b_m6", "uns_b_m40_camo", "uns_b_m1", "uns_o_Unertl8x", "uns_b_m6", "uns_o_colt4x", "uns_s_M16", "uns_s_M1911", "uns_o_RedfieldART", "uns_o_Unertl8x_m70", "uns_b_smle_camo", "uns_BA30_green", "uns_o_Unertl8x_m70", "uns_o_M84", "uns_b_m70_camo", "uns_BA30_green", "uns_b_m70_camo", "uns_s_M16", "uns_b_m4", "uns_b_m70_camo", "uns_BA30", "uns_o_Unertl8x_m70", "uns_o_colt4x", "uns_b_smle_camo", "uns_b_m40_camo", "uns_o_ANPVS2", "uns_o_RedfieldART", "uns_s_M1911", "uns_o_LeatherwoodART_m14", "uns_o_RedfieldART", "uns_b_m40_camo", "uns_o_LeatherwoodART_m16", "uns_b_m1917", "uns_o_Unertl8x", "uns_s_M14", "uns_o_M84", "uns_o_LeatherwoodART_m16", "uns_o_colt4x", "uns_o_Unertl8x", "uns_b_m7", "uns_b_smle_camo", "uns_o_LeatherwoodART_m14", "uns_BA30", "uns_s_M16", "uns_b_m6", "uns_o_LeatherwoodART_m14", "uns_o_ANPVS2", "uns_o_M84", "uns_o_Unertl8x", "uns_s_M16", "uns_b_m4", "uns_o_Unertl8x_m70", "uns_bp_M60", "uns_bp_M60", "uns_o_Unertl8x_m70", "uns_s_M1911", "uns_o_M84", "uns_b_m6", "uns_s_M1911", "uns_o_LeatherwoodART_m14", "uns_b_m1", "uns_bp_M60", "uns_s_M14", "uns_b_m6", "uns_b_m1917", "uns_o_LeatherwoodART_m14", "uns_s_M14", "uns_s_M16", "uns_b_m7", "uns_BA30_green", "uns_b_smle_camo", "uns_bp_M60", "uns_s_M1911", "uns_s_M16", "uns_b_m1", "uns_o_LeatherwoodART", "uns_o_M84", "uns_BA30", "uns_o_LeatherwoodART_m14", "uns_o_RedfieldART", "uns_b_m7", "uns_o_LeatherwoodART_m16", "uns_b_m4", "uns_s_M1911", "uns_o_Unertl8x_m70", "uns_o_LeatherwoodART_m16", "uns_BA30", "uns_o_LeatherwoodART_m14", "uns_s_M14", "uns_b_m70_camo", "uns_o_LeatherwoodART", "uns_o_M84", "uns_b_m40_camo", "uns_b_m40_camo", "uns_s_M16", "uns_b_m7", "uns_b_m40_camo", "uns_b_m1917", "uns_o_Unertl8x", "uns_o_colt4x", "uns_b_m7", "uns_o_ANPVS2", "uns_b_m6", "uns_o_M84", "uns_BA30", "uns_b_m1917", "uns_b_m1917", "uns_b_m4", "uns_o_M84", "uns_o_RedfieldART", "uns_o_LeatherwoodART_m14", "uns_o_RedfieldART_m70", "uns_BA30_green", "uns_b_m1917", "uns_o_Unertl8x", "uns_b_m1917", "uns_b_m6", "uns_b_m4", "uns_b_m6", "uns_o_RedfieldART", "uns_b_m1", "uns_s_M14", "uns_b_m70_camo", "uns_o_ANPVS2", "uns_BA30_green", "uns_o_RedfieldART_m70", "uns_BA30", "uns_o_RedfieldART", "uns_o_M84", "uns_o_ANPVS2", "uns_b_m1", "uns_b_m70_camo", "uns_o_ANPVS2", "uns_s_M16", "uns_b_m7", "uns_o_RedfieldART_m70", "uns_o_LeatherwoodART", "uns_BA30_green", "uns_s_M1911", "uns_o_RedfieldART_m70", "uns_b_m4", "uns_b_smle_camo", "uns_s_M1911", "uns_BA30_green", "uns_o_Unertl8x", "uns_bp_M60", "uns_b_m6", "uns_o_colt4x", "uns_s_M14", "uns_o_LeatherwoodART", "uns_o_LeatherwoodART", "uns_o_RedfieldART", "uns_b_m1", "uns_o_ANPVS2", "uns_o_Unertl8x_m70", "uns_b_m7", "uns_o_ANPVS2", "uns_s_M14", "uns_b_smle_camo", "uns_o_LeatherwoodART_m16", "uns_o_RedfieldART_m70", "uns_o_Unertl8x_m70", "uns_b_m70_camo", "uns_b_m7", "uns_o_LeatherwoodART_m14", "uns_o_colt4x", "uns_b_m40_camo", "uns_BA30_green", "uns_b_m6", "uns_o_LeatherwoodART", "uns_o_Unertl8x", "uns_s_M14", "uns_o_colt4x", "uns_b_m1", "uns_b_m7", "uns_o_RedfieldART", "uns_bp_M60", "uns_o_M84", "uns_b_m40_camo", "uns_o_colt4x", "uns_b_m1917"};

		/*
			Percental Item Spawn Chances of VCattachments:

			uns_o_APXSOM    = 20.00%
			uns_o_PSO1      = 20.00%
			uns_o_Akatihi4x = 20.00%
			uns_b_mas49     = 20.00%
			uns_b_type30    = 20.00%
		*/
		VCattachments[] = {"uns_o_APXSOM", "uns_o_Akatihi4x", "uns_o_PSO1", "uns_b_mas49", "uns_b_mas49", "uns_b_mas49", "uns_o_PSO1", "uns_o_Akatihi4x", "uns_b_mas49", "uns_b_type30", "uns_o_PSO1", "uns_o_PSO1", "uns_b_type30", "uns_o_APXSOM", "uns_o_PSO1", "uns_o_APXSOM", "uns_b_mas49", "uns_b_mas49", "uns_o_PSO1", "uns_o_Akatihi4x", "uns_b_type30", "uns_b_type30", "uns_o_PSO1", "uns_o_PSO1", "uns_b_mas49", "uns_o_APXSOM", "uns_o_Akatihi4x", "uns_o_APXSOM", "uns_b_mas49", "uns_o_Akatihi4x", "uns_o_APXSOM", "uns_o_APXSOM", "uns_o_PSO1", "uns_b_mas49", "uns_b_type30", "uns_o_Akatihi4x", "uns_o_PSO1", "uns_o_Akatihi4x", "uns_b_type30", "uns_b_type30", "uns_o_APXSOM", "uns_b_type30", "uns_o_Akatihi4x", "uns_b_mas49", "uns_o_APXSOM", "uns_b_mas49", "uns_b_type30", "uns_o_PSO1", "uns_o_Akatihi4x", "uns_b_type30", "uns_b_type30", "uns_b_mas49", "uns_b_mas49", "uns_o_PSO1", "uns_o_APXSOM", "uns_o_APXSOM", "uns_o_APXSOM", "uns_b_type30", "uns_b_type30", "uns_o_PSO1", "uns_o_Akatihi4x", "uns_b_type30", "uns_b_mas49", "uns_o_PSO1", "uns_o_APXSOM", "uns_o_Akatihi4x", "uns_o_APXSOM", "uns_b_type30", "uns_o_Akatihi4x", "uns_o_Akatihi4x", "uns_o_PSO1", "uns_o_Akatihi4x", "uns_o_Akatihi4x", "uns_o_APXSOM", "uns_b_mas49"};

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
		USammo[] = {"uns_40mm_green", "uns_357mag", "uns_garandmag", "uns_30Rnd_556x45_Stanag_NT", "uns_20Rnd_556x45_Stanag_T", "uns_m40mag", "uns_m14mag_NT", "uns_40mm_mkv_Yellow", "uns_30Rnd_556x45_Stanag_xm177_T", "uns_model70mag_T", "uns_coltcmdrmag", "uns_20Rnd_556x45_Stanag", "uns_30Rnd_556x45_Stanag_xm177_NT", "Uns_1Rnd_HE_M381", "uns_springfieldmag_T", "uns_1Rnd_SmokeGreen_MKV", "uns_thompsonmag_30_NT", "uns_40mm_mkv_Yellow", "uns_thompsonmag_30", "uns_20Rnd_556x45_Stanag", "uns_springfieldmag_T", "uns_1Rnd_SmokeRed_40mm", "uns_30Rnd_556x45_Stanag_NT", "uns_40mm_white", "uns_20Rnd_556x45_Stanag_T", "uns_m1carbinemag_NT", "uns_m1carbinemag", "uns_springfieldmag_T", "uns_model70mag_T", "uns_1Rnd_SmokeYellow_MKV", "uns_20Rnd_556x45_StanagSD", "uns_garandmag", "uns_thompsonmag_30_T", "uns_springfieldmag", "uns_m14mag_NT", "uns_m406vest", "uns_30Rnd_556x45_Stanag_T", "uns_m1garandmag", "uns_m3a1mag_T", "uns_garandmag_T", "uns_m3a1mag_T", "uns_30Rnd_556x45_Stanag_xm177_NT", "uns_thompsonmag_30_NT", "uns_m60mag_200", "uns_garandmag_T", "uns_m14mag_NT", "uns_model70mag", "uns_30Rnd_556x45_Stanag", "uns_30Rnd_556x45_Stanag", "uns_20Rnd_556x45_Stanag", "uns_coltcmdrmag", "uns_thompsonmag_30_T", "uns_m40mag", "uns_30Rnd_556x45_Stanag_NT", "uns_barmag_T", "uns_40mm_mkv_Red", "uns_1Rnd_Smoke_40mm", "uns_garandmag", "uns_barmag_T", "uns_m3a1mag_T", "uns_40mm_mkv_Yellow", "uns_coltcmdrmag", "uns_thompsonmag_30_NT", "uns_m3a1mag_T", "uns_barmag_T", "uns_barmag_T", "uns_20Rnd_556x45_Stanag", "uns_m1911SDmag", "uns_coltcmdrmag", "uns_1Rnd_SmokeRed_40mm", "uns_m14mag", "uns_1Rnd_SmokeRed_MKV", "uns_m1carbinemag_T", "uns_thompsonmag_30_T", "uns_1Rnd_SmokeYellow_40mm", "uns_m3a1mag", "uns_m1carbinemag_NT", "uns_m1911SDmag", "uns_thompsonmag_30_NT", "uns_m40mag", "uns_garandmag_T", "uns_30Rnd_556x45_Stanag_T", "uns_1Rnd_SmokeYellow_MKV", "uns_thompsonmag_30_T", "uns_coltcmdrmag", "uns_1Rnd_SmokeRed_MKV", "uns_barmag_NT", "uns_357mag", "uns_38specmag", "Uns_1Rnd_HE_M406", "uns_40mm_mkv_Red", "uns_m1911SDmag", "uns_barmag", "uns_1Rnd_SmokeGreen_40mm", "uns_12gaugemag_4f", "uns_30Rnd_556x45_Stanag_xm177_T", "uns_357mag", "uns_thompsonmag_30_T", "uns_m1carbinemag", "uns_m14mag_T", "uns_30Rnd_556x45_Stanag_xm177_T", "uns_m3a1mag", "uns_m60mag_200", "uns_thompsonmag_30_NT", "uns_1Rnd_SmokeYellow_MKV", "Uns_1Rnd_HE_M381", "uns_30Rnd_556x45_Stanag_xm177", "uns_m1carbinemag_T", "uns_m1carbinemag_NT", "uns_40mm_yellow", "uns_40mm_red", "uns_m1garandmag", "uns_model70mag", "uns_38specmag", "uns_30Rnd_556x45_Stanag", "uns_1Rnd_SmokeGreen_MKV", "uns_40mm_red", "uns_m1carbinemag", "uns_m3a1mag_T", "uns_30Rnd_556x45_Stanag_xm177_NT", "uns_20Rnd_556x45_Stanag_T", "uns_m60mag_200", "uns_garandmag", "uns_1Rnd_Smoke_MKV", "uns_40mm_mkv_White", "uns_12gaugemag_4f", "uns_30Rnd_556x45_Stanag_NT", "uns_30Rnd_556x45_Stanag_xm177_T", "uns_springfieldmag_T", "uns_12gaugemag_4f", "uns_m1carbinemag", "uns_30Rnd_556x45_Stanag_NT", "uns_38specmag", "uns_m1garandmag_T", "uns_40mm_mkv_Green", "uns_12gaugemag_4f", "uns_m72rocket", "uns_m1911SDmag", "uns_1Rnd_SmokeGreen_MKV", "uns_1Rnd_SmokeGreen_40mm", "uns_20Rnd_556x45_StanagSD", "uns_38specmag", "Uns_1Rnd_HE_M381", "uns_30Rnd_556x45_Stanag_xm177_NT", "uns_1Rnd_SmokeRed_40mm", "uns_1Rnd_Smoke_40mm", "uns_m1carbinemag", "uns_m60mag", "uns_garandmag", "uns_1Rnd_Smoke_40mm", "uns_m1garandmag_T", "uns_1Rnd_SmokeGreen_MKV", "uns_1Rnd_Smoke_MKV", "Uns_1Rnd_HE_M406", "uns_m14mag_NT", "uns_40mm_mkv_Green", "uns_40mm_mkv_Yellow", "Uns_1Rnd_HE_M406", "uns_m1carbinemag", "uns_m1carbinemag_T", "uns_30Rnd_556x45_StanagSD", "uns_40mm_mkv_Green", "uns_20Rnd_556x45_Stanag_T", "uns_40mm_mkv_White", "uns_model70mag_T", "uns_30Rnd_556x45_Stanag_xm177", "uns_20Rnd_556x45_Stanag_NT", "uns_30Rnd_556x45_Stanag_xm177", "uns_m3a1mag", "uns_30Rnd_556x45_Stanag_T", "uns_m14mag", "uns_20Rnd_556x45_Stanag_NT", "uns_m14mag_T", "uns_357mag", "uns_springfieldmag", "uns_20Rnd_556x45_Stanag", "uns_coltcmdrmag", "uns_40mm_green", "uns_model70mag", "uns_thompsonmag_30_NT", "uns_barmag_T", "uns_20Rnd_556x45_StanagSD", "uns_12gaugemag_4f", "uns_12gaugemag_6f", "uns_20Rnd_556x45_Stanag_NT", "uns_m406vest", "uns_m1carbinemag_NT", "Uns_1Rnd_HE_M406", "uns_m60mag", "uns_m60mag", "uns_m1911SDmag", "uns_1Rnd_SmokeGreen_MKV", "uns_30Rnd_556x45_Stanag", "uns_m1911mag", "uns_model70mag_T", "uns_30Rnd_556x45_Stanag_NT", "uns_thompsonmag_30", "uns_m40mag", "uns_m1carbinemag", "uns_12gaugemag_4f", "uns_357mag", "uns_garandmag_T", "uns_20Rnd_556x45_StanagSD", "uns_12gaugemag_4f", "uns_m1carbinemag_T", "uns_12gaugemag_4", "uns_1Rnd_SmokeRed_40mm", "uns_40mm_mkv_Green", "uns_1Rnd_SmokeGreen_40mm", "uns_coltcmdrmag", "uns_40mm_mkv_Red", "uns_357mag", "uns_1Rnd_Smoke_MKV", "uns_m14mag_T", "uns_1Rnd_Smoke_MKV", "uns_m72rocket", "uns_1Rnd_Smoke_MKV", "uns_barmag_NT", "uns_1Rnd_SmokeRed_40mm", "uns_m14mag_NT", "uns_m40mag_T", "uns_1Rnd_SmokeYellow_40mm", "uns_12gaugemag_6f", "uns_30Rnd_556x45_Stanag_xm177_NT", "uns_12gaugemag_4f", "uns_40mm_mkv_Red", "uns_38specmag", "uns_30Rnd_556x45_Stanag", "uns_20Rnd_556x45_Stanag_NT", "uns_m60mag_200", "uns_20Rnd_556x45_Stanag_NT", "uns_m72rocket", "uns_m40mag_T", "uns_1Rnd_SmokeGreen_40mm", "uns_m72rocket", "uns_1Rnd_SmokeRed_MKV", "uns_40mm_mkv_Green", "uns_m1garandmag_T", "uns_40mm_mkv_Green", "uns_20Rnd_556x45_Stanag_NT", "uns_1Rnd_SmokeRed_40mm", "uns_model70mag_T", "uns_1Rnd_SmokeYellow_MKV", "uns_thompsonmag_30_NT", "uns_30Rnd_556x45_StanagSD", "uns_1Rnd_SmokeRed_MKV", "uns_40mm_mkv_Green", "uns_1Rnd_Smoke_MKV", "uns_357mag", "uns_m1carbinemag_NT", "uns_12gaugemag_4", "uns_12gaugemag_6", "uns_m60mag", "uns_40mm_white", "uns_12gaugemag_6", "uns_20Rnd_556x45_StanagSD", "uns_garandmag", "uns_12gaugemag_4f", "Uns_1Rnd_HE_M406", "uns_m40mag", "uns_30Rnd_556x45_Stanag_xm177_T", "uns_m14mag_T", "uns_barmag_T", "uns_40mm_mkv_Green", "uns_30Rnd_556x45_Stanag_xm177", "uns_1Rnd_SmokeGreen_MKV", "uns_40mm_mkv_Yellow", "uns_30Rnd_556x45_Stanag_xm177_T", "uns_30Rnd_556x45_Stanag_T", "uns_barmag_NT", "uns_m14mag", "uns_m1911SDmag", "uns_1Rnd_SmokeGreen_40mm", "uns_30Rnd_556x45_Stanag_xm177_T", "uns_40mm_green", "uns_m40mag_T", "uns_30Rnd_556x45_Stanag", "uns_garandmag", "uns_springfieldmag_T", "uns_40mm_mkv_White", "uns_m1carbinemag_NT", "uns_m14mag_T", "uns_m14mag_T", "uns_thompsonmag_30_NT", "uns_m14mag", "uns_40mm_mkv_Yellow", "uns_1Rnd_Smoke_MKV", "uns_m14mag_T", "uns_m14mag_T", "uns_m14mag", "uns_m1carbinemag", "uns_thompsonmag_30", "uns_1Rnd_SmokeRed_MKV", "uns_40mm_mkv_Yellow", "uns_30Rnd_556x45_Stanag_xm177", "uns_40mm_green", "uns_model70mag_T", "uns_m60mag", "uns_40mm_mkv_White", "uns_m406vest", "uns_m40mag_T", "uns_30Rnd_556x45_Stanag_xm177", "uns_m72rocket", "uns_model70mag_T", "uns_40mm_green", "uns_thompsonmag_30_NT", "uns_m40mag_T", "uns_12gaugemag_6", "uns_30Rnd_556x45_Stanag_xm177", "uns_m72rocket", "uns_m60mag_200", "uns_1Rnd_Smoke_MKV", "uns_m1garandmag", "uns_coltcmdrmag", "uns_12gaugemag_4", "uns_40mm_yellow", "uns_1Rnd_SmokeYellow_MKV", "uns_model70mag", "uns_12gaugemag_4", "uns_model70mag", "Uns_1Rnd_HE_M381", "uns_1Rnd_SmokeGreen_40mm", "uns_barmag_T", "uns_model70mag", "uns_1Rnd_SmokeYellow_MKV", "uns_springfieldmag_T", "uns_12gaugemag_6", "uns_20Rnd_556x45_Stanag", "uns_m3a1mag", "uns_38specmag", "uns_1Rnd_Smoke_40mm", "uns_springfieldmag", "uns_barmag", "uns_12gaugemag_4", "uns_20Rnd_556x45_Stanag", "uns_30Rnd_556x45_Stanag_T", "uns_40mm_mkv_Red", "uns_m1911mag", "uns_m406vest", "uns_20Rnd_556x45_Stanag_T", "Uns_1Rnd_HE_M381", "Uns_1Rnd_HE_M406", "uns_40mm_green", "uns_barmag_NT", "uns_30Rnd_556x45_Stanag_xm177_T", "uns_1Rnd_Smoke_MKV", "uns_1Rnd_Smoke_40mm", "Uns_1Rnd_HE_M406", "Uns_1Rnd_HE_M381", "uns_40mm_green", "uns_40mm_red", "uns_40mm_red", "uns_m1carbinemag_NT", "uns_1Rnd_SmokeYellow_40mm", "uns_thompsonmag_30", "uns_30Rnd_556x45_Stanag_xm177_NT", "uns_1Rnd_SmokeYellow_40mm", "uns_20Rnd_556x45_Stanag", "uns_1Rnd_SmokeGreen_40mm", "uns_m1911mag", "uns_m60mag_200", "uns_40mm_mkv_White", "uns_40mm_red", "uns_m14mag_NT", "uns_garandmag", "uns_m14mag_NT", "uns_m1911SDmag", "uns_30Rnd_556x45_Stanag", "uns_m14mag_NT", "uns_m1carbinemag_T", "uns_springfieldmag_T", "uns_12gaugemag_6f", "uns_m1garandmag_T", "uns_30Rnd_556x45_Stanag_xm177_NT", "uns_garandmag_T", "Uns_1Rnd_HE_M406", "uns_m40mag", "uns_m3a1mag", "uns_40mm_white", "uns_m60mag", "uns_m3a1mag", "uns_30Rnd_556x45_StanagSD", "uns_springfieldmag_T", "uns_model70mag_T", "uns_m72rocket", "uns_20Rnd_556x45_StanagSD", "uns_20Rnd_556x45_Stanag_T", "uns_1Rnd_SmokeGreen_40mm", "uns_357mag", "uns_1Rnd_SmokeGreen_40mm", "uns_m60mag_200", "uns_thompsonmag_30_T", "uns_1Rnd_SmokeGreen_MKV", "uns_40mm_mkv_Red", "uns_20Rnd_556x45_Stanag_NT", "uns_barmag", "uns_40mm_mkv_Red", "uns_40mm_mkv_Red", "uns_m3a1mag_T", "uns_m40mag_T", "uns_m1carbinemag", "uns_m1911SDmag", "uns_m1garandmag", "uns_barmag_NT", "uns_20Rnd_556x45_Stanag", "uns_m14mag", "uns_30Rnd_556x45_Stanag_NT", "uns_m14mag_NT", "uns_m14mag", "uns_m406vest", "uns_thompsonmag_30_T", "uns_thompsonmag_30", "uns_springfieldmag", "uns_12gaugemag_6", "uns_38specmag", "uns_20Rnd_556x45_Stanag", "uns_20Rnd_556x45_StanagSD", "uns_20Rnd_556x45_Stanag_T", "uns_30Rnd_556x45_Stanag_NT", "uns_12gaugemag_6f", "uns_40mm_red", "uns_m1carbinemag", "uns_thompsonmag_30_NT", "uns_barmag_NT", "uns_38specmag", "uns_thompsonmag_30", "uns_30Rnd_556x45_Stanag_T", "uns_coltcmdrmag", "uns_m14mag_NT", "uns_40mm_mkv_Red", "uns_40mm_mkv_White", "uns_m72rocket", "uns_12gaugemag_6f", "uns_barmag_T", "uns_40mm_white", "uns_12gaugemag_4", "uns_1Rnd_Smoke_40mm", "uns_m1911SDmag", "uns_12gaugemag_4f", "uns_30Rnd_556x45_StanagSD", "uns_1Rnd_SmokeGreen_40mm", "uns_30Rnd_556x45_Stanag_xm177_T", "uns_barmag_NT", "uns_20Rnd_556x45_Stanag_NT", "uns_m14mag_T", "Uns_1Rnd_HE_M406", "uns_garandmag_T", "uns_m1carbinemag_NT", "uns_357mag", "uns_thompsonmag_30", "uns_m14mag_T", "uns_m1garandmag_T", "uns_30Rnd_556x45_Stanag_xm177_T", "uns_1Rnd_SmokeRed_MKV", "uns_30Rnd_556x45_StanagSD", "uns_1Rnd_SmokeYellow_40mm", "uns_1Rnd_SmokeRed_MKV", "uns_m14mag_NT", "uns_model70mag", "uns_springfieldmag", "uns_1Rnd_SmokeGreen_40mm", "uns_12gaugemag_6", "uns_12gaugemag_6f", "uns_357mag", "Uns_1Rnd_HE_M406", "uns_12gaugemag_6", "uns_40mm_yellow", "uns_1Rnd_Smoke_MKV", "uns_barmag_NT", "uns_m1911mag", "uns_springfieldmag", "Uns_1Rnd_HE_M406", "uns_12gaugemag_4", "uns_30Rnd_556x45_Stanag_T", "uns_m60mag_200", "uns_1Rnd_Smoke_MKV", "uns_40mm_yellow", "uns_30Rnd_556x45_StanagSD", "uns_m40mag_T", "uns_m40mag_T", "uns_m3a1mag", "uns_m1carbinemag", "uns_barmag_T", "uns_1Rnd_SmokeRed_MKV", "uns_m40mag", "uns_20Rnd_556x45_Stanag_T", "uns_40mm_yellow", "uns_garandmag", "uns_m60mag_200", "uns_1Rnd_SmokeYellow_40mm", "uns_m406vest", "uns_m1carbinemag_NT", "uns_m1carbinemag_NT", "uns_1Rnd_SmokeRed_40mm", "uns_40mm_green", "uns_m14mag", "uns_1Rnd_SmokeGreen_MKV", "uns_30Rnd_556x45_StanagSD", "uns_40mm_yellow", "uns_springfieldmag", "uns_40mm_mkv_White", "uns_thompsonmag_30_NT", "uns_m1911SDmag", "uns_40mm_mkv_Yellow", "uns_30Rnd_556x45_StanagSD", "uns_thompsonmag_30_T", "uns_40mm_red", "uns_30Rnd_556x45_Stanag_T", "uns_model70mag", "uns_thompsonmag_30_T", "uns_model70mag_T", "uns_model70mag", "uns_m3a1mag", "uns_12gaugemag_6", "uns_1Rnd_SmokeRed_40mm", "uns_30Rnd_556x45_StanagSD", "uns_thompsonmag_30", "uns_20Rnd_556x45_StanagSD", "uns_1Rnd_SmokeGreen_40mm", "Uns_1Rnd_HE_M406", "uns_coltcmdrmag", "uns_20Rnd_556x45_Stanag", "uns_m1carbinemag_NT", "uns_40mm_mkv_White", "uns_m1carbinemag_NT", "uns_m1garandmag_T", "uns_springfieldmag", "uns_thompsonmag_30", "uns_garandmag_T", "uns_12gaugemag_6f", "uns_garandmag_T", "uns_1Rnd_SmokeYellow_MKV", "uns_thompsonmag_30_NT", "uns_40mm_mkv_Red", "uns_40mm_yellow", "uns_garandmag_T", "uns_m1carbinemag_T", "uns_38specmag", "uns_m14mag", "uns_m1carbinemag_T", "uns_40mm_yellow", "uns_40mm_mkv_Red", "uns_barmag_NT", "uns_thompsonmag_30_T", "uns_barmag", "uns_barmag", "uns_30Rnd_556x45_Stanag_NT", "uns_30Rnd_556x45_StanagSD", "uns_m60mag_200", "uns_40mm_mkv_White", "uns_30Rnd_556x45_Stanag_NT", "uns_springfieldmag_T", "uns_30Rnd_556x45_Stanag_T", "uns_40mm_red", "uns_40mm_mkv_White", "uns_30Rnd_556x45_Stanag_xm177", "uns_1Rnd_SmokeGreen_MKV", "uns_m1garandmag", "uns_30Rnd_556x45_Stanag", "uns_40mm_green", "uns_20Rnd_556x45_StanagSD", "uns_30Rnd_556x45_Stanag_xm177_NT", "uns_20Rnd_556x45_Stanag_T", "uns_barmag", "uns_m1911mag", "uns_m1911mag", "uns_m14mag", "uns_1Rnd_Smoke_MKV", "uns_m72rocket", "uns_1Rnd_SmokeYellow_40mm", "uns_40mm_white", "uns_1Rnd_SmokeYellow_MKV", "uns_40mm_yellow", "uns_40mm_green", "uns_40mm_mkv_Yellow", "uns_20Rnd_556x45_Stanag_NT", "uns_m3a1mag_T", "uns_30Rnd_556x45_StanagSD", "uns_38specmag", "uns_m1911mag", "uns_40mm_mkv_Green", "uns_thompsonmag_30_T", "uns_40mm_white", "uns_m1garandmag", "uns_m1911mag", "uns_30Rnd_556x45_Stanag_xm177_NT", "uns_12gaugemag_6", "uns_40mm_yellow", "uns_barmag_NT", "uns_30Rnd_556x45_Stanag_xm177", "uns_30Rnd_556x45_Stanag_xm177_T", "uns_m3a1mag", "uns_12gaugemag_6f", "uns_barmag_NT", "uns_40mm_white", "uns_12gaugemag_6f", "uns_30Rnd_556x45_Stanag", "uns_barmag", "uns_20Rnd_556x45_Stanag", "uns_30Rnd_556x45_Stanag_xm177_T", "uns_40mm_green", "uns_barmag", "uns_m14mag_T", "uns_m60mag_200", "uns_357mag", "uns_30Rnd_556x45_StanagSD", "uns_m40mag", "uns_m1garandmag", "uns_12gaugemag_4", "uns_m1garandmag_T", "uns_m1911SDmag", "uns_m3a1mag", "uns_barmag_T", "uns_m1garandmag", "uns_40mm_white", "uns_m72rocket", "uns_40mm_white", "uns_20Rnd_556x45_StanagSD", "uns_m1carbinemag_T", "uns_30Rnd_556x45_Stanag_T", "uns_1Rnd_Smoke_40mm", "uns_12gaugemag_6", "uns_20Rnd_556x45_Stanag_NT", "uns_12gaugemag_4", "uns_1Rnd_SmokeYellow_40mm", "uns_garandmag", "uns_40mm_green", "uns_m1garandmag_T", "uns_barmag_NT", "uns_m406vest", "uns_model70mag_T", "uns_m40mag_T", "uns_1Rnd_Smoke_40mm", "uns_m1carbinemag", "Uns_1Rnd_HE_M381", "uns_1Rnd_Smoke_40mm", "uns_20Rnd_556x45_Stanag_T", "Uns_1Rnd_HE_M381", "uns_m72rocket", "uns_20Rnd_556x45_Stanag", "uns_m3a1mag_T", "uns_barmag_T", "uns_springfieldmag", "uns_1Rnd_SmokeRed_MKV", "uns_m72rocket", "uns_20Rnd_556x45_Stanag_T", "uns_12gaugemag_4", "uns_thompsonmag_30", "uns_thompsonmag_30_T", "uns_springfieldmag", "uns_coltcmdrmag", "Uns_1Rnd_HE_M381", "uns_40mm_yellow", "uns_thompsonmag_30", "uns_m60mag", "uns_m72rocket", "uns_40mm_white", "Uns_1Rnd_HE_M406", "uns_30Rnd_556x45_Stanag_NT", "uns_m406vest", "uns_m3a1mag", "uns_30Rnd_556x45_Stanag_xm177", "uns_springfieldmag_T", "uns_thompsonmag_30_NT", "uns_garandmag_T", "uns_40mm_mkv_Green", "uns_m1carbinemag_NT", "uns_coltcmdrmag", "uns_1Rnd_SmokeYellow_MKV", "uns_m14mag_NT", "uns_30Rnd_556x45_Stanag_T", "uns_40mm_mkv_Green", "Uns_1Rnd_HE_M381", "uns_m14mag", "uns_1Rnd_Smoke_40mm", "uns_barmag_NT", "uns_barmag_NT", "uns_m40mag", "uns_m1carbinemag_T", "uns_model70mag_T", "uns_thompsonmag_30_T", "uns_38specmag", "uns_m14mag_NT", "uns_30Rnd_556x45_Stanag", "uns_1Rnd_SmokeRed_MKV", "uns_1Rnd_Smoke_MKV", "uns_thompsonmag_30_T", "uns_garandmag", "uns_m1911mag", "uns_m72rocket", "uns_m40mag_T", "uns_40mm_mkv_Yellow", "uns_40mm_white", "uns_30Rnd_556x45_Stanag_xm177", "uns_springfieldmag_T", "uns_m1garandmag_T", "uns_garandmag_T", "uns_m60mag_200", "uns_12gaugemag_6f", "uns_m1garandmag_T", "uns_40mm_white", "uns_1Rnd_Smoke_40mm", "uns_m1carbinemag_T", "uns_m1garandmag", "uns_20Rnd_556x45_StanagSD", "uns_m406vest", "uns_m406vest", "uns_m14mag_NT", "uns_m14mag", "uns_m1garandmag_T", "uns_20Rnd_556x45_Stanag_NT", "uns_12gaugemag_6", "uns_m72rocket", "uns_model70mag_T", "uns_model70mag_T", "uns_m406vest", "uns_12gaugemag_6f", "uns_40mm_mkv_Yellow", "uns_20Rnd_556x45_Stanag_T", "uns_40mm_mkv_White", "uns_m1garandmag_T", "uns_m40mag", "uns_m1911mag", "uns_m1911mag", "uns_1Rnd_SmokeGreen_MKV", "uns_1Rnd_Smoke_40mm", "uns_thompsonmag_30", "uns_30Rnd_556x45_Stanag_xm177_T", "uns_barmag_T", "uns_1Rnd_SmokeYellow_40mm", "uns_1Rnd_SmokeYellow_MKV", "uns_30Rnd_556x45_Stanag", "uns_m60mag", "uns_1Rnd_SmokeRed_40mm", "uns_m1garandmag", "uns_12gaugemag_4", "uns_40mm_white", "uns_30Rnd_556x45_Stanag_xm177", "uns_model70mag_T", "uns_m3a1mag", "uns_40mm_mkv_White", "uns_357mag", "uns_m1carbinemag_T", "uns_m3a1mag_T", "uns_40mm_red", "uns_model70mag", "uns_20Rnd_556x45_Stanag_NT", "uns_m60mag", "uns_357mag", "uns_12gaugemag_4f", "uns_30Rnd_556x45_Stanag_xm177", "uns_12gaugemag_6f", "uns_1Rnd_Smoke_40mm", "uns_40mm_green", "uns_model70mag", "uns_30Rnd_556x45_Stanag_T", "uns_m3a1mag", "uns_1Rnd_SmokeGreen_MKV", "uns_barmag_T", "uns_30Rnd_556x45_Stanag", "uns_40mm_mkv_Yellow", "uns_springfieldmag_T", "uns_m40mag_T", "uns_40mm_red", "uns_40mm_red", "uns_30Rnd_556x45_StanagSD", "uns_30Rnd_556x45_Stanag_xm177", "uns_12gaugemag_4", "uns_40mm_mkv_Yellow", "uns_20Rnd_556x45_Stanag", "uns_1Rnd_SmokeGreen_MKV", "Uns_1Rnd_HE_M406", "uns_barmag", "uns_20Rnd_556x45_Stanag_T", "uns_springfieldmag_T", "uns_30Rnd_556x45_StanagSD", "uns_40mm_red", "uns_12gaugemag_4f", "uns_1Rnd_SmokeGreen_40mm", "uns_coltcmdrmag", "uns_1Rnd_SmokeRed_MKV", "uns_m1garandmag", "uns_thompsonmag_30_NT", "uns_40mm_mkv_Yellow", "uns_m60mag_200", "uns_40mm_red", "uns_m1garandmag_T", "uns_m1carbinemag", "uns_40mm_green", "uns_30Rnd_556x45_Stanag_NT", "uns_30Rnd_556x45_Stanag_xm177_NT", "Uns_1Rnd_HE_M406", "uns_thompsonmag_30", "uns_20Rnd_556x45_Stanag_NT", "uns_30Rnd_556x45_Stanag_xm177_NT", "uns_30Rnd_556x45_Stanag_T", "uns_thompsonmag_30", "uns_m1911SDmag", "uns_thompsonmag_30_T", "uns_thompsonmag_30_NT", "uns_30Rnd_556x45_Stanag", "uns_20Rnd_556x45_Stanag", "uns_m3a1mag_T", "uns_12gaugemag_4", "uns_1Rnd_SmokeYellow_40mm", "uns_barmag_T", "uns_1Rnd_SmokeRed_40mm", "uns_m1garandmag", "uns_garandmag", "uns_barmag", "uns_1Rnd_SmokeGreen_MKV", "uns_garandmag", "uns_springfieldmag", "uns_model70mag_T", "uns_40mm_mkv_Red", "uns_m40mag", "uns_barmag", "uns_model70mag", "uns_38specmag", "uns_38specmag", "uns_thompsonmag_30", "uns_40mm_mkv_Green", "uns_30Rnd_556x45_Stanag_xm177_NT", "uns_1Rnd_SmokeRed_40mm", "uns_30Rnd_556x45_Stanag_xm177_T", "uns_1Rnd_SmokeYellow_MKV", "uns_40mm_white", "uns_357mag", "uns_1Rnd_SmokeYellow_40mm", "uns_m40mag", "uns_1Rnd_SmokeGreen_40mm", "uns_m1garandmag_T", "uns_40mm_yellow", "uns_m1911SDmag", "uns_20Rnd_556x45_Stanag_T", "uns_m1carbinemag", "uns_1Rnd_SmokeGreen_40mm", "uns_coltcmdrmag", "uns_m1carbinemag_NT", "uns_30Rnd_556x45_StanagSD", "uns_40mm_mkv_Red", "uns_m1garandmag", "uns_40mm_mkv_Green", "uns_m1carbinemag_T", "uns_20Rnd_556x45_Stanag_T", "uns_m1carbinemag_T", "uns_m60mag_200", "uns_1Rnd_Smoke_MKV", "uns_30Rnd_556x45_Stanag_xm177_NT", "uns_m1carbinemag_T", "uns_40mm_yellow", "uns_1Rnd_SmokeYellow_MKV", "uns_1Rnd_SmokeYellow_MKV", "uns_20Rnd_556x45_StanagSD", "uns_garandmag_T", "uns_m1911SDmag", "uns_38specmag", "uns_m1carbinemag_NT", "uns_m14mag", "uns_357mag", "uns_m1garandmag", "uns_40mm_yellow", "uns_m3a1mag_T", "uns_springfieldmag_T", "uns_garandmag_T", "uns_m14mag", "uns_springfieldmag_T", "uns_38specmag", "uns_coltcmdrmag", "uns_m14mag_T", "uns_40mm_mkv_White", "uns_garandmag_T", "uns_m3a1mag", "uns_1Rnd_Smoke_40mm", "uns_garandmag", "uns_12gaugemag_6", "uns_springfieldmag", "uns_m60mag", "uns_barmag", "uns_40mm_red", "uns_1Rnd_SmokeYellow_40mm", "uns_m14mag_T", "uns_40mm_mkv_Red", "uns_m1911mag", "uns_1Rnd_SmokeYellow_MKV", "uns_m1911mag", "uns_1Rnd_Smoke_MKV", "uns_model70mag", "uns_springfieldmag", "uns_30Rnd_556x45_Stanag_xm177_NT", "uns_1Rnd_SmokeYellow_40mm", "Uns_1Rnd_HE_M381", "uns_40mm_mkv_Yellow", "uns_12gaugemag_4f", "uns_30Rnd_556x45_Stanag_NT", "uns_40mm_mkv_Green", "uns_40mm_mkv_White", "uns_m40mag_T", "uns_40mm_green", "uns_m40mag_T", "uns_m406vest", "uns_30Rnd_556x45_Stanag_NT", "uns_m1carbinemag", "uns_12gaugemag_6", "uns_m60mag", "uns_m1garandmag", "uns_barmag", "uns_m406vest", "uns_m14mag_T", "uns_40mm_mkv_Red", "uns_m3a1mag_T", "uns_barmag_T", "Uns_1Rnd_HE_M381", "uns_barmag_NT", "uns_12gaugemag_6f", "uns_20Rnd_556x45_StanagSD", "uns_30Rnd_556x45_Stanag_xm177_NT", "uns_1Rnd_SmokeYellow_MKV", "uns_1Rnd_SmokeRed_MKV", "uns_1Rnd_SmokeRed_MKV", "uns_m60mag", "uns_12gaugemag_4", "uns_30Rnd_556x45_Stanag_xm177", "uns_m1911mag", "uns_20Rnd_556x45_Stanag_NT", "uns_12gaugemag_6", "uns_m14mag", "uns_garandmag_T", "uns_m60mag", "uns_m14mag_T", "uns_1Rnd_SmokeYellow_40mm", "uns_m406vest", "uns_30Rnd_556x45_Stanag_T", "uns_springfieldmag", "Uns_1Rnd_HE_M381", "uns_m1911mag", "uns_12gaugemag_4", "uns_12gaugemag_4f", "uns_1Rnd_SmokeYellow_40mm", "uns_m406vest", "uns_1Rnd_SmokeRed_40mm", "uns_m14mag_NT", "uns_20Rnd_556x45_Stanag_NT", "uns_20Rnd_556x45_StanagSD", "uns_springfieldmag", "uns_model70mag", "uns_1Rnd_SmokeGreen_MKV", "uns_20Rnd_556x45_StanagSD", "uns_m3a1mag_T", "uns_1Rnd_SmokeRed_40mm", "uns_garandmag", "uns_m1garandmag_T", "uns_barmag", "uns_m1carbinemag_T", "uns_1Rnd_SmokeGreen_MKV", "uns_12gaugemag_6f", "uns_m60mag", "uns_m3a1mag_T", "uns_m40mag", "uns_m40mag", "uns_m3a1mag", "uns_40mm_mkv_Green", "uns_1Rnd_SmokeRed_40mm", "Uns_1Rnd_HE_M381", "uns_40mm_white", "Uns_1Rnd_HE_M381", "uns_m3a1mag_T", "uns_30Rnd_556x45_Stanag", "uns_1Rnd_SmokeRed_40mm", "uns_m40mag_T", "uns_m1911SDmag", "uns_30Rnd_556x45_Stanag_T", "uns_30Rnd_556x45_Stanag", "uns_40mm_red", "uns_1Rnd_SmokeRed_MKV", "uns_12gaugemag_6f", "uns_m40mag", "uns_barmag", "uns_12gaugemag_6", "uns_40mm_yellow", "uns_m60mag", "uns_m40mag_T", "uns_40mm_mkv_White", "uns_model70mag", "uns_1Rnd_SmokeRed_MKV", "uns_30Rnd_556x45_Stanag_xm177_T", "uns_12gaugemag_4f", "uns_m60mag_200", "uns_1Rnd_Smoke_40mm", "uns_30Rnd_556x45_Stanag_NT"};

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
		VCammo[] = {"uns_1Rnd_22mm_lume", "uns_12gaugemag_2", "uns_type99mag_T", "uns_25Rnd_pm_pa", "uns_25Rnd_pm_pa", "uns_k50mag", "uns_mp40mag", "uns_mosinmag_T", "uns_1Rnd_SmokeGreen_MKV", "uns_40mm_mkv_Yellow", "uns_250Rnd_792x57_Mg42", "uns_rpg7grenade", "uns_ppshmag_NT", "uns_20Rnd_sa61_pa", "uns_mp40mag", "uns_mosinmag", "uns_kar98kmag_T", "uns_mosinmag", "uns_type100mag", "uns_40mm_mkv_Red", "uns_thompsonmag_20_NT", "uns_1Rnd_SmokeRed_MKV", "uns_sksmag_NT", "uns_thompsonmag_20", "uns_svdmag_T", "uns_mas4956mag", "uns_mat49_20_mag", "uns_1Rnd_22mm_lume", "uns_40mm_mkv_Green", "uns_1Rnd_22mm_lume", "uns_svdmag", "uns_mosinmag_T", "uns_40mm_mkv_White", "uns_25Rnd_pm_pa", "uns_sksmag_NT", "uns_250Rnd_792x57_Mg42", "uns_thompsonmag_20_T", "uns_k50mag_NT", "uns_kar98kmag_T", "uns_30Rnd_kurtz_stg", "uns_250Rnd_792x57_Mg42", "uns_rpg7grenade", "uns_mas36mag", "uns_sksmag", "uns_makarovmag", "uns_ak47mag_NT", "uns_ppshmag", "uns_thompsonmag_20_T", "uns_mat49mag_T", "uns_sksmag_T", "uns_type99mag", "uns_mas4956mag", "uns_12gaugemag_2", "uns_mosinmag_T", "uns_25Rnd_pm", "uns_sksmag_NT", "uns_svdmag_T", "uns_40mm_mkv_White", "uns_mat49mag_T", "uns_mas36mag", "uns_svtmag", "uns_25Rnd_pm", "uns_rpg2grenade", "uns_25Rnd_pm_pa", "uns_20Rnd_APS", "uns_20Rnd_sa61_pa", "uns_type100_NT", "uns_kar98kmag", "uns_ak47mag", "uns_mat49mag_NT", "uns_20Rnd_sa61", "uns_6Rnd_czak", "uns_B40grenade", "uns_type99mag", "uns_ak47mag_T", "uns_1Rnd_SmokeYellow_MKV", "uns_1Rnd_22mm_lume", "uns_svdmag_T", "uns_rpdmag", "uns_12gaugemag_2", "uns_ak47mag_NT", "uns_ak47mag_T", "uns_ak47mag_NT", "uns_B40grenade", "uns_12gaugemag_2", "uns_25Rnd_pm_pa", "uns_type99mag", "uns_mas36mag", "uns_ppshmag", "uns_sksmag_T", "uns_sksmag_T", "uns_mas4956mag_T", "uns_rpg7grenade", "uns_svtmag_T", "uns_nagant_m1895mag", "uns_thompsonmag_20_T", "uns_thompsonmag_20", "uns_1Rnd_Smoke_MKV", "uns_mat49mag_T", "uns_makarovmag", "uns_ak47mag_T", "uns_ak47mag_T", "uns_ak47mag_T", "uns_mp40mag", "uns_B40grenade", "uns_mp40mag", "uns_thompsonmag_20", "uns_40mm_mkv_Yellow", "uns_mat49_20_mag", "uns_mat49mag", "uns_40mm_mkv_Green", "uns_1Rnd_SmokeYellow_MKV", "uns_mas36mag_T", "uns_thompsonmag_20_NT", "uns_30Rnd_kurtz_stg", "uns_type100_NT", "uns_40mm_mkv_Green", "uns_type100mag", "uns_svdmag", "uns_svtmag", "uns_sksmag_NT", "uns_type100_T", "uns_ak47mag_NT", "uns_ak47mag", "uns_type100_T", "uns_thompsonmag_20", "uns_40mm_mkv_Green", "uns_tokarevmag", "uns_ak47mag_T", "uns_type99mag_T", "uns_mp40mag", "uns_makarovmag", "uns_svtmag_T", "uns_40mm_mkv_White", "uns_mosinmag", "uns_tokarevmag", "uns_sksmag_NT", "uns_sksmag_T", "uns_sksmag", "uns_50Rnd_792x57_Mg42", "uns_40mm_mkv_Green", "uns_mas36mag_T", "uns_mas4956mag_T", "uns_25Rnd_pm_pa", "uns_ak47mag", "uns_1Rnd_Smoke_MKV", "uns_ppshmag_NT", "uns_type100mag", "uns_rpg2grenade", "uns_40mm_mkv_Green", "uns_1Rnd_SmokeYellow_MKV", "uns_thompsonmag_20_NT", "uns_rpg2grenade", "uns_ak47mag_T", "uns_makarovmag", "uns_thompsonmag_20_T", "uns_50Rnd_792x57_Mg42", "uns_mosinmag_T", "uns_25Rnd_pm_pa", "uns_thompsonmag_20_T", "uns_1Rnd_SmokeGreen_MKV", "uns_kar98kmag", "uns_nagant_m1895mag", "uns_20Rnd_APS", "uns_mas4956mag", "uns_20Rnd_sa61", "uns_mas36mag_T", "uns_sksmag", "uns_25Rnd_pm", "uns_25Rnd_pm", "uns_mat49mag_T", "uns_20Rnd_sa61_pa", "uns_ak47mag_NT", "uns_tokarevmag", "uns_makarovmag", "uns_type100mag", "uns_kar98kmag", "uns_rpdmag", "uns_type100mag", "uns_mat49mag_NT", "uns_mat49mag", "uns_k50mag_T", "uns_k50mag", "uns_mosinmag_T", "uns_sksmag_NT", "uns_mas36mag_T", "uns_30Rnd_kurtz_stg", "uns_mp40mag", "uns_svtmag", "uns_mat49mag_NT", "uns_30Rnd_kurtz_stg", "uns_svdmag", "uns_k50mag", "uns_mat49mag", "uns_type100_T", "uns_mp40mag", "uns_thompsonmag_20_NT", "uns_1Rnd_Smoke_MKV", "uns_svtmag_T", "uns_ppshmag", "uns_20Rnd_APS", "uns_mas4956mag", "uns_svtmag_T", "uns_40mm_mkv_Red", "uns_1Rnd_SmokeGreen_MKV", "uns_mas36mag_T", "uns_25Rnd_pm", "uns_mp40mag", "uns_6Rnd_czak", "uns_1Rnd_Smoke_MKV", "uns_type99mag_T", "uns_svtmag", "uns_30Rnd_kurtz_stg", "uns_thompsonmag_20", "uns_mas36mag_T", "uns_svdmag_T", "uns_thompsonmag_20", "uns_svdmag_T", "uns_svdmag_T", "uns_ak47mag_NT", "uns_ppshmag_NT", "uns_thompsonmag_20_NT", "uns_mosinmag_T", "uns_ak47mag_T", "uns_k50mag", "uns_kar98kmag_T", "uns_B40grenade", "uns_mas36mag_T", "uns_mat49mag_T", "uns_mas36mag_T", "uns_ak47mag_NT", "uns_nagant_m1895mag", "uns_k50mag", "uns_1Rnd_SmokeYellow_MKV", "uns_20Rnd_sa61", "uns_kar98kmag", "uns_1Rnd_SmokeYellow_MKV", "uns_mat49mag_NT", "uns_12gaugemag_2", "uns_B40grenade", "uns_sksmag_T", "uns_mat49mag_NT", "uns_mat49mag", "uns_sksmag_T", "uns_mas4956mag_T", "uns_svdmag", "uns_sksmag_T", "uns_ppshmag_T", "uns_1Rnd_SmokeYellow_MKV", "uns_20Rnd_sa61", "uns_type100_T", "uns_rpg2grenade", "uns_svtmag_T", "uns_type100_NT", "uns_1Rnd_SmokeYellow_MKV", "uns_mat49_20_mag", "uns_k50mag_NT", "uns_20Rnd_sa61_pa", "uns_1Rnd_Smoke_MKV", "uns_6Rnd_czak", "uns_rpg7grenade", "uns_1Rnd_22mm_lume", "uns_mosinmag", "uns_6Rnd_czak", "uns_type100_NT", "uns_makarovmag", "uns_rpg2grenade", "uns_12gaugemag_2", "uns_sksmag", "uns_svtmag", "uns_ppshmag_NT", "uns_mas36mag_T", "uns_type99mag", "uns_1Rnd_22mm_lume", "uns_mas4956mag_T", "uns_20Rnd_sa61_pa", "uns_type100_T", "uns_k50mag", "uns_type99mag_T", "uns_ak47mag", "uns_mas4956mag", "uns_k50mag_T", "uns_rpdmag", "uns_1Rnd_SmokeGreen_MKV", "uns_k50mag_T", "uns_ak47mag_T", "uns_mp40mag", "uns_B40grenade", "uns_kar98kmag_T", "uns_tokarevmag", "uns_B40grenade", "uns_40mm_mkv_Yellow", "uns_mat49_20_mag", "uns_sksmag_T", "uns_type99mag", "uns_ak47mag_NT", "uns_mp40mag", "uns_1Rnd_SmokeRed_MKV", "uns_6Rnd_czak", "uns_type100_T", "uns_sksmag_T", "uns_mat49mag_NT", "uns_mat49mag", "uns_mat49mag", "uns_mat49mag", "uns_30Rnd_kurtz_stg", "uns_25Rnd_pm_pa", "uns_20Rnd_APS", "uns_mas4956mag", "uns_1Rnd_Smoke_MKV", "uns_1Rnd_SmokeGreen_MKV", "uns_thompsonmag_20_NT", "uns_svdmag_T", "uns_thompsonmag_20", "uns_svtmag_T", "uns_25Rnd_pm", "uns_40mm_mkv_Yellow", "uns_kar98kmag_T", "uns_type100_NT", "uns_mp40mag", "uns_type99mag", "uns_ppshmag_NT", "uns_1Rnd_22mm_lume", "uns_rpdmag", "uns_kar98kmag", "uns_mas36mag", "uns_type100mag", "uns_mas36mag", "uns_mas36mag", "uns_mosinmag", "uns_type99mag_T", "uns_k50mag", "uns_k50mag", "uns_ppshmag_T", "uns_type100mag", "uns_thompsonmag_20_T", "uns_type99mag_T", "uns_k50mag_T", "uns_ak47mag", "uns_thompsonmag_20_T", "uns_type99mag_T", "uns_k50mag_T", "uns_thompsonmag_20", "uns_1Rnd_SmokeYellow_MKV", "uns_mat49_20_mag", "uns_mat49mag_NT", "uns_svtmag_T", "uns_mat49mag_NT", "uns_20Rnd_sa61", "uns_mp40mag", "uns_rpdmag", "uns_kar98kmag", "uns_mat49mag", "uns_nagant_m1895mag", "uns_25Rnd_pm", "uns_thompsonmag_20_T", "uns_mas4956mag_T", "uns_1Rnd_Smoke_MKV", "uns_40mm_mkv_Yellow", "uns_mat49mag_NT", "uns_rpg2grenade", "uns_nagant_m1895mag", "uns_mat49_20_mag", "uns_50Rnd_792x57_Mg42", "uns_thompsonmag_20_T", "uns_k50mag_NT", "uns_tokarevmag", "uns_type99mag", "uns_6Rnd_czak", "uns_svdmag", "uns_svdmag", "uns_40mm_mkv_Yellow", "uns_type99mag_T", "uns_25Rnd_pm", "uns_mosinmag", "uns_rpdmag", "uns_40mm_mkv_Yellow", "uns_50Rnd_792x57_Mg42", "uns_mat49mag", "uns_1Rnd_SmokeRed_MKV", "uns_ak47mag", "uns_1Rnd_SmokeYellow_MKV", "uns_thompsonmag_20", "uns_svtmag_T", "uns_svdmag_T", "uns_rpg2grenade", "uns_ak47mag_NT", "uns_6Rnd_czak", "uns_mas4956mag_T", "uns_1Rnd_Smoke_MKV", "uns_ppshmag_NT", "uns_thompsonmag_20", "uns_40mm_mkv_Red", "uns_ppshmag", "uns_ak47mag_T", "uns_20Rnd_APS", "uns_svtmag", "uns_thompsonmag_20_T", "uns_mat49_20_mag", "uns_20Rnd_sa61", "uns_250Rnd_792x57_Mg42", "uns_40mm_mkv_Yellow", "uns_k50mag_NT", "uns_kar98kmag", "uns_svtmag", "uns_makarovmag", "uns_type99mag_T", "uns_ak47mag_NT", "uns_svtmag", "uns_20Rnd_sa61_pa", "uns_thompsonmag_20", "uns_svdmag_T", "uns_40mm_mkv_Red", "uns_type100_NT", "uns_mat49mag_T", "uns_20Rnd_sa61", "uns_1Rnd_SmokeRed_MKV", "uns_mas4956mag", "uns_mas36mag", "uns_12gaugemag_2", "uns_25Rnd_pm_pa", "uns_40mm_mkv_Red", "uns_type99mag", "uns_1Rnd_Smoke_MKV", "uns_40mm_mkv_Yellow", "uns_mosinmag", "uns_12gaugemag_2", "uns_40mm_mkv_Yellow", "uns_30Rnd_kurtz_stg", "uns_type100mag", "uns_30Rnd_kurtz_stg", "uns_20Rnd_sa61", "uns_6Rnd_czak", "uns_1Rnd_SmokeGreen_MKV", "uns_sksmag_NT", "uns_rpg2grenade", "uns_mat49mag_T", "uns_type100_NT", "uns_nagant_m1895mag", "uns_type100_T", "uns_rpdmag", "uns_nagant_m1895mag", "uns_rpg2grenade", "uns_mosinmag", "uns_mas36mag", "uns_25Rnd_pm_pa", "uns_nagant_m1895mag", "uns_30Rnd_kurtz_stg", "uns_svtmag_T", "uns_svtmag_T", "uns_50Rnd_792x57_Mg42", "uns_nagant_m1895mag", "uns_k50mag_NT", "uns_mas36mag_T", "uns_25Rnd_pm", "uns_kar98kmag", "uns_k50mag_NT", "uns_B40grenade", "uns_sksmag", "uns_mosinmag", "uns_svtmag", "uns_svtmag_T", "uns_mat49_20_mag", "uns_40mm_mkv_Yellow", "uns_250Rnd_792x57_Mg42", "uns_tokarevmag", "uns_25Rnd_pm", "uns_type100mag", "uns_type100_NT", "uns_sksmag", "uns_sksmag_T", "uns_6Rnd_czak", "uns_250Rnd_792x57_Mg42", "uns_40mm_mkv_Green", "uns_B40grenade", "uns_mas4956mag", "uns_mat49mag_T", "uns_50Rnd_792x57_Mg42", "uns_mas4956mag_T", "uns_1Rnd_SmokeGreen_MKV", "uns_1Rnd_SmokeYellow_MKV", "uns_kar98kmag", "uns_mosinmag_T", "uns_kar98kmag_T", "uns_mas4956mag", "uns_25Rnd_pm_pa", "uns_mat49mag_T", "uns_mat49_20_mag", "uns_k50mag_NT", "uns_k50mag_T", "uns_40mm_mkv_White", "uns_1Rnd_22mm_lume", "uns_ppshmag", "uns_ak47mag", "uns_makarovmag", "uns_thompsonmag_20", "uns_40mm_mkv_White", "uns_1Rnd_SmokeRed_MKV", "uns_ak47mag", "uns_svtmag_T", "uns_mp40mag", "uns_kar98kmag_T", "uns_kar98kmag_T", "uns_makarovmag", "uns_rpg7grenade", "uns_1Rnd_Smoke_MKV", "uns_B40grenade", "uns_tokarevmag", "uns_20Rnd_sa61_pa", "uns_rpg2grenade", "uns_kar98kmag_T", "uns_B40grenade", "uns_12gaugemag_2", "uns_rpg7grenade", "uns_mosinmag", "uns_ak47mag_NT", "uns_rpg2grenade", "uns_20Rnd_sa61", "uns_kar98kmag", "uns_mosinmag_T", "uns_makarovmag", "uns_25Rnd_pm_pa", "uns_12gaugemag_2", "uns_50Rnd_792x57_Mg42", "uns_40mm_mkv_White", "uns_ppshmag_NT", "uns_rpg7grenade", "uns_6Rnd_czak", "uns_k50mag", "uns_kar98kmag_T", "uns_ppshmag_T", "uns_40mm_mkv_Green", "uns_40mm_mkv_Green", "uns_1Rnd_SmokeGreen_MKV", "uns_k50mag_NT", "uns_1Rnd_SmokeYellow_MKV", "uns_ppshmag_T", "uns_nagant_m1895mag", "uns_30Rnd_kurtz_stg", "uns_mat49mag_T", "uns_thompsonmag_20_NT", "uns_type100_T", "uns_ppshmag_T", "uns_mas36mag_T", "uns_kar98kmag", "uns_kar98kmag_T", "uns_1Rnd_Smoke_MKV", "uns_1Rnd_22mm_lume", "uns_sksmag_T", "uns_ppshmag_NT", "uns_1Rnd_22mm_lume", "uns_svdmag_T", "uns_nagant_m1895mag", "uns_type100mag", "uns_tokarevmag", "uns_mat49mag_NT", "uns_mat49_20_mag", "uns_mat49mag", "uns_tokarevmag", "uns_20Rnd_sa61", "uns_thompsonmag_20_NT", "uns_rpdmag", "uns_ppshmag_T", "uns_40mm_mkv_Green", "uns_mas4956mag_T", "uns_1Rnd_Smoke_MKV", "uns_20Rnd_APS", "uns_type100mag", "uns_ak47mag", "uns_1Rnd_SmokeYellow_MKV", "uns_1Rnd_22mm_lume", "uns_kar98kmag", "uns_ppshmag_T", "uns_thompsonmag_20_NT", "uns_40mm_mkv_Red", "uns_rpg7grenade", "uns_rpg7grenade", "uns_type100_NT", "uns_ak47mag", "uns_type100_T", "uns_rpdmag", "uns_thompsonmag_20_NT", "uns_1Rnd_Smoke_MKV", "uns_thompsonmag_20", "uns_sksmag_T", "uns_mat49_20_mag", "uns_40mm_mkv_White", "uns_mosinmag_T", "uns_40mm_mkv_Red", "uns_mat49mag_NT", "uns_type100_T", "uns_mas4956mag", "uns_40mm_mkv_Green", "uns_1Rnd_SmokeRed_MKV", "uns_mp40mag", "uns_type99mag", "uns_1Rnd_SmokeGreen_MKV", "uns_thompsonmag_20_T", "uns_20Rnd_APS", "uns_ak47mag_T", "uns_kar98kmag", "uns_mat49_20_mag", "uns_12gaugemag_2", "uns_ppshmag", "uns_mas4956mag_T", "uns_20Rnd_APS", "uns_rpg2grenade", "uns_20Rnd_APS", "uns_thompsonmag_20_T", "uns_ak47mag_NT", "uns_svtmag", "uns_250Rnd_792x57_Mg42", "uns_30Rnd_kurtz_stg", "uns_20Rnd_APS", "uns_ppshmag_NT", "uns_type99mag", "uns_40mm_mkv_White", "uns_type100mag", "uns_20Rnd_sa61_pa", "uns_type99mag_T", "uns_mas4956mag", "uns_6Rnd_czak", "uns_svdmag_T", "uns_svtmag", "uns_1Rnd_SmokeRed_MKV", "uns_k50mag_NT", "uns_tokarevmag", "uns_1Rnd_SmokeRed_MKV", "uns_mas36mag", "uns_sksmag_NT", "uns_type99mag_T", "uns_mat49mag_NT", "uns_type100mag", "uns_type100mag", "uns_mas4956mag_T", "uns_40mm_mkv_Red", "uns_rpg7grenade", "uns_svdmag", "uns_1Rnd_SmokeGreen_MKV", "uns_6Rnd_czak", "uns_25Rnd_pm", "uns_1Rnd_SmokeRed_MKV", "uns_sksmag_NT", "uns_svdmag", "uns_20Rnd_APS", "uns_rpg2grenade", "uns_40mm_mkv_Green", "uns_tokarevmag", "uns_kar98kmag_T", "uns_tokarevmag", "uns_sksmag", "uns_svdmag", "uns_mp40mag", "uns_ppshmag_T", "uns_20Rnd_sa61_pa", "uns_ppshmag_T", "uns_svdmag", "uns_25Rnd_pm", "uns_sksmag", "uns_ppshmag_NT", "uns_20Rnd_sa61", "uns_20Rnd_APS", "uns_sksmag_NT", "uns_makarovmag", "uns_svdmag_T", "uns_rpg2grenade", "uns_40mm_mkv_White", "uns_40mm_mkv_Red", "uns_thompsonmag_20_T", "uns_k50mag_NT", "uns_makarovmag", "uns_25Rnd_pm", "uns_20Rnd_sa61_pa", "uns_kar98kmag", "uns_250Rnd_792x57_Mg42", "uns_sksmag", "uns_30Rnd_kurtz_stg", "uns_40mm_mkv_Green", "uns_6Rnd_czak", "uns_mosinmag", "uns_tokarevmag", "uns_25Rnd_pm", "uns_30Rnd_kurtz_stg", "uns_40mm_mkv_Red", "uns_mas36mag", "uns_thompsonmag_20_NT", "uns_thompsonmag_20_T", "uns_mas36mag_T", "uns_type99mag", "uns_type99mag", "uns_50Rnd_792x57_Mg42", "uns_mat49_20_mag", "uns_svdmag", "uns_kar98kmag_T", "uns_mosinmag_T", "uns_sksmag", "uns_type100_T", "uns_k50mag", "uns_250Rnd_792x57_Mg42", "uns_20Rnd_sa61", "uns_k50mag_NT", "uns_50Rnd_792x57_Mg42", "uns_type100mag", "uns_1Rnd_Smoke_MKV", "uns_1Rnd_SmokeRed_MKV", "uns_sksmag", "uns_12gaugemag_2", "uns_type99mag", "uns_ppshmag_T", "uns_6Rnd_czak", "uns_k50mag", "uns_12gaugemag_2", "uns_ak47mag_NT", "uns_20Rnd_sa61", "uns_type100_T", "uns_250Rnd_792x57_Mg42", "uns_type99mag_T", "uns_thompsonmag_20_NT", "uns_ppshmag_T", "uns_ak47mag", "uns_makarovmag", "uns_250Rnd_792x57_Mg42", "uns_mat49mag", "uns_ak47mag_T", "uns_mas4956mag_T", "uns_k50mag", "uns_50Rnd_792x57_Mg42", "uns_40mm_mkv_Red", "uns_svtmag_T", "uns_mas4956mag_T", "uns_mosinmag", "uns_nagant_m1895mag", "uns_type99mag_T", "uns_sksmag_T", "uns_6Rnd_czak", "uns_ppshmag_T", "uns_1Rnd_SmokeRed_MKV", "uns_k50mag_T", "uns_rpg2grenade", "uns_svdmag_T", "uns_type99mag_T", "uns_mat49mag", "uns_50Rnd_792x57_Mg42", "uns_1Rnd_SmokeRed_MKV", "uns_ppshmag_T", "uns_1Rnd_22mm_lume", "uns_mosinmag", "uns_k50mag", "uns_250Rnd_792x57_Mg42", "uns_1Rnd_SmokeRed_MKV", "uns_sksmag", "uns_svdmag", "uns_ppshmag", "uns_20Rnd_sa61", "uns_mas4956mag", "uns_ppshmag_NT", "uns_type100_NT", "uns_40mm_mkv_Yellow", "uns_rpdmag", "uns_type99mag", "uns_20Rnd_sa61_pa", "uns_mas36mag", "uns_20Rnd_sa61", "uns_ppshmag", "uns_25Rnd_pm", "uns_rpdmag", "uns_B40grenade", "uns_k50mag_NT", "uns_1Rnd_SmokeGreen_MKV", "uns_type100_T", "uns_ak47mag", "uns_30Rnd_kurtz_stg", "uns_k50mag_T", "uns_B40grenade", "uns_40mm_mkv_Yellow", "uns_250Rnd_792x57_Mg42", "uns_ppshmag_NT", "uns_1Rnd_Smoke_MKV", "uns_mat49_20_mag", "uns_mas4956mag_T", "uns_thompsonmag_20_NT", "uns_25Rnd_pm_pa", "uns_40mm_mkv_White", "uns_mas36mag_T", "uns_k50mag_NT", "uns_nagant_m1895mag", "uns_B40grenade", "uns_40mm_mkv_Green", "uns_25Rnd_pm_pa", "uns_sksmag", "uns_rpdmag", "uns_40mm_mkv_Red", "uns_rpg7grenade", "uns_250Rnd_792x57_Mg42", "uns_k50mag_T", "uns_svtmag_T", "uns_mat49mag_T", "uns_ppshmag_T", "uns_50Rnd_792x57_Mg42", "uns_1Rnd_SmokeYellow_MKV", "uns_mas4956mag_T", "uns_1Rnd_SmokeGreen_MKV", "uns_ak47mag_T", "uns_rpg7grenade", "uns_type100_NT", "uns_makarovmag", "uns_mat49mag_T", "uns_ppshmag", "uns_12gaugemag_2", "uns_40mm_mkv_White", "uns_20Rnd_sa61_pa", "uns_mat49mag_T", "uns_svtmag", "uns_1Rnd_22mm_lume", "uns_40mm_mkv_Red", "uns_svtmag", "uns_ppshmag_T", "uns_ppshmag", "uns_40mm_mkv_Yellow", "uns_1Rnd_SmokeRed_MKV", "uns_mosinmag_T", "uns_rpdmag", "uns_ppshmag", "uns_20Rnd_sa61_pa", "uns_k50mag", "uns_B40grenade", "uns_1Rnd_SmokeRed_MKV", "uns_mosinmag", "uns_k50mag_T", "uns_mas36mag_T", "uns_rpg7grenade", "uns_sksmag_NT", "uns_rpg7grenade", "uns_1Rnd_22mm_lume", "uns_mas36mag_T", "uns_rpg7grenade", "uns_mosinmag_T", "uns_ppshmag_NT", "uns_mat49mag_NT", "uns_type100_NT", "uns_thompsonmag_20", "uns_kar98kmag_T", "uns_mosinmag", "uns_svtmag", "uns_svdmag", "uns_mat49mag_NT", "uns_mas4956mag", "uns_sksmag", "uns_sksmag_T", "uns_50Rnd_792x57_Mg42", "uns_k50mag_T", "uns_thompsonmag_20_NT", "uns_20Rnd_APS", "uns_50Rnd_792x57_Mg42", "uns_mosinmag_T", "uns_sksmag_NT", "uns_40mm_mkv_Red", "uns_mat49mag_NT", "uns_ppshmag_NT", "uns_sksmag_NT", "uns_k50mag_T", "uns_1Rnd_SmokeGreen_MKV", "uns_20Rnd_APS", "uns_svdmag", "uns_svtmag", "uns_40mm_mkv_White", "uns_ak47mag", "uns_k50mag_NT", "uns_ak47mag", "uns_type100_NT", "uns_ppshmag", "uns_1Rnd_22mm_lume", "uns_kar98kmag", "uns_12gaugemag_2", "uns_40mm_mkv_Yellow", "uns_ppshmag", "uns_30Rnd_kurtz_stg", "uns_k50mag_T", "uns_ppshmag", "uns_50Rnd_792x57_Mg42", "uns_1Rnd_SmokeYellow_MKV", "uns_1Rnd_SmokeGreen_MKV", "uns_20Rnd_APS", "uns_ak47mag_NT", "uns_ak47mag", "uns_ak47mag_T", "uns_sksmag", "uns_ppshmag_NT", "uns_mat49mag", "uns_mat49mag", "uns_mat49mag", "uns_20Rnd_sa61_pa", "uns_type100_NT", "uns_40mm_mkv_White", "uns_type100_T", "uns_20Rnd_sa61_pa", "uns_tokarevmag", "uns_thompsonmag_20", "uns_40mm_mkv_Green", "uns_thompsonmag_20_NT", "uns_makarovmag", "uns_type100_NT", "uns_sksmag_NT", "uns_mas36mag", "uns_k50mag", "uns_40mm_mkv_White", "uns_type99mag_T", "uns_mosinmag_T", "uns_mat49_20_mag", "uns_1Rnd_SmokeGreen_MKV", "uns_40mm_mkv_Red", "uns_mat49mag_T", "uns_svdmag_T", "uns_rpdmag", "uns_ak47mag_NT", "uns_mas4956mag", "uns_svtmag_T", "uns_thompsonmag_20_T", "uns_40mm_mkv_White", "uns_ak47mag_T", "uns_25Rnd_pm_pa", "uns_sksmag_T", "uns_mas36mag", "uns_tokarevmag", "uns_nagant_m1895mag", "uns_rpdmag", "uns_mas4956mag_T", "uns_type100_T", "uns_type99mag", "uns_mat49mag_T", "uns_k50mag_T", "uns_ppshmag", "uns_kar98kmag_T", "uns_250Rnd_792x57_Mg42", "uns_sksmag_NT", "uns_nagant_m1895mag", "uns_mas4956mag", "uns_mosinmag_T", "uns_mas36mag", "uns_k50mag_T", "uns_svdmag", "uns_mas36mag", "uns_svdmag_T", "uns_1Rnd_SmokeYellow_MKV", "uns_k50mag_NT"};

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
		UStraps[] = {"uns_mine_TM_mag", "uns_traps_nade_mag", "PipeBomb", "uns_traps_nade_mag3", "uns_mk2gren", "uns_traps_flare_mag", "uns_m18Purple", "uns_traps_mine_mag", "PipeBomb", "uns_traps_nade_mag3", "uns_traps_m7_mag", "uns_mine_m14_mag", "PipeBomb", "uns_m18Blue", "uns_m67gren", "uns_mine_IN_mag", "uns_traps_claymore_mag", "uns_m18Green", "uns_mine_IN_mag", "uns_m18white", "uns_m18white", "uns_m14gren", "uns_m14gren", "uns_mk2gren", "uns_m18Green", "uns_m18Orange", "uns_m18Orange", "uns_m18Purple", "uns_m18Green", "uns_m61gren", "uns_m18Blue", "uns_mk2gren", "uns_traps_nade_mag", "uns_traps_flare_mag", "uns_m18Purple", "uns_traps_mine_mag", "uns_traps_claymore_remote_mag", "PipeBomb", "uns_m18white", "uns_m18Orange", "uns_traps_nade_mag3", "uns_m18Yellow", "uns_m18Blue", "uns_traps_nade_mag", "uns_m18red", "uns_m18Yellow", "uns_M118_mag_remote", "uns_mine_IN_mag", "uns_m18Yellow", "uns_m61gren", "uns_m67gren", "uns_traps_nade_mag7", "uns_traps_nade_mag", "uns_mk2gren", "uns_M118_mag_remote", "uns_traps_flare_mag", "uns_m67gren", "uns_mine_TM_mag", "uns_m18Purple", "uns_m18red", "uns_traps_m7_mag", "uns_traps_claymore_remote_mag", "uns_m18white", "uns_m18Purple", "uns_m18Green", "uns_mine_IN_mag", "uns_mk2gren", "uns_m18Blue", "PipeBomb", "uns_traps_nade_mag3", "uns_mk2gren", "uns_traps_flare_mag", "uns_traps_claymore_mag", "uns_m18Blue", "uns_mine_IN_mag", "uns_m61gren", "uns_traps_flare_mag", "PipeBomb", "uns_mk2gren", "uns_traps_nade_mag7", "PipeBomb", "uns_traps_nade_mag", "PipeBomb", "uns_M118_mag_remote", "uns_mine_TM_mag", "uns_traps_claymore_mag", "uns_m18white", "PipeBomb", "uns_traps_nade_mag3", "uns_m18Orange", "uns_m18white", "uns_traps_m7_mag", "uns_m18Green", "uns_traps_nade_mag3", "uns_m18white", "uns_mine_IN_mag", "uns_traps_nade_mag7", "uns_traps_claymore_mag", "uns_traps_claymore_mag", "uns_m14gren", "uns_traps_flare_mag", "uns_mine_TM_mag", "uns_m14gren", "uns_m67gren", "PipeBomb", "uns_m18Purple", "uns_traps_nade_mag3", "uns_m18Orange", "uns_m18Orange", "uns_m14gren", "uns_m18Orange", "uns_m18Green", "uns_m18Orange", "uns_m14gren", "uns_mine_TM_mag", "uns_m18Blue", "uns_M118_mag_remote", "uns_mine_IN_mag", "uns_m67gren", "uns_m18white", "uns_m18Green", "uns_m61gren", "uns_m18Blue", "uns_mine_m14_mag", "uns_m18Purple", "uns_m18Yellow", "uns_traps_nade_mag3", "uns_m67gren", "uns_m18white", "uns_m18Orange", "uns_traps_m7_mag", "uns_m61gren", "uns_traps_mine_mag", "uns_traps_nade_mag7", "uns_m61gren", "uns_m18white", "uns_M118_mag_remote", "uns_traps_flare_mag", "uns_m18Yellow", "uns_m67gren", "uns_m18Yellow", "uns_mine_TM_mag", "uns_traps_claymore_remote_mag", "uns_traps_mine_mag", "uns_traps_m7_mag", "uns_mine_TM_mag", "uns_m18Yellow", "uns_mine_m14_mag", "uns_M118_mag_remote", "uns_m18Blue", "uns_traps_nade_mag", "uns_traps_m7_mag", "uns_m61gren", "uns_traps_nade_mag7", "uns_m67gren", "uns_m61gren", "uns_traps_nade_mag7", "uns_m18Yellow", "uns_traps_nade_mag7", "uns_m18Blue", "uns_traps_nade_mag", "uns_mine_IN_mag", "uns_traps_mine_mag", "uns_traps_nade_mag3", "uns_m61gren", "uns_m18white", "uns_m18red", "uns_m14gren", "uns_m18red", "uns_m18white", "uns_m18red", "uns_M118_mag_remote", "uns_M118_mag_remote", "uns_m18Yellow", "uns_m18Purple", "uns_traps_nade_mag", "uns_traps_mine_mag", "uns_mk2gren", "uns_M118_mag_remote", "uns_m14gren", "uns_traps_nade_mag3", "uns_m18Yellow", "uns_traps_nade_mag", "uns_m18Green", "uns_traps_flare_mag", "uns_traps_claymore_remote_mag", "uns_traps_flare_mag", "uns_traps_m7_mag", "uns_m61gren", "uns_m18Blue", "uns_traps_nade_mag7", "uns_traps_claymore_remote_mag", "uns_m18Yellow", "uns_mk2gren", "uns_mine_m14_mag", "uns_traps_m7_mag", "uns_m18red", "uns_traps_mine_mag", "uns_m18Orange", "uns_m18red", "uns_mk2gren", "uns_mine_IN_mag", "uns_m18white", "uns_mine_TM_mag", "uns_m18Blue", "uns_m18Blue", "uns_traps_m7_mag", "uns_traps_nade_mag3", "uns_traps_nade_mag", "uns_m18Green", "uns_mk2gren", "uns_m18Green", "uns_traps_nade_mag7", "uns_m67gren", "uns_m18Purple", "uns_m18Orange", "uns_m14gren", "uns_mine_IN_mag", "uns_mine_IN_mag", "uns_traps_m7_mag", "uns_m18Purple", "uns_m18Blue", "uns_mine_IN_mag", "uns_traps_nade_mag7", "uns_traps_nade_mag3", "uns_m18Green", "uns_traps_flare_mag", "uns_m18Purple", "uns_traps_nade_mag7", "PipeBomb", "uns_m18red", "uns_m18Yellow", "uns_traps_claymore_mag", "uns_m18red", "uns_M118_mag_remote", "uns_m14gren", "uns_traps_claymore_mag", "uns_mine_m14_mag", "uns_m18red", "uns_m18red", "uns_mine_IN_mag", "uns_m14gren", "uns_mine_m14_mag", "PipeBomb", "uns_m61gren", "uns_mine_TM_mag", "uns_M118_mag_remote", "uns_m67gren", "uns_m18Green", "uns_m18Purple", "uns_traps_claymore_remote_mag", "uns_traps_claymore_mag", "PipeBomb", "uns_m14gren", "uns_traps_mine_mag", "uns_mine_m14_mag", "uns_M118_mag_remote", "uns_traps_m7_mag", "uns_mk2gren", "uns_traps_claymore_remote_mag", "uns_m14gren", "uns_traps_flare_mag", "uns_m18Purple", "uns_m67gren", "uns_m18Green", "uns_M118_mag_remote", "uns_m67gren", "uns_m14gren", "uns_m18Green", "uns_traps_nade_mag", "uns_traps_claymore_remote_mag", "uns_mk2gren", "uns_mine_m14_mag", "uns_traps_claymore_remote_mag", "uns_mk2gren", "uns_m18Green", "uns_m14gren", "uns_m18Orange", "uns_traps_mine_mag", "uns_traps_claymore_remote_mag", "uns_traps_flare_mag", "uns_traps_claymore_remote_mag", "uns_traps_mine_mag", "uns_traps_nade_mag3", "uns_mine_TM_mag", "uns_mine_m14_mag", "uns_m18Orange", "uns_traps_flare_mag", "uns_traps_nade_mag", "uns_mine_IN_mag", "uns_mine_m14_mag", "uns_m61gren", "uns_traps_claymore_remote_mag", "uns_m18red", "uns_m18white", "uns_traps_claymore_mag", "uns_traps_flare_mag", "uns_traps_mine_mag", "uns_m18Orange", "uns_mine_TM_mag", "uns_traps_nade_mag", "uns_traps_nade_mag3", "uns_mine_TM_mag", "uns_m18red", "uns_mk2gren", "uns_traps_nade_mag7", "uns_mine_m14_mag", "uns_mine_m14_mag", "uns_traps_claymore_mag", "PipeBomb", "uns_m18Yellow", "uns_traps_nade_mag3", "uns_traps_claymore_mag", "uns_traps_mine_mag", "uns_traps_m7_mag", "uns_traps_m7_mag", "uns_mine_TM_mag", "uns_M118_mag_remote", "uns_m61gren", "uns_traps_mine_mag", "uns_m18Purple", "uns_traps_claymore_mag", "PipeBomb", "uns_M118_mag_remote", "uns_m67gren", "uns_mine_TM_mag", "uns_traps_claymore_remote_mag", "uns_mine_m14_mag", "uns_mine_m14_mag", "uns_traps_mine_mag", "uns_m67gren", "uns_m18Blue", "uns_m18Purple", "uns_traps_claymore_remote_mag", "uns_traps_mine_mag", "uns_m18Yellow", "uns_traps_m7_mag", "uns_m18Blue", "uns_traps_m7_mag", "uns_m61gren", "uns_traps_claymore_remote_mag", "uns_traps_claymore_mag", "uns_m18white", "uns_traps_nade_mag", "uns_m18Yellow", "uns_m67gren", "uns_m61gren", "uns_traps_claymore_mag", "uns_m18red", "uns_m18red", "uns_traps_nade_mag7", "uns_traps_claymore_mag", "uns_m18Orange", "uns_traps_nade_mag7", "uns_mine_IN_mag", "uns_traps_flare_mag", "uns_mine_TM_mag", "uns_traps_nade_mag7", "uns_mine_m14_mag", "uns_traps_nade_mag"};

		/*
			Percental Item Spawn Chances of VCtraps:

			uns_molotov_mag = 16.67%
			uns_f1gren      = 16.67%
			uns_rg42gren    = 16.67%
			uns_rgd33gren   = 16.67%
			uns_t67gren     = 16.67%
			uns_rdg2        = 16.67%
		*/
		VCtraps[] = {"uns_rg42gren", "uns_rdg2", "uns_f1gren", "uns_rg42gren", "uns_rgd33gren", "uns_molotov_mag", "uns_rgd33gren", "uns_rdg2", "uns_t67gren", "uns_rdg2", "uns_rgd33gren", "uns_molotov_mag", "uns_rg42gren", "uns_rgd33gren", "uns_f1gren", "uns_t67gren", "uns_f1gren", "uns_t67gren", "uns_rgd33gren", "uns_molotov_mag", "uns_rdg2", "uns_f1gren", "uns_f1gren", "uns_rdg2", "uns_rg42gren", "uns_rg42gren", "uns_molotov_mag", "uns_molotov_mag", "uns_molotov_mag", "uns_rgd33gren", "uns_f1gren", "uns_molotov_mag", "uns_rdg2", "uns_rdg2", "uns_f1gren", "uns_f1gren", "uns_f1gren", "uns_rg42gren", "uns_rdg2", "uns_rgd33gren", "uns_rgd33gren", "uns_rg42gren", "uns_rgd33gren", "uns_rg42gren", "uns_rdg2", "uns_f1gren", "uns_rg42gren", "uns_rdg2", "uns_t67gren", "uns_rgd33gren", "uns_t67gren", "uns_rg42gren", "uns_molotov_mag", "uns_t67gren", "uns_rg42gren", "uns_rgd33gren", "uns_rdg2", "uns_t67gren", "uns_molotov_mag", "uns_rg42gren", "uns_molotov_mag", "uns_molotov_mag", "uns_f1gren", "uns_rg42gren", "uns_t67gren", "uns_t67gren", "uns_rg42gren", "uns_t67gren", "uns_rgd33gren", "uns_t67gren", "uns_rdg2", "uns_t67gren", "uns_t67gren", "uns_rdg2", "uns_molotov_mag", "uns_rgd33gren", "uns_molotov_mag", "uns_molotov_mag", "uns_f1gren", "uns_f1gren", "uns_rdg2", "uns_molotov_mag", "uns_rgd33gren", "uns_rgd33gren", "uns_f1gren", "uns_rdg2", "uns_t67gren", "uns_t67gren", "uns_rg42gren", "uns_f1gren"};

		/*
			Percental Item Spawn Chances of HandGrenades:

			uns_v40gren  = 16.67%
			uns_m61gren  = 16.67%
			uns_m67gren  = 16.67%
			uns_m34gren  = 16.67%
			uns_m14gren  = 16.67%
			uns_m308gren = 16.67%
		*/
		HandGrenades[] = {"uns_m67gren", "uns_v40gren", "uns_m34gren", "uns_m67gren", "uns_v40gren", "uns_m34gren", "uns_m14gren", "uns_m14gren", "uns_m308gren", "uns_m34gren", "uns_m67gren", "uns_m61gren", "uns_m14gren", "uns_m308gren", "uns_m308gren", "uns_m308gren", "uns_m34gren", "uns_m61gren", "uns_m308gren", "uns_v40gren", "uns_m61gren", "uns_m34gren", "uns_m67gren", "uns_m67gren", "uns_m61gren", "uns_m34gren", "uns_m67gren", "uns_m61gren", "uns_m308gren", "uns_v40gren", "uns_v40gren", "uns_m308gren", "uns_v40gren", "uns_m61gren", "uns_m34gren", "uns_m34gren", "uns_m61gren", "uns_m14gren", "uns_m67gren", "uns_m67gren", "uns_m308gren", "uns_m14gren", "uns_m14gren", "uns_m67gren", "uns_m61gren", "uns_m61gren", "uns_m67gren", "uns_m67gren", "uns_m14gren", "uns_m308gren", "uns_v40gren", "uns_m14gren", "uns_m61gren", "uns_m67gren", "uns_m34gren", "uns_v40gren", "uns_v40gren", "uns_m67gren", "uns_m34gren", "uns_v40gren", "uns_v40gren", "uns_m14gren", "uns_m308gren", "uns_m34gren", "uns_m34gren", "uns_m61gren", "uns_m61gren", "uns_m61gren", "uns_m308gren", "uns_m14gren", "uns_m308gren", "uns_m34gren", "uns_m61gren", "uns_m14gren", "uns_m14gren", "uns_m34gren", "uns_m308gren", "uns_v40gren", "uns_m67gren", "uns_m61gren", "uns_m67gren", "uns_v40gren", "uns_m308gren", "uns_m14gren", "uns_v40gren", "uns_m14gren", "uns_m308gren", "uns_m34gren", "uns_v40gren", "uns_m14gren"};

		/*
			Percental Item Spawn Chances of Explosives:

			SatchelCharge_Remote_Mag = 50.00%
			DemoCharge_Remote_Mag    = 50.00%
		*/
		Explosives[] = {"DemoCharge_Remote_Mag", "DemoCharge_Remote_Mag", "SatchelCharge_Remote_Mag", "DemoCharge_Remote_Mag", "DemoCharge_Remote_Mag", "SatchelCharge_Remote_Mag", "DemoCharge_Remote_Mag", "SatchelCharge_Remote_Mag", "SatchelCharge_Remote_Mag", "SatchelCharge_Remote_Mag", "SatchelCharge_Remote_Mag", "SatchelCharge_Remote_Mag", "DemoCharge_Remote_Mag", "DemoCharge_Remote_Mag", "SatchelCharge_Remote_Mag", "SatchelCharge_Remote_Mag", "DemoCharge_Remote_Mag", "DemoCharge_Remote_Mag", "DemoCharge_Remote_Mag", "SatchelCharge_Remote_Mag", "DemoCharge_Remote_Mag", "DemoCharge_Remote_Mag", "SatchelCharge_Remote_Mag", "SatchelCharge_Remote_Mag", "DemoCharge_Remote_Mag", "DemoCharge_Remote_Mag", "DemoCharge_Remote_Mag", "SatchelCharge_Remote_Mag", "SatchelCharge_Remote_Mag", "SatchelCharge_Remote_Mag"};

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
		MilitaryClothing[] = {"UNS_USMC_BDU_S", "UNS_USMC_FLAK2_65", "UNS_ARMY_BDU", "UNS_TIGER_BDU", "UNS_ARMY_BDU_F", "UNS_USMC_FLAK_65", "UNS_USMC_LERDL", "UNS_USMC_BDU", "UNS_TIGER3_BDU", "UNS_USMC_Flak_S", "UNS_USMC_Flak_S", "UNS_TIGER2_BDU", "UNS_JPilot_BDU", "UNS_ARMY_BDU_65", "UNS_TIGER_BDU", "UNS_Pilot_BDU", "UNS_USMC_BDU_65_2", "UNS_USMC_Flak_F", "UNS_USMC_BDU_65_2", "UNS_ARMY_BDU_F", "UNS_USMC_BDU", "UNS_USMC_Flak_F", "UNS_TIGER2_BDU", "UNS_USMC_BDU_S", "UNS_USMC_Flak_ES", "UNS_USMC_LERDL", "UNS_USMC_BDU_65_2", "UNS_USMC_LERDL", "UNS_USMC_FLAK2_65", "UNS_TIGER2_BDU", "UNS_USMC_BDU", "UNS_USMC_FLAK2_65", "UNS_ARMY_BDU", "UNS_USMC_BDU", "UNS_ARMY_BDU_F", "UNS_USMC_BDU", "UNS_USMC_Flak", "UNS_USMC_Flak_F", "UNS_USMC_BDU_S", "UNS_USMC_BDU_65", "UNS_TIGER_BDU", "UNS_USMC_Flak_F", "UNS_USMC_Flak_E", "UNS_USMC_BDU_65_2", "UNS_JPilot_BDU", "UNS_TIGER_BDU", "UNS_USMC_Flak_ES", "UNS_USMC_FLAK_65", "UNS_DUCK_BDU", "UNS_TIGER3_BDU", "UNS_USMC_BDU_S", "UNS_USMC_BDU", "UNS_TIGER3_BDU", "UNS_USMC_LERDL", "UNS_USMC_LERDL", "UNS_USMC_FLAK2_65", "UNS_USMC_BDU_65_2", "UNS_USMC_Flak_E", "UNS_TIGER_BDU", "UNS_USMC_Flak", "UNS_DUCK_BDU", "UNS_JPilot_BDU", "UNS_JPilot_BDU", "UNS_USMC_BDU_65", "UNS_ARMY_BDU_65", "UNS_USMC_Flak_E", "UNS_USMC_LERDL", "UNS_USMC_BDU_65", "UNS_ARMY_BDU_F", "UNS_ARMY_BDU_65", "UNS_USMC_BDU_65_2", "UNS_TIGER3_BDU", "UNS_USMC_BDU_S", "UNS_DUCK_BDU", "UNS_USMC_Flak_ES", "UNS_USMC_Flak_F", "UNS_USMC_Flak_ES", "UNS_DUCK_BDU", "UNS_USMC_FLAK_65", "UNS_ARMY_BDU_F", "UNS_USMC_Flak", "UNS_ARMY_BDU", "UNS_ARMY_BDU", "UNS_TIGER3_BDU", "UNS_USMC_Flak_S", "UNS_TIGER3_BDU", "UNS_ARMY_BDU_F", "UNS_USMC_Flak_F", "UNS_USMC_BDU_S", "UNS_USMC_FLAK2_65", "UNS_DUCK_BDU", "UNS_JPilot_BDU", "UNS_USMC_Flak_ES", "UNS_ARMY_BDU_65", "UNS_JPilot_BDU", "UNS_USMC_Flak", "UNS_USMC_Flak_E", "UNS_USMC_FLAK_65", "UNS_ARMY_BDU", "UNS_USMC_Flak_ES", "UNS_TIGER3_BDU", "UNS_USMC_FLAK2_65", "UNS_USMC_Flak_ES", "UNS_USMC_Flak_S", "UNS_USMC_Flak_F", "UNS_USMC_FLAK2_65", "UNS_TIGER2_BDU", "UNS_USMC_Flak", "UNS_TIGER_BDU", "UNS_USMC_BDU_S", "UNS_USMC_Flak_ES", "UNS_USMC_Flak_E", "UNS_Pilot_BDU", "UNS_TIGER2_BDU", "UNS_TIGER3_BDU", "UNS_USMC_BDU_65", "UNS_ARMY_BDU", "UNS_USMC_FLAK2_65", "UNS_USMC_BDU_65", "UNS_TIGER3_BDU", "UNS_USMC_BDU", "UNS_USMC_FLAK_65", "UNS_USMC_BDU_65_2", "UNS_USMC_Flak_S", "UNS_USMC_Flak_F", "UNS_DUCK_BDU", "UNS_USMC_Flak_E", "UNS_USMC_Flak", "UNS_USMC_FLAK_65", "UNS_Pilot_BDU", "UNS_TIGER_BDU", "UNS_USMC_Flak_F", "UNS_TIGER_BDU", "UNS_USMC_BDU_65", "UNS_USMC_BDU_65", "UNS_USMC_Flak_S", "UNS_JPilot_BDU", "UNS_ARMY_BDU_F", "UNS_DUCK_BDU", "UNS_USMC_Flak_S", "UNS_USMC_Flak_E", "UNS_USMC_Flak_E", "UNS_ARMY_BDU_65", "UNS_DUCK_BDU", "UNS_Pilot_BDU", "UNS_JPilot_BDU", "UNS_USMC_BDU_65_2", "UNS_USMC_Flak", "UNS_USMC_BDU_S", "UNS_USMC_Flak_E", "UNS_USMC_BDU_65_2", "UNS_JPilot_BDU", "UNS_ARMY_BDU_F", "UNS_TIGER2_BDU", "UNS_USMC_LERDL", "UNS_DUCK_BDU", "UNS_USMC_BDU", "UNS_Pilot_BDU", "UNS_USMC_BDU_65_2", "UNS_USMC_Flak_S", "UNS_USMC_Flak", "UNS_TIGER2_BDU", "UNS_TIGER2_BDU", "UNS_USMC_BDU_65", "UNS_USMC_Flak_E", "UNS_USMC_Flak_ES", "UNS_Pilot_BDU", "UNS_ARMY_BDU", "UNS_Pilot_BDU", "UNS_TIGER_BDU", "UNS_USMC_Flak_F", "UNS_USMC_FLAK2_65", "UNS_USMC_FLAK_65", "UNS_ARMY_BDU", "UNS_ARMY_BDU_F", "UNS_TIGER_BDU", "UNS_TIGER3_BDU", "UNS_USMC_Flak", "UNS_ARMY_BDU_65", "UNS_USMC_FLAK_65", "UNS_TIGER2_BDU", "UNS_USMC_FLAK_65", "UNS_USMC_LERDL", "UNS_ARMY_BDU_F", "UNS_Pilot_BDU", "UNS_ARMY_BDU_65", "UNS_USMC_LERDL", "UNS_TIGER2_BDU", "UNS_USMC_BDU", "UNS_USMC_BDU", "UNS_USMC_Flak", "UNS_USMC_Flak_ES", "UNS_ARMY_BDU_F", "UNS_DUCK_BDU", "UNS_JPilot_BDU", "UNS_USMC_BDU", "UNS_USMC_Flak_E", "UNS_USMC_FLAK_65", "UNS_USMC_Flak_S", "UNS_USMC_Flak_E", "UNS_USMC_Flak", "UNS_TIGER_BDU", "UNS_TIGER3_BDU", "UNS_Pilot_BDU", "UNS_ARMY_BDU", "UNS_USMC_LERDL", "UNS_TIGER2_BDU", "UNS_TIGER3_BDU", "UNS_USMC_FLAK2_65", "UNS_USMC_FLAK_65", "UNS_USMC_LERDL", "UNS_ARMY_BDU_65", "UNS_ARMY_BDU_65", "UNS_USMC_BDU_S", "UNS_JPilot_BDU", "UNS_USMC_Flak_F", "UNS_USMC_LERDL", "UNS_DUCK_BDU", "UNS_TIGER3_BDU", "UNS_USMC_BDU_S", "UNS_USMC_BDU_S", "UNS_USMC_Flak_S", "UNS_TIGER_BDU", "UNS_Pilot_BDU", "UNS_USMC_FLAK2_65", "UNS_USMC_Flak", "UNS_USMC_Flak", "UNS_USMC_Flak_E", "UNS_USMC_Flak_ES", "UNS_USMC_Flak_F", "UNS_USMC_Flak_S", "UNS_ARMY_BDU", "UNS_USMC_BDU_65_2", "UNS_TIGER3_BDU", "UNS_JPilot_BDU", "UNS_DUCK_BDU", "UNS_TIGER_BDU", "UNS_USMC_Flak_S", "UNS_USMC_BDU_65_2", "UNS_USMC_BDU_65_2", "UNS_JPilot_BDU", "UNS_ARMY_BDU_65", "UNS_TIGER3_BDU", "UNS_ARMY_BDU_65", "UNS_DUCK_BDU", "UNS_USMC_BDU_65", "UNS_Pilot_BDU", "UNS_ARMY_BDU", "UNS_USMC_BDU", "UNS_USMC_BDU_S", "UNS_USMC_Flak", "UNS_ARMY_BDU", "UNS_USMC_BDU", "UNS_USMC_FLAK_65", "UNS_DUCK_BDU", "UNS_USMC_BDU", "UNS_USMC_BDU", "UNS_Pilot_BDU", "UNS_TIGER2_BDU", "UNS_USMC_Flak_ES", "UNS_USMC_FLAK_65", "UNS_DUCK_BDU", "UNS_USMC_FLAK_65", "UNS_ARMY_BDU_65", "UNS_USMC_Flak_F", "UNS_Pilot_BDU", "UNS_USMC_FLAK2_65", "UNS_USMC_Flak_S", "UNS_USMC_Flak_S", "UNS_USMC_Flak", "UNS_TIGER_BDU", "UNS_USMC_LERDL", "UNS_USMC_BDU_65_2", "UNS_ARMY_BDU_F", "UNS_USMC_BDU_65", "UNS_TIGER2_BDU", "UNS_USMC_BDU_S", "UNS_USMC_Flak_E", "UNS_ARMY_BDU_65", "UNS_USMC_Flak_ES", "UNS_USMC_BDU_65", "UNS_USMC_BDU_65", "UNS_USMC_FLAK_65", "UNS_USMC_LERDL", "UNS_ARMY_BDU", "UNS_USMC_Flak_S", "UNS_JPilot_BDU", "UNS_ARMY_BDU_65", "UNS_TIGER2_BDU", "UNS_USMC_FLAK2_65", "UNS_ARMY_BDU_65", "UNS_JPilot_BDU", "UNS_ARMY_BDU_F", "UNS_USMC_LERDL", "UNS_USMC_BDU_S", "UNS_Pilot_BDU", "UNS_USMC_BDU_65", "UNS_ARMY_BDU", "UNS_ARMY_BDU", "UNS_USMC_FLAK2_65", "UNS_USMC_BDU_65", "UNS_ARMY_BDU_F", "UNS_USMC_BDU_65_2", "UNS_TIGER_BDU", "UNS_USMC_Flak_F", "UNS_USMC_Flak_ES", "UNS_USMC_Flak_ES", "UNS_Pilot_BDU", "UNS_USMC_Flak_F", "UNS_USMC_BDU_S", "UNS_TIGER2_BDU", "UNS_USMC_Flak_E", "UNS_ARMY_BDU_F", "UNS_USMC_BDU_65", "UNS_USMC_FLAK2_65"};

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
		VcClothing[] = {"UNS_VC_U", "UNS_CIV_U", "UNS_CIV_U", "UNS_DCCR_BTS", "UNS_DCCR_G", "UNS_DCCR_GTS", "UNS_DCCR_BBS", "UNS_NVA_G", "UNS_DCCR_TGS", "UNS_DCCR_BTS", "UNS_VC_S", "UNS_DCCR_BTS", "UNS_DCCR_GTS", "UNS_DCCR_TGS", "UNS_CIV_U", "UNS_DCCR_GTS", "UNS_NVA_K", "UNS_NVA_G", "UNS_CIV_U", "UNS_DCCR_TGS", "UNS_NVA_G", "UNS_VC_U", "UNS_NVA_K", "UNS_DCCR_GTS", "UNS_DCCR_GTS", "UNS_DCCR_G", "UNS_DCCR_BTS", "UNS_NVA_G", "UNS_NVA_KS", "UNS_DCCR_G", "UNS_NVA_G", "UNS_NVA_K", "UNS_DCCR_GTS", "UNS_NVA_KS", "UNS_CIV_U", "UNS_NVA_KS", "UNS_VC_U", "UNS_VC_U", "UNS_NVA_K", "UNS_DCCR_B", "UNS_CIV_U", "UNS_DCCR_B", "UNS_CIV_U", "UNS_NVA_KS", "UNS_DCCR_TGS", "UNS_DCCR_B", "UNS_DCCR_B", "UNS_DCCR_B", "UNS_DCCR_GTS", "UNS_NVA_KS", "UNS_NVA_KS", "UNS_DCCR_G", "UNS_DCCR_GTS", "UNS_DCCR_B", "UNS_VC_S", "UNS_NVA_KS", "UNS_DCCR_B", "UNS_DCCR_G", "UNS_DCCR_TGS", "UNS_DCCR_G", "UNS_DCCR_BTS", "UNS_NVA_K", "UNS_DCCR_B", "UNS_DCCR_TGS", "UNS_NVA_K", "UNS_VC_U", "UNS_DCCR_BTS", "UNS_NVA_K", "UNS_DCCR_B", "UNS_DCCR_GTS", "UNS_NVA_G", "UNS_DCCR_G", "UNS_NVA_G", "UNS_DCCR_B", "UNS_DCCR_G", "UNS_NVA_KS", "UNS_NVA_G", "UNS_DCCR_BTS", "UNS_DCCR_BBS", "UNS_CIV_U", "UNS_DCCR_BBS", "UNS_NVA_G", "UNS_DCCR_BBS", "UNS_VC_U", "UNS_NVA_G", "UNS_NVA_K", "UNS_DCCR_GTS", "UNS_DCCR_BBS", "UNS_NVA_KS", "UNS_VC_S", "UNS_DCCR_GTS", "UNS_VC_U", "UNS_DCCR_TGS", "UNS_CIV_U", "UNS_DCCR_BTS", "UNS_NVA_K", "UNS_DCCR_GTS", "UNS_DCCR_G", "UNS_VC_S", "UNS_DCCR_BBS", "UNS_DCCR_TGS", "UNS_DCCR_G", "UNS_DCCR_GTS", "UNS_VC_S", "UNS_NVA_KS", "UNS_VC_U", "UNS_CIV_U", "UNS_NVA_G", "UNS_DCCR_GTS", "UNS_VC_S", "UNS_DCCR_BTS", "UNS_DCCR_B", "UNS_DCCR_BBS", "UNS_DCCR_G", "UNS_DCCR_G", "UNS_DCCR_BTS", "UNS_NVA_K", "UNS_DCCR_B", "UNS_DCCR_BBS", "UNS_CIV_U", "UNS_DCCR_TGS", "UNS_DCCR_BTS", "UNS_CIV_U", "UNS_DCCR_BBS", "UNS_NVA_KS", "UNS_DCCR_BTS", "UNS_DCCR_B", "UNS_DCCR_BBS", "UNS_DCCR_BTS", "UNS_VC_U", "UNS_DCCR_BBS", "UNS_DCCR_G", "UNS_VC_S", "UNS_DCCR_B", "UNS_CIV_U", "UNS_NVA_G", "UNS_VC_S", "UNS_DCCR_TGS", "UNS_VC_S", "UNS_DCCR_BBS", "UNS_DCCR_G", "UNS_DCCR_B", "UNS_VC_U", "UNS_CIV_U", "UNS_DCCR_BBS", "UNS_VC_S", "UNS_NVA_K", "UNS_DCCR_TGS", "UNS_NVA_KS", "UNS_NVA_G", "UNS_DCCR_TGS", "UNS_VC_U", "UNS_NVA_KS", "UNS_NVA_G", "UNS_NVA_K", "UNS_NVA_K", "UNS_VC_S", "UNS_VC_S", "UNS_DCCR_BBS", "UNS_DCCR_TGS", "UNS_VC_U", "UNS_VC_S", "UNS_VC_S", "UNS_NVA_K", "UNS_NVA_KS", "UNS_DCCR_BTS", "UNS_DCCR_GTS", "UNS_NVA_KS", "UNS_DCCR_G", "UNS_VC_U", "UNS_DCCR_BBS", "UNS_VC_U", "UNS_CIV_U", "UNS_VC_S", "UNS_VC_U", "UNS_NVA_G", "UNS_DCCR_TGS", "UNS_DCCR_TGS", "UNS_DCCR_BTS", "UNS_NVA_K"};

		/*
			Percental Item Spawn Chances of MilitaryBackpacks:

			UNS_Alice_F1 = 3.45%
			UNS_Alice_F2 = 3.45%
			UNS_Alice_F3 = 3.45%
			UNS_Alice_F4 = 3.45%
			UNS_Alice_F5 = 3.45%
			UNS_Alice_F6 = 3.45%
			UNS_Alice_F7 = 3.45%
			UNS_Alice_F8 = 3.45%
			UNS_Alice_F9 = 3.45%
			UNS_Alice_FR = 3.45%
			UNS_Alice_1  = 3.45%
			UNS_Alice_2  = 3.45%
			UNS_Alice_3  = 3.45%
			UNS_Alice_4  = 3.45%
			UNS_Alice_5  = 3.45%
			UNS_Alice_6  = 3.45%
			UNS_ARMY_RTO = 3.45%
			UNS_SF_RTO   = 3.45%
			UNS_ARMY_MED = 3.45%
			UNS_USMC_E1  = 3.45%
			UNS_USMC_E2  = 3.45%
			UNS_USMC_R1  = 3.45%
			UNS_USMC_R2  = 3.45%
			UNS_USMC_R3  = 3.45%
			UNS_USMC_MED = 3.45%
			UNS_USMC_RTO = 3.45%
			UNS_TROP_R1  = 3.45%
			UNS_TROP_R2  = 3.45%
			UNS_TROP_R3  = 3.45%
		*/
		MilitaryBackpacks[] = {"UNS_USMC_R3", "UNS_Alice_4", "UNS_Alice_F5", "UNS_Alice_F3", "UNS_Alice_F4", "UNS_Alice_5", "UNS_ARMY_RTO", "UNS_TROP_R1", "UNS_USMC_R1", "UNS_USMC_E2", "UNS_Alice_6", "UNS_SF_RTO", "UNS_USMC_RTO", "UNS_Alice_F4", "UNS_Alice_2", "UNS_USMC_R2", "UNS_ARMY_RTO", "UNS_Alice_F8", "UNS_Alice_F3", "UNS_Alice_6", "UNS_Alice_FR", "UNS_USMC_R1", "UNS_Alice_F3", "UNS_Alice_FR", "UNS_USMC_MED", "UNS_TROP_R3", "UNS_ARMY_MED", "UNS_Alice_F3", "UNS_Alice_F2", "UNS_Alice_6", "UNS_Alice_F8", "UNS_TROP_R3", "UNS_USMC_R3", "UNS_TROP_R1", "UNS_Alice_FR", "UNS_Alice_F4", "UNS_Alice_1", "UNS_Alice_F1", "UNS_Alice_2", "UNS_Alice_F6", "UNS_USMC_R1", "UNS_USMC_E1", "UNS_USMC_R2", "UNS_Alice_2", "UNS_Alice_5", "UNS_USMC_R1", "UNS_SF_RTO", "UNS_Alice_F8", "UNS_USMC_R2", "UNS_Alice_4", "UNS_USMC_R2", "UNS_Alice_6", "UNS_USMC_R1", "UNS_USMC_E1", "UNS_Alice_4", "UNS_Alice_2", "UNS_Alice_F9", "UNS_ARMY_MED", "UNS_Alice_3", "UNS_Alice_6", "UNS_ARMY_MED", "UNS_Alice_F3", "UNS_Alice_F1", "UNS_TROP_R3", "UNS_USMC_MED", "UNS_ARMY_MED", "UNS_USMC_RTO", "UNS_Alice_F6", "UNS_Alice_F4", "UNS_SF_RTO", "UNS_USMC_E1", "UNS_Alice_5", "UNS_Alice_5", "UNS_Alice_F5", "UNS_ARMY_MED", "UNS_Alice_F3", "UNS_ARMY_MED", "UNS_Alice_F6", "UNS_Alice_F4", "UNS_USMC_MED", "UNS_Alice_FR", "UNS_ARMY_MED", "UNS_TROP_R3", "UNS_Alice_F7", "UNS_USMC_R3", "UNS_Alice_F7", "UNS_USMC_R2", "UNS_Alice_F9", "UNS_Alice_4", "UNS_USMC_R3", "UNS_Alice_F5", "UNS_Alice_F2", "UNS_Alice_F6", "UNS_TROP_R1", "UNS_TROP_R2", "UNS_USMC_E2", "UNS_Alice_FR", "UNS_Alice_F6", "UNS_TROP_R3", "UNS_ARMY_RTO", "UNS_TROP_R3", "UNS_USMC_R2", "UNS_USMC_MED", "UNS_USMC_RTO", "UNS_USMC_RTO", "UNS_USMC_R2", "UNS_Alice_FR", "UNS_Alice_F7", "UNS_ARMY_RTO", "UNS_Alice_F3", "UNS_Alice_5", "UNS_ARMY_MED", "UNS_Alice_5", "UNS_Alice_4", "UNS_Alice_F9", "UNS_Alice_4", "UNS_SF_RTO", "UNS_Alice_F5", "UNS_USMC_E1", "UNS_Alice_F9", "UNS_Alice_FR", "UNS_Alice_2", "UNS_USMC_R2", "UNS_USMC_R2", "UNS_SF_RTO", "UNS_USMC_RTO", "UNS_Alice_2", "UNS_SF_RTO", "UNS_Alice_F8", "UNS_TROP_R3", "UNS_TROP_R3", "UNS_Alice_F3", "UNS_USMC_E2", "UNS_Alice_1", "UNS_Alice_F9", "UNS_USMC_R3", "UNS_Alice_3", "UNS_SF_RTO", "UNS_USMC_MED", "UNS_Alice_F6", "UNS_Alice_F9", "UNS_Alice_F6", "UNS_Alice_F3", "UNS_Alice_F6", "UNS_Alice_FR", "UNS_ARMY_RTO", "UNS_Alice_4", "UNS_Alice_F4", "UNS_Alice_2", "UNS_Alice_1", "UNS_SF_RTO", "UNS_USMC_E2", "UNS_Alice_F2", "UNS_Alice_F5", "UNS_Alice_F1", "UNS_Alice_1", "UNS_Alice_F3", "UNS_Alice_F2", "UNS_Alice_F2", "UNS_ARMY_MED", "UNS_USMC_RTO", "UNS_Alice_F2", "UNS_ARMY_RTO", "UNS_TROP_R1", "UNS_TROP_R3", "UNS_Alice_3", "UNS_Alice_F2", "UNS_Alice_1", "UNS_USMC_MED", "UNS_USMC_MED", "UNS_Alice_F8", "UNS_TROP_R1", "UNS_Alice_FR", "UNS_USMC_R3", "UNS_ARMY_RTO", "UNS_ARMY_RTO", "UNS_Alice_3", "UNS_Alice_F3", "UNS_USMC_MED", "UNS_Alice_F2", "UNS_Alice_F5", "UNS_USMC_E1", "UNS_TROP_R1", "UNS_Alice_F5", "UNS_Alice_F1", "UNS_TROP_R2", "UNS_TROP_R1", "UNS_ARMY_MED", "UNS_Alice_4", "UNS_Alice_FR", "UNS_Alice_4", "UNS_Alice_FR", "UNS_SF_RTO", "UNS_TROP_R1", "UNS_Alice_F3", "UNS_Alice_F5", "UNS_Alice_F5", "UNS_Alice_F4", "UNS_Alice_6", "UNS_TROP_R1", "UNS_USMC_E2", "UNS_Alice_F8", "UNS_USMC_R3", "UNS_Alice_3", "UNS_Alice_3", "UNS_USMC_RTO", "UNS_USMC_RTO", "UNS_Alice_2", "UNS_Alice_F4", "UNS_USMC_E2", "UNS_USMC_E2", "UNS_USMC_E2", "UNS_USMC_R3", "UNS_USMC_R1", "UNS_Alice_1", "UNS_USMC_R1", "UNS_Alice_F7", "UNS_Alice_3", "UNS_ARMY_RTO", "UNS_Alice_5", "UNS_Alice_F4", "UNS_Alice_5", "UNS_Alice_F8", "UNS_Alice_F1", "UNS_USMC_RTO", "UNS_SF_RTO", "UNS_Alice_1", "UNS_Alice_3", "UNS_Alice_6", "UNS_Alice_1", "UNS_USMC_R2", "UNS_Alice_6", "UNS_USMC_R3", "UNS_Alice_1", "UNS_Alice_F1", "UNS_Alice_F1", "UNS_TROP_R1", "UNS_TROP_R2", "UNS_Alice_F5", "UNS_Alice_2", "UNS_Alice_F7", "UNS_USMC_R3", "UNS_TROP_R2", "UNS_Alice_5", "UNS_Alice_3", "UNS_Alice_2", "UNS_Alice_F6", "UNS_USMC_E2", "UNS_SF_RTO", "UNS_Alice_3", "UNS_ARMY_RTO", "UNS_Alice_FR", "UNS_USMC_E1", "UNS_TROP_R3", "UNS_Alice_F9", "UNS_USMC_E1", "UNS_Alice_1", "UNS_Alice_FR", "UNS_Alice_F7", "UNS_TROP_R2", "UNS_USMC_MED", "UNS_USMC_R2", "UNS_Alice_4", "UNS_TROP_R2", "UNS_Alice_F6", "UNS_Alice_F8", "UNS_USMC_R1", "UNS_Alice_F3", "UNS_Alice_F8", "UNS_Alice_4", "UNS_Alice_F6", "UNS_USMC_E2", "UNS_TROP_R1", "UNS_USMC_MED", "UNS_ARMY_MED", "UNS_Alice_4", "UNS_SF_RTO", "UNS_ARMY_MED", "UNS_Alice_1", "UNS_Alice_F2", "UNS_Alice_6", "UNS_Alice_F2", "UNS_USMC_R3", "UNS_USMC_R1", "UNS_Alice_5", "UNS_Alice_1", "UNS_Alice_F5", "UNS_Alice_F9", "UNS_Alice_6", "UNS_USMC_E2", "UNS_USMC_R1", "UNS_USMC_RTO", "UNS_ARMY_MED", "UNS_Alice_5", "UNS_Alice_FR", "UNS_Alice_F8", "UNS_USMC_RTO", "UNS_Alice_5", "UNS_USMC_E1", "UNS_USMC_MED", "UNS_Alice_6", "UNS_Alice_F4", "UNS_Alice_1", "UNS_TROP_R2", "UNS_USMC_E1", "UNS_Alice_6", "UNS_TROP_R2", "UNS_Alice_F6", "UNS_Alice_5", "UNS_Alice_F7", "UNS_Alice_F8", "UNS_Alice_F9", "UNS_TROP_R3", "UNS_USMC_R3", "UNS_USMC_E1", "UNS_ARMY_MED", "UNS_TROP_R3", "UNS_Alice_F9", "UNS_TROP_R2", "UNS_Alice_F7", "UNS_TROP_R2", "UNS_Alice_6", "UNS_TROP_R1", "UNS_USMC_MED", "UNS_Alice_F2", "UNS_Alice_F6", "UNS_Alice_F5", "UNS_Alice_4", "UNS_Alice_F1", "UNS_Alice_6", "UNS_Alice_F1", "UNS_TROP_R2", "UNS_Alice_2", "UNS_TROP_R1", "UNS_Alice_1", "UNS_ARMY_RTO", "UNS_USMC_E2", "UNS_USMC_R2", "UNS_Alice_5", "UNS_Alice_3", "UNS_USMC_E1", "UNS_USMC_RTO", "UNS_TROP_R3", "UNS_TROP_R2", "UNS_Alice_F9", "UNS_USMC_E2", "UNS_TROP_R2", "UNS_Alice_F5", "UNS_USMC_MED", "UNS_Alice_2", "UNS_Alice_F2", "UNS_Alice_6", "UNS_Alice_F1", "UNS_Alice_2", "UNS_Alice_F3", "UNS_Alice_F6", "UNS_USMC_R2", "UNS_Alice_1", "UNS_TROP_R1", "UNS_Alice_5", "UNS_USMC_RTO", "UNS_Alice_F1", "UNS_Alice_F7", "UNS_USMC_E2", "UNS_Alice_2", "UNS_SF_RTO", "UNS_Alice_F8", "UNS_Alice_F4", "UNS_Alice_4", "UNS_Alice_F7", "UNS_Alice_F9", "UNS_USMC_E2", "UNS_TROP_R2", "UNS_USMC_E1", "UNS_USMC_E1", "UNS_USMC_R1", "UNS_USMC_R3", "UNS_Alice_F7", "UNS_Alice_F9", "UNS_Alice_FR", "UNS_USMC_R2", "UNS_Alice_3", "UNS_ARMY_RTO", "UNS_Alice_F8", "UNS_TROP_R3", "UNS_Alice_3", "UNS_Alice_F1", "UNS_USMC_R1", "UNS_USMC_R3", "UNS_Alice_F1", "UNS_Alice_F1", "UNS_Alice_F8", "UNS_USMC_R1", "UNS_SF_RTO", "UNS_Alice_F9", "UNS_SF_RTO", "UNS_USMC_R2", "UNS_Alice_F2", "UNS_Alice_2", "UNS_TROP_R2", "UNS_Alice_F7", "UNS_USMC_R1", "UNS_ARMY_MED", "UNS_USMC_RTO", "UNS_USMC_R1", "UNS_ARMY_RTO", "UNS_Alice_F4", "UNS_Alice_F2", "UNS_Alice_F9", "UNS_Alice_F1", "UNS_Alice_F7", "UNS_TROP_R3", "UNS_USMC_E1", "UNS_Alice_F4", "UNS_Alice_F8", "UNS_ARMY_RTO", "UNS_USMC_E1", "UNS_Alice_F4", "UNS_USMC_MED", "UNS_USMC_MED", "UNS_Alice_3", "UNS_ARMY_RTO", "UNS_TROP_R1", "UNS_Alice_F7", "UNS_Alice_F7", "UNS_Alice_F4", "UNS_Alice_3", "UNS_Alice_F5", "UNS_USMC_R3", "UNS_Alice_F3", "UNS_USMC_RTO", "UNS_Alice_F5", "UNS_Alice_F6", "UNS_Alice_F2", "UNS_Alice_4"};

		/*
			Percental Item Spawn Chances of VcBackpacks:

			UNS_NVA_RTO = 20.00%
			UNS_NVA_RPG = 20.00%
			UNS_NVA_MED = 20.00%
			UNS_NVA_R1  = 20.00%
			UNS_NVA_RC  = 20.00%
		*/
		VcBackpacks[] = {"UNS_NVA_RC", "UNS_NVA_R1", "UNS_NVA_RTO", "UNS_NVA_RTO", "UNS_NVA_RPG", "UNS_NVA_MED", "UNS_NVA_RTO", "UNS_NVA_RTO", "UNS_NVA_R1", "UNS_NVA_RTO", "UNS_NVA_RPG", "UNS_NVA_R1", "UNS_NVA_R1", "UNS_NVA_RC", "UNS_NVA_RTO", "UNS_NVA_MED", "UNS_NVA_MED", "UNS_NVA_RC", "UNS_NVA_MED", "UNS_NVA_RPG", "UNS_NVA_R1", "UNS_NVA_RPG", "UNS_NVA_MED", "UNS_NVA_R1", "UNS_NVA_RPG", "UNS_NVA_RPG", "UNS_NVA_R1", "UNS_NVA_RPG", "UNS_NVA_RTO", "UNS_NVA_R1", "UNS_NVA_RPG", "UNS_NVA_RC", "UNS_NVA_RC", "UNS_NVA_RC", "UNS_NVA_RC", "UNS_NVA_R1", "UNS_NVA_MED", "UNS_NVA_RPG", "UNS_NVA_RPG", "UNS_NVA_RPG", "UNS_NVA_MED", "UNS_NVA_RC", "UNS_NVA_RTO", "UNS_NVA_RC", "UNS_NVA_RC", "UNS_NVA_R1", "UNS_NVA_RPG", "UNS_NVA_MED", "UNS_NVA_MED", "UNS_NVA_RTO", "UNS_NVA_RTO", "UNS_NVA_MED", "UNS_NVA_RPG", "UNS_NVA_R1", "UNS_NVA_MED", "UNS_NVA_RTO", "UNS_NVA_R1", "UNS_NVA_RTO", "UNS_NVA_R1", "UNS_NVA_RC", "UNS_NVA_MED", "UNS_NVA_MED", "UNS_NVA_RC", "UNS_NVA_RC", "UNS_NVA_R1", "UNS_NVA_RTO", "UNS_NVA_R1", "UNS_NVA_RPG", "UNS_NVA_MED", "UNS_NVA_RPG", "UNS_NVA_MED", "UNS_NVA_RTO", "UNS_NVA_RC", "UNS_NVA_RTO", "UNS_NVA_RC"};

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
		MilitaryVests[] = {"UNS_M1956_M3", "UNS_M1956_M6", "UNS_M1956_A8", "UNS_M1956_M8", "UNS_M1956_M18", "UNS_M1956_M16", "UNS_JP_Vest", "UNS_M1956_M9", "UNS_M1956_A10", "UNS_JP_Vest", "UNS_M1956_A4", "UNS_M1956_A11", "UNS_M1956_T1", "UNS_M1956_M11", "UNS_M1956_M17", "UNS_M1956_A2", "UNS_M1956_M18", "UNS_M1956_M13", "UNS_FLAK", "UNS_M1956_M5", "UNS_M1956_M13", "UNS_M1956_M10", "UNS_M1956_M13", "UNS_FLAK", "UNS_M1956_T1", "UNS_M1956_A5", "UNS_M1956_A9", "UNS_M1956_M2", "UNS_M1956_M9", "UNS_M1956_M5", "UNS_M1956_A4", "UNS_M1956_M2", "UNS_M1956_S2", "UNS_M1956_S4", "UNS_M1956_M12", "UNS_M1956_A6", "UNS_M1956_S2", "UNS_M1956_P1", "UNS_M1956_M15", "UNS_M1956_T1", "UNS_JP_Vest", "UNS_M1956_M8", "UNS_M1956_A5", "UNS_M1956_M7", "UNS_M1956_S2", "UNS_M1956_A4", "UNS_M1956_M12", "UNS_M1956_M5", "UNS_M1956_M2", "UNS_M1956_M12", "UNS_M1956_M14", "UNS_M1956_M4", "UNS_M1956_A4", "UNS_M1956_A4", "UNS_M1956_A11", "UNS_FLAK", "UNS_M1956_M3", "UNS_M1956_A11", "UNS_M1956_M12", "UNS_M1956_A3", "UNS_M1956_M8", "UNS_M1956_M14", "UNS_M1956_T1", "UNS_M1956_A10", "UNS_M1956_M19", "UNS_M1956_S2", "UNS_M1956_M12", "UNS_M1956_A6", "UNS_M1956_M11", "UNS_M1956_P1", "UNS_M1956_A11", "UNS_M1956_S2", "UNS_M1956_P1", "UNS_M1956_A12", "UNS_M1956_A9", "UNS_M1956_A10", "UNS_M1956_S4", "UNS_M1956_M6", "UNS_M1956_S1", "UNS_FLAK", "UNS_M1956_M15", "UNS_M1956_M13", "UNS_M1956_M10", "UNS_M1956_A6", "UNS_M1956_S3", "UNS_M1956_M14", "UNS_M1956_M16", "UNS_M1956_A2", "UNS_M1956_A5", "UNS_M1956_S1", "UNS_M1956_A2", "UNS_M1956_A3", "UNS_M1956_A9", "UNS_M1956_A3", "UNS_M1956_M6", "UNS_M1956_M4", "UNS_M1956_S1", "UNS_M1956_M1", "UNS_M1956_M11", "UNS_M1956_A5", "UNS_M1956_M17", "UNS_M1956_A2", "UNS_M1956_M3", "UNS_M1956_M3", "UNS_M1956_A8", "UNS_M1956_A12", "UNS_M1956_M7", "UNS_M1956_A2", "UNS_M1956_P1", "UNS_FLAK", "UNS_M1956_M15", "UNS_M1956_M11", "UNS_M1956_A2", "UNS_M1956_M13", "UNS_M1956_A2", "UNS_M1956_M16", "UNS_M1956_M2", "UNS_JP_Vest", "UNS_M1956_S4", "UNS_M1956_A9", "UNS_M1956_A6", "UNS_M1956_A11", "UNS_M1956_M18", "UNS_M1956_M4", "UNS_M1956_M15", "UNS_M1956_T1", "UNS_M1956_M13", "UNS_M1956_M7", "UNS_M1956_A7", "UNS_M1956_S3", "UNS_M1956_M13", "UNS_M1956_A11", "UNS_M1956_M12", "UNS_M1956_A9", "UNS_M1956_M13", "UNS_M1956_M10", "UNS_M1956_M12", "UNS_M1956_M2", "UNS_M1956_T1", "UNS_M1956_M10", "UNS_M1956_S3", "UNS_M1956_A2", "UNS_M1956_A2", "UNS_M1956_A7", "UNS_M1956_M14", "UNS_M1956_M17", "UNS_M1956_S3", "UNS_M1956_M7", "UNS_FLAK", "UNS_M1956_M17", "UNS_M1956_A11", "UNS_M1956_M16", "UNS_M1956_M19", "UNS_M1956_M19", "UNS_JP_Vest", "UNS_M1956_A9", "UNS_M1956_M16", "UNS_M1956_A4", "UNS_M1956_P1", "UNS_JP_Vest", "UNS_M1956_M5", "UNS_M1956_A11", "UNS_M1956_M15", "UNS_M1956_A7", "UNS_M1956_M16", "UNS_M1956_M6", "UNS_M1956_A4", "UNS_M1956_S2", "UNS_M1956_M1", "UNS_M1956_M3", "UNS_M1956_A8", "UNS_M1956_A1", "UNS_M1956_S1", "UNS_M1956_M9", "UNS_M1956_M3", "UNS_M1956_A7", "UNS_M1956_A12", "UNS_M1956_M18", "UNS_M1956_A8", "UNS_M1956_M17", "UNS_M1956_M5", "UNS_M1956_A10", "UNS_M1956_M17", "UNS_M1956_A5", "UNS_M1956_A6", "UNS_M1956_A2", "UNS_M1956_M16", "UNS_M1956_M1", "UNS_M1956_S4", "UNS_M1956_A3", "UNS_M1956_M17", "UNS_M1956_A6", "UNS_M1956_A8", "UNS_M1956_A4", "UNS_M1956_M7", "UNS_M1956_M1", "UNS_M1956_A3", "UNS_M1956_M14", "UNS_M1956_M19", "UNS_M1956_M19", "UNS_M1956_A4", "UNS_M1956_A10", "UNS_M1956_M11", "UNS_M1956_M9", "UNS_M1956_A1", "UNS_M1956_M11", "UNS_M1956_A6", "UNS_M1956_M3", "UNS_M1956_A7", "UNS_M1956_M11", "UNS_M1956_M8", "UNS_M1956_M11", "UNS_M1956_A3", "UNS_M1956_S2", "UNS_M1956_A12", "UNS_M1956_M8", "UNS_M1956_A4", "UNS_M1956_S1", "UNS_M1956_M18", "UNS_M1956_M5", "UNS_M1956_A5", "UNS_M1956_M8", "UNS_M1956_P1", "UNS_M1956_A10", "UNS_M1956_M17", "UNS_M1956_M14", "UNS_M1956_M14", "UNS_M1956_S2", "UNS_M1956_M1", "UNS_M1956_M5", "UNS_M1956_M4", "UNS_M1956_A10", "UNS_M1956_M17", "UNS_M1956_A12", "UNS_M1956_M4", "UNS_M1956_S2", "UNS_M1956_M14", "UNS_M1956_S4", "UNS_M1956_A6", "UNS_M1956_M4", "UNS_M1956_M10", "UNS_M1956_M13", "UNS_M1956_M10", "UNS_M1956_M8", "UNS_M1956_M13", "UNS_M1956_M8", "UNS_M1956_S3", "UNS_M1956_A2", "UNS_M1956_M5", "UNS_M1956_M16", "UNS_M1956_M6", "UNS_M1956_M14", "UNS_M1956_S2", "UNS_FLAK", "UNS_M1956_S3", "UNS_M1956_M12", "UNS_FLAK", "UNS_M1956_M6", "UNS_M1956_M10", "UNS_M1956_M1", "UNS_M1956_M13", "UNS_M1956_A2", "UNS_M1956_A10", "UNS_M1956_M1", "UNS_M1956_M16", "UNS_M1956_A8", "UNS_M1956_M9", "UNS_M1956_M17", "UNS_M1956_A4", "UNS_FLAK", "UNS_M1956_S1", "UNS_M1956_A9", "UNS_M1956_M15", "UNS_M1956_M4", "UNS_M1956_M18", "UNS_M1956_M15", "UNS_M1956_M16", "UNS_M1956_S4", "UNS_M1956_M10", "UNS_M1956_A7", "UNS_M1956_M4", "UNS_M1956_M14", "UNS_M1956_M4", "UNS_M1956_M3", "UNS_M1956_S3", "UNS_M1956_M17", "UNS_M1956_A7", "UNS_M1956_A12", "UNS_M1956_A8", "UNS_M1956_M4", "UNS_M1956_M10", "UNS_M1956_M6", "UNS_M1956_M7", "UNS_M1956_M1", "UNS_M1956_T1", "UNS_M1956_S4", "UNS_M1956_A3", "UNS_M1956_A7", "UNS_M1956_A5", "UNS_M1956_A11", "UNS_M1956_M12", "UNS_M1956_M16", "UNS_M1956_M1", "UNS_M1956_A10", "UNS_M1956_A10", "UNS_M1956_A1", "UNS_M1956_A9", "UNS_M1956_A8", "UNS_M1956_M13", "UNS_M1956_S1", "UNS_M1956_M16", "UNS_M1956_A3", "UNS_M1956_M8", "UNS_M1956_M1", "UNS_M1956_M10", "UNS_M1956_A1", "UNS_M1956_A1", "UNS_M1956_P1", "UNS_M1956_A7", "UNS_M1956_A11", "UNS_M1956_S3", "UNS_M1956_A5", "UNS_M1956_S3", "UNS_M1956_A1", "UNS_M1956_M1", "UNS_M1956_S3", "UNS_M1956_M4", "UNS_M1956_S1", "UNS_M1956_M2", "UNS_M1956_M19", "UNS_M1956_S1", "UNS_M1956_M18", "UNS_M1956_M9", "UNS_M1956_M1", "UNS_M1956_A4", "UNS_M1956_M13", "UNS_M1956_S3", "UNS_M1956_A6", "UNS_M1956_M15", "UNS_M1956_M15", "UNS_M1956_M5", "UNS_M1956_M11", "UNS_M1956_M11", "UNS_M1956_M19", "UNS_M1956_A1", "UNS_M1956_M8", "UNS_JP_Vest", "UNS_M1956_M18", "UNS_M1956_A12", "UNS_M1956_M7", "UNS_M1956_T1", "UNS_M1956_A12", "UNS_FLAK", "UNS_M1956_M15", "UNS_M1956_M18", "UNS_M1956_A1", "UNS_M1956_A1", "UNS_M1956_S1", "UNS_M1956_S3", "UNS_M1956_M17", "UNS_M1956_M2", "UNS_M1956_A8", "UNS_M1956_S1", "UNS_M1956_P1", "UNS_M1956_A7", "UNS_M1956_A3", "UNS_M1956_S4", "UNS_M1956_A7", "UNS_M1956_A9", "UNS_M1956_A7", "UNS_M1956_T1", "UNS_M1956_A6", "UNS_M1956_M4", "UNS_M1956_S4", "UNS_M1956_M2", "UNS_M1956_M6", "UNS_M1956_M17", "UNS_M1956_M10", "UNS_M1956_S3", "UNS_M1956_M12", "UNS_M1956_M7", "UNS_M1956_M18", "UNS_M1956_M11", "UNS_M1956_A4", "UNS_M1956_M19", "UNS_M1956_M4", "UNS_M1956_M5", "UNS_M1956_M6", "UNS_M1956_T1", "UNS_M1956_M15", "UNS_FLAK", "UNS_M1956_M11", "UNS_M1956_M6", "UNS_M1956_M7", "UNS_M1956_S2", "UNS_M1956_M14", "UNS_M1956_M6", "UNS_M1956_M6", "UNS_M1956_M13", "UNS_M1956_M8", "UNS_M1956_M7", "UNS_M1956_M9", "UNS_M1956_M15", "UNS_FLAK", "UNS_M1956_A4", "UNS_M1956_A9", "UNS_M1956_A8", "UNS_M1956_M19", "UNS_M1956_M7", "UNS_M1956_M1", "UNS_FLAK", "UNS_M1956_A3", "UNS_M1956_M12", "UNS_M1956_M11", "UNS_M1956_M2", "UNS_M1956_M6", "UNS_M1956_S4", "UNS_M1956_S4", "UNS_M1956_M10", "UNS_M1956_M2", "UNS_M1956_S2", "UNS_M1956_M19", "UNS_M1956_A6", "UNS_M1956_M9", "UNS_M1956_A10", "UNS_M1956_A8", "UNS_M1956_M9", "UNS_M1956_S2", "UNS_M1956_A6", "UNS_M1956_A11", "UNS_M1956_A10", "UNS_M1956_M3", "UNS_M1956_S2", "UNS_JP_Vest", "UNS_M1956_M9", "UNS_M1956_S1", "UNS_M1956_A8", "UNS_M1956_S4", "UNS_M1956_M2", "UNS_M1956_A3", "UNS_M1956_A8", "UNS_M1956_M12", "UNS_M1956_M12", "UNS_M1956_S3", "UNS_M1956_M15", "UNS_M1956_A12", "UNS_M1956_A3", "UNS_M1956_M5", "UNS_M1956_M19", "UNS_M1956_A8", "UNS_M1956_P1", "UNS_M1956_A5", "UNS_M1956_A10", "UNS_M1956_A6", "UNS_M1956_M19", "UNS_M1956_M5", "UNS_M1956_A10", "UNS_M1956_M6", "UNS_M1956_A11", "UNS_M1956_M11", "UNS_M1956_M6", "UNS_M1956_M10", "UNS_M1956_M8", "UNS_M1956_M8", "UNS_M1956_T1", "UNS_M1956_M9", "UNS_M1956_M8", "UNS_M1956_M1", "UNS_M1956_M4", "UNS_M1956_M7", "UNS_M1956_M19", "UNS_M1956_A1", "UNS_M1956_M16", "UNS_M1956_A8", "UNS_M1956_M14", "UNS_M1956_P1", "UNS_M1956_M10", "UNS_M1956_M9", "UNS_M1956_M3", "UNS_M1956_M18", "UNS_M1956_A5", "UNS_M1956_M17", "UNS_JP_Vest", "UNS_M1956_T1", "UNS_M1956_M18", "UNS_M1956_M3", "UNS_M1956_A10", "UNS_M1956_M19", "UNS_M1956_M3", "UNS_M1956_A11", "UNS_M1956_A4", "UNS_M1956_M2", "UNS_M1956_M3", "UNS_M1956_A3", "UNS_M1956_M4", "UNS_M1956_A7", "UNS_JP_Vest", "UNS_M1956_M9", "UNS_M1956_A5", "UNS_M1956_M19", "UNS_M1956_S2", "UNS_M1956_M2", "UNS_M1956_A5", "UNS_M1956_T1", "UNS_M1956_M1", "UNS_M1956_A7", "UNS_M1956_M14", "UNS_M1956_S3", "UNS_M1956_A2", "UNS_M1956_S1", "UNS_M1956_A1", "UNS_M1956_S1", "UNS_M1956_S4", "UNS_JP_Vest", "UNS_M1956_P1", "UNS_M1956_A7", "UNS_M1956_A1", "UNS_M1956_M12", "UNS_M1956_M2", "UNS_M1956_A9", "UNS_M1956_T1", "UNS_M1956_A3", "UNS_FLAK", "UNS_M1956_M15", "UNS_M1956_M13", "UNS_M1956_M7", "UNS_M1956_A12", "UNS_M1956_A12", "UNS_M1956_A5", "UNS_M1956_T1", "UNS_M1956_M3", "UNS_M1956_M18", "UNS_M1956_A12", "UNS_M1956_M14", "UNS_M1956_M18", "UNS_M1956_A9", "UNS_M1956_M16", "UNS_M1956_A2", "UNS_M1956_M17", "UNS_M1956_M12", "UNS_M1956_M18", "UNS_M1956_M3", "UNS_M1956_P1", "UNS_M1956_M7", "UNS_M1956_A9", "UNS_JP_Vest", "UNS_M1956_A2", "UNS_JP_Vest", "UNS_M1956_M8", "UNS_M1956_M15", "UNS_M1956_A11", "UNS_M1956_M5", "UNS_M1956_S4", "UNS_M1956_M9", "UNS_M1956_A1", "UNS_M1956_A11", "UNS_M1956_M16", "UNS_M1956_A1", "UNS_M1956_A6", "UNS_M1956_A12", "UNS_M1956_P1", "UNS_M1956_M14", "UNS_M1956_A12", "UNS_M1956_A5", "UNS_M1956_P1", "UNS_M1956_M2", "UNS_M1956_M10", "UNS_M1956_A12", "UNS_M1956_S4", "UNS_M1956_M11", "UNS_M1956_A1", "UNS_M1956_M5", "UNS_M1956_A9", "UNS_M1956_A3", "UNS_JP_Vest", "UNS_M1956_A5", "UNS_M1956_M7", "UNS_M1956_S1", "UNS_JP_Vest", "UNS_M1956_P1", "UNS_FLAK", "UNS_M1956_M5", "UNS_M1956_A6", "UNS_M1956_M9", "UNS_M1956_A9"};

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
		VcVests[] = {"UNS_NVA_A1", "UNS_NVA_A2", "UNS_VC_MG", "UNS_VC_S1", "UNS_VC_A2", "UNS_VC_A1", "UNS_VC_S1", "UNS_VC_SP", "UNS_NVA_S2", "UNS_VC_MG", "UNS_NVA_GR", "UNS_VC_A2", "UNS_NVA_SP", "UNS_VC_S1", "UNS_VC_A3", "UNS_VC_MG", "UNS_VC_B1", "UNS_VC_S1", "UNS_NVA_B1", "UNS_NVA_A3", "UNS_NVA_A2", "UNS_NVA_SP", "UNS_NVA_GR", "UNS_NVA_MG", "UNS_VC_A1", "UNS_VC_A1", "UNS_NVA_A1", "UNS_VC_SP", "UNS_NVA_S1", "UNS_NVA_A2", "UNS_NVA_B1", "UNS_NVA_A3", "UNS_VC_A3", "UNS_VC_MG", "UNS_NVA_A2", "UNS_NVA_MG", "UNS_NVA_GR", "UNS_NVA_A2", "UNS_VC_A1", "UNS_VC_SP", "UNS_NVA_A3", "UNS_NVA_B1", "UNS_VC_S2", "UNS_VC_A2", "UNS_VC_A3", "UNS_VC_A3", "UNS_NVA_SP", "UNS_NVA_S1", "UNS_VC_S2", "UNS_VC_MG", "UNS_VC_A3", "UNS_VC_SP", "UNS_VC_SP", "UNS_VC_MG", "UNS_VC_S2", "UNS_VC_B1", "UNS_NVA_A2", "UNS_NVA_S1", "UNS_VC_S1", "UNS_VC_B1", "UNS_NVA_SP", "UNS_NVA_A3", "UNS_VC_S2", "UNS_NVA_S2", "UNS_NVA_A3", "UNS_VC_S2", "UNS_VC_S2", "UNS_VC_A1", "UNS_NVA_S1", "UNS_VC_B1", "UNS_NVA_A1", "UNS_VC_B1", "UNS_NVA_A2", "UNS_NVA_B1", "UNS_NVA_MG", "UNS_VC_SP", "UNS_NVA_B1", "UNS_NVA_GR", "UNS_NVA_A3", "UNS_NVA_MG", "UNS_VC_A2", "UNS_VC_S2", "UNS_VC_S2", "UNS_VC_SP", "UNS_NVA_S1", "UNS_VC_A3", "UNS_NVA_S2", "UNS_NVA_A1", "UNS_NVA_A3", "UNS_NVA_S2", "UNS_VC_SP", "UNS_NVA_MG", "UNS_NVA_B1", "UNS_NVA_B1", "UNS_VC_A2", "UNS_NVA_A1", "UNS_VC_S1", "UNS_VC_B1", "UNS_VC_A3", "UNS_VC_A2", "UNS_VC_A1", "UNS_NVA_A2", "UNS_VC_S1", "UNS_NVA_SP", "UNS_VC_MG", "UNS_NVA_S1", "UNS_NVA_MG", "UNS_NVA_S2", "UNS_VC_A3", "UNS_NVA_B1", "UNS_NVA_SP", "UNS_VC_A2", "UNS_NVA_MG", "UNS_NVA_GR", "UNS_NVA_A2", "UNS_VC_A1", "UNS_VC_A3", "UNS_NVA_GR", "UNS_VC_A2", "UNS_NVA_S1", "UNS_NVA_SP", "UNS_NVA_A1", "UNS_NVA_S2", "UNS_NVA_GR", "UNS_VC_MG", "UNS_NVA_A3", "UNS_NVA_S1", "UNS_NVA_S1", "UNS_NVA_MG", "UNS_VC_B1", "UNS_VC_A1", "UNS_NVA_GR", "UNS_VC_B1", "UNS_VC_MG", "UNS_NVA_S1", "UNS_VC_A3", "UNS_NVA_A2", "UNS_NVA_S2", "UNS_VC_S1", "UNS_NVA_GR", "UNS_NVA_MG", "UNS_NVA_A1", "UNS_VC_S1", "UNS_NVA_A2", "UNS_VC_SP", "UNS_VC_A1", "UNS_NVA_A3", "UNS_NVA_GR", "UNS_NVA_A1", "UNS_NVA_MG", "UNS_VC_SP", "UNS_NVA_S1", "UNS_NVA_B1", "UNS_VC_A3", "UNS_NVA_A1", "UNS_VC_MG", "UNS_VC_A2", "UNS_VC_MG", "UNS_VC_SP", "UNS_NVA_S1", "UNS_VC_A2", "UNS_NVA_SP", "UNS_NVA_A1", "UNS_VC_B1", "UNS_NVA_B1", "UNS_NVA_GR", "UNS_NVA_GR", "UNS_VC_S1", "UNS_NVA_A3", "UNS_VC_A1", "UNS_VC_A2", "UNS_VC_A1", "UNS_NVA_A2", "UNS_NVA_S2", "UNS_NVA_B1", "UNS_VC_A2", "UNS_VC_SP", "UNS_VC_A3", "UNS_VC_S2", "UNS_VC_S1", "UNS_VC_MG", "UNS_NVA_A2", "UNS_NVA_MG", "UNS_NVA_SP", "UNS_VC_B1", "UNS_VC_S1", "UNS_VC_A1", "UNS_VC_A2", "UNS_NVA_A3", "UNS_VC_S2", "UNS_NVA_SP", "UNS_NVA_SP", "UNS_VC_A3", "UNS_VC_A3", "UNS_NVA_S1", "UNS_NVA_MG", "UNS_NVA_S2", "UNS_NVA_S1", "UNS_VC_S1", "UNS_VC_A2", "UNS_VC_S2", "UNS_NVA_A1", "UNS_NVA_A1", "UNS_NVA_B1", "UNS_NVA_B1", "UNS_VC_S2", "UNS_NVA_SP", "UNS_VC_A1", "UNS_VC_MG", "UNS_NVA_A2", "UNS_NVA_SP", "UNS_VC_SP", "UNS_VC_B1", "UNS_NVA_A3", "UNS_VC_MG", "UNS_VC_A1", "UNS_VC_SP", "UNS_NVA_A3", "UNS_NVA_A1", "UNS_VC_B1", "UNS_VC_B1", "UNS_NVA_A2", "UNS_NVA_GR", "UNS_NVA_SP", "UNS_NVA_MG", "UNS_NVA_A3", "UNS_VC_S2", "UNS_NVA_S1", "UNS_VC_S1", "UNS_NVA_SP", "UNS_NVA_S2", "UNS_VC_SP", "UNS_NVA_A3", "UNS_NVA_MG", "UNS_VC_A1", "UNS_NVA_GR", "UNS_NVA_S2", "UNS_VC_B1", "UNS_VC_S2", "UNS_VC_S1", "UNS_NVA_S2", "UNS_NVA_A1", "UNS_NVA_S2", "UNS_NVA_S2", "UNS_NVA_MG", "UNS_VC_S2", "UNS_NVA_S2", "UNS_NVA_A1", "UNS_NVA_B1", "UNS_VC_A3", "UNS_VC_B1", "UNS_NVA_GR", "UNS_VC_MG", "UNS_NVA_B1", "UNS_VC_A2"};

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
		MilitaryHeadgear[] = {"UNS_M1_5", "UNS_M1_1A", "UNS_M1_3A", "UNS_Beret_5", "UNS_Boonie_DK", "UNS_Boonie_ERDL", "UNS_Bandana_OD2", "UNS_HP_Helmet", "UNS_M1_5A", "UNS_Boonie_OD2", "UNS_M1_7A", "UNS_HP_Helmet", "UNS_M1_1A", "UNS_Beret_B", "UNS_JP_Helmet2", "UNS_M1_PBR", "UNS_Boonie_TIG1", "UNS_Beret_5LTCOL", "UNS_M1_8A", "UNS_M1_13", "UNS_TC_1", "UNS_M1_4", "UNS_M1_12", "UNS_M1_1V2", "UNS_M1_11", "UNS_M1_9A", "UNS_TC_1", "UNS_M1_13", "UNS_M1_6A", "UNS_M1_9", "UNS_M1_4", "UNS_M1_1V7", "UNS_M1_1A", "UNS_M1_16", "UNS_M1_16", "UNS_M1_6", "UNS_Boonie_TIGF3", "UNS_JP_Helmet2", "UNS_Boonie_TIGF", "UNS_Beret_5COL", "UNS_M1_SP", "UNS_M1_12", "UNS_Headband_OD2", "UNS_Headband_OD", "UNS_M1_7A", "UNS_M1_8", "UNS_M1_17", "UNS_M1_3A", "UNS_M1_1V8", "UNS_Beret_AVAB", "UNS_Beret_AVM", "UNS_M1_2A", "UNS_Boonie_TIGF2", "UNS_M1_16", "UNS_M1_3A", "UNS_M1_1V8", "UNS_Headband_BK", "UNS_M1_5A", "UNS_USMC_Cover", "UNS_M1_10", "UNS_Beret_AVM", "UNS_Beret_52LT", "UNS_Boonie_TIG1", "UNS_M1_1V4", "UNS_Boonie_TIGF3", "UNS_M1_7A", "UNS_Beret_51LT", "UNS_M1_AFT", "UNS_Boonie_ERDL", "UNS_M1_1V8", "UNS_M1_5", "UNS_M1_12", "UNS_Boonie_TIG2", "UNS_M1_MP", "UNS_M1_2", "UNS_M1_1V5", "UNS_M1_1V8", "UNS_Headband_OD2", "UNS_M1_8", "UNS_JP_Helmet", "UNS_Beret_5", "UNS_Boonie_ODP", "UNS_TC_1", "UNS_M1_14", "UNS_M1_4", "UNS_Boonie_ODF", "UNS_Beret_AVR", "UNS_M1_5A", "UNS_M1_MP", "UNS_M1_12", "UNS_M1_13", "UNS_Beret_5CPT", "UNS_M1_7", "UNS_M1_17", "UNS_M1_3A", "UNS_M1_2A", "UNS_M1_AFT", "UNS_Boonie_ODP", "UNS_Beret_52LT", "UNS_M1_7", "UNS_Boonie_TIG1", "UNS_M1_1", "UNS_M1_14", "UNS_Boonie_TIGF3", "UNS_Headband_BK", "UNS_Beret_B", "UNS_M1_14", "UNS_Beret_5MAJ", "UNS_M1_8", "UNS_Boonie_TIG", "UNS_USMC_Cover", "UNS_M1_1V4", "UNS_Boonie_DK", "UNS_M1_11", "UNS_JP_Helmet2", "UNS_Headband_BK", "UNS_Beret_AVM", "UNS_M1_9", "UNS_M1_1V3", "UNS_M1_3A", "UNS_Beret_52LT", "UNS_M1_14", "UNS_Beret_51LT", "UNS_Headband_OD", "UNS_Boonie_TIG2", "UNS_M1_4", "UNS_M1_1V1N", "UNS_M1_1A", "UNS_M1_2A", "UNS_Beret_AVAB", "UNS_M1_10", "UNS_M1_1V7", "UNS_M1_7A", "UNS_M1_12", "UNS_M1_6", "UNS_M1_SP", "UNS_Beret_5LTCOL", "UNS_M1_1V8", "UNS_Boonie_ERDL", "UNS_Beret_5COL", "UNS_Bandana_OD2", "UNS_M1_6A", "UNS_M1_1V4", "UNS_Headband_ED", "UNS_Beret_51LT", "UNS_M1_1V7", "UNS_USMC_Cover", "UNS_HP_Helmet", "UNS_M1_7", "UNS_Bandana_OD", "UNS_M1_7A", "UNS_M1_5", "UNS_Boonie_OD", "UNS_M1_15", "UNS_M1_PBR", "UNS_Boonie_TIG", "UNS_Beret_AVM", "UNS_Boonie_OD2", "UNS_Headband_OD", "UNS_M1_9", "UNS_Boonie_TIGF3", "UNS_M1_1V3", "UNS_Boonie_TIG2", "UNS_Bandana_OD", "UNS_M1_13", "UNS_USMC_Cover", "UNS_M1_17", "UNS_Beret_5COL", "UNS_M1_AFT", "UNS_M1_17", "UNS_M1_11", "UNS_M1_8A", "UNS_Headband_OD2", "UNS_M1_7A", "UNS_M1_2", "UNS_M1_7", "UNS_JP_Helmet2", "UNS_Boonie_ODP", "UNS_M1_4A", "UNS_M1_1V6", "UNS_Boonie_DKF", "UNS_Boonie_DKF", "UNS_Beret_MRF", "UNS_M1_SP", "UNS_M1_6A", "UNS_M1_1V6", "UNS_Beret_5MAJ", "UNS_M1_10", "UNS_M1_14", "UNS_M1_9", "UNS_Boonie_TIG2", "UNS_Boonie_TIGF", "UNS_M1_SP", "UNS_Beret_52LT", "UNS_M1_1V6", "UNS_Headband_BK", "UNS_Bandana_OD", "UNS_Boonie_DKF", "UNS_TC_2", "UNS_M1_5", "UNS_Boonie_ODP", "UNS_Boonie_DK", "UNS_Boonie_TIG2", "UNS_Beret_AVAB", "UNS_M1_1V1", "UNS_Beret_5MAJ", "UNS_M1_2", "UNS_Headband_ED", "UNS_M1_SP", "UNS_M1_SP", "UNS_M1_PBR", "UNS_JP_Helmet", "UNS_M1_1V1N", "UNS_JP_Helmet2", "UNS_M1_8", "UNS_Boonie_TIGF2", "UNS_Beret_5", "UNS_Bandana_OD2", "UNS_Bandana_OD2", "UNS_Boonie_TIG1", "UNS_Boonie_TIGF4", "UNS_M1_1V3", "UNS_JP_Helmet2", "UNS_M1_17", "UNS_Beret_51LT", "UNS_M1_10", "UNS_Boonie_TIGF3", "UNS_M1_6A", "UNS_M1_6A", "UNS_M1_1RM", "UNS_M1_PBR", "UNS_JP_Helmet", "UNS_Boonie_TIG1", "UNS_Beret_5LTCOL", "UNS_M1_MP", "UNS_M1_1V5", "UNS_Boonie_TIGF4", "UNS_M1_1V6", "UNS_M1_8A", "UNS_M1_1V8", "UNS_Beret_52LT", "UNS_M1_1A", "UNS_M1_17", "UNS_M1_6A", "UNS_Boonie_DKF", "UNS_M1_10", "UNS_Beret_5", "UNS_Boonie_TIG2", "UNS_M1_17", "UNS_Beret_5CPT", "UNS_M1_10", "UNS_M1_4", "UNS_Beret_AVM", "UNS_M1_4", "UNS_Boonie_TIGF4", "UNS_M1_1", "UNS_Boonie_TIG2", "UNS_M1_8A", "UNS_Boonie_DK", "UNS_Beret_AVR", "UNS_M1_1V4", "UNS_M1_1V1", "UNS_M1_1V2", "UNS_M1_8", "UNS_M1_5", "UNS_Boonie_TIG", "UNS_Boonie_OD", "UNS_M1_2A", "UNS_Boonie_OD2", "UNS_Headband_BK", "UNS_M1_1V7", "UNS_JP_Helmet", "UNS_M1_12", "UNS_Headband_BK", "UNS_M1_8", "UNS_M1_PBR", "UNS_M1_SP", "UNS_M1_5", "UNS_Boonie_TIGF2", "UNS_M1_5A", "UNS_Beret_52LT", "UNS_Boonie_TIGF2", "UNS_M1_9", "UNS_M1_1A", "UNS_Boonie_DK", "UNS_Beret_AVR", "UNS_JP_Helmet", "UNS_Beret_MRF", "UNS_M1_4A", "UNS_Beret_5MAJ", "UNS_Beret_B", "UNS_M1_1V1", "UNS_Boonie_OD2", "UNS_Headband_ED", "UNS_M1_12", "UNS_M1_11", "UNS_M1_3A", "UNS_USMC_Cover", "UNS_M1_12", "UNS_M1_9A", "UNS_Boonie_ODF", "UNS_M1_14", "UNS_M1_10", "UNS_JP_Helmet", "UNS_Boonie_TIG1", "UNS_M1_11", "UNS_Beret_AVAB", "UNS_M1_8A", "UNS_Boonie_DK", "UNS_M1_8", "UNS_Boonie_OD", "UNS_Boonie_TIGF4", "UNS_Boonie_TIG", "UNS_M1_13", "UNS_Boonie_TIGF2", "UNS_M1_16", "UNS_HP_Helmet", "UNS_M1_1", "UNS_M1_AFT", "UNS_JP_Helmet", "UNS_Boonie_TIGF4", "UNS_M1_9", "UNS_M1_5", "UNS_Headband_ED", "UNS_Beret_AVM", "UNS_Boonie_TIG2", "UNS_Boonie_ODF", "UNS_Boonie_TIG1", "UNS_M1_PBR", "UNS_Headband_OD2", "UNS_Boonie_ODF", "UNS_M1_11", "UNS_M1_3", "UNS_M1_5", "UNS_M1_3", "UNS_M1_6", "UNS_M1_5", "UNS_M1_2", "UNS_M1_MP", "UNS_M1_2", "UNS_M1_10", "UNS_Boonie_DK", "UNS_Beret_5MAJ", "UNS_M1_1V2", "UNS_M1_16", "UNS_Headband_BK", "UNS_M1_4", "UNS_M1_2A", "UNS_TC_2", "UNS_M1_MP", "UNS_M1_1V6", "UNS_M1_1V1N", "UNS_M1_15", "UNS_M1_1V5", "UNS_M1_1V1", "UNS_M1_PBR", "UNS_Beret_AVAB", "UNS_TC_2", "UNS_M1_10", "UNS_Headband_OD", "UNS_M1_9", "UNS_Boonie_OD2", "UNS_M1_6", "UNS_Boonie_TIGF2", "UNS_M1_13", "UNS_Beret_AVM", "UNS_Headband_OD", "UNS_M1_3A", "UNS_HP_Helmet", "UNS_M1_MP", "UNS_Beret_5MAJ", "UNS_M1_5A", "UNS_M1_4", "UNS_TC_2", "UNS_Beret_5MAJ", "UNS_Boonie_TIG", "UNS_TC_1", "UNS_Beret_5COL", "UNS_Beret_5MAJ", "UNS_Beret_51LT", "UNS_Boonie_OD", "UNS_M1_1V8", "UNS_Boonie_ERDL", "UNS_Beret_5LTCOL", "UNS_M1_2", "UNS_M1_9", "UNS_M1_8", "UNS_M1_8A", "UNS_M1_8", "UNS_M1_7", "UNS_M1_MP", "UNS_M1_9A", "UNS_Beret_MRF", "UNS_M1_2A", "UNS_Boonie_DK", "UNS_M1_1V2", "UNS_M1_1", "UNS_Boonie_ODF", "UNS_M1_9A", "UNS_M1_7A", "UNS_M1_SP", "UNS_Boonie_ERDL", "UNS_Boonie_DKF", "UNS_M1_16", "UNS_Beret_5", "UNS_USMC_Cover", "UNS_Boonie_TIG", "UNS_Boonie_ODF", "UNS_JP_Helmet2", "UNS_Bandana_OD", "UNS_M1_15", "UNS_M1_6", "UNS_Boonie_TIGF4", "UNS_M1_1V8", "UNS_M1_15", "UNS_M1_7A", "UNS_M1_AFT", "UNS_Boonie_TIGF", "UNS_M1_4A", "UNS_Beret_5COL", "UNS_USMC_Cover", "UNS_M1_3A", "UNS_M1_4", "UNS_Beret_52LT", "UNS_M1_1V7", "UNS_M1_1V2", "UNS_M1_1V5", "UNS_Beret_B", "UNS_M1_AFT", "UNS_M1_1V5", "UNS_M1_SP", "UNS_Beret_52LT", "UNS_Headband_ED", "UNS_Bandana_OD", "UNS_M1_5A", "UNS_Boonie_DKF", "UNS_Boonie_TIG", "UNS_M1_15", "UNS_M1_MP", "UNS_M1_3", "UNS_Beret_5LTCOL", "UNS_Boonie_TIGF4", "UNS_M1_11", "UNS_M1_1", "UNS_M1_1V7", "UNS_Beret_5COL", "UNS_M1_1V2", "UNS_M1_9A", "UNS_Beret_5", "UNS_TC_2", "UNS_M1_1V7", "UNS_M1_PBR", "UNS_M1_9A", "UNS_Boonie_OD", "UNS_M1_AFT", "UNS_Boonie_TIGF", "UNS_M1_1A", "UNS_M1_5A", "UNS_M1_1V8", "UNS_M1_9A", "UNS_M1_6A", "UNS_M1_2A", "UNS_TC_2", "UNS_Beret_5COL", "UNS_M1_1V5", "UNS_Beret_5CPT", "UNS_M1_12", "UNS_Headband_ED", "UNS_M1_13", "UNS_Beret_5CPT", "UNS_M1_7", "UNS_M1_1RM", "UNS_M1_9A", "UNS_Boonie_TIG2", "UNS_M1_2", "UNS_M1_8", "UNS_Boonie_ODF", "UNS_Boonie_TIGF4", "UNS_Headband_BK", "UNS_M1_5A", "UNS_M1_2A", "UNS_M1_11", "UNS_Boonie_DKF", "UNS_Beret_AVAB", "UNS_Beret_AVAB", "UNS_Boonie_TIGF2", "UNS_Beret_AVR", "UNS_M1_17", "UNS_Boonie_TIGF2", "UNS_M1_1V4", "UNS_Beret_MRF", "UNS_Bandana_OD2", "UNS_Beret_52LT", "UNS_TC_2", "UNS_M1_SP", "UNS_Beret_5CPT", "UNS_TC_1", "UNS_M1_9", "UNS_M1_15", "UNS_M1_1", "UNS_M1_3A", "UNS_Beret_5LTCOL", "UNS_Boonie_OD", "UNS_Bandana_OD2", "UNS_Beret_B", "UNS_M1_6A", "UNS_M1_7", "UNS_Beret_AVM", "UNS_Beret_5MAJ", "UNS_TC_2", "UNS_JP_Helmet", "UNS_USMC_Cover", "UNS_M1_8", "UNS_JP_Helmet", "UNS_M1_13", "UNS_M1_5A", "UNS_M1_9A", "UNS_M1_MP", "UNS_M1_17", "UNS_Bandana_OD", "UNS_Beret_5COL", "UNS_Boonie_TIG1", "UNS_USMC_Cover", "UNS_M1_2", "UNS_M1_15", "UNS_M1_6", "UNS_M1_1V3", "UNS_USMC_Cover", "UNS_Bandana_OD2", "UNS_Beret_52LT", "UNS_Beret_5", "UNS_M1_2", "UNS_Boonie_TIGF", "UNS_JP_Helmet", "UNS_Beret_51LT", "UNS_TC_2", "UNS_Boonie_ODF", "UNS_Headband_BK", "UNS_Beret_5LTCOL", "UNS_M1_12", "UNS_M1_1V5", "UNS_Boonie_ODF", "UNS_M1_14", "UNS_Beret_AVR", "UNS_Boonie_ERDL", "UNS_Beret_MRF", "UNS_Beret_AVAB", "UNS_M1_6", "UNS_Boonie_ODF", "UNS_Beret_51LT", "UNS_Beret_AVM", "UNS_Boonie_OD2", "UNS_M1_8A", "UNS_M1_1V6", "UNS_M1_14", "UNS_M1_AFT", "UNS_M1_1V2", "UNS_Beret_5MAJ", "UNS_M1_AFT", "UNS_M1_SP", "UNS_M1_1V3", "UNS_Beret_52LT", "UNS_M1_1V8", "UNS_TC_1", "UNS_M1_7", "UNS_Boonie_DKF", "UNS_M1_6A", "UNS_M1_14", "UNS_Boonie_OD", "UNS_M1_AFT", "UNS_Headband_OD", "UNS_Beret_5CPT", "UNS_Boonie_TIGF4", "UNS_Headband_OD", "UNS_M1_4A", "UNS_M1_6", "UNS_M1_7", "UNS_TC_1", "UNS_M1_AFT", "UNS_M1_MP", "UNS_Headband_ED", "UNS_M1_4A", "UNS_M1_3A", "UNS_M1_12", "UNS_JP_Helmet", "UNS_Boonie_DK", "UNS_Beret_AVR", "UNS_Beret_AVR", "UNS_Headband_ED", "UNS_Boonie_DKF", "UNS_Boonie_TIG1", "UNS_M1_13", "UNS_M1_8A", "UNS_M1_1RM", "UNS_Beret_51LT", "UNS_Beret_5MAJ", "UNS_Boonie_ODP", "UNS_M1_1V6", "UNS_Headband_OD2", "UNS_M1_1V5", "UNS_M1_1", "UNS_JP_Helmet2", "UNS_Beret_5CPT", "UNS_Boonie_OD2", "UNS_M1_7A", "UNS_M1_1V3", "UNS_Beret_5MAJ", "UNS_M1_4", "UNS_Boonie_TIGF3", "UNS_M1_3", "UNS_JP_Helmet2", "UNS_Boonie_DKF", "UNS_M1_1V4", "UNS_M1_3", "UNS_M1_17", "UNS_M1_1RM", "UNS_Beret_AVR", "UNS_Boonie_OD", "UNS_M1_SP", "UNS_M1_17", "UNS_M1_1V1N", "UNS_M1_1", "UNS_Headband_BK", "UNS_Bandana_OD2", "UNS_M1_1V3", "UNS_M1_5", "UNS_M1_7", "UNS_Headband_OD2", "UNS_Boonie_TIGF4", "UNS_Headband_ED", "UNS_M1_PBR", "UNS_M1_SP", "UNS_USMC_Cover", "UNS_M1_9", "UNS_Bandana_OD", "UNS_M1_1V4", "UNS_M1_1V5", "UNS_M1_AFT", "UNS_Beret_5MAJ", "UNS_M1_1V3", "UNS_Boonie_DK", "UNS_M1_1V2", "UNS_M1_5", "UNS_Boonie_DK", "UNS_Boonie_TIG", "UNS_Beret_5LTCOL", "UNS_M1_1V5", "UNS_M1_1V1N", "UNS_M1_10", "UNS_M1_4", "UNS_M1_8", "UNS_Headband_ED", "UNS_Beret_5", "UNS_M1_3", "UNS_Boonie_TIGF3", "UNS_Beret_5", "UNS_Bandana_OD", "UNS_M1_1A", "UNS_M1_7A", "UNS_M1_15", "UNS_M1_6", "UNS_M1_1V1N", "UNS_Beret_AVAB", "UNS_M1_1V1", "UNS_Boonie_OD", "UNS_Beret_5MAJ", "UNS_M1_4", "UNS_Boonie_TIGF3", "UNS_M1_7A", "UNS_Boonie_TIG1", "UNS_Boonie_TIGF", "UNS_M1_PBR", "UNS_M1_14", "UNS_M1_2A", "UNS_Beret_MRF", "UNS_Beret_5COL", "UNS_Boonie_TIGF2", "UNS_Beret_MRF", "UNS_Boonie_DK", "UNS_HP_Helmet", "UNS_M1_3A", "UNS_Boonie_TIGF", "UNS_Boonie_TIGF3", "UNS_M1_5", "UNS_Boonie_TIGF", "UNS_Boonie_TIG2", "UNS_USMC_Cover", "UNS_Boonie_ODF", "UNS_M1_8A", "UNS_Boonie_TIGF", "UNS_M1_12", "UNS_Beret_B", "UNS_M1_1V4", "UNS_Beret_5", "UNS_M1_17", "UNS_M1_3", "UNS_M1_1V1", "UNS_TC_2", "UNS_Bandana_OD", "UNS_M1_1A", "UNS_M1_4A", "UNS_Boonie_TIG2", "UNS_M1_16", "UNS_M1_1V3", "UNS_Beret_5LTCOL", "UNS_M1_16", "UNS_M1_PBR", "UNS_M1_6A", "UNS_M1_1V4", "UNS_Beret_51LT", "UNS_Boonie_TIGF4", "UNS_Boonie_ERDL", "UNS_M1_1V5", "UNS_M1_1V6", "UNS_HP_Helmet", "UNS_Boonie_ODF", "UNS_Boonie_TIG1", "UNS_M1_1V1N", "UNS_M1_9", "UNS_Beret_MRF", "UNS_TC_1", "UNS_Boonie_ERDL", "UNS_M1_5A", "UNS_Bandana_OD", "UNS_Beret_5", "UNS_Boonie_DK", "UNS_M1_6", "UNS_M1_6A", "UNS_Boonie_DKF", "UNS_M1_1V1", "UNS_Boonie_TIG", "UNS_M1_1A", "UNS_M1_1V4", "UNS_Boonie_OD2", "UNS_Boonie_TIG", "UNS_M1_1A", "UNS_M1_17", "UNS_HP_Helmet", "UNS_M1_1RM", "UNS_M1_2", "UNS_M1_1V4", "UNS_M1_1V4", "UNS_M1_1V1", "UNS_Boonie_TIGF4", "UNS_M1_12", "UNS_M1_6", "UNS_JP_Helmet2", "UNS_M1_9A", "UNS_M1_1RM", "UNS_Boonie_TIGF2", "UNS_Headband_OD", "UNS_M1_MP", "UNS_Headband_ED", "UNS_Beret_5CPT", "UNS_Beret_AVR", "UNS_Beret_MRF", "UNS_M1_1V1N", "UNS_M1_1RM", "UNS_Headband_BK", "UNS_M1_1V7", "UNS_Beret_5LTCOL", "UNS_HP_Helmet", "UNS_Boonie_TIG2", "UNS_M1_9A", "UNS_M1_1V5", "UNS_M1_1V1N", "UNS_M1_1", "UNS_Headband_OD2", "UNS_Boonie_TIG2", "UNS_M1_1A", "UNS_M1_16", "UNS_Boonie_ODP", "UNS_M1_1V1", "UNS_M1_3A", "UNS_Beret_5CPT", "UNS_Headband_OD", "UNS_Bandana_OD2", "UNS_M1_1RM", "UNS_Beret_AVAB", "UNS_Boonie_ODP", "UNS_M1_16", "UNS_M1_17", "UNS_HP_Helmet", "UNS_M1_15", "UNS_Beret_5COL", "UNS_M1_1V7", "UNS_M1_1V4", "UNS_Headband_OD", "UNS_M1_11", "UNS_USMC_Cover", "UNS_Bandana_OD", "UNS_M1_9A", "UNS_Beret_52LT", "UNS_Headband_BK", "UNS_M1_3", "UNS_Boonie_ODP", "UNS_M1_1V1", "UNS_M1_9A", "UNS_Beret_5COL", "UNS_M1_1V1", "UNS_Boonie_ODP", "UNS_M1_1V6", "UNS_Boonie_TIGF3", "UNS_M1_1", "UNS_Beret_5CPT", "UNS_Boonie_TIGF2", "UNS_Headband_OD", "UNS_M1_14", "UNS_M1_1V3", "UNS_Beret_51LT", "UNS_JP_Helmet2", "UNS_M1_7A", "UNS_Beret_AVM", "UNS_Bandana_OD", "UNS_Boonie_TIGF3", "UNS_M1_PBR", "UNS_Bandana_OD", "UNS_Beret_B", "UNS_Beret_5LTCOL", "UNS_Headband_OD", "UNS_Boonie_OD", "UNS_M1_1RM", "UNS_HP_Helmet", "UNS_M1_1RM", "UNS_Boonie_TIG", "UNS_M1_7", "UNS_M1_15", "UNS_Beret_5COL", "UNS_Boonie_DKF", "UNS_Boonie_TIGF", "UNS_Boonie_TIG1", "UNS_Beret_5CPT", "UNS_JP_Helmet", "UNS_Boonie_OD2", "UNS_Headband_OD2", "UNS_Beret_52LT", "UNS_Headband_BK", "UNS_Boonie_TIG1", "UNS_M1_PBR", "UNS_Boonie_TIGF2", "UNS_Boonie_TIGF2", "UNS_Boonie_ODP", "UNS_M1_1V4", "UNS_TC_1", "UNS_Beret_AVAB", "UNS_M1_15", "UNS_Boonie_ERDL", "UNS_M1_1V3", "UNS_Boonie_TIG", "UNS_Boonie_ERDL", "UNS_M1_16", "UNS_M1_MP", "UNS_M1_2A", "UNS_M1_8A", "UNS_M1_1V1", "UNS_Boonie_OD2", "UNS_Boonie_OD2", "UNS_M1_1RM", "UNS_M1_13", "UNS_M1_3", "UNS_M1_4A", "UNS_Headband_BK", "UNS_Beret_AVAB", "UNS_Beret_AVR", "UNS_M1_2A", "UNS_M1_14", "UNS_Boonie_TIGF3", "UNS_M1_2A", "UNS_Boonie_TIGF4", "UNS_M1_7A", "UNS_M1_4A", "UNS_M1_1V2", "UNS_Beret_B", "UNS_JP_Helmet2", "UNS_M1_1V8", "UNS_Headband_OD", "UNS_M1_1V6", "UNS_Beret_5CPT", "UNS_M1_6", "UNS_M1_1V8", "UNS_M1_9", "UNS_M1_1RM", "UNS_M1_1A", "UNS_TC_1", "UNS_M1_1V2", "UNS_M1_4", "UNS_M1_7", "UNS_M1_15", "UNS_Beret_MRF", "UNS_Boonie_TIGF", "UNS_M1_1A", "UNS_USMC_Cover", "UNS_Boonie_ERDL", "UNS_Headband_ED", "UNS_Beret_51LT", "UNS_Boonie_ERDL", "UNS_Beret_AVR", "UNS_Boonie_OD", "UNS_M1_16", "UNS_M1_1V5", "UNS_M1_14", "UNS_Boonie_TIG2", "UNS_Beret_AVM", "UNS_TC_2", "UNS_Beret_51LT", "UNS_Beret_AVAB", "UNS_M1_4", "UNS_M1_1V8", "UNS_Boonie_TIG", "UNS_Bandana_OD2", "UNS_M1_2A", "UNS_M1_1V2", "UNS_M1_13", "UNS_Beret_AVM", "UNS_M1_10", "UNS_M1_15", "UNS_JP_Helmet2", "UNS_Boonie_ODF", "UNS_Headband_BK", "UNS_Boonie_TIGF3", "UNS_M1_10", "UNS_HP_Helmet", "UNS_M1_1V8", "UNS_M1_8A", "UNS_Boonie_ERDL", "UNS_TC_2", "UNS_Boonie_ODF", "UNS_M1_1V6", "UNS_Boonie_TIG2", "UNS_Boonie_ODF", "UNS_Boonie_TIGF", "UNS_Headband_OD2", "UNS_TC_1", "UNS_M1_5A", "UNS_Beret_AVAB", "UNS_M1_5A", "UNS_M1_1V3", "UNS_M1_4A", "UNS_M1_1V2", "UNS_HP_Helmet", "UNS_Beret_AVAB", "UNS_Headband_ED", "UNS_M1_13", "UNS_M1_MP", "UNS_M1_8", "UNS_Beret_5", "UNS_Beret_5LTCOL", "UNS_M1_6", "UNS_M1_10", "UNS_M1_1RM", "UNS_M1_7", "UNS_USMC_Cover", "UNS_M1_1V7", "UNS_M1_9", "UNS_M1_4A", "UNS_M1_1RM", "UNS_M1_5", "UNS_Beret_AVM", "UNS_Bandana_OD", "UNS_Beret_B", "UNS_Beret_AVM", "UNS_Beret_MRF", "UNS_Beret_MRF", "UNS_Headband_OD2", "UNS_Boonie_ODP", "UNS_Boonie_ODP", "UNS_Headband_OD", "UNS_M1_3", "UNS_M1_1V7", "UNS_M1_9A", "UNS_M1_1V1N", "UNS_M1_11", "UNS_M1_3", "UNS_M1_5", "UNS_Beret_B", "UNS_Boonie_TIGF4", "UNS_M1_1", "UNS_M1_12", "UNS_M1_1V6", "UNS_M1_1", "UNS_M1_12", "UNS_M1_5A", "UNS_M1_PBR", "UNS_Boonie_TIGF2", "UNS_Boonie_TIGF", "UNS_M1_16", "UNS_Boonie_TIGF3", "UNS_Beret_5LTCOL", "UNS_Boonie_DK", "UNS_Beret_5LTCOL", "UNS_Beret_MRF", "UNS_M1_1V3", "UNS_Boonie_TIGF", "UNS_M1_4", "UNS_M1_5", "UNS_Beret_AVR", "UNS_M1_AFT", "UNS_M1_4A", "UNS_M1_1A", "UNS_TC_1", "UNS_M1_PBR", "UNS_M1_3", "UNS_Boonie_OD2", "UNS_TC_2", "UNS_Headband_OD2", "UNS_Beret_MRF", "UNS_Beret_52LT", "UNS_M1_4A", "UNS_Headband_ED", "UNS_M1_1V2", "UNS_M1_1V5", "UNS_M1_2", "UNS_Beret_5LTCOL", "UNS_M1_11", "UNS_M1_1", "UNS_M1_1V3", "UNS_Boonie_TIG", "UNS_M1_SP", "UNS_Bandana_OD2", "UNS_M1_1V1N", "UNS_HP_Helmet", "UNS_M1_1V1N", "UNS_M1_15", "UNS_Boonie_TIGF4", "UNS_Beret_5CPT", "UNS_M1_5A", "UNS_M1_8", "UNS_TC_2", "UNS_Boonie_OD", "UNS_M1_1V1", "UNS_Boonie_TIG", "UNS_M1_AFT", "UNS_M1_7A", "UNS_M1_2", "UNS_M1_4A", "UNS_M1_7A", "UNS_M1_8A", "UNS_Beret_52LT", "UNS_Beret_5MAJ", "UNS_M1_11", "UNS_Headband_OD2", "UNS_Beret_5", "UNS_Beret_MRF", "UNS_M1_1V6", "UNS_Bandana_OD2", "UNS_Beret_5CPT", "UNS_M1_8A", "UNS_M1_1V5", "UNS_M1_10", "UNS_Beret_51LT", "UNS_Beret_5", "UNS_Beret_B", "UNS_Boonie_ODP", "UNS_Beret_B", "UNS_Boonie_TIG1", "UNS_Boonie_ERDL", "UNS_Boonie_TIGF2", "UNS_M1_3", "UNS_M1_7", "UNS_M1_11", "UNS_M1_9", "UNS_M1_15", "UNS_M1_16", "UNS_M1_1V2", "UNS_M1_1V2", "UNS_Boonie_ERDL", "UNS_M1_1V3", "UNS_M1_16", "UNS_JP_Helmet2", "UNS_M1_6A", "UNS_TC_1", "UNS_Headband_OD2", "UNS_M1_1V1N", "UNS_JP_Helmet", "UNS_M1_1V7", "UNS_M1_1RM", "UNS_Boonie_OD", "UNS_M1_1V1", "UNS_Beret_B", "UNS_M1_1", "UNS_Beret_5COL", "UNS_Boonie_DKF", "UNS_JP_Helmet2", "UNS_M1_1V1N", "UNS_M1_3", "UNS_Beret_5", "UNS_Beret_AVR", "UNS_Boonie_DKF", "UNS_Boonie_DKF", "UNS_Beret_5CPT", "UNS_M1_1V7", "UNS_Headband_OD2", "UNS_Boonie_OD2", "UNS_TC_1", "UNS_Bandana_OD2", "UNS_M1_6A", "UNS_JP_Helmet", "UNS_Boonie_OD2", "UNS_M1_SP", "UNS_M1_9A", "UNS_M1_1V1N", "UNS_M1_14", "UNS_Boonie_OD", "UNS_Beret_5COL", "UNS_M1_1V7", "UNS_M1_AFT", "UNS_Beret_51LT", "UNS_M1_4A", "UNS_Bandana_OD", "UNS_M1_17", "UNS_M1_6A", "UNS_Beret_AVR", "UNS_Beret_AVR", "UNS_HP_Helmet", "UNS_M1_13", "UNS_Beret_B", "UNS_Beret_B", "UNS_M1_14", "UNS_Beret_AVM", "UNS_M1_9", "UNS_M1_MP", "UNS_M1_2", "UNS_Beret_5COL", "UNS_M1_1V4", "UNS_M1_13", "UNS_M1_1V7", "UNS_JP_Helmet", "UNS_M1_1V8", "UNS_Boonie_TIGF", "UNS_Boonie_ODP", "UNS_M1_3A", "UNS_M1_2", "UNS_Headband_OD", "UNS_Boonie_TIG1", "UNS_M1_1", "UNS_M1_3", "UNS_Bandana_OD2", "UNS_M1_2A", "UNS_M1_8A", "UNS_M1_1V6", "UNS_M1_6", "UNS_TC_1", "UNS_Beret_51LT", "UNS_M1_4A", "UNS_TC_2", "UNS_M1_2A", "UNS_Boonie_ODP", "UNS_Boonie_OD", "UNS_M1_1V6", "UNS_M1_11", "UNS_M1_MP", "UNS_M1_3A", "UNS_Headband_ED", "UNS_M1_1V1", "UNS_M1_11", "UNS_M1_13", "UNS_Boonie_OD2", "UNS_M1_7", "UNS_M1_10", "UNS_Boonie_DK", "UNS_M1_8", "UNS_M1_2", "UNS_M1_8A", "UNS_M1_6A", "UNS_Headband_OD2", "UNS_Bandana_OD2", "UNS_M1_6", "UNS_M1_3A", "UNS_Boonie_TIGF3", "UNS_M1_5A"};

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
		VcHeadgear[] = {"UNS_NVA_HGG", "UNS_PAVN_HN", "UNS_PAVN_HG", "UNS_NVA_HK", "UNS_PAVN_HN", "UNS_PAVN_HC", "UNS_NVA_HK", "UNS_Conehat_VC", "UNS_PAVN_HC", "UNS_NVA_HG", "UNS_PAVN_HG", "UNS_NVA_HK", "UNS_NVA_HG", "UNS_PAVN_HN", "UNS_NVA_HGG", "UNS_NVA_PL", "UNS_NVA_HG", "UNS_NVA_CH", "UNS_NVA_HGG", "UNS_Conehat_VC", "UNS_PAVN_HG", "UNS_NVA_CH", "UNS_PAVN_HN", "UNS_PAVN_HN", "UNS_NVA_HGG", "UNS_NVA_PL", "UNS_PAVN_HG", "UNS_NVA_HKG", "UNS_NVA_CH", "UNS_NVA_CH", "UNS_Boonie_VC", "UNS_NVA_HKG", "UNS_NVA_HGG", "UNS_NVA_HKG", "UNS_NVA_PL", "UNS_PAVN_HC", "UNS_NVA_HG", "UNS_Conehat_VC", "UNS_Headband_VC", "UNS_NVA_CH", "UNS_NVA_HG", "UNS_NVA_HG", "UNS_NVA_PL", "UNS_PAVN_HN", "UNS_PAVN_HN", "UNS_Headband_VC", "UNS_Boonie_VC", "UNS_NVA_CH", "UNS_PAVN_HC", "UNS_PAVN_HN", "UNS_PAVN_HC", "UNS_Headband_VC", "UNS_Conehat_VC", "UNS_NVA_PL", "UNS_NVA_CH", "UNS_NVA_PL", "UNS_NVA_HG", "UNS_NVA_PL", "UNS_PAVN_HG", "UNS_PAVN_HG", "UNS_NVA_CH", "UNS_NVA_HGG", "UNS_PAVN_HG", "UNS_NVA_CH", "UNS_PAVN_HC", "UNS_PAVN_HC", "UNS_NVA_PL", "UNS_Conehat_VC", "UNS_PAVN_HN", "UNS_NVA_HK", "UNS_NVA_HGG", "UNS_PAVN_HN", "UNS_Conehat_VC", "UNS_NVA_HK", "UNS_Headband_VC", "UNS_NVA_HGG", "UNS_NVA_PL", "UNS_NVA_HG", "UNS_PAVN_HC", "UNS_NVA_PL", "UNS_PAVN_HG", "UNS_NVA_HKG", "UNS_PAVN_HG", "UNS_NVA_HKG", "UNS_PAVN_HC", "UNS_NVA_HKG", "UNS_NVA_CH", "UNS_Headband_VC", "UNS_Headband_VC", "UNS_PAVN_HC", "UNS_NVA_HKG", "UNS_NVA_HKG", "UNS_NVA_HK", "UNS_NVA_HKG", "UNS_NVA_HGG", "UNS_NVA_PL", "UNS_Headband_VC", "UNS_NVA_HK", "UNS_NVA_HGG", "UNS_NVA_HG", "UNS_PAVN_HC", "UNS_Headband_VC", "UNS_Boonie_VC", "UNS_PAVN_HC", "UNS_Boonie_VC", "UNS_Boonie_VC", "UNS_NVA_HK", "UNS_Headband_VC", "UNS_PAVN_HG", "UNS_NVA_HK", "UNS_NVA_HG", "UNS_NVA_HKG", "UNS_NVA_PL", "UNS_Conehat_VC", "UNS_PAVN_HN", "UNS_Boonie_VC", "UNS_Conehat_VC", "UNS_NVA_HG", "UNS_PAVN_HG", "UNS_PAVN_HN", "UNS_Conehat_VC", "UNS_NVA_HGG", "UNS_PAVN_HC", "UNS_NVA_HGG", "UNS_Conehat_VC", "UNS_Boonie_VC", "UNS_PAVN_HG", "UNS_PAVN_HC", "UNS_Boonie_VC", "UNS_NVA_HG", "UNS_NVA_CH", "UNS_Conehat_VC", "UNS_NVA_HK", "UNS_NVA_HK", "UNS_Conehat_VC", "UNS_PAVN_HN", "UNS_Conehat_VC", "UNS_NVA_CH", "UNS_NVA_HK", "UNS_Boonie_VC", "UNS_NVA_PL", "UNS_PAVN_HN", "UNS_NVA_HKG", "UNS_NVA_HGG", "UNS_Headband_VC", "UNS_Boonie_VC", "UNS_NVA_PL", "UNS_NVA_PL", "UNS_PAVN_HC", "UNS_Headband_VC", "UNS_NVA_CH", "UNS_PAVN_HN", "UNS_Headband_VC", "UNS_NVA_HG", "UNS_Conehat_VC", "UNS_Headband_VC", "UNS_PAVN_HG", "UNS_NVA_HK", "UNS_Boonie_VC", "UNS_PAVN_HG", "UNS_NVA_HKG", "UNS_NVA_HKG", "UNS_PAVN_HG", "UNS_NVA_CH", "UNS_Boonie_VC", "UNS_NVA_HK", "UNS_Conehat_VC", "UNS_NVA_HKG", "UNS_NVA_CH", "UNS_Boonie_VC", "UNS_NVA_HGG", "UNS_NVA_HGG", "UNS_Boonie_VC", "UNS_Headband_VC", "UNS_NVA_HG", "UNS_NVA_HG", "UNS_NVA_HKG", "UNS_Boonie_VC", "UNS_Headband_VC", "UNS_NVA_HK"};

		/*
			Percental Item Spawn Chances of MedicalItems:

			UNS_MedKit               = 20.00%
			Exile_Item_Bandage       = 20.00%
			Exile_Item_Vishpirin     = 20.00%
			Exile_Item_InstaDoc      = 20.00%
			Exile_Item_Defibrillator = 20.00%
		*/
		MedicalItems[] = {"Exile_Item_Bandage", "Exile_Item_Vishpirin", "Exile_Item_Defibrillator", "Exile_Item_Vishpirin", "Exile_Item_Vishpirin", "Exile_Item_Defibrillator", "Exile_Item_InstaDoc", "Exile_Item_InstaDoc", "UNS_MedKit", "Exile_Item_InstaDoc", "Exile_Item_Bandage", "UNS_MedKit", "Exile_Item_InstaDoc", "Exile_Item_InstaDoc", "Exile_Item_InstaDoc", "UNS_MedKit", "Exile_Item_Vishpirin", "UNS_MedKit", "Exile_Item_Vishpirin", "Exile_Item_Defibrillator", "Exile_Item_Defibrillator", "Exile_Item_Vishpirin", "Exile_Item_Bandage", "Exile_Item_Vishpirin", "Exile_Item_InstaDoc", "Exile_Item_Defibrillator", "Exile_Item_Vishpirin", "UNS_MedKit", "Exile_Item_Vishpirin", "Exile_Item_Bandage", "Exile_Item_Vishpirin", "Exile_Item_Bandage", "Exile_Item_Defibrillator", "Exile_Item_Defibrillator", "Exile_Item_Bandage", "UNS_MedKit", "Exile_Item_Bandage", "Exile_Item_InstaDoc", "UNS_MedKit", "Exile_Item_Bandage", "UNS_MedKit", "Exile_Item_InstaDoc", "Exile_Item_Bandage", "Exile_Item_Bandage", "Exile_Item_InstaDoc", "UNS_MedKit", "Exile_Item_Vishpirin", "Exile_Item_Bandage", "UNS_MedKit", "UNS_MedKit", "Exile_Item_Defibrillator", "Exile_Item_InstaDoc", "Exile_Item_Bandage", "Exile_Item_Vishpirin", "Exile_Item_Defibrillator", "UNS_MedKit", "UNS_MedKit", "UNS_MedKit", "Exile_Item_Defibrillator", "Exile_Item_InstaDoc", "Exile_Item_Vishpirin", "Exile_Item_Defibrillator", "Exile_Item_Defibrillator", "Exile_Item_Bandage", "Exile_Item_Vishpirin", "Exile_Item_Defibrillator", "Exile_Item_Bandage", "Exile_Item_Defibrillator", "Exile_Item_Defibrillator", "UNS_MedKit", "Exile_Item_Vishpirin", "Exile_Item_Bandage", "Exile_Item_InstaDoc", "Exile_Item_InstaDoc", "Exile_Item_InstaDoc"};

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
		IndustrialItems[] = {"Exile_Melee_Axe", "Exile_Item_Pliers", "Exile_Item_Cement", "Exile_Melee_SledgeHammer", "Exile_Item_Pliers", "Exile_Item_WaterCanisterEmpty", "Exile_Item_ScrewDriver", "Exile_Melee_Shovel", "Exile_Item_LightBulb", "Exile_Item_JunkMetal", "Exile_Melee_Shovel", "Exile_Item_LightBulb", "Exile_Melee_Axe", "Exile_Item_Cement", "Exile_Item_Pliers", "Exile_Item_ThermalScannerPro", "Exile_Item_ScrewDriver", "Exile_Melee_Axe", "Exile_Item_Pliers", "Exile_Item_Handsaw", "Exile_Melee_SledgeHammer", "Exile_Item_Hammer", "Exile_Item_JunkMetal", "Exile_Melee_Shovel", "Exile_Melee_Axe", "Exile_Item_FloodLightKit", "Exile_Melee_Axe", "Exile_Melee_Axe", "Exile_Melee_Axe", "Exile_Item_JunkMetal", "Exile_Melee_Axe", "Exile_Item_ExtensionCord", "Exile_Item_JunkMetal", "Exile_Melee_Axe", "Exile_Item_MetalScrews", "Exile_Item_Grinder", "Exile_Melee_Shovel", "Exile_Item_CamoTentKit", "Exile_Item_Foolbox", "Exile_Item_Handsaw", "Exile_Item_JunkMetal", "Exile_Item_MetalScrews", "Exile_Melee_Axe", "Exile_Item_Hammer", "Exile_Item_MetalBoard", "Exile_Melee_Shovel", "Exile_Melee_SledgeHammer", "Exile_Item_WaterCanisterEmpty", "Exile_Item_Handsaw", "Exile_Item_MetalScrews", "Exile_Item_Handsaw", "Exile_Item_PortableGeneratorKit", "Exile_Item_Grinder", "Exile_Melee_Axe", "Exile_Item_CamoTentKit", "Exile_Item_Handsaw", "Exile_Item_ExtensionCord", "Exile_Item_WaterCanisterEmpty", "Exile_Melee_Axe", "Exile_Melee_Axe", "Exile_Item_Pliers", "Exile_Item_Hammer", "Exile_Item_JunkMetal", "Exile_Melee_Shovel", "Exile_Item_Pliers", "Exile_Item_Handsaw", "Exile_Item_WaterCanisterEmpty", "Exile_Melee_Shovel", "Exile_Item_Foolbox", "Exile_Melee_SledgeHammer", "Exile_Item_ScrewDriver", "Exile_Item_Hammer", "Exile_Item_ExtensionCord", "Exile_Item_WaterCanisterEmpty", "Exile_Item_ScrewDriver", "Exile_Item_Handsaw", "Exile_Item_JunkMetal", "Exile_Item_LightBulb", "Exile_Item_ScrewDriver", "Exile_Item_WaterCanisterEmpty", "Exile_Melee_Shovel", "Exile_Item_Pliers", "Exile_Item_Foolbox", "Exile_Item_MetalBoard", "Exile_Item_Pliers", "Exile_Item_ExtensionCord", "Exile_Item_ExtensionCord", "Exile_Item_ExtensionCord", "Exile_Melee_Axe", "Exile_Item_ScrewDriver", "Exile_Item_ScrewDriver", "Exile_Melee_Axe", "Exile_Melee_Axe", "Exile_Item_Handsaw", "Exile_Item_WaterCanisterEmpty", "Exile_Item_PortableGeneratorKit", "Exile_Item_Grinder", "Exile_Item_Hammer", "Exile_Item_LightBulb", "Exile_Melee_Axe", "Exile_Item_WaterCanisterEmpty", "Exile_Item_FloodLightKit", "Exile_Item_ExtensionCord", "Exile_Item_Grinder", "Exile_Item_JunkMetal", "Exile_Melee_Axe", "Exile_Item_JunkMetal", "Exile_Item_MetalBoard", "Exile_Item_Knife", "Exile_Item_Foolbox", "Exile_Item_Handsaw", "Exile_Item_Pliers", "Exile_Item_Sand", "Exile_Item_ScrewDriver", "Exile_Item_Sand", "Exile_Item_Knife", "Exile_Item_Handsaw", "Exile_Item_LightBulb", "Exile_Item_FloodLightKit", "Exile_Melee_Shovel", "Exile_Item_WaterCanisterEmpty", "Exile_Item_MetalScrews", "Exile_Melee_Axe", "Exile_Item_JunkMetal", "Exile_Item_Handsaw", "Exile_Item_ScrewDriver", "Exile_Item_ScrewDriver", "Exile_Item_LightBulb", "Exile_Item_PortableGeneratorKit", "Exile_Item_WaterCanisterEmpty", "Exile_Item_JunkMetal", "Exile_Item_MetalScrews", "Exile_Item_CamoTentKit", "Exile_Item_CamoTentKit", "Exile_Item_Grinder", "Exile_Item_LightBulb", "Exile_Item_LightBulb", "Exile_Item_MetalBoard", "Exile_Item_Handsaw", "Exile_Item_ExtensionCord", "Exile_Melee_SledgeHammer", "Exile_Item_Sand", "Exile_Item_ScrewDriver", "Exile_Item_ScrewDriver", "Exile_Item_ScrewDriver", "Exile_Item_Sand", "Exile_Melee_Axe", "Exile_Melee_Axe", "Exile_Item_Pliers", "Exile_Item_Pliers", "Exile_Item_Handsaw", "Exile_Item_Cement", "Exile_Item_Pliers", "Exile_Item_Pliers", "Exile_Item_LightBulb", "Exile_Melee_Axe", "Exile_Melee_Shovel"};

		/*
			Percental Item Spawn Chances of Vehicle:

			uns_ItemFuelcan      = 50.00%
			uns_ItemFuelcanEmpty = 50.00%
		*/
		Vehicle[] = {"uns_ItemFuelcanEmpty", "uns_ItemFuelcan", "uns_ItemFuelcanEmpty", "uns_ItemFuelcan", "uns_ItemFuelcan", "uns_ItemFuelcanEmpty", "uns_ItemFuelcanEmpty", "uns_ItemFuelcan", "uns_ItemFuelcanEmpty", "uns_ItemFuelcan", "uns_ItemFuelcanEmpty", "uns_ItemFuelcan", "uns_ItemFuelcanEmpty", "uns_ItemFuelcanEmpty", "uns_ItemFuelcan", "uns_ItemFuelcanEmpty", "uns_ItemFuelcan", "uns_ItemFuelcan", "uns_ItemFuelcan", "uns_ItemFuelcan", "uns_ItemFuelcanEmpty", "uns_ItemFuelcanEmpty", "uns_ItemFuelcan", "uns_ItemFuelcanEmpty", "uns_ItemFuelcanEmpty", "uns_ItemFuelcanEmpty", "uns_ItemFuelcan", "uns_ItemFuelcan", "uns_ItemFuelcan", "uns_ItemFuelcanEmpty"};

		/*
			Percental Item Spawn Chances of Extras:

			uns_item_zippo = 25.00%
			uns_leaflet12  = 25.00%
			uns_leaflet13  = 25.00%
			uns_ItemSiphon = 25.00%
		*/
		Extras[] = {"uns_leaflet12", "uns_ItemSiphon", "uns_item_zippo", "uns_ItemSiphon", "uns_leaflet12", "uns_item_zippo", "uns_item_zippo", "uns_item_zippo", "uns_leaflet12", "uns_leaflet13", "uns_ItemSiphon", "uns_ItemSiphon", "uns_ItemSiphon", "uns_leaflet13", "uns_leaflet12", "uns_leaflet12", "uns_item_zippo", "uns_item_zippo", "uns_leaflet13", "uns_leaflet13", "uns_leaflet12", "uns_leaflet13", "uns_ItemSiphon", "uns_ItemSiphon", "uns_leaflet12", "uns_leaflet13", "uns_leaflet12", "uns_leaflet12", "uns_leaflet13", "uns_item_zippo", "uns_leaflet13", "uns_leaflet13", "uns_item_zippo", "uns_item_zippo", "uns_leaflet13", "uns_item_zippo", "uns_item_zippo", "uns_item_zippo", "uns_ItemSiphon", "uns_leaflet12", "uns_ItemSiphon", "uns_leaflet13", "uns_item_zippo", "uns_leaflet12", "uns_leaflet12", "uns_leaflet12", "uns_ItemSiphon", "uns_ItemSiphon", "uns_leaflet12", "uns_leaflet12", "uns_ItemSiphon", "uns_item_zippo", "uns_leaflet13", "uns_ItemSiphon", "uns_leaflet13", "uns_ItemSiphon", "uns_item_zippo", "uns_leaflet13", "uns_ItemSiphon", "uns_leaflet13"};

		/*
			Percental Item Spawn Chances of RoadFlares:

			FlareGreen_F  = 25.00%
			FlareRed_F    = 25.00%
			FlareWhite_F  = 25.00%
			FlareYellow_F = 25.00%
		*/
		RoadFlares[] = {"FlareYellow_F", "FlareRed_F", "FlareGreen_F", "FlareWhite_F"};

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
		SmokeGrenades[] = {"uns_m18yellow", "uns_m18orange", "uns_m18red", "uns_m18orange", "uns_m18orange", "uns_m18blue", "uns_m18purple", "uns_m18orange", "uns_m18blue", "uns_m18green", "uns_m18blue", "uns_m18green", "uns_m18yellow", "uns_m18purple", "uns_m18purple", "uns_m18blue", "uns_m18white", "uns_m18purple", "uns_m18white", "uns_m18yellow", "uns_m18yellow", "uns_m18white", "uns_m18blue", "uns_m18orange", "uns_m18blue", "uns_m18white", "uns_m18green", "uns_m18yellow", "uns_m18orange", "uns_m18blue", "uns_m18red", "uns_m18purple", "uns_m18yellow", "uns_m18yellow", "uns_m18green", "uns_m18green", "uns_m18white", "uns_m18orange", "uns_m18purple", "uns_m18green", "uns_m18red", "uns_m18red", "uns_m18yellow", "uns_m18orange", "uns_m18blue", "uns_m18red", "uns_m18orange", "uns_m18red", "uns_m18blue", "uns_m18blue", "uns_m18white", "uns_m18red", "uns_m18orange", "uns_m18white", "uns_m18yellow", "uns_m18white", "uns_m18red", "uns_m18purple", "uns_m18green", "uns_m18yellow", "uns_m18green", "uns_m18blue", "uns_m18red", "uns_m18white", "uns_m18purple", "uns_m18green", "uns_m18purple", "uns_m18orange", "uns_m18green", "uns_m18yellow", "uns_m18red", "uns_m18white", "uns_m18red", "uns_m18orange", "uns_m18green", "uns_m18green", "uns_m18purple", "uns_m18orange", "uns_m18green", "uns_m18yellow", "uns_m18white", "uns_m18white", "uns_m18purple", "uns_m18red", "uns_m18red", "uns_m18purple", "uns_m18red", "uns_m18blue", "uns_m18blue", "uns_m18purple", "uns_m18red", "uns_m18blue", "uns_m18purple", "uns_m18blue", "uns_m18white", "uns_m18green", "uns_m18orange", "uns_m18white", "uns_m18purple", "uns_m18orange", "uns_m18yellow", "uns_m18yellow", "uns_m18white", "uns_m18yellow", "uns_m18green"};

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
		Electronics[] = {"Exile_Item_Laptop", "Exile_Item_BaseCameraKit"};

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
		Trash[] = {"Exile_Item_EMRE", "Exile_Item_BeefParts", "Exile_Item_Magazine02", "Exile_Item_EMRE", "Exile_Item_ToiletPaper", "Exile_Item_ToiletPaper", "Exile_Item_ToiletPaper", "Exile_Item_EMRE", "Exile_Item_EMRE", "Exile_Item_Magazine03", "Exile_Item_BeefParts", "Exile_Item_BeefParts", "Exile_Item_Magazine04", "Exile_Item_Magazine01", "Exile_Item_ToiletPaper", "Exile_Item_BeefParts"};

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
		Unused[] = {"Exile_Item_Wrench", "Exile_Item_FireExtinguisher", "Exile_Item_OilCanister", "Exile_Item_Defibrillator", "Exile_Item_CordlessScrewdriver", "Exile_Item_Carwheel", "Exile_Item_SleepingMat", "Exile_Item_Rope"};
	};
};