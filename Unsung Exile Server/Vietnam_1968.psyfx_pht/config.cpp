
class CfgClans
{
	registrationFee = 100000;

	clanNameAlphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789 ._-!\\/";

	maximumIcons = 20;

	maximumIconText = 50;

	maximumPolys = 10;

	maximumPolyNode = 10;
};

class Exile_AbstractCraftingRecipe
{
	name = "";
	pictureItem = ""; 
	returnedItems[] = {};
	components[] = {}; // Required components
	tools[] = {}; // Required tools (matches, gas cooker etc.)
	requiredInteractionModelGroup = ""; // See CfgInteractionModels
	requiresOcean = 0; // isSurfaceWater test
	requiresFire = 0; // inflamed object nearby
	requiresConcreteMixer = 0; // Check if concrete mixer is nearby
};

class CfgCraftingRecipes
{
	
	#include "EBM\recipes.hpp"
	
class CookFoodContainerSalemaaRiceC: Exile_AbstractCraftingRecipe
{
	name = "Food Container (Lachs/Reis/Karotte)";
	pictureItem = "DDR_Item_Container_Salemaa_Rice";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "DDR_Item_Container_Salemaa_Rice"},
		{1, "DDR_Item_Canteen"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] =
	{
		{1, "DDR_Item_Container"},
		{1, "DDR_Item_Carrot"},
		{1, "DDR_Item_Salema"},
		{1, "DDR_Item_Canteen_Fresh"},
		{1, "DDR_Item_Rice"}
	};
};

class CookFoodContainerSalemaaRiceB: Exile_AbstractCraftingRecipe
{
	name = "Food Container (Lachs/Reis/Rote Beete)";
	pictureItem = "DDR_Item_Container_Salemaa_Rice";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "DDR_Item_Container_Salemaa_Rice"},
		{1, "DDR_Item_Canteen"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] =
	{
		{1, "DDR_Item_Container"},
		{1, "DDR_Item_Beet"},
		{1, "DDR_Item_Salema"},
		{1, "DDR_Item_Canteen_Fresh"},
		{1, "DDR_Item_Rice"}
	};
};

class CookFoodContainerMackerellRiceC: Exile_AbstractCraftingRecipe
{
	name = "Food Container (Makrele/Reis/Rote Beete)";
	pictureItem = "DDR_Item_Container_Mackerell_Rice";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "DDR_Item_Container_Mackerell_Rice"},
		{1, "DDR_Item_Canteen"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] =
	{
		{1, "DDR_Item_Container"},
		{1, "DDR_Item_Mackerel"},
		{1, "DDR_Item_Beet"},
		{1, "DDR_Item_Canteen_Fresh"},
		{1, "DDR_Item_Rice"}
	};
};

class CookFoodContainerMackerellRiceB: Exile_AbstractCraftingRecipe
{
	name = "Food Container (Makrele/Reis/Gurke)";
	pictureItem = "DDR_Item_Container_Mackerell_Rice";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "DDR_Item_Container_Mackerell_Rice"},
		{1, "DDR_Item_Canteen"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] =
	{
		{1, "DDR_Item_Container"},
		{1, "DDR_Item_Mackerel"},
		{1, "DDR_Item_Cucumber"},
		{1, "DDR_Item_Canteen_Fresh"},
		{1, "DDR_Item_Rice"}
	};
};

class CookFoodContainerTunaaRiceC: Exile_AbstractCraftingRecipe
{
	name = "Food Container (Thunfisch/Reis/Karotte)";
	pictureItem = "DDR_Item_Container_Tunaa_Rice";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "DDR_Item_Container_Tunaa_Rice"},
		{1, "DDR_Item_Canteen"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] =
	{
		{1, "DDR_Item_Container"},
		{1, "DDR_Item_Tunaa"},
		{1, "DDR_Item_Carrot"},
		{1, "DDR_Item_Canteen_Fresh"},
		{1, "DDR_Item_Rice"}
	};
};

class CookFoodContainerTunaaRiceB: Exile_AbstractCraftingRecipe
{
	name = "Food Container (Thunfisch/Reis/Tomate)";
	pictureItem = "DDR_Item_Container_Tunaa_Rice";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "DDR_Item_Container_Tunaa_Rice"},
		{1, "DDR_Item_Canteen"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] =
	{
		{1, "DDR_Item_Container"},
		{1, "DDR_Item_Tunaa"},
		{1, "DDR_Item_Tomato"},
		{1, "DDR_Item_Canteen_Fresh"},
		{1, "DDR_Item_Rice"}
	};
};

class CookFoodContainerMullettRiceC: Exile_AbstractCraftingRecipe
{
	name = "Food Container (Barbe/Reis/Rote Beete)";
	pictureItem = "DDR_Item_Container_Mullett_Rice";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "DDR_Item_Container_Mullett_Rice"},
		{1, "DDR_Item_Canteen"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] =
	{
		{1, "DDR_Item_Container"},
		{1, "DDR_Item_Mullet"},
		{1, "DDR_Item_Beet"},
		{1, "DDR_Item_Canteen_Fresh"},
		{1, "DDR_Item_Rice"}
	};
};

class CookFoodContainerMullettRiceB: Exile_AbstractCraftingRecipe
{
	name = "Food Container (Barbe/Reis/Karotte)";
	pictureItem = "DDR_Item_Container_Mullett_Rice";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "DDR_Item_Container_Mullett_Rice"},
		{1, "DDR_Item_Canteen"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] =
	{
		{1, "DDR_Item_Container"},
		{1, "DDR_Item_Mullet"},
		{1, "DDR_Item_Carrot"},
		{1, "DDR_Item_Canteen_Fresh"},
		{1, "DDR_Item_Rice"}
	};
};

class CookFoodContainerCatSharkkRiceC: Exile_AbstractCraftingRecipe
{
	name = "Food Container (Katzenhai/Reis/Karotte)";
	pictureItem = "DDR_Item_Container_CatSharkk_Rice";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "DDR_Item_Container_CatSharkk_Rice"},
		{1, "DDR_Item_Canteen"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] =
	{
		{1, "DDR_Item_Container"},
		{1, "DDR_Item_CatShark"},
		{1, "DDR_Item_Carrot"},
		{1, "DDR_Item_Canteen_Fresh"},
		{1, "DDR_Item_Rice"}
	};
};

class CookFoodContainerCatSharkkRiceB: Exile_AbstractCraftingRecipe
{
	name = "Food Container (Katzenhai/Reis/Kuerbis)";
	pictureItem = "DDR_Item_Container_CatSharkk_Rice";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "DDR_Item_Container_CatSharkk_Rice"},
		{1, "DDR_Item_Canteen"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] =
	{
		{1, "DDR_Item_Container"},
		{1, "DDR_Item_CatShark"},
		{1, "DDR_Item_Pumpkin"},
		{1, "DDR_Item_Canteen_Fresh"},
		{1, "DDR_Item_Rice"}
	};
};

class CookFoodContainerOrnateeRiceC: Exile_AbstractCraftingRecipe
{
	name = "Food Container (Falterfisch/Reis/Rote Beete)";
	pictureItem = "DDR_Item_Container_Ornatee_Rice";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "DDR_Item_Container_Ornatee_Rice"},
		{1, "DDR_Item_Canteen"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] =
	{
		{1, "DDR_Item_Container"},
		{1, "DDR_Item_Ornate"},
		{1, "DDR_Item_Beet"},
		{1, "DDR_Item_Canteen_Fresh"},
		{1, "DDR_Item_Rice"}
	};
};

class CookFoodContainerOrnateeRiceB: Exile_AbstractCraftingRecipe
{
	name = "Food Container (Falterfisch/Reis/Karotte)";
	pictureItem = "DDR_Item_Container_Ornatee_Rice";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "DDR_Item_Container_Ornatee_Rice"},
		{1, "DDR_Item_Canteen"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] =
	{
		{1, "DDR_Item_Container"},
		{1, "DDR_Item_Ornate"},
		{1, "DDR_Item_Carrot"},
		{1, "DDR_Item_Canteen_Fresh"},
		{1, "DDR_Item_Rice"}
	};
};

class CookFoodContainerTurtleeRiceC: Exile_AbstractCraftingRecipe
{
	name = "Food Container (Schildkroete/Reis/Karotte)";
	pictureItem = "DDR_Item_Container_Turtlee_Rice";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "DDR_Item_Container_Turtlee_Rice"},
		{1, "DDR_Item_Canteen"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] =
	{
		{1, "DDR_Item_Container"},
		{1, "DDR_Item_Turtle"},
		{1, "DDR_Item_Carrot"},
		{1, "DDR_Item_Canteen_Fresh"},
		{1, "DDR_Item_Rice"}
	};
};

class CookFoodContainerTurtleeRiceB: Exile_AbstractCraftingRecipe
{
	name = "Food Container (Schildkroete/Reis/Kuerbis)";
	pictureItem = "DDR_Item_Container_Turtlee_Rice";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "DDR_Item_Container_Turtlee_Rice"},
		{1, "DDR_Item_Canteen"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] =
	{
		{1, "DDR_Item_Container"},
		{1, "DDR_Item_Turtle"},
		{1, "DDR_Item_Pumpkin"},
		{1, "DDR_Item_Canteen_Fresh"},
		{1, "DDR_Item_Rice"}
	};
};

class CookFoodContainerChickenRiceB: Exile_AbstractCraftingRecipe
{
	name = "Food Container (Suppenhuhn/Reis/Gurke)";
	pictureItem = "DDR_Item_Container_Chicken_Rice";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "DDR_Item_Container_Chicken_Rice"},
		{1, "DDR_Item_Canteen"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] =
	{
		{1, "DDR_Item_Container"},
		{1, "Exile_Item_ChickenFilet_Raw"},
		{1, "DDR_Item_Canteen_Fresh"},
		{1, "DDR_Item_Cucumber"},
		{1, "DDR_Item_Rice"}
	};
};

class CookFoodContainerChickenRiceC: Exile_AbstractCraftingRecipe
{
	name = "Food Container (Suppenhuhn/Reis/Tomate)";
	pictureItem = "DDR_Item_Container_Chicken_Rice";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "DDR_Item_Container_Chicken_Rice"},
		{1, "DDR_Item_Canteen"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] =
	{
		{1, "DDR_Item_Container"},
		{1, "Exile_Item_ChickenFilet_Raw"},
		{1, "DDR_Item_Canteen_Fresh"},
		{1, "DDR_Item_Tomato"},
		{1, "DDR_Item_Rice"}
	};
};

class CookFoodContainerGoatRiceB: Exile_AbstractCraftingRecipe
{
	name = "Food Container (Ziege/Reis/Tomate)";
	pictureItem = "DDR_Item_Container_Goat_Rice";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "DDR_Item_Container_Goat_Rice"},
		{1, "DDR_Item_Canteen"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] =
	{
		{1, "DDR_Item_Container"},
		{1, "Exile_Item_GoatSteak_Raw"},
		{1, "DDR_Item_Canteen_Fresh"},
		{1, "DDR_Item_Tomato"},
		{1, "DDR_Item_Rice"}
	};
};

class CookFoodContainerGoatRiceC: Exile_AbstractCraftingRecipe
{
	name = "Food Container (Ziege/Reis/Kuerbis)";
	pictureItem = "DDR_Item_Container_Goat_Rice";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "DDR_Item_Container_Goat_Rice"},
		{1, "DDR_Item_Canteen"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] =
	{
		{1, "DDR_Item_Container"},
		{1, "Exile_Item_GoatSteak_Raw"},
		{1, "DDR_Item_Canteen_Fresh"},
		{1, "DDR_Item_Pumpkin"},
		{1, "DDR_Item_Rice"}
	};
};

class CookFoodContainerRoosterRiceB: Exile_AbstractCraftingRecipe
{
	name = "Food Container (Haehnchen/Reis/Rote Beete)";
	pictureItem = "DDR_Item_Container_Rooster_Rice";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "DDR_Item_Container_Rooster_Rice"},
		{1, "DDR_Item_Canteen"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] =
	{
		{1, "DDR_Item_Container"},
		{1, "Exile_Item_RoosterFilet_Raw"},
		{1, "DDR_Item_Canteen_Fresh"},
		{1, "DDR_Item_Beet"},
		{1, "DDR_Item_Rice"}
	};
};

class CookFoodContainerRoosterRiceC: Exile_AbstractCraftingRecipe
{
	name = "Food Container (Haehnchen/Reis/Tomate)";
	pictureItem = "DDR_Item_Container_Rooster_Rice";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "DDR_Item_Container_Rooster_Rice"},
		{1, "DDR_Item_Canteen"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] =
	{
		{1, "DDR_Item_Container"},
		{1, "Exile_Item_RoosterFilet_Raw"},
		{1, "DDR_Item_Canteen_Fresh"},
		{1, "DDR_Item_Tomato"},
		{1, "DDR_Item_Rice"}
	};
};

class CookFoodContainerSheepRiceB: Exile_AbstractCraftingRecipe
{
	name = "Food Container (Lamm/Reis/Karotte)";
	pictureItem = "DDR_Item_Container_Sheep_Rice";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "DDR_Item_Container_Sheep_Rice"},
		{1, "DDR_Item_Canteen"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] =
	{
		{1, "DDR_Item_Container"},
		{1, "Exile_Item_SheepSteak_Raw"},
		{1, "DDR_Item_Canteen_Fresh"},
		{1, "DDR_Item_Carrot"},
		{1, "DDR_Item_Rice"}
	};
};

class CookFoodContainerSheepRiceC: Exile_AbstractCraftingRecipe
{
	name = "Food Container (Lamm/Reis/Gurke)";
	pictureItem = "DDR_Item_Container_Sheep_Rice";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "DDR_Item_Container_Sheep_Rice"},
		{1, "DDR_Item_Canteen"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] =
	{
		{1, "DDR_Item_Container"},
		{1, "Exile_Item_SheepSteak_Raw"},
		{1, "DDR_Item_Canteen_Fresh"},
		{1, "DDR_Item_Cucumber"},
		{1, "DDR_Item_Rice"}
	};
};

class CookFoodContainerContainerSoupC: Exile_AbstractCraftingRecipe
{
	name = "Food Container (Gemuesesuppe)";
	pictureItem = "DDR_Item_Container_Soup";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "DDR_Item_Container_Soup"},
		{2, "DDR_Item_Canteen"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] =
	{
		{1, "DDR_Item_Container"},
		{1, "DDR_Item_Tomato"},
		{1, "DDR_Item_Cucumber"},
		{1, "DDR_Item_Beet"},
		{1, "DDR_Item_Carrot"},
		{1, "DDR_Item_Pumpkin"},
		{2, "DDR_Item_Canteen_Fresh"}
	};
};

class CookCanteenCoffee: Exile_AbstractCraftingRecipe
{
	name = "Brew Coffee";
	pictureItem = "DDR_Item_Canteen_Coffee";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "DDR_Item_Canteen_Coffee"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "DDR_Item_Canteen_Fresh"},
		{1, "Exile_Item_InstantCoffee"}
	};
};

class CraftBandage: Exile_AbstractCraftingRecipe
{
	name = "Craft Bandage";
	pictureItem = "Exile_Item_Bandage";
	returnedItems[] =
	{
		{1, "Exile_Item_Bandage"}
	};
	components[] = 
	{
		{4, "Exile_Item_ToiletPaper"}
	};
};

class CraftFirePlace: Exile_AbstractCraftingRecipe
{
	name = "Craft Fire Place";
	pictureItem = "Exile_Item_CampFireKit";
	returnedItems[] = 
	{
		{1, "Exile_Item_CampFireKit"}
	};
	components[] = 
	{
		{2, "Exile_Item_WoodLog"}
	};
};

class CraftMetalBoard: Exile_AbstractCraftingRecipe
{
	name = "Craft Metal Board";
	pictureItem = "Exile_Item_MetalBoard";
	requiresFire = 1;
	returnedItems[] = 
	{
		{1, "Exile_Item_MetalBoard"}
	};
	components[] = 
	{
		{2, "Exile_Item_JunkMetal"}
	};
	tools[] = {"Exile_Item_Grinder"};
};

class CraftMetalPole: Exile_AbstractCraftingRecipe
{
	name = "Craft Metal Pole";
	pictureItem = "Exile_Item_MetalPole";
	requiresFire = 1;
	returnedItems[] = 
	{
		{1, "Exile_Item_MetalPole"}
	};
	components[] = 
	{
		{4, "Exile_Item_JunkMetal"}
	};
	tools[] = {"Exile_Item_Grinder"};
};

class CraftOldChest: Exile_AbstractCraftingRecipe
{
	name = "Craft Old Chest";
	pictureItem = "Exile_Item_OldChestKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_OldChestKit"}
	};
	components[] = 
	{
		{4, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_JunkMetal"}
	};
};

class CraftStorageCrate: Exile_AbstractCraftingRecipe
{
	name = "Craft Storage Crate";
	pictureItem = "Exile_Item_StorageCrateKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_StorageCrateKit"}
	};
	components[] = 
	{
		{5, "Exile_Item_WoodPlank"}
	};
};

class CraftWaterBarrel: Exile_AbstractCraftingRecipe
{
	name = "Craft Water Barrel";
	pictureItem = "Exile_Item_WaterBarrelKit";
	requiredInteractionModelGroup = "WorkBench";
	requiresFire = 1;
	returnedItems[] = 
	{
		{1, "Exile_Item_WaterBarrelKit"}
	};
	components[] = 
	{
		{10, "DDR_Item_Canteen"}
	};
};

class CraftWoodFloor: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Floor";
	pictureItem = "Exile_Item_WoodFloorKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodFloorKit"}
	};
	components[] = 
	{
		{4, "Exile_Item_WoodPlank"}
	};
};

class CraftWoodLadderHatch: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Ladder Hatch";
	pictureItem = "Exile_Item_WoodLadderHatchKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
		{1, "Exile_Item_WoodLadderHatchKit"}
	};
	components[] =
	{
		{6, "Exile_Item_WoodPlank"},
		{3, "Exile_Item_JunkMetal"}
	};
};

class CraftWoodGate: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Gate";
	pictureItem = "Exile_Item_WoodGateKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodGateKit"}
	};
	components[] = 
	{
		{8, "Exile_Item_WoodPlank"}
	};
};

class CraftWoodLadder: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Ladder";
	pictureItem = "Exile_Item_WoodLadderKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
		{1, "Exile_Item_WoodLadderKit"}
	};
	components[] =
	{
		{6, "Exile_Item_WoodPlank"}
	};
};

class CraftWoodPlank: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Plank";
	pictureItem = "Exile_Item_WoodPlank";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodPlank"}
	};
	components[] = 
	{
		{2, "Exile_Item_WoodLog"}
	};
	tools[] = {"Exile_Item_Handsaw"};
};

class CraftWoodSupport: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Support";
	pictureItem = "Exile_Item_WoodSupportKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodSupportKit"}
	};
	components[] = 
	{
		{6, "Exile_Item_WoodPlank"}
	};
};

class CraftMetalLadder: Exile_AbstractCraftingRecipe
{
	name = "Craft Metal Ladder";
	pictureItem = "Exile_Item_MetalLadderKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
		{1, "Exile_Item_MetalLadderKit"}
	};
	components[] =
	{
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_JunkMetal"}
	};
	tools[] = {"Exile_Item_Grinder"};
};

class CraftMetalLadderDouble: Exile_AbstractCraftingRecipe
{
	name = "Craft Metal Ladder (Double Tall)";
	pictureItem = "Exile_Item_MetalLadderDoubleKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
		{1, "Exile_Item_MetalLadderDoubleKit"}
	};
	components[] =
	{
		{4, "Exile_Item_MetalPole"},
		{4, "Exile_Item_JunkMetal"}
	};
	tools[] = {"Exile_Item_Grinder"};
};

class CraftWorkBench: Exile_AbstractCraftingRecipe
{
	name = "Craft Work Bench";
	pictureItem = "Exile_Item_WorkBenchKit";
	returnedItems[] = 
	{
		{1, "Exile_Item_WorkBenchKit"}
	};
	components[] = 
	{
		{4, "Exile_Item_WoodLog"}
	};
};

class EmptyFuelCanister: Exile_AbstractCraftingRecipe
{
	name = "Empty Fuel Canister";
	pictureItem = "Exile_Item_FuelCanisterEmpty";
	returnedItems[] = 
	{
		{1, "Exile_Item_FuelCanisterEmpty"}
	};
	components[] = 
	{
		{1, "Exile_Item_FuelCanisterFull"}
	};
};

class FillEmptyCanteenWithFreshWater: Exile_AbstractCraftingRecipe
{
	name = "Fill Fresh Water";
	pictureItem = "DDR_Item_Canteen_Fresh";
	requiredInteractionModelGroup = "CleanWaterSource";
	returnedItems[] =
	{
		{1, "DDR_Item_Canteen_Fresh"}
	};
	components[] =
	{
		{1, "DDR_Item_Canteen"}
	};
};

class FillEmptyCanteenWithSaltWater: Exile_AbstractCraftingRecipe
{
	name = "Fill Salt Water";
	pictureItem = "DDR_Item_Canteen_Salt";
	requiresOcean = 1;
	returnedItems[] = 
	{
		{1, "DDR_Item_Canteen_Salt"}
	};
	components[] = 
	{
		{1, "DDR_Item_Canteen"}
	};
};

class EmptyCanteenFreshWater: Exile_AbstractCraftingRecipe
{
	name = "Empty Fresh Water";
	pictureItem = "DDR_Item_Canteen";
	returnedItems[] =
	{
		{1, "DDR_Item_Canteen"}
	};
	components[] =
	{
		{1, "DDR_Item_Canteen_Fresh"}
	};
};

class EmptyCanteenSaltWater: Exile_AbstractCraftingRecipe
{
	name = "Empty Salt Water";
	pictureItem = "DDR_Item_Canteen";
	returnedItems[] =
	{
		{1, "DDR_Item_Canteen"}
	};
	components[] =
	{
		{1, "DDR_Item_Canteen_Salt"}
	};
};

class FillEmptyWaterCanisterWithDirtyWater: Exile_AbstractCraftingRecipe
{
	name = "Fill Dirty Water";
	pictureItem = "Exile_Item_WaterCanisterDirtyWater";
	requiredInteractionModelGroup = "WaterSource";
	returnedItems[] =
	{
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
	components[] = 
	{
		{1, "Exile_Item_WaterCanisterEmpty"}
	};
};

class FillFuelCanister: Exile_AbstractCraftingRecipe
{
	name = "Fill Fuel Canister";
	pictureItem = "Exile_Item_FuelCanisterFull";
	requiredInteractionModelGroup = "FuelSource";
	returnedItems[] = 
	{
		{1, "Exile_Item_FuelCanisterFull"}
	};
	components[] = 
	{
		{1, "Exile_Item_FuelCanisterEmpty"}
	};
};
};

class CfgExileAnimals
{
	enabled = 1;

	disableVanillaAnimals = 1;

	animalTypes[] = 
	{
		"Exile_Animal_Rooster_Abstract",
		"Exile_Animal_Hen_Abstract",
		"Exile_Animal_Goat_Abstract",
		"Exile_Animal_Sheep_Abstract"
	};

	spawnDistance = 150;
	spawnRadius = 50;

	minimumSpawnDelay = 5 * 60;
	maximumSpawnDelay = 10 * 60;

	keepAliveRadius = 500;

	minimumLifetime = 5 * 60;
};

class CfgExileArsenal
{
	class Exile_Uniform_BambiOverall				{ quality = 1; price = 1; sellPrice = 1; };

	///////////////////////////////////////////////////////////////////////////////
	// US Uniforms
	///////////////////////////////////////////////////////////////////////////////
	
	class UNS_ARMY_BDU_ERDLipatch					{ quality = 0; price = 160; };
	class UNS_SAS_BDU_T								{ quality = 1; price = 280; };
	class UNS_DUCK_BDU	 							{ quality = 1; price = 240; };
	class UNS_ARMY_ROKMC65Camo_ipatch				{ quality = 1; price = 200; };
	class UNS_SOG_BDU_BK 							{ quality = 1; price = 320; };
	class UNS_TIGER3_BDU 							{ quality = 0; price = 200; };
	class UNS_USMC_BDU_65 							{ quality = 0; price = 160; };
	class UNS_USMC_FLAK_65							{ quality = 1; price = 240; };
	class UNS_USMC_Flak_E 							{ quality = 1; price = 240; };
	class UNS_USMC_Flak_ES 							{ quality = 1; price = 240; };
	class UNS_USMC_LERDL 							{ quality = 0; price = 200; };
	class UNS_Pilot_BDU 							{ quality = 0; price = 200; };

	///////////////////////////////////////////////////////////////////////////////
	// NVA Uniforms
	///////////////////////////////////////////////////////////////////////////////
	
	class UNS_VC_S									{ quality = 0; price = 100; };
	class UNS_VC_U									{ quality = 0; price = 100; };
	class UNS_VC_K									{ quality = 0; price = 100; };
	class UNS_NVA_G									{ quality = 0; price = 100; };

	///////////////////////////////////////////////////////////////////////////////
	// NVA Vests
	///////////////////////////////////////////////////////////////////////////////
	
	class UNS_VC_A1									{ quality = 1; price = 100; };
	class UNS_VC_A2									{ quality = 1; price = 100; };
	class UNS_VC_A3									{ quality = 1; price = 100; };
	class UNS_VC_MG									{ quality = 1; price = 100; };
	class UNS_NVA_A2								{ quality = 1; price = 100; };
		
	///////////////////////////////////////////////////////////////////////////////
	// US Vests
	///////////////////////////////////////////////////////////////////////////////
	
	class UNS_M1956_A1								{ quality = 0; price = 100; };
	class UNS_M1956_A2								{ quality = 0; price = 400; };
	class UNS_M1956_A3								{ quality = 0; price = 400; };
	class UNS_M1956_A4								{ quality = 0; price = 500; };
	class UNS_M1956_A5								{ quality = 0; price = 600; };
	class UNS_M1956_A6								{ quality = 1; price = 700; };
	class UNS_M1956_A7								{ quality = 0; price = 600; };
	class UNS_M1956_A8								{ quality = 1; price = 700; };
	class UNS_M1956_A9								{ quality = 0; price = 600; };
	class UNS_M1956_A10								{ quality = 1; price = 600; };
	class UNS_M1956_A11								{ quality = 1; price = 700; };
	class UNS_M1956_A12								{ quality = 1; price = 700; };
	class UNS_M1956_LRRP1							{ quality = 1; price = 1000; };
			
	///////////////////////////////////////////////////////////////////////////////
	// Glasses
	///////////////////////////////////////////////////////////////////////////////
	
	class UNS_Bullets			 					{ quality = 1; price = 10; };
	class UNS_Ear									{ quality = 1; price = 10; };
	class UNS_Finger		 						{ quality = 1; price = 10; };
	class UNS_Peace				 					{ quality = 1; price = 10; };
	class UNS_Scarf_1stCav			 				{ quality = 1; price = 10; };
	class UNS_Scarf_ARVN			 				{ quality = 1; price = 10; };
	class UNS_Towel				 					{ quality = 1; price = 10; };
	class G_Aviator			 						{ quality = 1; price = 10; };
			
	///////////////////////////////////////////////////////////////////////////////
	// US Headgear
	///////////////////////////////////////////////////////////////////////////////
	
	class UNS_Boonie_TIG2							{ quality = 1; price = 50; };
	class UNS_Boonie_TIGF4							{ quality = 1; price = 50; };
	class UNS_USMC_COVER							{ quality = 1; price = 50; };
	class UNS_Field_Cap								{ quality = 1; price = 50; };
	class UNS_Boonie_OD								{ quality = 1; price = 50; };
	class UNS_Boonie_OD2							{ quality = 1; price = 50; };
	class UNS_Boonie_DK								{ quality = 1; price = 50; };
	class UNS_Boonie_DKF							{ quality = 1; price = 50; };
	class UNS_Boonie_ERDL							{ quality = 1; price = 50; };
	class UNS_Beret_4								{ quality = 1; price = 50; };
	class UNS_Beret_3								{ quality = 1; price = 50; };
	class UNS_Headband_ED							{ quality = 1; price = 50; }; //Admin only
	class uns_sas_bandana_erdl						{ quality = 1; price = 50; };
	class uns_sas_bandana_tiger						{ quality = 1; price = 50; };
	class UNS_M1_1RM								{ quality = 1; price = 150; };
	class UNS_M1_9A									{ quality = 1; price = 150; };
	class UNS_M1_8A									{ quality = 1; price = 150; };
	class UNS_M1_7A									{ quality = 1; price = 150; };
	class UNS_M1_6A									{ quality = 1; price = 150; };
	class UNS_M1_5A									{ quality = 1; price = 150; };
	class UNS_M1_4A									{ quality = 1; price = 150; };
	class UNS_M1_3A									{ quality = 1; price = 150; };
	class UNS_M1_2A									{ quality = 1; price = 150; };
	class UNS_M1_1A									{ quality = 1; price = 150; };
	class UNS_M1_MP									{ quality = 1; price = 150; };
	class UNS_M1_1V7								{ quality = 1; price = 150; };
	class UNS_M1_1V6								{ quality = 1; price = 150; };
	class UNS_M1_1V5								{ quality = 1; price = 150; };
	class UNS_M1_1V4								{ quality = 1; price = 150; };
	class UNS_M1_1V3								{ quality = 1; price = 150; };
	class UNS_M1_1V2								{ quality = 1; price = 150; };
	class UNS_TC_1									{ quality = 1; price = 150; };
	class UNS_TC_2									{ quality = 1; price = 150; };
	class UNS_Headband_BK							{ quality = 1; price = 50; };
	class UNS_HP_Helmet_1AC							{ quality = 2; price = 200; };
	class UNS_HP_Helmet_11AC						{ quality = 2; price = 200; };
	class UNS_HP_Helmet_17AC						{ quality = 2; price = 200; };
	class UNS_HP_Helmet_1MD							{ quality = 2; price = 200; };
	class UNS_HP_Helmet_OG							{ quality = 2; price = 200; };
	class UNS_HP_Helmet_TIGER						{ quality = 2; price = 200; };
		
	///////////////////////////////////////////////////////////////////////////////
	// NVA Headgear
	///////////////////////////////////////////////////////////////////////////////
	
	class uns_vc_headband_blue						{ quality = 1; price = 50; };
	class UNS_Conehat_VC							{ quality = 1; price = 20; };
	class UNS_Boonie2_VC							{ quality = 1; price = 100; };
	class UNS_NVA_HGG								{ quality = 1; price = 100; };
	class UNS_Boonie_VC								{ quality = 1; price = 100; };

	///////////////////////////////////////////////////////////////////////////////
	// Supressors
	///////////////////////////////////////////////////////////////////////////////
	
	class uns_s_M14 								{ quality = 1; price = 100; };
	class uns_s_M16 								{ quality = 1; price = 100; };
	class uns_s_MAC10 								{ quality = 1; price = 100; };
	class uns_s_M3a1 								{ quality = 1; price = 100; };
	class uns_s_M45 								{ quality = 1; price = 100; };
	class uns_s_UZI 								{ quality = 1; price = 100; };
	class uns_s_Sten 								{ quality = 1; price = 100; };
	class uns_s_mat49 								{ quality = 1; price = 100; };
	class uns_s_M1911 								{ quality = 1; price = 100; };
	class uns_s_PPK 								{ quality = 1; price = 100; };
	class uns_s_PBS1 								{ quality = 1; price = 100; };
	class uns_s_APS 								{ quality = 1; price = 100; };

	///////////////////////////////////////////////////////////////////////////////
	// Scopes
	///////////////////////////////////////////////////////////////////////////////
	
	class uns_o_LeatherwoodART_m14					{ quality = 2; price = 300; };
	class uns_o_LeatherwoodART_m16					{ quality = 2; price = 300; };
	class uns_o_RedfieldART_m70						{ quality = 2; price = 300; };
	class uns_o_Unertl8x_m70						{ quality = 2; price = 300; };
	class uns_o_M84									{ quality = 1; price = 300; };
	class uns_o_smle_3x								{ quality = 1; price = 300; };
	class uns_o_colt4x								{ quality = 1; price = 300; };
	class uns_o_zf41								{ quality = 1; price = 300; };
	class uns_o_ANPVS2_M16							{ quality = 3; price = 600; };
	class uns_o_ANPVS2_M14							{ quality = 3; price = 600; };
	class uns_o_Akatihi4x							{ quality = 1; price = 300; };
	class uns_o_APXSOM								{ quality = 1; price = 300; };
	class uns_o_M63									{ quality = 1; price = 300; };

	///////////////////////////////////////////////////////////////////////////////
	// Hardware
	///////////////////////////////////////////////////////////////////////////////
	
	class Exile_Item_Rope							{ quality = 0; price = 50; };
	class Exile_Item_DuctTape						{ quality = 0; price = 300; };
	class Exile_Item_ExtensionCord					{ quality = 0; price = 50; };
	class Exile_Item_FuelCanisterEmpty				{ quality = 0; price = 10; sellPrice = 10; };
	class Exile_Item_FuelCanisterFull				{ quality = 0; price = 40; };
	class Exile_Item_FuelBarrelFull					{ quality = 0; price = 300; };
	class Exile_Item_JunkMetal						{ quality = 0; price = 200; };
	class Exile_Item_LightBulb						{ quality = 0; price = 50; };
	class Exile_Item_MetalBoard						{ quality = 0; price = 300; };
	class Exile_Container_Safe_Small				{ quality = 2; price = 5000; };
	class Exile_Item_CodeLock						{ quality = 0; price = 5000; };
	class DDR_Item_Silver_Bar						{ quality = 1; price = 2500; };
	class DDR_Item_Gold_Bar							{ quality = 1; price = 5000; };
	class Exile_Item_CamoTentKit					{ quality = 0; price = 250; };
	class Exile_Item_MetalPole						{ quality = 0; price = 400; };
	class Exile_Item_MetalWire						{ quality = 0; price = 50; };
	class Exile_Item_Cement							{ quality = 0; price = 20; };
	class Exile_Item_Sand							{ quality = 0; price = 20; };
	class EBM_Item_Bricks							{ quality = 0; price = 20; };
	class DDR_Item_Secret_Documents					{ quality = 0; price = 10000; };
	class DDR_Item_Document_Top_Secret				{ quality = 0; price = 16500; };

	///////////////////////////////////////////////////////////////////////////////
	// Food
	///////////////////////////////////////////////////////////////////////////////
	
	class Exile_Item_SheepSteak_Cooked				{ quality = 4; price = 230; }; //100, 30
	class Exile_Item_AlsatianSteak_Cooked			{ quality = 4; price = 230; }; //100, 30
	class Exile_Item_CatSharkFilet_Cooked			{ quality = 4; price = 230; }; //100, 30
	class Exile_Item_FinSteak_Cooked				{ quality = 4; price = 230; }; //100, 30
	class Exile_Item_GoatSteak_Cooked				{ quality = 4; price = 230; }; //100, 30
	class Exile_Item_TurtleFilet_Cooked				{ quality = 4; price = 230; }; //100, 30
	class Exile_Item_TunaFilet_Cooked				{ quality = 3; price = 220; }; //90, 30
	class Exile_Item_RabbitSteak_Cooked				{ quality = 3; price = 215; }; //80, 30
	class Exile_Item_ChickenFilet_Cooked			{ quality = 3; price = 205; }; //70, 30
	class Exile_Item_RoosterFilet_Cooked			{ quality = 3; price = 205; }; //70, 30
	class Exile_Item_MulletFilet_Cooked				{ quality = 3; price = 200; }; //65, 30
	class Exile_Item_SalemaFilet_Cooked				{ quality = 3; price = 200; }; //65, 30
	class Exile_Item_MackerelFilet_Cooked			{ quality = 3; price = 190; }; //55, 30
	class Exile_Item_OrnateFilet_Cooked				{ quality = 3; price = 180; }; //40, 30
	class Exile_Item_SnakeFilet_Cooked				{ quality = 3; price = 180; }; //40, 30
	class Exile_Item_CatSharkFilet_Raw				{ quality = 2; price = 125; }; //25, 30
	class Exile_Item_TunaFilet_Raw					{ quality = 2; price = 120; }; //20, 30
	class Exile_Item_AlsatianSteak_Raw				{ quality = 2; price = 115; };	//15, 30
	class Exile_Item_TurtleFilet_Raw				{ quality = 2; price = 115; }; //15, 30
	class Exile_Item_SheepSteak_Raw					{ quality = 2; price = 115; }; //15, 30
	class Exile_Item_FinSteak_Raw					{ quality = 2; price = 115; }; //15, 30
	class Exile_Item_GoatSteak_Raw					{ quality = 2; price = 115; }; //15, 30
	class Exile_Item_ChickenFilet_Raw				{ quality = 2; price = 110; }; //10, 30
	class Exile_Item_RoosterFilet_Raw				{ quality = 2; price = 110; }; //10, 30
	class Exile_Item_MackerelFilet_Raw				{ quality = 2; price = 108; }; //5, 30
	class Exile_Item_MulletFilet_Raw				{ quality = 2; price = 108; }; //5, 30
	class Exile_Item_OrnateFilet_Raw				{ quality = 2; price = 108; }; //5, 30
	class Exile_Item_RabbitSteak_Raw				{ quality = 2; price = 108; }; //5, 30
	class Exile_Item_SalemaFilet_Raw				{ quality = 2; price = 108; }; //5, 30
	class Exile_Item_SnakeFilet_Raw					{ quality = 2; price = 108; }; //5, 30
	class Exile_Item_BeefParts						{ quality = 0; price = 30; sellPrice = 5; }; //30, 30
	class Exile_Item_Cheathas						{ quality = 0; price = 30; sellPrice = 5; }; //30, 30
	class Exile_Item_Noodles						{ quality = 0; price = 25; sellPrice = 5; }; //25, 50
	class Exile_Item_SeedAstics						{ quality = 0; price = 20; sellPrice = 5; }; //20, 40
	class Exile_Item_Raisins						{ quality = 0; price = 15; sellPrice = 5; }; //15, 30
	class Exile_Item_Moobar							{ quality = 0; price = 10; sellPrice = 1; }; //10, 30
	class Exile_Item_InstantCoffee					{ quality = 0; price = 5; sellPrice = 1; }; //5, 10
	class DDR_Item_Apple_Green						{ quality = 1; price = 80; sellPrice = 2; };
	class DDR_Item_Beet								{ quality = 1; price = 80; sellPrice = 2; };
	class DDR_Item_Carrot							{ quality = 1; price = 80; sellPrice = 2; };
	class DDR_Item_Banana						    { quality = 1; price = 60; sellPrice = 2; };
	class DDR_Item_Tomato							{ quality = 1; price = 50; sellPrice = 2; };
	class DDR_Item_Pear						        { quality = 1; price = 80; sellPrice = 2; };
	class DDR_Item_Melon				            { quality = 1; price = 80; sellPrice = 4; };
	class DDR_Item_Cucumber							{ quality = 1; price = 80; sellPrice = 2; };
	class DDR_Item_Pineapple						{ quality = 1; price = 20; sellPrice = 4; };
	class DDR_Item_Orange					        { quality = 1; price = 60; sellPrice = 2; };
	class DDR_Item_Pumpkin							{ quality = 1; price = 60; sellPrice = 4; };
	class DDR_Item_Container						{ quality = 1; price = 80; sellPrice = 2; };
	class DDR_Item_Container_Soup					{ quality = 1; price = 80; sellPrice = 2; };
	class DDR_Item_Container_Chicken_Rice		    { quality = 1; price = 60; sellPrice = 2; };
	class DDR_Item_Container_Goat_Rice				{ quality = 1; price = 50; sellPrice = 2; };
	class DDR_Item_Container_Rooster_Rice	        { quality = 1; price = 80; sellPrice = 2; };
	class DDR_Item_Container_Sheep_Rice		        { quality = 1; price = 80; sellPrice = 4; };
	class DDR_Item_Rice								{ quality = 1; price = 80; sellPrice = 2; };
	
	///////////////////////////////////////////////////////////////////////////////
	// Drinks
	///////////////////////////////////////////////////////////////////////////////
	
	class Exile_Item_Beer 							{ quality = 0; price = 200; sellPrice = 20; }; //75, 30
	class DDR_Item_Canteen_Coffee					{ quality = 1; price = 150; sellPrice = 15; };
	class DDR_Item_Canteen_Fresh			        { quality = 1; price = 100; sellPrice = 10; };
	class DDR_Item_Canteen							{ quality = 1; price = 10; sellPrice = 1; };
	class DDR_Item_Coke					            { quality = 1; price = 50; sellPrice = 5; };
	class DDR_Item_Jackoff				            { quality = 1; price = 400; sellPrice = 40; };

	///////////////////////////////////////////////////////////////////////////////
	// First Aid
	///////////////////////////////////////////////////////////////////////////////
	
	class Exile_Item_Defibrillator                  { quality = 3; price = 1000; };
	class DDR_Item_Painkillers	                    { quality = 0; price = 40; };
	class DDR_Item_Dressing		                    { quality = 1; price = 100; };
	class Exile_Item_Bandage	                    { quality = 0; price = 20; };
	class FirstAidKit			                    { quality = 1; price = 300; };
		
	///////////////////////////////////////////////////////////////////////////////
	// Tools
	///////////////////////////////////////////////////////////////////////////////
	
	class Exile_Item_Matches 						{ quality = 0; price = 100; };
	class Exile_Item_CookingPot						{ quality = 1; price = 200; };
	class Exile_Melee_Axe							{ quality = 1; price = 200; };
	class Exile_Melee_SledgeHammmer					{ quality = 1; price = 200; };
	class Exile_Item_CanOpener						{ quality = 0; price = 100; };
	class Exile_Item_Handsaw						{ quality = 1; price = 500; };
	class Exile_Item_Pliers							{ quality = 1; price = 350; };
	class Exile_Item_Grinder						{ quality = 1; price = 1200; };
	class Exile_Item_Foolbox						{ quality = 1; price = 4000; };
	class Exile_Item_Screwdriver					{ quality = 1; price = 250; };
	class Exile_Item_Shovel							{ quality = 1; price = 200; };
	class Exile_Item_Wrench							{ quality = 1; price = 250; };
	class Exile_Item_Knife							{ quality = 1; price = 250; };
	class Exile_Item_FireExtinguisher				{ quality = 1; price = 650; };
	class Exile_Item_Hammer							{ quality = 1; price = 500; };
	class uns_leaflet12								{ quality = 0; price = 50; };
	class uns_item_condoms							{ quality = 0; price = 50; };
	class uns_item_zippo							{ quality = 0; price = 100; };
	class DDR_Item_Fishing_Net						{ quality = 0; price = 500; };
	
	///////////////////////////////////////////////////////////////////////////////
	// Repair Parts
	///////////////////////////////////////////////////////////////////////////////
	
	class DDR_Item_Glass	 						{ quality = 0; price = 200; };
	class DDR_Item_Fiberglass 						{ quality = 0; price = 400; };
	class Exile_Item_CarWheel						{ quality = 0; price = 200; };
	class DDR_Item_Battery							{ quality = 0; price = 500; };
	class DDR_Item_Fuel_Tank						{ quality = 0; price = 1000; };
	class DDR_Item_Tailrotor						{ quality = 0; price = 1000; };
	class DDR_Item_Main_Rotor						{ quality = 0; price = 1500; };
	class DDR_Item_Engine							{ quality = 0; price = 1500; };
		
	///////////////////////////////////////////////////////////////////////////////
	// Navigation
	///////////////////////////////////////////////////////////////////////////////
	
	class ItemMap									{ quality = 0; price = 60; };
	class ItemCompass								{ quality = 0; price = 60; };
	class ItemRadio									{ quality = 0; price = 50; };
	class Binocular									{ quality = 0; price = 100; };
	class Exile_Item_XM8							{ quality = 0; price = 50; };
	
	///////////////////////////////////////////////////////////////////////////////
	// Watch out for a Walter fart! He has gas!
	///////////////////////////////////////////////////////////////////////////////
	
	class Exile_Headgear_GasMask					{ quality = 3; price = 400; };

	///////////////////////////////////////////////////////////////////////////////
	// US Backpacks
	///////////////////////////////////////////////////////////////////////////////
	
	class UNS_ARMY_RTO								{ quality = 1; price = 900; };
	class UNS_ARMY_RTO2								{ quality = 1; price = 900; };
	class UNS_SF_RTO2								{ quality = 1; price = 1200; };
	class UNS_Alice_LRP2							{ quality = 1; price = 1500; };
	class UNS_Alice_F3								{ quality = 1; price = 1300; };
	class UNS_Alice_F4								{ quality = 1; price = 1000; };
	class UNS_Alice_F5								{ quality = 1; price = 1100; };
	class UNS_Alice_F6								{ quality = 1; price = 1200; };
	class UNS_Alice_F7								{ quality = 1; price = 1200; };
	class UNS_Alice_F8								{ quality = 1; price = 1200; };
	class UNS_Alice_F9								{ quality = 1; price = 1400; };
	class UNS_Alice_F10								{ quality = 1; price = 1200; };
	class UNS_Alice_F11								{ quality = 1; price = 900; };
							
	///////////////////////////////////////////////////////////////////////////////
	// NVA Backpacks
	///////////////////////////////////////////////////////////////////////////////
	
	class UNS_VC_R1									{ quality = 1; price = 900; };
	class UNS_VC_R1_RPG								{ quality = 1; price = 900; };
	class uns_men_NVA_68_Rmg_Bag					{ quality = 1; price = 900; };
	
	///////////////////////////////////////////////////////////////////////////////
	// Ammunition
	///////////////////////////////////////////////////////////////////////////////
	
	class uns_12gaugemag_4 							{ quality = 0; price = 50; };
	class uns_12gaugemag_6 							{ quality = 0; price = 75; };
	class uns_m870mag 								{ quality = 0; price = 100; };
	class uns_ithaca37mag 							{ quality = 0; price = 75; };
	class uns_m1897mag 								{ quality = 0; price = 100; };
	class uns_model12mag 							{ quality = 0; price = 100; };
	class uns_Rugermag 								{ quality = 0; price = 50; };
	class uns_ppkmag 								{ quality = 0; price = 50; };
	class uns_38specmag 							{ quality = 0; price = 50; };
	class uns_357mag 								{ quality = 0; price = 50; };
	class uns_m1911mag 								{ quality = 0; price = 50; };
	class uns_coltcmdrmag 							{ quality = 0; price = 50; };
	class uns_13Rnd_hp 								{ quality = 0; price = 50; };
	class uns_makarovmag 							{ quality = 0; price = 50; };
	class uns_20Rnd_APS 							{ quality = 0; price = 100; };
	class uns_20Rnd_sa61 							{ quality = 0; price = 100; };
	class uns_mac10mag 								{ quality = 0; price = 100; };
	class uns_32Rnd_uzi 							{ quality = 0; price = 100; };
	class uns_stenmag								{ quality = 0; price = 100; };
	class uns_thompsonmag_30						{ quality = 0; price = 100; };
	class uns_m3a1mag 								{ quality = 0; price = 100; };
	class uns_k50mag 								{ quality = 0; price = 100; };
	class uns_30Rnd_kurtz_stg  						{ quality = 0; price = 200; };
	class uns_m2carbinemag 							{ quality = 0; price = 100; };
	class uns_m2carbinemag_T 						{ quality = 0; price = 100; };
	class uns_m1garandmag 							{ quality = 0; price = 100; };
	class uns_m1garandmag_T 						{ quality = 0; price = 100; };
	class uns_m14mag 								{ quality = 0; price = 200; };
	class uns_m14mag_T 								{ quality = 0; price = 200; };
	class uns_svdmag_T 								{ quality = 0; price = 200; };
	class uns_model70mag 							{ quality = 0; price = 100; };
	class uns_model70mag_T 							{ quality = 0; price = 100; };
	class uns_smlemag								{ quality = 0; price = 100; };
	class uns_smlemag_T								{ quality = 0; price = 100; };
	class uns_mas36mag								{ quality = 0; price = 100; };
	class uns_mas36mag_T 							{ quality = 0; price = 100; };
	class uns_mas4956mag 							{ quality = 0; price = 200; };
	class uns_mas4956mag_T 							{ quality = 0; price = 200; };
	class uns_mosinmag 								{ quality = 0; price = 100; };
	class uns_mosinmag_T 							{ quality = 0; price = 100; };
	class uns_kar98kmag 							{ quality = 0; price = 100; };
	class uns_kar98kmag_T 							{ quality = 0; price = 100; };
	class uns_30Rnd_556x45_Stanag					{ quality = 0; price = 100; };
	class uns_30Rnd_556x45_Stanag_T					{ quality = 0; price = 100; };
	class uns_sksmag								{ quality = 0; price = 100; };
	class uns_sksmag_T 								{ quality = 0; price = 100; };
	class uns_ak47mag 								{ quality = 0; price = 100; };
	class uns_sa58mag 								{ quality = 0; price = 100; };
	class uns_ak47mag_T 							{ quality = 0; price = 100; };
	class uns_sa58mag_T 							{ quality = 0; price = 100; };
	class uns_rpkmag 								{ quality = 2; price = 250; };
	class uns_rpdmag 								{ quality = 2; price = 250; };
	class uns_47Rnd_DP28							{ quality = 2; price = 200; };
	class uns_250Rnd_792x57_Mg42 					{ quality = 2; price = 400; };
	class uns_barmag 								{ quality = 2; price = 250; };
	class uns_barmag_T 								{ quality = 2; price = 250; };
	class uns_100Rnd_127x99_M2 						{ quality = 3; price = 550; };
	class uns_200Rnd_127x99_M2 						{ quality = 3; price = 750; };
	class uns_500Rnd_127x99_M2 						{ quality = 3; price = 1000; };
	class uns_1000Rnd_127x99_M2 					{ quality = 3; price = 2000; };
	class uns_m60mag_200 							{ quality = 3; price = 450; };
	class uns_m60mag_500 							{ quality = 3; price = 850; };

	///////////////////////////////////////////////////////////////////////////////
	// Flares
	///////////////////////////////////////////////////////////////////////////////
	
	class uns_40mm_white							{ quality = 1; price = 10; };
	class uns_40mm_green							{ quality = 1; price = 10; };
	class uns_40mm_red								{ quality = 1; price = 10; };
	class uns_40mm_yellow							{ quality = 1; price = 10; };
	class uns_40mm_mkv_White						{ quality = 1; price = 10; };
	class uns_40mm_mkv_Green						{ quality = 1; price = 10; };
	class uns_40mm_mkv_Red							{ quality = 1; price = 10; };
	class uns_40mm_mkv_Yellow						{ quality = 1; price = 10; };

	///////////////////////////////////////////////////////////////////////////////
	// Smokes
	///////////////////////////////////////////////////////////////////////////////
	
	class uns_1Rnd_Smoke_MKV						{ quality = 1; price = 10; };
	class uns_1Rnd_SmokeRed_MKV						{ quality = 1; price = 10; };
	class uns_1Rnd_SmokeGreen_MKV					{ quality = 1; price = 10; };
	class uns_1Rnd_SmokeYellow_MKV					{ quality = 1; price = 10; };
	class uns_1Rnd_Smoke_40mm						{ quality = 1; price = 10; };
	class uns_1Rnd_SmokeRed_40mm					{ quality = 1; price = 10; };
	class uns_1Rnd_SmokeGreen_40mm					{ quality = 1; price = 10; };
	class uns_1Rnd_SmokeYellow_40mm					{ quality = 1; price = 10; };
	class uns_m18Purple								{ quality = 1; price = 10; };
	class uns_m18Yellow								{ quality = 1; price = 10; };
	class uns_m18Green								{ quality = 1; price = 10; };
	class uns_m18red								{ quality = 1; price = 10; };
	class uns_m18white								{ quality = 1; price = 10; };
	class uns_m18Orange								{ quality = 1; price = 10; };
	class uns_m18Blue								{ quality = 1; price = 10; };
	
	///////////////////////////////////////////////////////////////////////////////
	// Explosives
	///////////////////////////////////////////////////////////////////////////////
	
	class uns_ex41mag								{ quality = 3; price = 500; };
	class Uns_1Rnd_HE_M381							{ quality = 3; price = 150; };
	class Uns_1Rnd_HE_M406							{ quality = 3; price = 150; };
	class PipeBomb									{ quality = 5; price = 500; };
	class uns_m308gren								{ quality = 3; price = 150; };
	class uns_m14gren								{ quality = 3; price = 150; };
	class uns_m34gren								{ quality = 3; price = 150; };
	class uns_m67gren								{ quality = 3; price = 150; };
	class uns_m61gren								{ quality = 3; price = 150; };
	class uns_f1gren								{ quality = 3; price = 150; };
	class uns_rg42gren								{ quality = 3; price = 150; };
	class uns_t67gren								{ quality = 3; price = 150; };
	class uns_rgd33gren								{ quality = 3; price = 150; };
	class uns_rgd5gren								{ quality = 3; price = 150; };
	class uns_30Rnd_155mmHE							{ quality = 5; price = 7500; };
	class uns_30Rnd_155mmSMOKE						{ quality = 5; price = 3750; };
	class uns_30Rnd_155mmILLUM						{ quality = 5; price = 3750; };
	class uns_rpg2									{ quality = 5; price = 2500; };
	class uns_B40									{ quality = 5; price = 2500; };
	class uns_rpg7									{ quality = 5; price = 2500; };
	class uns_rpg2grenade							{ quality = 5; price = 500; };
	class uns_B40grenade							{ quality = 5; price = 500; };
	class uns_rpg7grenade							{ quality = 5; price = 500; };
			
	///////////////////////////////////////////////////////////////////////////////
	// Pistols
	///////////////////////////////////////////////////////////////////////////////
	
	class uns_ppk 									{ quality = 0; price = 150; };
	class uns_Ruger 								{ quality = 0; price = 150; };
	class uns_38spec 								{ quality = 0; price = 200; };
	class uns_357m 									{ quality = 0; price = 200; };
	class uns_bhp 									{ quality = 0; price = 250; };
	class uns_coltcmdr 								{ quality = 0; price = 250; };
	class uns_m1911 								{ quality = 0; price = 250; };
	class uns_mkvFlarePistol 						{ quality = 0; price = 150; };
	class uns_makarov 								{ quality = 0; price = 150; };
	class uns_APS 									{ quality = 1; price = 250; };
	class uns_sa61_p 								{ quality = 1; price = 300; };
	class uns_Tt33 									{ quality = 0; price = 150; };
	class uns_p64	 								{ quality = 0; price = 150; };

	///////////////////////////////////////////////////////////////////////////////
	// Sub Machine Guns
	///////////////////////////////////////////////////////////////////////////////
	
	class uns_uzi 									{ quality = 1; price = 550; };
	class uns_mac10 								{ quality = 1; price = 550; };
	class uns_sten 									{ quality = 1; price = 550; };
	class uns_Sterling 								{ quality = 1; price = 550; };
	class uns_thompson 								{ quality = 1; price = 550; };
	class uns_m3a1 									{ quality = 1; price = 550; };
	class uns_k50m 									{ quality = 1; price = 550; };

	///////////////////////////////////////////////////////////////////////////////
	// Light Machine Guns
	///////////////////////////////////////////////////////////////////////////////
	
	class uns_bar									{ quality = 2; price = 1200; };
	class uns_m60									{ quality = 2; price = 1200; };
	class uns_RPK_drum								{ quality = 2; price = 1200; };
	class uns_PK									{ quality = 2; price = 1200; };
	class uns_RPD_drum								{ quality = 2; price = 1200; };
	class uns_rpd									{ quality = 2; price = 1200; };
	class uns_MG42									{ quality = 2; price = 1200; };

	///////////////////////////////////////////////////////////////////////////////
	// Rifles
	///////////////////////////////////////////////////////////////////////////////
	
	class uns_M16A1									{ quality = 1; price = 800; };
	class uns_xm177e1								{ quality = 2; price = 1000; };
	class uns_xm177e2								{ quality = 2; price = 1000; };
	class uns_m2carbine								{ quality = 0; price = 500; };
	class uns_m1garand								{ quality = 0; price = 500; };
	class uns_m14									{ quality = 2; price = 1200; };
	class uns_model70_iron							{ quality = 2; price = 1000; };
	class uns_sks									{ quality = 0; price = 500; };
	class uns_mosin									{ quality = 1; price = 500; };
	class uns_kar98k								{ quality = 0; price = 850; };
	class uns_smle									{ quality = 0; price = 550; };
	class uns_mas36									{ quality = 0; price = 550; };
	class uns_mas4956								{ quality = 2; price = 1000; };
	class uns_ak47									{ quality = 1; price = 800; };
	class uns_ak47_52								{ quality = 1; price = 800; };
	class uns_sa58p									{ quality = 1; price = 800; };
	class uns_sa58v									{ quality = 1; price = 800; };
	class uns_akms									{ quality = 1; price = 800; };
	class uns_AKM									{ quality = 1; price = 800; };

	///////////////////////////////////////////////////////////////////////////////
	// Shotguns
	///////////////////////////////////////////////////////////////////////////////
	
	class uns_ithaca37 								{ quality = 1; price = 450; };
	class uns_m1897 								{ quality = 1; price = 450; };
	class uns_model12 								{ quality = 1; price = 450; };
	class uns_baikal 								{ quality = 1; price = 450; };
	class uns_m870 									{ quality = 1; price = 450; };
	class uns_m79 									{ quality = 2; price = 2000; };
	class uns_ex41 									{ quality = 2; price = 2500; };
	
	///////////////////////////////////////////////////////////////////////////////
	// BOATS
	///////////////////////////////////////////////////////////////////////////////
	
	class UNS_Zodiac_W								{ quality = 0; price = 3000; };
	class UNS_PATROL_BOAT_NVA						{ quality = 1; price = 12000; };
	class UNS_ASSAULT_BOAT_VC						{ quality = 1; price = 12000; };
	class uns_pbr									{ quality = 2; price = 15000; };
	class uns_pbr_mk18								{ quality = 2; price = 15000; };
	class uns_PBR_M10								{ quality = 2; price = 15000; };

	///////////////////////////////////////////////////////////////////////////////
	// Cars
	///////////////////////////////////////////////////////////////////////////////
	
	class uns_m274									{ quality = 0; price = 2000; };
	class uns_m274_m60								{ quality = 1; price = 4000; };
	class uns_willys								{ quality = 1; price = 3000; };
	class uns_willys_2								{ quality = 1; price = 3000; };
	class uns_m37b1									{ quality = 1; price = 5000; };
	class uns_m37b1_m1919							{ quality = 1; price = 12000; };
	class uns_willys_2_usmp							{ quality = 1; price = 3000; };
	class uns_willys_2_m60							{ quality = 2; price = 8000; };
	class uns_willys_2_m1919						{ quality = 2; price = 10000; };
	class uns_Type55_LMG							{ quality = 2; price = 8000; };
	class uns_Type55								{ quality = 1; price = 5000; };
	class uns_BTR152_DSHK							{ quality = 2; price = 10000; };
	class TowingTractor								{ quality = 0; price = 1000; };
	
	///////////////////////////////////////////////////////////////////////////////
	// Trucks
	///////////////////////////////////////////////////////////////////////////////
	
	class uns_zil157								{ quality = 1; price = 10000; };
	class uns_nvatruck_open							{ quality = 1; price = 15000; };
	class uns_nvatruck								{ quality = 1; price = 15000; };
	class uns_nvatruck_mg							{ quality = 3; price = 25000; };
	class uns_zil157_repair							{ quality = 2; price = 20000; };
	class uns_nvatruck_repair						{ quality = 2; price = 25000; };
	class uns_M35A2									{ quality = 2; price = 15000; };
	class uns_M35A2_Open							{ quality = 2; price = 15000; };
	class uns_M35A2_fueltanker						{ quality = 5; price = 70000; };
	class uns_M35A2_repair							{ quality = 5; price = 70000; };
	class uns_M35A2_ammo							{ quality = 3; price = 25000; };
			
	///////////////////////////////////////////////////////////////////////////////
	// APCs
	///////////////////////////////////////////////////////////////////////////////
	
	class uns_M132									{ quality = 4; price = 50000; };
	class uns_M113_30cal							{ quality = 4; price = 50000; };
	class uns_M113_M60								{ quality = 4; price = 50000; };
	class uns_M577_amb								{ quality = 2; price = 40000; };
	class uns_M113_transport						{ quality = 2; price = 30000; };
	class uns_xm706e1								{ quality = 3; price = 40000; };
	class uns_M113_ENG								{ quality = 5; price = 70000; };
	
	///////////////////////////////////////////////////////////////////////////////
	// Tanks
	///////////////////////////////////////////////////////////////////////////////
	
	class uns_m551									{ quality = 6; price = 500000; };
	
	///////////////////////////////////////////////////////////////////////////////
	// Artillery
	///////////////////////////////////////////////////////////////////////////////
	
	class Uns_M114_artillery						{ quality = 6; price = 50000; };
	class Uns_M55_Quad								{ quality = 6; price = 30000; };
	
	///////////////////////////////////////////////////////////////////////////////
	// Attack Helicopters
	///////////////////////////////////////////////////////////////////////////////

	class uns_UH1D_m60								{ quality = 4; price = 50000; };
	class uns_Mi8TV_VPAF_MG							{ quality = 4; price = 50000; };
	class uns_UH1C_M21_M200							{ quality = 6; price = 100000; };
	class UNS_AH1G_FFAR								{ quality = 6; price = 100000; };
	class uns_h21c_mg								{ quality = 3; price = 45000; };
	class uns_H13_transport_Army					{ quality = 3; price = 30000; };
	class uns_ch34_army_M60							{ quality = 3; price = 35000; };
	class uns_H13_gunship_Army						{ quality = 3; price = 35000; };
	class uns_ch47_m60_army							{ quality = 5; price = 65000; };
	class uns_ch53d_m2_usmc							{ quality = 5; price = 55000; };
	
	///////////////////////////////////////////////////////////////////////////////
	// Utility Helicopters
	///////////////////////////////////////////////////////////////////////////////

	class uns_H13_medevac_Army						{ quality = 2; price = 25000; };
	class uns_ch34_army								{ quality = 2; price = 30000; };
	class uns_h21c									{ quality = 2; price = 40000; };
	class uns_uh1D_med								{ quality = 2; price = 45000; };
	class uns_ch47a_medevac							{ quality = 3; price = 55000; };
	class uns_oh6_transport							{ quality = 2; price = 40000; };
	class uns_H13_amphib_Army						{ quality = 2; price = 25000; };
	class uns_Mi8MB_VPAF_medevac					{ quality = 2; price = 40000; };
	
	///////////////////////////////////////////////////////////////////////////////
	// Planes
	///////////////////////////////////////////////////////////////////////////////

	class UNS_skymaster_OBS							{ quality = 2; price = 25000; };
	class uns_c1a6									{ quality = 2; price = 35000; };
	class uns_AC47									{ quality = 4; price = 50000; };
	class uns_ov10_usaf								{ quality = 5; price = 70000; };
		
	///////////////////////////////////////////////////////////////////////////////
	// Flags
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Item_FlagStolen1					{ quality = 1; price = 5000; sellPrice = 5000; };
	class Exile_Item_FlagStolen2					{ quality = 1; price = 5000; sellPrice = 5000; };
	class Exile_Item_FlagStolen3					{ quality = 1; price = 5000; sellPrice = 5000; };
	class Exile_Item_FlagStolen4					{ quality = 1; price = 5000; sellPrice = 5000; };
	class Exile_Item_FlagStolen5					{ quality = 1; price = 5000; sellPrice = 5000; };
	class Exile_Item_FlagStolen6					{ quality = 1; price = 5000; sellPrice = 5000; };
	class Exile_Item_FlagStolen7					{ quality = 1; price = 5000; sellPrice = 5000; };
	class Exile_Item_FlagStolen8					{ quality = 1; price = 5000; sellPrice = 5000; };
	class Exile_Item_FlagStolen9					{ quality = 1; price = 5000; sellPrice = 5000; };
	class Exile_Item_FlagStolen10					{ quality = 1; price = 5000; sellPrice = 5000; };
};

class CfgExileCustomCode 
{
	ExileClient_object_player_death_startBleedingOut = "custom\EnigmaRevive\ExileClient_object_player_death_startBleedingOut.sqf"; //Happys Revive
	ExileClient_object_player_event_onInventoryOpened = "custom\EnigmaRevive\ExileClient_object_player_event_onInventoryOpened.sqf"; //Happys Revive AntiDupe ---NEW with v0.65
	ExileServer_object_player_network_createPlayerRequest = "custom\CustomLoadout\ExileServer_object_player_network_createPlayerRequest.sqf"; //Startgear
	ExileServer_object_player_createBambi = "custom\CustomLoadout\ExileServer_object_player_createBambi.sqf"; //Startgear
	ExileClient_system_lootManager_thread_spawn = "custom\ExileClient_system_lootManager_thread_spawn.sqf"; //helicrashes
	ExileClient_gui_hud_event_onKeyUp = "overrides\ExileClient_gui_hud_event_onKeyUp.sqf"; //fishing
	ExileServer_system_event_supplyBox_start = "overrides\ExileServer_system_event_supplyBox_start.sqf"; //supplydrop
	ExileServer_system_event_ambientFlyOver_start = "overrides\ExileServer_system_event_ambientFlyOver_start.sqf"; //flyover
};

class CfgExileEnvironment
{
	class Altis 
	{
		class FireFlies
		{
			enable = 0;

			startHour = 18;

			endHour = 4;
		};

		class Anomalies
		{
			enable = 0;

			startHour = 19;

			endHour = 6;
		};

		class Breathing
		{
			enable = 0;
		};

		class Snow
		{
			enable = 0;

			surfaces[] = {};
		};

		class Radiation 
		{
			enable = 1;
		};

		class Temperature
		{
			daytimeTemperature[] = {15.93,16.89,18.42,20.40,22.68,25.10,27.48,29.63,31.40,32.66,33.32,33.80,33.80,33.32,32.66,31.40,29.63,27.48,25.10,22.68,20.40,18.42,16.89,15.93,15.93};
		
			overcast = -2;

			rain = -5;

			wind = -1;

			altitude = -0.5;

			water = -5;
		};
	};

	class psyfx_pht: Altis
	{
		class FireFlies: FireFlies
		{
			enable = 1;
			
			startHour = 19;

			endHour = 5;
		};

		class Anomalies: Anomalies
		{
			enable = 0;
		};

		class Breathing: Breathing
		{
			enable = 0;
		};

		class Snow: Snow
		{
			enable = 0;
		};

		class Radiation: Radiation
		{
			enable = 0;
		};

		class Temperature: Temperature
		{
			daytimeTemperature[] = {20.93,21.89,23.42,25.40,27.68,30.10,32.48,34.63,36.40,37.66,38.32,38.80,38.80,38.32,37.66,36.40,34.63,32.48,30.10,27.68,25.40,23.42,21.89,20.93,20.93};
			
			overcast = -2;

			rain = -3;

			wind = -2;

			altitude = -1;

			water = -5;
		};
	};
};

class CfgExileHUD
{
	class ShortItemNames
	{
		SmokeShell[] 						= {"WHITE", 	"SMOKE"};
		1Rnd_Smoke_Grenade_shell[] 			= {"WHITE", 	"SMOKE"};
		3Rnd_Smoke_Grenade_shell[] 			= {"WHITE", 	"SMOKE"};

		SmokeShellBlue[] 					= {"BLUE", 		"SMOKE"};
		1Rnd_SmokeBlue_Grenade_shell[] 		= {"BLUE", 		"SMOKE"};
		3Rnd_SmokeBlue_Grenade_shell[] 		= {"BLUE", 		"SMOKE"};

		SmokeShellGreen[] 					= {"GREEN", 	"SMOKE"};
		1Rnd_SmokeGreen_Grenade_shell[] 	= {"GREEN", 	"SMOKE"};
		3Rnd_SmokeGreen_Grenade_shell[] 	= {"GREEN", 	"SMOKE"};

		SmokeShellOrange[] 					= {"ORANGE", 	"SMOKE"};
		1Rnd_SmokeOrange_Grenade_shell[]	= {"ORANGE", 	"SMOKE"};
		3Rnd_SmokeOrange_Grenade_shell[] 	= {"ORANGE", 	"SMOKE"};

		SmokeShellPurple[] 					= {"PURPLE", 	"SMOKE"};
		1Rnd_SmokePurple_Grenade_shell[] 	= {"PURPLE", 	"SMOKE"};
		3Rnd_SmokePurple_Grenade_shell[] 	= {"PURPLE", 	"SMOKE"};

		SmokeShellRed[] 					= {"RED", 		"SMOKE"};
		1Rnd_SmokeRed_Grenade_shell[] 		= {"RED", 		"SMOKE"};
		3Rnd_SmokeRed_Grenade_shell[] 		= {"RED", 		"SMOKE"};
				
		SmokeShellYellow[] 					= {"YELLOW", 	"SMOKE"};
		1Rnd_SmokeYellow_Grenade_shell[] 	= {"YELLOW", 	"SMOKE"};
		3Rnd_SmokeYellow_Grenade_shell[] 	= {"YELLOW", 	"SMOKE"};
				
		UGL_FlareCIR_F[] 					= {"IR", 		"FLARE"};
		3Rnd_UGL_FlareCIR_F[] 				= {"IR", 		"FLARE"};

		UGL_FlareGreen_F[] 					= {"GREEN", 	"FLARE"};
		3Rnd_UGL_FlareGreen_F[] 			= {"GREEN", 	"FLARE"};

		UGL_FlareRed_F[] 					= {"RED", 		"FLARE"};
		3Rnd_UGL_FlareRed_F[] 				= {"RED", 		"FLARE"};

		UGL_FlareWhite_F[] 					= {"WHITE", 	"FLARE"};
		3Rnd_UGL_FlareWhite_F[] 			= {"WHITE", 	"FLARE"};

		UGL_FlareYellow_F[] 				= {"YELLOW", 	"FLARE"};
		3Rnd_UGL_FlareYellow_F[] 			= {"YELLOW", 	"FLARE"};

		Chemlight_blue[] 					= {"BLUE", 		"LIGHT"};
		Chemlight_green[] 					= {"GREEN", 	"LIGHT"};
		Chemlight_red[] 					= {"RED", 		"LIGHT"};
		Chemlight_yellow[] 					= {"YELLOW", 	"LIGHT"};

		1Rnd_HE_Grenade_shell[] 			= {"40MM"};
		3Rnd_HE_Grenade_shell[] 			= {"40MM"};

		O_IR_Grenade[] 						= {"IR"};
		I_IR_Grenade[] 						= {"IR"};
		B_IR_Grenade[] 						= {"IR"};

		HandGrenade[] 						= {"RGO"};
		MiniGrenade[] 						= {"RGN"};

		Exile_Item_ZipTie[]					= {"ZIP", "TIE"};
	};
};

class CfgExileLootSettings
{
	lifeTime = 8;

	spawnInterval = 30;

	maximumPositionCoverage = 30;

 	maximumNumberOfLootSpotsPerBuilding = 3;

	maximumNumberOfItemsPerLootSpot = 2;

	spawnRadius = 60;

	minimumDistanceToTraderZones = 100;

	minimumDistanceToTerritories = 150;
};

class CfgExileMobileXM8
{
	code = "";
};

class CfgExileMusic
{
	Ambient[] = {"ExileTrack03","ExileTrack04"};
	Combat[] = {"ExileTrack06","ExileTrack07"};
	Intro[] = {"ExileTrack02","ExileTrack03"};
};

class CfgExileParty 
{
	showESP = 1;
	allow3DMarkers = 1;
};

class CfgExileRussianRoulette
{
	buyInAmount = 2500;
};

class CfgFlags 
{
	class USA
	{
		name = "USA";
		texture = "\A3\Data_F\Flags\flag_us_co.paa";
		uids[] = {};
	};
};

class ExileAbstractAction
{
	title = "";
	condition = "true";
	action = "";
	priority = 1.5;
	showWindow = false;
};

class CfgInteractionMenus
{
	
	#include "EBM\menus.hpp"
	
	class Car 
	{
		targetType = 2;
		target = "Car";

		class Actions 
		{
			class Lock: ExileAbstractAction
			{
				title = "LOCK";
				condition = "((locked ExileClientInteractionObject) isEqualTo 0) && ((locked ExileClientInteractionObject) != 1)";
				action = "true spawn ExileClient_object_lock_toggle";
			};

			class Unlock: ExileAbstractAction
			{
				title = "UNLOCK";
				condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
				action = "false spawn ExileClient_object_lock_toggle";
			};

			//Bones Custom Vehicle Repairs
			class Repair: ExileAbstractAction
			{
				title = "REPAIR/SALVAGE";
				condition = "true";
				action = "_this call Bones_fnc_salvageAndRepairMenuCar";
			};

			class Refuel: ExileAbstractAction
			{
				title = "REFUEL";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_refuel";
			};

			class DrainFuel: ExileAbstractAction
			{
				title = "DRAIN FUEL";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_drain";
			};
		};
	};
	
	class Tank 
	{
		targetType = 2;
		target = "Tank";

		class Actions 
		{
			class Lock: ExileAbstractAction
			{
				title = "LOCK";
				condition = "((locked ExileClientInteractionObject) isEqualTo 0) && ((locked ExileClientInteractionObject) != 1)";
				action = "true spawn ExileClient_object_lock_toggle";
			};

			class Unlock: ExileAbstractAction
			{
				title = "UNLOCK";
				condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
				action = "false spawn ExileClient_object_lock_toggle";
			};

			// Bones Custom Tank Repairs
			class Repair: ExileAbstractAction
			{
				title = "REPAIR/SALVAGE";
				condition = "true";
				action = "_this call Bones_fnc_salvageAndRepairMenuTank";
			};

			class Refuel: ExileAbstractAction
			{
				title = "REFUEL";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_refuel";
			};

			class DrainFuel: ExileAbstractAction
			{
				title = "DRAIN FUEL";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_drain";
			};
		};
	};
	
	class StaticWeapon 
	{
		targetType = 2;
		target = "StaticWeapon";

		class Actions 
		{
			class Lock: ExileAbstractAction
			{
				title = "LOCK";
				condition = "((locked ExileClientInteractionObject) isEqualTo 0) && ((locked ExileClientInteractionObject) != 1)";
				action = "true spawn ExileClient_object_lock_toggle";
			};

			class Unlock: ExileAbstractAction
			{
				title = "UNLOCK";
				condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
				action = "false spawn ExileClient_object_lock_toggle";
			};

			class Repair: ExileAbstractAction
			{
				title = "REPAIR";
				condition = "true";
				action = "['RepairVehicle', _this select 0] call ExileClient_action_execute";
			};
			
			class RotateLeft: ExileAbstractAction
			{
				title = "TURN LEFT";	
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "[ExileClientInteractionObject,-15] call ExileClient_object_vehicle_rotate";
			};

			class RotateRight: ExileAbstractAction
			{
				title = "TURN RIGHT";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "[ExileClientInteractionObject,15] call ExileClient_object_vehicle_rotate";
			};
		};
	};

	class Air
	{
		target = "Air";
		targetType = 2;

		class Actions
		{
			class Lock: ExileAbstractAction
			{
				title = "LOCK";
				condition = "((locked ExileClientInteractionObject) isEqualTo 0) && ((locked ExileClientInteractionObject) != 1)";
				action = "true spawn ExileClient_object_lock_toggle";
			};

			class Unlock: ExileAbstractAction
			{
				title = "UNLOCK";
				condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
				action = "false spawn ExileClient_object_lock_toggle";
			};

			// Bones Custom Air Repairs
			class Repair: ExileAbstractAction
			{
				title = "REPAIR/SALVAGE";
				condition = "true";
				action = "_this call Bones_fnc_salvageAndRepairMenuHelo";
			};

			class Refuel: ExileAbstractAction
			{
				title = "REFUEL";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_refuel";
			};

			class DrainFuel: ExileAbstractAction
			{
				title = "DRAIN FUEL";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_drain";
			};

			class RotateLeft: ExileAbstractAction
			{
				title = "TURN LEFT";	
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "[ExileClientInteractionObject,-15] call ExileClient_object_vehicle_rotate";
			};

			class RotateRight: ExileAbstractAction
			{
				title = "TURN RIGHT";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "[ExileClientInteractionObject,15] call ExileClient_object_vehicle_rotate";
			};
		};
	};

	class Safe
	{
		targetType = 2;
		target = "Exile_Container_Abstract_Safe";

		class Actions 
		{
			class Lock : ExileAbstractAction
			{
				title = "LOCK";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 0)";
				action = "true spawn ExileClient_object_lock_toggle";
			};

			class Unlock : ExileAbstractAction
			{
				title = "UNLOCK";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo -1)";
				action = "false spawn ExileClient_object_lock_toggle";
			};

			class Pack : ExileAbstractAction
			{
				title = "DECONSTRUCT";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 0)";
				action = "_this spawn ExileClient_object_container_pack";
			};

			class SetPinCode : ExileAbstractAction
			{
				title = "SET PIN";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 0)";
				action = "_this spawn ExileClient_object_lock_setPin";
			};
			
		};
	};

	/*
	class Laptop
	{
		targetType = 2;
		target = "Exile_Construction_Laptop_Static";

		class Actions
		{
			class CameraSystem: ExileAbstractAction
			{
				title = "Kamerazugriff/Use camera";
				condition = "((ExileClientInteractionObject animationPhase 'LaptopLidRotation') >= 0.5)";
				action = "_this call ExileClient_gui_baseCamera_show";
			};
		};
	};
	*/

	class SupplyBox
	{
		targetType = 2;
		target = "Exile_Container_SupplyBox";

		class Actions
		{
			class Mount: ExileAbstractAction
			{
				title = "Mount";
				condition = "(isNull (attachedTo ExileClientInteractionObject)) && ((ExileClientInteractionObject getvariable ['ExileOwnerUID',1]) isEqualTo 1)";
				action = "_this call ExileClient_object_supplyBox_mount";
			};

			class Install: ExileAbstractAction
			{
				title = "Install";
				condition = "isNull (attachedTo ExileClientInteractionObject) && ((ExileClientInteractionObject getvariable ['ExileOwnerUID',1]) isEqualTo 1)";
				action = "_this call ExileClient_object_supplyBox_install";
			};

			class Unmount: ExileAbstractAction
			{
				title = "Unmount";
				condition = "!(isNull (attachedTo ExileClientInteractionObject)) && ((ExileClientInteractionObject getvariable ['ExileOwnerUID',1]) isEqualTo 1)";
				action = "_this call ExileClient_object_supplyBox_unmount";
			};
		};
	};
	
	class Construction
	{
		targetType = 2;
		target = "Exile_Construction_Abstract_Static";

		class Actions 
		{
			class Unlock : ExileAbstractAction
			{
				title = "UNLOCK";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo -1)";
				action = "false spawn ExileClient_object_lock_toggle";
			};

			class Lock : ExileAbstractAction
			{
				title = "LOCK";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 0)";
				action = "true spawn ExileClient_object_lock_toggle";
			};

			class Move: ExileAbstractAction
			{
				title = "MOVE";
				condition = "call ExileClient_util_world_isInOwnTerritory";
				action = "_this spawn ExileClient_object_construction_move";
			};

			class Deconstruct: ExileAbstractAction
			{
				title = "DECONSTRUCT";
				condition = "call ExileClient_util_world_isInOwnTerritory";
				action = "_this spawn ExileClient_object_construction_deconstruct";
			};

			class AddALock : ExileAbstractAction
			{
				title = "ADD LOCK";
				condition = "call ExileClient_object_construction_lockAddShow";
				action = "_this spawn ExileClient_object_construction_lockAdd";
			};

			class Repair : ExileAbstractAction
			{
				title = "REPAIR";
				condition = "(!((ExileClientInteractionObject getVariable ['ExileConstructionDamage',0]) isEqualTo 0)) && (call ExileClient_util_world_isInOwnTerritory)";
				action = "_this call ExileClient_object_construction_repair";
			};

		};
	};

	class Container
	{
		targetType = 2;
		target = "Exile_Container_Abstract";

		class Actions 
		{
			class Pack 
			{
				title = "DECONSTRUCT";
				condition = "!((typeOf ExileClientInteractionObject) isEqualTo 'Exile_Container_SupplyBox')";
				action = "_this spawn ExileClient_object_container_pack";
			};
			
			class Move: ExileAbstractAction
			{
				title = "MOVE";
				condition = "(getNumber(configFile >> 'CfgVehicles' >> typeOf ExileClientInteractionObject >> 'exileIsLockable') isEqualTo 0) || ((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 0)";
				action = "_this spawn ExileClient_object_construction_move";
			};
		};
	};
	
	/*
	class Flag
	{
		targetType = 2;
		target = "Exile_Construction_Flag_Static";

		class Actions
		{
			class StealFlag: ExileAbstractAction
			{
				title = "STEAL FLAG";
				condition = "((ExileClientInteractionObject getvariable ['ExileFlagStolen',1]) isEqualTo 0)";
				action = "['StealFlag', _this select 0] call ExileClient_action_execute";
			};
			
			class RestoreFlag: ExileAbstractAction
			{
				title = "RESTORE FLAG";
				condition = "((ExileClientInteractionObject getvariable ['ExileFlagStolen',0]) isEqualTo 1)";
				action = "['restoreFlagRequest', [netID ExileClientInteractionObject]] call ExileClient_system_network_send";
			};
		};
	};
	*/

	class Boat 
	{
		targetType = 2;
		target = "Ship";

		class Actions
		{
			class Lock: ExileAbstractAction
			{
				title = "LOCK";
				condition = "((locked ExileClientInteractionObject) isEqualTo 0) && ((locked ExileClientInteractionObject) != 1)";
				action = "true spawn ExileClient_object_lock_toggle";
			};

			class Unlock: ExileAbstractAction
			{
				title = "UNLOCK";
				condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
				action = "false spawn ExileClient_object_lock_toggle";
			};

			// Bones Custom Boat Repairs
			class Repair: ExileAbstractAction
			{
				title = "REPAIR/SALVAGE";
				condition = "true";
				action = "_this call Bones_fnc_salvageAndRepairMenuBoat";
			};

			class Refuel: ExileAbstractAction
			{
				title = "REFUEL";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_refuel";
			};

			class DrainFuel: ExileAbstractAction
			{
				title = "DRAIN FUEL";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_drain";
			};

			class Push: ExileAbstractAction
			{
				title = "PUSH!";
				condition = "((crew ExileClientInteractionObject) isEqualTo [])";
				action = "_this call ExileClient_object_vehicle_push";
			};
		};
	};

	class Player 
	{
		targetType = 2;
		target = "Exile_Unit_Player";

		class Actions 
		{
			class Free: ExileAbstractAction
			{
				title = "FREE";
				condition = "(alive ExileClientInteractionObject) && (ExileClientInteractionObject getVariable ['ExileIsHandcuffed', false]) && !ExileClientIsHandcuffed";
				action = "_this call ExileClient_object_handcuffs_free";
			};
			
			class Search: ExileAbstractAction
			{
				title = "SEARCH";
				condition = "(alive ExileClientInteractionObject) && (ExileClientInteractionObject getVariable ['ExileIsHandcuffed', false]) && !ExileClientIsHandcuffed";
				action = "_this call ExileClient_object_handcuffs_searchGear";
			};

			class Identify: ExileAbstractAction
			{
				title = "IDENTIFY";
				condition = "!(alive ExileClientInteractionObject)";
				action = "_this call ExileClient_object_player_identifyBody";
			};
			
			class Revive: ExileAbstractAction
			{
				title = "REVIVE";
				condition = "(!(alive ExileClientInteractionObject) && (ExileClientInteractionObject getVariable ['EnigmaRevivePermitted', true]) && (magazines player find 'Exile_Item_Defibrillator' >= 0))";
				action = "_this spawn Enigma_RevivePlyr";
			};
			
			class HideCorpse: ExileAbstractAction
			{
				title = "HIDE";
				condition = "!(alive ExileClientInteractionObject) && ('Exile_Melee_Shovel' isEqualTo (currentWeapon player))";
				action = "['HideBody', (_this select 0)] call ExileClient_action_execute";
			};
		};
	};
	
	class Animal
	{
		targetType = 2;
		target = "Exile_Animal_Abstract";

		class Actions 
		{			
			class Gut: ExileAbstractAction
			{
				title = "BUTCHER";
				condition = "!(alive ExileClientInteractionObject) && (ExileClientInteractionObject getVariable ['CanBeGutted', false])";
				action = "['GutAnimal', ExileClientInteractionObject] call ExileClient_action_execute";
			};
		};
	};
};

class CfgInteractionModels
{
	class WaterSource
	{
		name = "Water tanks, barrels, coolers or pumps";
		models[] = 	
		{
			"barrelwater_f", 
			"barrelwater_grey_f",
			"waterbarrel_f",
			"watertank_f",
			"stallwater_f",
			"waterpump_01_f",
			"water_source_f",
			"wellpump",
			"Land_jhad_stand_water",
			"Land_Jbad_Misc_Well_L",
			"Land_jbad_Fridge",
			"Land_jbad_reservoir",
			"Land_jbad_teapot",
			"Land_KBud",
			"watertank_01_f",
			"watertank_02_f",
			"watertank_03_f",
			"watertank_04_f"
		};
	};

	class CleanWaterSource
	{
		name = "Water cooler";
		models[] = 	
		{
			"watercooler",
			"Land_misc_well_l_ep1"
		};
	};

	class WorkBench
	{
		name = "Work Bench";
		models[] = 
		{
			"workstand_f.p3d",
			"workbench_01_f.p3d"
		};
	};

	class ShippingContainerSource
	{
		name = "Shipping Containers";
		models[] = 
		{
			"CargoBox_V1_F",
			"Cargo20_blue_F",
			"Cargo20_brick_red_F",
			"Cargo20_cyan_F",
			"Cargo20_grey_F",
			"Cargo20_light_blue_F",
			"Cargo20_light_green_F",
			"Cargo20_military_green_F",
			"Cargo20_military_ruins_F",
			"Cargo20_orange_F",
			"Cargo20_red_F",
			"Cargo20_sand_F",
			"Cargo20_white_F",
			"Cargo20_yellow_F",
			"Cargo40_blue_F",
			"Cargo40_brick_red_F",
			"Cargo40_cyan_F",
			"Cargo40_grey_F",
			"Cargo40_light_blue_F",
			"Cargo40_light_green_F",
			"Cargo40_military_green_F",
			"Cargo40_orange_F",
			"Cargo40_red_F",
			"Cargo40_sand_F",
			"Cargo40_white_F",
			"Cargo40_yellow_F",
			"nam_container.p3d",
			"misc_cargo1d.p3d",
			"misc_cargo1b.p3d",
			"misc_cargo1bo.p3d",
			"misc_cargo2c.p3d",
			"misc_cargo1ao.p3d",
			"Land_ContainerLine_01_F",
			"Land_ContainerLine_02_F",
			"Land_ContainerLine_03_F",
			"wreck_"
		};
	};

	class WoodSource
	{
		name = "Trees";
		models[] = 
		{
			" t_",
			" bo_t_",
            " str_",
            " Smrk_",
            " les_",
            " brg_"			
		};
	};

	class FuelSource
	{
		name = "Fuel pumps, stations or barrels";
		models[] = 
		{
			"fuelstation_feed_f.p3d",
			"metalbarrel_f.p3d",
			"flexibletank_01_f.p3d",
			"fs_feed_f.p3d",
			"fuelstation_01_pump_f.p3d",
			"fuelstation_02_pump_f.p3d"
		};	
	};
};

class CfgLocker 
{
	numbersOnly = "0123456789";
	
	maxDeposit = 20000;
};

class CfgPlayer 
{
	hungerDecay = 90;
	thirstDecay = 60;

	healthDecay = 5.0;

	thirstRegen = 90;
	hungerRegen = 90;

	recoveryPerMinute = 2;

	customAimCoefficient = 0.5;

	enableFatigue = 0;
	enableStamina = 0;

	disableMapDrawing = 0;
	
	useGradientAffectedAutoRun = 1;
};

class CfgPoptabStorage
{
	class Exile_Container_Safe_Small { max = 250000; };	
};

class CfgSimulation
{
	enableDynamicSimulation = 1;
	
	groupSimulationDistance = 500;
	
	vehicleSimulationDistance = 350;
	
	emptyVehicleSimulationDistance = 250;
	
	propSimulationDistance = 50;
	
	isMovingSimulationCoef = 2;
};

class CfgSlothMachine
{
	spinCost = 250;
	Jackpot = 25000;
	
	chances[] = 
	{
		{85, ""}, 					// 85% = Nothing
		{95, "Level1"}, 			// 10% = 1pt
		{96, "Level2"}, 			// 1% = 10pt
		{97, "Level3"}, 			// 1% = 25pt
		{98, "Level4"}, 			// 1% = 50pt
		{99, "Level5"},				// 1% = 100pt
		{100, "Jackpot"} 			// 1% = Jackpot
	};

	class Prizes 
	{
		class Level1
		{
			symbol = "\exile_assets\texture\item\Exile_Item_ToiletPaper.paa";
			prize = 250;
		};

		class Level2
		{
			symbol = "\exile_assets\texture\item\Exile_Item_CockONut.paa";
			prize = 500;
		};

		class Level3
		{
			symbol = "\exile_assets\texture\item\Exile_Item_Beer.paa";
			prize = 1000;
		};

		class Level4
		{
			symbol = "\exile_assets\texture\item\Exile_Item_Knife.paa";
			prize = 5000;
		};

		class Level5
		{
			symbol = "\exile_assets\texture\item\Exile_Item_Safe.paa";
			prize = 10000;
		};
		
		class Jackpot
		{
			symbol = "\exile_assets\texture\item\Exile_Item_XmasPresent.paa";
		};
	};
};

class CfgTerritories
{
	prices[] = 
	{
		{5000,					15,			50 					}, // Level 1
		{5000,					30,			100 				}, // Level 2 
		{5000,					45,			150 				}, // Level 3
		{5000,					60,			200					}, // Level 4
		{5000,					75,			250					}, // Level 5
		{5000,					90,			300					}, // Level 6
		{5000,					105,		350					}, // Level 7
		{5000,					120,		400					}, // Level 8
		{5000,					135,		450					}, // Level 9
		{5000,					150,		500					}  // Level 10
	};

	maximumRadius = 150;

	minimumDistanceToOtherTerritories = 300; 

	maximumNumberOfTerritoriesPerPlayer = 1;

	minimumDistanceToTraderZones = 1500;

	minimumDistanceToSpawnZones = 1000;

	popTabAmountPerObject = 10;

	constructionBlockDuration = 5;
};

class CfgTraderCategories
{
	class USUniforms
	{
		name = "US Uniforms";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] =
		{
			"UNS_ARMY_BDU_ERDLipatch",
			"UNS_ARMY_ROKMC65Camo_ipatch",
			"UNS_SOG_BDU_BK",
			"UNS_SAS_BDU_T",
			"UNS_DUCK_BDU",
			"UNS_TIGER3_BDU",
			"UNS_USMC_BDU_65",
			"UNS_USMC_FLAK_65",
			"UNS_USMC_Flak_E",
			"UNS_USMC_Flak_ES",
			"UNS_USMC_LERDL",
			"UNS_Pilot_BDU"
		};
	};
	
	class USVests
	{
		name = "US Vests";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\vest_ca.paa";
		items[] =
		{
			"UNS_M1956_A1",
			"UNS_M1956_A2",
			"UNS_M1956_A3",
			"UNS_M1956_A4",
			"UNS_M1956_A5",
			"UNS_M1956_A6",
			"UNS_M1956_A7",
			"UNS_M1956_A8",
			"UNS_M1956_A9",
			"UNS_M1956_A10",
			"UNS_M1956_A11",
			"UNS_M1956_A12",
			"UNS_M1956_LRRP1"
		};
	};

	class USHeadgear
	{
		name = "US Headgear";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\headgear_ca.paa";
		items[] =
		{
			"UNS_Boonie_TIG2",
			"UNS_Boonie_TIGF4",
			"UNS_USMC_COVER",
			"UNS_Boonie_OD",
			"UNS_Boonie_OD2",
			"UNS_Boonie_DK",
			"UNS_Boonie_DKF",
			"UNS_M1_1RM",
			"UNS_M1_9A",
			"UNS_M1_8A",
			"UNS_M1_7A",
			"UNS_M1_6A",
			"UNS_M1_5A",
			"UNS_M1_4A",
			"UNS_M1_3A",
			"UNS_M1_2A",
			"UNS_M1_1A",
			"UNS_M1_MP",
			"UNS_M1_1V7",
			"UNS_M1_1V6",
			"UNS_M1_1V5",
			"UNS_M1_1V4",
			"UNS_M1_1V3",
			"UNS_M1_1V2",
			"UNS_TC_1",
			"UNS_TC_2",
			"UNS_Headband_BK",
			"UNS_Field_Cap",
			"UNS_HP_Helmet_1AC",
			"UNS_HP_Helmet_11AC",
			"UNS_HP_Helmet_17AC",
			"UNS_HP_Helmet_1MD",
			"UNS_HP_Helmet_OG",
			"UNS_HP_Helmet_TIGER"
		};
	};
	
	class Coolness
	{
		name = "Coolness";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\Goggles_ca.paa";
		items[] =
		{
			"UNS_Bullets",
			"UNS_Ear",
			"UNS_Finger",
			"UNS_Peace",
			"UNS_Scarf_1stCav",
			"UNS_Scarf_ARVN",
			"UNS_Towel",
			"G_Aviator"
		};
	};
	
	class Suppressors
	{
		name = "Suppressors";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemmuzzle_ca.paa";
		items[] =
		{
			"uns_s_M14",
			"uns_s_M16",
			"uns_s_MAC10",
			"uns_s_M3a1",
			"uns_s_UZI",
			"uns_s_M1911"
		};
	};
	
	class Scopes
	{
		name = "Scopes";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemoptic_ca.paa";
		items[] =
		{
			"uns_o_LeatherwoodART_m14",
			"uns_o_LeatherwoodART_m16",
			"uns_o_RedfieldART_m70",
			"uns_o_Unertl8x_m70",
			"uns_o_colt4x",
			"uns_o_ANPVS2_M16",
			"uns_o_ANPVS2_M14"
		};
	};
	
	class Hardware
	{
		name = "Hardware";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"Exile_Item_DuctTape",
			"Exile_Item_ExtensionCord",
			"Exile_Item_FuelCanisterEmpty",
			"Exile_Item_FuelCanisterFull",
			"Exile_Item_JunkMetal",
			"Exile_Item_LightBulb",
			"Exile_Item_Cement",
			"Exile_Item_Sand",
			"Exile_Item_MetalBoard",
			"Exile_Item_MetalPole",
			"Exile_Item_MetalWire",
			"DDR_Item_Silver_Bar",
			"DDR_Item_Gold_Bar",
			"Exile_Container_Safe_Small",
			"Exile_Item_CamoTentKit",
			"Exile_Item_CodeLock"
		};
	};
	
	class Tools
	{
		name = "Tools";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"Exile_Item_Matches",
			"Exile_Item_CookingPot",
			"Exile_Item_Handsaw",
			"Exile_Item_Pliers",
			"Exile_Item_Wrench",
			"Exile_Item_Hammer",
			"Exile_Melee_Axe",
			"Exile_Item_Shovel",
			"Exile_Item_Knife",
			"Exile_Item_Grinder",
			"Exile_Item_Screwdriver",
			"Exile_Item_Foolbox",
			"Binocular",
			"DDR_Item_Fishing_Net"
		};
	};
	
	class RepairParts
	{
		name = "Repair Parts";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"DDR_Item_Glass",
			"Exile_Item_CarWheel",
			"DDR_Item_Fiberglass",
			"DDR_Item_Fuel_Tank",
			"DDR_Item_Tailrotor",
			"DDR_Item_Main_Rotor",
			"DDR_Item_Engine"
		};
	};

	class FirstAid
	{
		name = "First Aid";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"FirstAidKit",
			"Exile_Item_Bandage",
			"DDR_Item_Dressing",
			"DDR_Item_Painkillers",
			"Exile_Item_Defibrillator"
		};
	};

	class USBackpacks
	{
		name = "US Backpacks";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\backpack_ca.paa";
		items[] =
		{
			"UNS_ARMY_RTO",
			"UNS_ARMY_RTO2",
			"UNS_SF_RTO2",
			"UNS_Alice_LRP2",
			"UNS_Alice_F3",
			"UNS_Alice_F4",
			"UNS_Alice_F5",
			"UNS_Alice_F6",
			"UNS_Alice_F7",
			"UNS_Alice_F8",
			"UNS_Alice_F9",
			"UNS_Alice_F10",
			"UNS_Alice_F11"
		};
	};
	
	class Ammo
	{
		name = "Ammo";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\CargoMag_ca.paa";
		items[] =
		{
			"uns_12gaugemag_4",
			"uns_12gaugemag_6",
			"uns_m870mag",
			"uns_ithaca37mag",
			"uns_m1897mag",
			"uns_model12mag",
			"uns_38specmag",
			"uns_357mag",
			"uns_m1911mag",
			"uns_coltcmdrmag",
			"uns_13Rnd_hp",
			"uns_mac10mag",
			"uns_32Rnd_uzi",
			"uns_m3a1mag",
			"uns_m1garandmag",
			"uns_m1garandmag_T",
			"uns_m14mag",
			"uns_m14mag_T",
			"uns_model70mag",
			"uns_model70mag_T",
			"uns_30Rnd_556x45_Stanag",
			"uns_30Rnd_556x45_Stanag_T",
			"uns_m60mag_200",
			"uns_m60mag_500",
			"uns_100Rnd_127x99_M2",
			"uns_500Rnd_127x99_M2",
			"uns_200Rnd_127x99_M2",
			"uns_1000Rnd_127x99_M2"
		};
	};

	class Illumination
	{
		name = "Illumination";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"uns_40mm_white",
			"uns_40mm_green",
			"uns_40mm_red",
			"uns_40mm_yellow",
			"uns_40mm_mkv_White",
			"uns_40mm_mkv_Green",
			"uns_40mm_mkv_Red",
			"uns_40mm_mkv_Yellow"
		};
	};

	class Smoke
	{
		name = "Smoke";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"uns_1Rnd_Smoke_MKV",
			"uns_1Rnd_SmokeRed_MKV",
			"uns_1Rnd_SmokeGreen_MKV",
			"uns_1Rnd_SmokeYellow_MKV",
			"uns_1Rnd_Smoke_40mm",
			"uns_1Rnd_SmokeRed_40mm",
			"uns_1Rnd_SmokeGreen_40mm",
			"uns_1Rnd_SmokeYellow_40mm",
			"uns_m18Purple",
			"uns_m18Yellow",
			"uns_m18Green",
			"uns_m18red",
			"uns_m18white",
			"uns_m18Orange",
			"uns_m18Blue"
		};
	};

	class Explosives
	{
		name = "Explosives";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\cargothrow_ca.paa";
		items[] =
		{
			"uns_ex41mag",
			"Uns_1Rnd_HE_M381",
			"Uns_1Rnd_HE_M406",
			"PipeBomb",
			"uns_m308gren",
			"uns_m14gren",
			"uns_m34gren",
			"uns_m67gren",
			"uns_m61gren",
			"uns_f1gren",
			"uns_rg42gren",
			"uns_t67gren",
			"uns_rgd33gren",
			"uns_rgd5gren",
			"uns_30Rnd_155mmHE",
			"uns_30Rnd_155mmSMOKE",
			"uns_30Rnd_155mmILLUM"
		};
	};

	class Pistols
	{
		name = "Pistols";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\handgun_ca.paa";
		items[] =
		{
			"uns_38spec",
			"uns_357m",
			"uns_coltcmdr",
			"uns_bhp",
			"uns_m1911",
			"uns_mkvFlarePistol"
		};
	};

	class SMGs
	{
		name = "SMGs";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"uns_uzi",
			"uns_mac10",
			"uns_m3a1"
		};
	};

	class LMGs
	{
		name = "LMGs";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"uns_m60"
		};
	};

	class Rifles
	{
		name = "Rifles";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"uns_M16A1",
			"uns_xm177e2",
			"uns_m1garand",
			"uns_m14",
			"uns_model70_iron"
		};
	};

	class Shotguns
	{
		name = "Shotguns";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"uns_ithaca37",
			"uns_m1897",
			"uns_model12",
			"uns_m870",
			"uns_m79",
			"uns_ex41"
		};
	};
	
	class Cars
	{
		name = "Cars";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"uns_m274_m60",
			"uns_m274",
			"uns_willys",
			"uns_willys_2",
			"uns_willys_2_usmp",
			"uns_m37b1",
			"uns_m37b1_m1919",
			"uns_willys_2_m60",
			"uns_willys_2_m1919"
		};
	};

	class Trucks
	{
		name = "Trucks";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"uns_M35A2_fueltanker",
			"uns_M35A2_ammo",
			"uns_M35A2_repair",
			"uns_M35A2",
			"uns_M35A2_Open"
		};
	};
	
	class APCs
	{
		name = "APCs";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"uns_M132",
			"uns_M577_amb",
			"uns_M113_transport",
			"uns_xm706e1",
			"uns_M113_30cal",
			"uns_M113_ENG",
			"uns_M113_M60"
		};
	};
	
	/*class Tanks
	{
		name = "Tanks";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"uns_m551"
		};
	};
	
	class Artillery
	{
		name = "Artillery";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"Uns_M114_artillery",
			"Uns_M55_Quad"
		};
	};*/

	class UtilityHelicopters
	{
		name = "Utility Helicopters";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"uns_H13_medevac_Army",
			"uns_ch34_army",
			"uns_h21c",
			"uns_uh1D_med",
			"uns_ch47a_medevac",
			"uns_oh6_transport"
		};
	};
	
	class AttackHelicopters
	{
		name = "Attack Helicopters";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"uns_UH1D_m60",
			"uns_UH1C_M21_M200",
			"UNS_AH1G_FFAR",
			"uns_h21c_mg",
			"uns_H13_transport_Army",
			"uns_ch34_army_M60",
			"uns_H13_gunship_Army",
			"uns_ch47_m60_army",
			"uns_ch53d_m2_usmc"
		};
	};
	
	class Planes
	{
		name = "Planes";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"UNS_skymaster_OBS",
			"uns_c1a6",
			"uns_AC47",
			"uns_ov10_usaf"
		};
	};
	
	class Boats
	{
		name = "Boats";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"UNS_Zodiac_W",
			"uns_pbr",
			"uns_pbr_mk18",
			"uns_PBR_M10"
		};
	};
};

class CfgTraders
{
	class Exile_Trader_Armory
	{
		name = "ARMORY";
		showWeaponFilter = 1;
		categories[] = 
		{
			"USUniforms",
			"USVests",
			"USHeadgear",
			"Coolness",
			"Suppressors",
			"Scopes",
			"USBackpacks",
			"Ammo",
			"Illumination",
			"Smoke",
			"Explosives",
			"Pistols",
			"SMGs",
			"LMGs",
			"Rifles",
			"Shotguns"
		};
	};

	class Exile_Trader_Hardware
	{
		name = "HARDWARE";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Hardware",
			"Tools",
			"FirstAid",
			"RepairParts"
		};
	};

	class Exile_Trader_Vehicle
	{
		name = "VEHICLE";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Cars",
			"Trucks",
			"APCs",
			"Tanks",
			"Artillery"
		};
	};
	
	class Exile_Trader_Boat
	{
		name = "VEHICLE";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Boats"
		};
	};
	
	class Exile_Trader_Aircraft
	{
		name = "AIRCRAFT";
		showWeaponFilter = 0;
		categories[] = 
		{
			"UtilityHelicopters", 
			"AttackHelicopters",
			"Planes"
		};
	};
};

class CfgTrading 
{
	sellPriceFactor = 0.3;
	
	rekeyPriceFactor = 0.1;

	class requiredRespect 
	{
		Level1 = 0;
		Level2 = 3000;
		Level3 = 6000;
		Level4 = 9000;
		Level5 = 12000;
		Level6 = 15000;
	};
};

class CfgVirtualGarage
{
	enableVirtualGarage = 1;	
	
	canAccessGarageInCombat = 1;
	
	clearInventoryOnStore = 0;
	
	numberOfVehicles[] = 
	{
		1,			// Level 1
		2, 			// Level 2 
		3, 			// Level 3
		4,	 		// Level 4
		5, 			// Level 5
		6, 			// Level 6
		7,	 		// Level 7
		8, 			// Level 8
		9, 			// Level 9
		10 			// Level 10
	};
	
	allowedVehicleTypes[] = {"Car","Tank","Plane","Air","Ship","Submarine"};
};

class CfgXM8 
{
	class settings
	{
		controlID = 4070;
		appID = "App01";
		title = "Settings";
	};
	
	class healthScanner
	{
		controlID = 4120;
		appID = "App02";
		title = "Health Scanner";
	};
	
	class slothMachine
	{
		controlID = 4140;
		appID = "App03";
		title = "Sloth Machine";
	};
};

class XM8_App01_Button: RscExileXM8AppButton1x1
{
    textureNoShortcut = "\exile_assets\texture\ui\xm8_app_settings_ca.paa";
    text = "SETTINGS";
    onButtonClick = "['settings', 0] call ExileClient_gui_xm8_slide";
    resource = "XM8SlideSettings";
};

class XM8_App02_Button: RscExileXM8AppButton1x1
{
    textureNoShortcut = "\exile_assets\texture\ui\xm8_app_health_scanner_ca.paa";
    text = "HEALTH";
    onButtonClick = "['healthScanner', 0] call ExileClient_gui_xm8_slide";
    resource = "XM8SlideHealthScanner";
};

class XM8_App03_Button: RscExileXM8AppButton1x1
{
    textureNoShortcut = "\exile_assets\texture\ui\xm8_app_slothMachine_ca.paa";
    text = "SLOT MACHINE";
    onButtonClick = "['slothMachine', 0] call ExileClient_gui_xm8_slide";
    resource = "XM8SlideSlothMachine";
};

class XM8_App04_Button: RscExileXM8AppButton1x1
{
    textureNoShortcut = "\exile_assets\texture\ui\xm8_app_boom_ca.paa";
    text = "???";
    onButtonClick = "call ExileClient_system_breaching_detonate";
    resource = "";
};

class XM8_App05_Button: RscExileXM8AppButton1x1
{
    textureNoShortcut = "";
    text = "";
    onButtonClick = "";
    resource = "";
};

class XM8_App06_Button: RscExileXM8AppButton1x1
{
    textureNoShortcut = "";
    text = "";
    onButtonClick = "";
    resource = "";
};

class XM8_App07_Button: RscExileXM8AppButton1x1
{
    textureNoShortcut = "";
    text = "";
    onButtonClick = "";
    resource = "";
};

class XM8_App08_Button: RscExileXM8AppButton1x1
{
    textureNoShortcut = "";
    text = "";
    onButtonClick = "";
    resource = "";
};

class XM8_App09_Button: RscExileXM8AppButton1x1
{
    textureNoShortcut = "";
    text = "";
    onButtonClick = "";
    resource = "";
};

class XM8_App10_Button: RscExileXM8AppButton1x1
{
    textureNoShortcut = "";
    text = "";
    onButtonClick = "";
    resource = "";
};

class XM8_App11_Button: RscExileXM8AppButton1x1
{
    textureNoShortcut = "";
    text = "";
    onButtonClick = "";
    resource = "";
};

class XM8_App12_Button: RscExileXM8AppButton1x1
{
    textureNoShortcut = "";
    text = "";
    onButtonClick = "";
    resource = "";
};

class XM8_App13_Button: RscExileXM8AppButton1x1
{
    textureNoShortcut = "";
    text = "";
    onButtonClick = "";
    resource = "";
};

class XM8_App14_Button: RscExileXM8AppButton1x1
{
    textureNoShortcut = "";
    text = "";
    onButtonClick = "";
    resource = "";
};

class XM8SlideSettings: RscExileXM8Slide 
{
	idc = 4070;
	class Controls 
	{
		class GoBackButton: RscExileXM8ButtonMenu
		{
			idc = 4071;
			text = "BACK"; 
			x = (30 - 3) * (0.025);
			y = (19 - 2) * (0.04);
			w = 6 * (0.025);
			h = 1 * (0.04);
			onButtonClick = "['extraApps', 1] call ExileClient_gui_xm8_slide";
		};

		class 8GDropDown: RscExileXM8Combo
		{
			idc = 4072;
			x = (5 - 3) * (0.025);
			y = (5 - 2) * (0.04);
			w = 7 * (0.025);
			h = 1 * (0.04);
			onLBSelChanged = "_this call ExileClient_gui_xm8_slide_settings_event_on8GSelectionChanged";
		};

		class 8GLabel: RscExileXM8Text
		{
			idc = -1;
			text = "VISIBLE IN NETWORK"; 
			x = (13 - 3) * (0.025);
			y = (5 - 2) * (0.04);
			w = 22 * (0.025);
			h = 1 * (0.04);
			shadow = 0;
		};

		class SoundDropDown: RscExileXM8Combo
		{
			idc = 4075;
			x = (5 - 3) * (0.025);
			y = (7 - 2) * (0.04);
			w = 7 * (0.025);
			h = 1 * (0.04);
			onLBSelChanged = "_this call ExileClient_gui_xm8_slide_settings_event_onSoundSelectionChanged";
		};

		class SoundLabel: RscExileXM8Text
		{
			idc = -1;
			text = "MESSAGE BEEP SIGNAL"; 
			x = (13 - 3) * (0.025);
			y = (7 - 2) * (0.04);
			w = 22 * (0.025);
			h = 1 * (0.04);
			shadow = 0;
		};

		class PartyEspDropDown: RscExileXM8Combo
		{
			idc = 4076;
			x = (5 - 3) * (0.025);
			y = (9 - 2) * (0.04);
			w = 7 * (0.025);
			h = 1 * (0.04);
			onLBSelChanged = "_this call ExileClient_gui_xm8_slide_settings_event_onPartyEspSelectionChanged";
		};

		class PartyEspLabel: RscExileXM8Text
		{
			idc = -1;
			text = "COLOR 3D PARTY ICONS"; 
			x = (13 - 3) * (0.025);
			y = (9 - 2) * (0.04);
			w = 22 * (0.025);
			h = 1 * (0.04);
			shadow = 0;
		};

		class PartyEspSlider: RscExileXM8XSliderH
		{
			idc = 4078;
			x = (5 - 3) * (0.025);
			y = (11 - 2) * (0.04);
			w = 7 * (0.025);
			h = 1 * (0.04);
			onSliderPosChanged = "_this call ExileClient_gui_xm8_slide_settings_event_onPartyEspSliderChanged";
		};

		class PartyEspSliderLabel: RscExileXM8Text
		{
			idc = -1;
			text = "OPACITY PLAYER DISPLAY"; 
			x = (13 - 3) * (0.025);
			y = (11 - 2) * (0.04);
			w = 22 * (0.025);
			h = 1 * (0.04);
			shadow = 0;
		};

		class PartyMarkerSlider: RscExileXM8XSliderH
		{
			idc = 4079;
			x = (5 - 3) * (0.025);
			y = (13 - 2) * (0.04);
			w = 7 * (0.025);
			h = 1 * (0.04);
			onSliderPosChanged = "_this call ExileClient_gui_xm8_slide_settings_event_onPartyMarkerSliderChanged";
		};

		class PartyMarkerSliderLabel: RscExileXM8Text
		{
			idc = -1;
			text = "OPACITY MARKER"; 
			x = (13 - 3) * (0.025);
			y = (13 - 2) * (0.04);
			w = 22 * (0.025);
			h = 1 * (0.04);
			shadow = 0;
		};

		class StreamModeDropDown: RscExileXM8Combo
		{
			idc = 4077;
			x = (5 - 3) * (0.025);
			y = (15 - 2) * (0.04);
			w = 7 * (0.025);
			h = 1 * (0.04);
			onLBSelChanged = "_this call ExileClient_gui_xm8_slide_settings_event_onStreamModeSelectionChanged";
		};

		class StreamModeLabel: RscExileXM8Text
		{
			idc = -1;
			text = "MASK PIN CODE IN STREAM"; 
			x = (13 - 3) * (0.025);
			y = (15 - 2) * (0.04);
			w = 22 * (0.025);
			h = 1 * (0.04);
			shadow = 0;
		};
	};
};

class XM8SlideHealthScanner: RscExileXM8Slide
{
	idc = 4120;
	class Controls 
	{
		class GoBackButton: RscExileXM8ButtonMenu
		{
			idc = 4122;
			text = "BACK"; 
			x = (30 - 3) * (0.025);
			y = (19 - 2) * (0.04);
			w = 6 * (0.025);
			h = 1 * (0.04);
			onButtonClick = "['extraApps', 1] call ExileClient_gui_xm8_slide";
		};

		class HealthInfoControlGroup: RscExileXM8ControlsGroupNoHScrollbars
		{
			idc = -1;
			x = (5 - 3) * (0.025);
			y = (5 - 2) * (0.04);
			w = 30 * (0.025);
			h = 15 * (0.04);
			colorBackground[] = {0,0,0,0.25};

			class controls
			{
				class HealthInfo: RscExileXM8StructuredText
				{
					idc = 4121;
					x = 0;
					y = 0;
					w = 29 * (0.025); // minus 1!
					h = 15 * (0.04);
				};
			};
		};
	};
};

class XM8SlideSlothMachine: RscExileXM8Slide
{
	idc = 4140;
	class Controls 
	{
		class Background: RscExileXM8PictureKeepAspect
		{
			idc = -1;
			text = "\exile_assets\texture\ui\slothMachine\xm8_slothMachineBackground.paa";
			x = -3.1 * (0.025) + (0);
			y = -6 * (0.04) + (0);
			w = 40 * (0.025);
			h = 33 * (0.04);
		};
		
		class XM8SlothMachineSpinButton: RscExileXM8PictureButton
		{
			idc = 4141;
			style = 0x30;
			x = 14.3 * (0.025) + (0);
			y = 15.9 * (0.04) + (0);
			w = 5.7 * (0.025);
			h = 2 * (0.04);
			text = "\exile_assets\texture\ui\slothMachine\button_off_ca.paa";
			action = "[] call ExileClient_gui_xm8_slide_slothMachine_event_onSpinButtonClick;";
		};
		
		class GoBackButton: RscExileXM8ButtonMenu
		{
			idc = 4148;
			text = "GO BACK"; 
			x = (30 - 3) * (0.025);
			y = (19 - 2) * (0.04);
			w = 6 * (0.025);
			h = 1 * (0.04);
			sizeEx = .9 * (0.04);
			onButtonClick = "['extraApps', 1] call ExileClient_gui_xm8_slide";
		};
		
		class PopTabsLabel: RscExileXM8StructuredText
		{
			idc = 4142;
			text = "<t align='center'><t color='#e14141'><img image='\exile_assets\texture\ui\poptab_inline_ca.paa' size='1' shadow='true' /></t>";
			x = 6.5 * (0.025) + (0);
			y = 13 * (0.04) + (0);
			w = 6 * (0.025);
			h = 2 * (0.04);
		};
		
		class JackpotLabel: RscExileXM8StructuredText
		{
			idc = 4143;
			text = "<t align='center'><t color='#e14141'></t>";
			x = 14 * (0.025) + (0);
			y = 13 * (0.04) + (0);
			w = 6 * (0.025);
			h = 2 * (0.04);
		};
		
		class WinningsLabel: RscExileXM8StructuredText
		{
			idc = 4144;
			text = "<t align='center'><t color='#e14141'>0</t>";
			x = 21.5 * (0.025) + (0);
			y = 13 * (0.04) + (0);
			w = 6 * (0.025);
			h = 2 * (0.04);
		};
		
		class Symbol01: RscExileXM8PictureKeepAspect
		{
			idc = 4145;
			text = "";
			x = 6.55 * (0.025) + (0);
			y = 4 * (0.04) + (0);
			w = 5.83 * (0.025);
			h = 5 * (0.04);
		};
		
		class Symbol02: RscExileXM8PictureKeepAspect
		{
			idc = 4146;
			text = "";
			x = 14.1 * (0.025) + (0);
			y = 4 * (0.04) + (0);
			w = 5.83 * (0.025);
			h = 5 * (0.04);
		};
		
		class Symbol03: RscExileXM8PictureKeepAspect
		{
			idc = 4147;
			text = "";
			x = 21.6 * (0.025) + (0);
			y = 4 * (0.04) + (0);
			w = 5.83 * (0.025);
			h = 5 * (0.04);
		};
	};
};