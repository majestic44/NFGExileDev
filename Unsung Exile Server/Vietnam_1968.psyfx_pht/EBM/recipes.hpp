#define USE_APEX_Buildings 1

#ifdef USE_APEX_Buildings

class BagbunkergreenBig: Exile_AbstractCraftingRecipe//V0.2.8
{
	name = "Bagbunker big green";
	pictureItem = "Land_Bagbunker_01_large_green_F_Kit";
	returnedItems[] = 
	{
		{1,"Land_Bagbunker_01_large_green_F_Kit"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{5, "Exile_Item_Sand"},
		{3, "Exile_Item_MetalWire"},
		{4, "Exile_Item_WoodPlank"}
	};
	tools[] =
	{
		"Exile_Item_Handsaw",
		"Exile_Item_Hammer"
	};
	category = "Buildings";
};

class SandbagtowerGreenAPEX: Exile_AbstractCraftingRecipe
{
	name = "Sandbagtower green";
	pictureItem = "Land_HBarrier_01_big_tower_green_F_Kit";
	returnedItems[] = 
	{
		{1,"Land_HBarrier_01_big_tower_green_F_Kit"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{5, "Exile_Item_Sand"},
		{1, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_MetalPole"},
		{2, "Exile_Item_MetalWire"}
	};
	tools[] =
	{
		"Exile_Item_Handsaw",
		"Exile_Item_Pliers"
	};
	category = "Buildings";
};

class SandbaglongGreen: Exile_AbstractCraftingRecipe//V0.2.8
{
	name = "Sandbag long green";
	pictureItem = "Land_Bagfence_01_long_green_F_Kit";
	returnedItems[] = 
	{
		{1,"Land_Bagfence_01_long_green_F_Kit"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{4, "Exile_Item_Sand"}
	};
	tools[] =
	{
		"Exile_Item_Shovel"
	};
	category = "Walls";
};

class Barrier3greenAPEX: Exile_AbstractCraftingRecipe
{
	name = "3 H-Barrier green";
	pictureItem = "Land_HBarrier_01_line_3_green_F_Kit";
	returnedItems[] = 
	{
		{1,"Land_HBarrier_01_line_3_green_F_Kit"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{4, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalWire"}
	};
	tools[] =
	{
		"Exile_Item_Pliers"
	};
	category = "Walls";
};

class Barrier5greenAPEX: Exile_AbstractCraftingRecipe
{
	name = "5 H-Barrier green";
	pictureItem = "Land_HBarrier_01_line_5_green_F_Kit";
	returnedItems[] = 
	{
		{1,"Land_HBarrier_01_line_5_green_F_Kit"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{6, "Exile_Item_Sand"},
		{3, "Exile_Item_MetalWire"}
	};
	tools[] =
	{
		"Exile_Item_Pliers"
	};
	category = "Walls";
};

#endif

class Land_Shed_Small_F: Exile_AbstractCraftingRecipe
{
	name = "Shed";
	pictureItem = "Land_Shed_Small_F_Kit";
	returnedItems[] = 
	{
		{1,"Land_Shed_Small_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_JunkMetal"}
	};
	tools[] =
	{
		"Exile_Item_Grinder",
		"Exile_Item_Screwdriver",
		"Exile_Item_Hammer"
	};
	category = "EBM Buildings";
};

class EBM_oven: Exile_AbstractCraftingRecipe
{
	name = "Oven";
	pictureItem = "EBM_oven_Kit";
	returnedItems[] = 
	{
		{1,"EBM_oven_Kit"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{2, "Exile_Item_JunkMetal"},
		{2, "Exile_Item_MetalBoard"}
	};
	tools[] =
	{
		"Exile_Item_Grinder",
		"Exile_Item_Screwdriver",
		"Exile_Item_Hammer"
	};
	category = "EBM Buildings";
};

class EBM_Bed: Exile_AbstractCraftingRecipe
{
	name = "Bunk";
	pictureItem = "EBM_Bed_Kit";
	returnedItems[] = 
	{
		{1,"EBM_Bed_Kit"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{2, "Exile_Item_Metalpole"},
		{2, "Exile_Item_JunkMetal"}
	};
	tools[] =
	{
		"Exile_Item_Grinder",
		"Exile_Item_Screwdriver",
		"Exile_Item_Hammer"
	};
	category = "EBM Buildings";
};

class EBM_Parksign: Exile_AbstractCraftingRecipe
{
	name = "Parksign";
	pictureItem = "EBM_Parksign_Kit";
	returnedItems[] = 
	{
		{1, "EBM_Parksign_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{1, "Exile_Item_MetalPole"},
		{1, "Exile_Item_MetalBoard"}
	};
	tools[] =
	{
		"Exile_Item_Grinder",
		"Exile_Item_Screwdriver"
	};
	category = "EBM Buildings";
};

class BurningBarrel: Exile_AbstractCraftingRecipe
{
	name = "Burning Barrel";
	pictureItem = "MetalBarrel_burning_F_Kit";
	returnedItems[] = 
	{
		{1, "MetalBarrel_burning_F_Kit"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{2, "Exile_Item_MetalBoard"}
	};
	tools[] =
	{
		"Exile_Item_Grinder"
	};
	category = "Misc";
};

class SatelliteAntenna: Exile_AbstractCraftingRecipe
{
	name = "Satellitenantenne";
	pictureItem = "Land_SatelliteAntenna_01_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_SatelliteAntenna_01_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{1, "Exile_Item_MetalPole"},
		{2, "Exile_Item_MetalWire"}
	};
	tools[] =
	{
		"Exile_Item_Pliers",
		"Exile_Item_Wrench",
		"Exile_Item_Grinder"
	};
	category = "Electronics";
};

class Tripodscreen_large: Exile_AbstractCraftingRecipe
{
	name = "LCD TV";
	pictureItem = "Land_TripodScreen_01_large_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_TripodScreen_01_large_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_MetalWire"}
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
		"Exile_Item_Grinder",
		"Exile_Item_Pliers"
	};
	category = "Electronics";
};

class PortableHeliLight_Yellow: Exile_AbstractCraftingRecipe
{
	name = "Heli Light yellow";
	pictureItem = "PortableHelipadLight_01_yellow_F_Kit";
	returnedItems[] = 
	{
		{1, "PortableHelipadLight_01_yellow_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{1, "Exile_Item_LightBulb"},
		{1, "Exile_Item_MetalWire"}
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
		"Exile_Item_Pliers"
	};
	category = "Lights";
};
class PortableHeliLight_white: Exile_AbstractCraftingRecipe
{
	name = "Heli Light white";
	pictureItem = "PortableHelipadLight_01_white_F_Kit";
	returnedItems[] = 
	{
		{1, "PortableHelipadLight_01_white_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{1, "Exile_Item_LightBulb"},
		{1, "Exile_Item_MetalWire"}
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
		"Exile_Item_Pliers"
	};
	category = "Lights";
};
class PortableHeliLight_red: Exile_AbstractCraftingRecipe
{
	name = "Heli Light red";
	pictureItem = "PortableHelipadLight_01_red_F_Kit";
	returnedItems[] = 
	{
		{1, "PortableHelipadLight_01_red_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{1, "Exile_Item_LightBulb"},
		{1, "Exile_Item_MetalWire"}
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
		"Exile_Item_Pliers"
	};
	category = "Lights";
};
class PortableHeliLight_green: Exile_AbstractCraftingRecipe
{
	name = "Heli Light green";
	pictureItem = "PortableHelipadLight_01_green_F_Kit";
	returnedItems[] = 
	{
		{1, "PortableHelipadLight_01_green_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{1, "Exile_Item_LightBulb"},
		{1, "Exile_Item_MetalWire"}
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
		"Exile_Item_Pliers"
	};
	category = "Lights";
};
class PortableHeliLight_blue: Exile_AbstractCraftingRecipe
{
	name = "Heli Light blue";
	pictureItem = "PortableHelipadLight_01_blue_F_Kit";
	returnedItems[] = 
	{
		{1, "PortableHelipadLight_01_blue_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{1, "Exile_Item_LightBulb"},
		{1, "Exile_Item_MetalWire"}
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
		"Exile_Item_Pliers"
	};
	category = "Lights";
};

class MineSign: Exile_AbstractCraftingRecipe
{
	name = "Mine Sign";
	pictureItem = "Land_Sign_Mines_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Sign_Mines_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{1, "Exile_Item_MetalPole"}
	};
	tools[] =
	{
		"Exile_Item_Grinder"
	};
	category = "Signs";
};

class ToolTrolley2: Exile_AbstractCraftingRecipe
{
	name = "Tooltrolley 2";
	pictureItem = "Land_ToolTrolley_02_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_ToolTrolley_02_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{4, "Exile_Item_MetalBoard"}
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
		"Exile_Item_Wrench",
		"Exile_Item_Hammer"
	};
	category = "Storages";
};

class ToolTrolley1: Exile_AbstractCraftingRecipe
{
	name = "Tooltrolley 1";
	pictureItem = "Land_ToolTrolley_01_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_ToolTrolley_01_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{4, "Exile_Item_MetalBoard"}
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
		"Exile_Item_Wrench",
		"Exile_Item_Hammer"
	};
	category = "Storages";
};

class WoodenShelves_Khaki: Exile_AbstractCraftingRecipe
{
	name = "Wooden Shelves Khaki";
	pictureItem = "Land_ShelvesWooden_khaki_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_ShelvesWooden_khaki_F_Kit"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{2, "Exile_Item_WoodLog"},
		{2, "Exile_Item_WoodPlank"}
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
		"Exile_Item_Handsaw",
		"Exile_Item_Hammer"
	};
	category = "Storages";
};
class WoodenShelves_blue: Exile_AbstractCraftingRecipe
{
	name = "Wooden Shelves Blue";
	pictureItem = "Land_ShelvesWooden_blue_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_ShelvesWooden_blue_F_Kit"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{2, "Exile_Item_WoodLog"},
		{2, "Exile_Item_WoodPlank"}
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
		"Exile_Item_Handsaw",
		"Exile_Item_Hammer"
	};
	category = "Storages";
};

class WoodenShelves: Exile_AbstractCraftingRecipe
{
	name = "Wooden Shelves";
	pictureItem = "Land_ShelvesWooden_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_ShelvesWooden_F_Kit"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{2, "Exile_Item_WoodLog"},
		{2, "Exile_Item_WoodPlank"}
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
		"Exile_Item_Handsaw",
		"Exile_Item_Hammer"
	};
	category = "Storages";
};

class Microwave: Exile_AbstractCraftingRecipe
{
	name = "Microwave";
	pictureItem = "Land_Microwave_01_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Microwave_01_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{2, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_MetalWire"}
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
		"Exile_Item_Pliers"
	};
	category = "Electronics";
};

class MetalCase: Exile_AbstractCraftingRecipe
{
	name = "Metalcase";
	pictureItem = "Land_MetalCase_01_large_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_MetalCase_01_large_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{2, "Exile_Item_MetalBoard"}
	};
	tools[] =
	{
		"Exile_Item_Grinder",
		"Exile_Item_Screwdriver"
	};
	category = "Storages";
};

class Fridge: Exile_AbstractCraftingRecipe
{
	name = "Fridge";
	pictureItem = "Fridge_01_closed_F_Kit";
	returnedItems[] = 
	{
		{1, "Fridge_01_closed_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{2, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_MetalWire"}
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
		"Exile_Item_Pliers",
		"Exile_Item_Wrench"
	};
	category = "Storages";
};

class Workbench_2_0: Exile_AbstractCraftingRecipe
{
	name = "Workbench Deluxe";
	pictureItem = "Land_Workbench_01_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Workbench_01_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{2, "Exile_Item_JunkMetal"},
		{4, "Exile_Item_WoodPlank"}
	};
	tools[] =
	{
		"Exile_Item_Grinder",
		"Exile_Item_Screwdriver",
		"Exile_Item_Wrench"
	};
	category = "Furniture";
};

class WeldingTrolley: Exile_AbstractCraftingRecipe
{
	name = "Welding Trolley";
	pictureItem = "Land_WeldingTrolley_01_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_WeldingTrolley_01_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{4, "Exile_Item_JunkMetal"},
		{2, "Exile_Item_MetalWire"}
	};
	tools[] =
	{
		"Exile_Item_Grinder",
		"Exile_Item_Pliers",
		"Exile_Item_Screwdriver"
	};
	category = "Supply";
};

class Pressurewasher: Exile_AbstractCraftingRecipe
{
	name = "Pressure Washer";
	pictureItem = "Land_PressureWasher_01_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_PressureWasher_01_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{3, "Exile_Item_JunkMetal"},
		{3, "Exile_Item_MetalWire"}
	};
	tools[] =
	{
		"Exile_Item_Grinder",
		"Exile_Item_Pliers",
		"Exile_Item_Screwdriver"
	};
	category = "Supply";
};

class Pallettrolley: Exile_AbstractCraftingRecipe
{
	name = "Pallet Trolley";
	pictureItem = "Land_PalletTrolley_01_yellow_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_PalletTrolley_01_yellow_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{4, "Exile_Item_JunkMetal"}
	};
	tools[] =
	{
		"Exile_Item_Grinder",
		"Exile_Item_Screwdriver"
	};
	category = "Storages";
};

class EngineCrane: Exile_AbstractCraftingRecipe
{
	name = "Engine Crane";
	pictureItem = "Land_EngineCrane_01_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_EngineCrane_01_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{4, "Exile_Item_MetalPole"}
	};
	tools[] =
	{
		"Exile_Item_Grinder",
		"Exile_Item_Screwdriver"
	};
	category = "Supply";
};

class OfficeTable: Exile_AbstractCraftingRecipe
{
	name = "Officetable";
	pictureItem = "OfficeTable_01_new_F_Kit";
	returnedItems[] = 
	{
		{1, "OfficeTable_01_new_F_Kit"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{2, "Exile_Item_JunkMetal"},
		{4, "Exile_Item_WoodPlank"}
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
		"Exile_Item_Hammer"
	};
	category = "Furniture";
};

class WoodenTableLarge: Exile_AbstractCraftingRecipe
{
	name = "Table big";
	pictureItem = "Land_WoodenTable_large_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_WoodenTable_large_F_Kit"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{4, "Exile_Item_WoodLog"},
		{4, "Exile_Item_WoodPlank"},
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
		"Exile_Item_Hammer"
	};
	category = "Furniture";
};

class WoodenTableSmall: Exile_AbstractCraftingRecipe
{
	name = "Table small";
	pictureItem = "Land_WoodenTable_small_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_WoodenTable_small_F_Kit"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{2, "Exile_Item_WoodLog"},
		{2, "Exile_Item_WoodPlank"}
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
		"Exile_Item_Hammer"
	};
	category = "Furniture";
};

class RattanTable: Exile_AbstractCraftingRecipe
{
	name = "Rattan Table";
	pictureItem = "Land_RattanTable_01_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_RattanTable_01_F_Kit"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{6, "Exile_Item_WoodPlank"}
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
		"Exile_Item_Hammer"
	};
	category = "Furniture";
};

class RattanChair: Exile_AbstractCraftingRecipe
{
	name = "Rattan Chair";
	pictureItem = "Land_RattanChair_01_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_RattanChair_01_F_Kit"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{4, "Exile_Item_WoodPlank"}
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
		"Exile_Item_Hammer"
	};
	category = "Furniture";
};

class OfficeChair: Exile_AbstractCraftingRecipe
{
	name = "Officechair";
	pictureItem = "Land_OfficeChair_01_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_OfficeChair_01_F_Kit"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{4, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_JunkMetal"}
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
		"Exile_Item_Hammer"
	};
	category = "Furniture";
};

class OfficeCabinet: Exile_AbstractCraftingRecipe
{
	name = "Officecabinet";
	pictureItem = "Land_OfficeCabinet_01_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_OfficeCabinet_01_F_Kit"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{4, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_JunkMetal"}
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
		"Exile_Item_Hammer"
	};
	category = "Furniture";
};

class GymBench: Exile_AbstractCraftingRecipe
{
	name = "Gym Bench";
	pictureItem = "Land_GymBench_01_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_GymBench_01_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{1, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_JunkMetal"}
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
		"Exile_Item_Grinder",
		"Exile_Item_Wrench"
	};
	category = "Misc";
};

class FlatTV: Exile_AbstractCraftingRecipe
{
	name = "TV";
	pictureItem = "Land_FlatTV_01_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_FlatTV_01_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{1, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalWire"},
		{1, "Exile_Item_JunkMetal"}
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
		"Exile_Item_Pliers",
		"Exile_Item_Grinder"
	};
	category = "Electronics";
};

class GarbageContainer: Exile_AbstractCraftingRecipe
{
	name = "Garbagecontainer";
	pictureItem = "Land_GarbageContainer_closed_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_GarbageContainer_closed_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{2, "Exile_Item_MetalBoard"},
		{4, "Exile_Item_JunkMetal"}
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
		"Exile_Item_Grinder"
	};
	category = "Storages";
};

class MetalRack4Layers: Exile_AbstractCraftingRecipe
{
	name = "Metalrack";
	pictureItem = "Land_Metal_rack_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Metal_rack_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{2, "Exile_Item_MetalBoard"},
		{4, "Exile_Item_JunkMetal"}
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
		"Exile_Item_Grinder",
		"Exile_Item_Wrench"
	};
	category = "Storages";
};

class WaterSink: Exile_AbstractCraftingRecipe
{
	name = "Sink";
	pictureItem = "Land_Sink_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Sink_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_MetalBoard"}
	};
	tools[] =
	{
		"Exile_Item_Wrench",
		"Exile_Item_Grinder"
	};
	category = "Supply";
};

class CampingTable: Exile_AbstractCraftingRecipe
{
	name = "Camping Table";
	pictureItem = "Land_CampingTable_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_CampingTable_F_Kit"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{1, "Exile_Item_MetalPole"},
		{1, "Exile_Item_JunkMetal"}
	};
	tools[] =
	{
		"Exile_Item_Screwdriver"
	};
	category = "Furniture";
};

class CampingLight: Exile_AbstractCraftingRecipe
{
	name = "Campinglight";
	pictureItem = "Land_Camping_Light_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Camping_Light_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{1, "Exile_Item_LightBulb"},
		{1, "Exile_Item_JunkMetal"}
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
		"Exile_Item_Pliers"
	};
	category = "Lights";
};

class SleepingBag: Exile_AbstractCraftingRecipe
{
	name = "Sleepingbag";
	pictureItem = "Land_Sleeping_bag_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Sleeping_bag_F_Kit"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{1, "Exile_Item_CamoTentKit"}
	};
	tools[] =
	{
		"Exile_Item_Knife"
	};	
	category = "Tents";
};

class TransmissionTower: Exile_AbstractCraftingRecipe
{
	name = "Radiotower";
	pictureItem = "Land_TTowerSmall_1_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_TTowerSmall_1_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{2, "Exile_Item_ExtensionCord"},
		{2, "Exile_Item_MetalWire"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] =
	{
		"Exile_Item_Foolbox"
	};	
	category = "Electronics";
};

class Shabbylamp: Exile_AbstractCraftingRecipe
{
	name = "Shabby Lamp";
	pictureItem = "Land_LampShabby_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_LampShabby_F_Kit"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{4, "Exile_Item_Woodlog"},
		{1, "Exile_Item_ExtensionCord"},
		{1, "Exile_Item_LightBulb"}
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
		"Exile_Item_Handsaw"
	};
	category = "Lights";
};

class Sunshade: Exile_AbstractCraftingRecipe
{
	name = "Sunshade";
	pictureItem = "Land_Sunshade_04_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Sunshade_04_F_Kit"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{1, "Exile_Item_MetalPole"},
		{1, "Exile_Item_CamoTentKit"}
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
		"Exile_Item_Wrench"
	};
	category = "Furniture";
};

class Sunchair: Exile_AbstractCraftingRecipe
{
	name = "Sunchair";
	pictureItem = "Land_Sun_chair_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Sun_chair_F_Kit"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{1, "Exile_Item_CamoTentKit"},
		{1, "Exile_Item_JunkMetal"}
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
		"Exile_Item_Wrench"
	};
	category = "Furniture";
};

class CargoContainerSmall: Exile_AbstractCraftingRecipe
{
	name = "Container small lockable";
	pictureItem = "Land_CargoBox_V1_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_CargoBox_V1_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_JunkMetal"}
	};
	tools[] =
	{
		"Exile_Item_Grinder",
		"Exile_Item_Screwdriver",
		"Exile_Item_Wrench",
		"Exile_Item_Hammer"
	};
	category = "Storages";
};	

class Chair: Exile_AbstractCraftingRecipe
{
	name = "Chair";
	pictureItem = "Land_ChairWood_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_ChairWood_F_Kit"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{4, "Exile_Item_WoodPlank"}
	};
	tools[] =
	{
		"Exile_Item_Screwdriver"
	};
	category = "Furniture";
};

class Toiletbox: Exile_AbstractCraftingRecipe
{
	name = "Toiletbox";
	pictureItem = "Land_ToiletBox_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_ToiletBox_F_Kit"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{4, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_JunkMetal"}
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
		"Exile_Item_Wrench"
	};
	category = "Misc";
};
	
class Table: Exile_AbstractCraftingRecipe
{
	name = "Officetable big";
	pictureItem = "Land_TableDesk_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_TableDesk_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{6, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_MetalBoard"}
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
		"Exile_Item_Handsaw"
	};
	category = "Furniture";
};			

class CargoHouse: Exile_AbstractCraftingRecipe
{
	name = "Militaryhouse";
	pictureItem = "Land_Cargo_House_V2_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Cargo_House_V2_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{4, "Exile_Item_MetalBoard"},
		{4, "Exile_Item_JunkMetal"}
	};
	tools[] =
	{
		"Exile_Item_Grinder",
		"Exile_Item_Screwdriver"
	};
	category = "Buildings";
};

class BagBunkerBig: Exile_AbstractCraftingRecipe
{
	name = "Bagbunker big";
	pictureItem = "Land_BagBunker_Large_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_BagBunker_Large_F_Kit"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{5, "Exile_Item_Sand"},
		{3, "Exile_Item_MetalWire"},
		{4, "Exile_Item_WoodPlank"}
	};
	tools[] =
	{
		"Exile_Item_Handsaw",
		"Exile_Item_Hammer"
	};
	category = "Buildings";
};

class Pumpstation: Exile_AbstractCraftingRecipe
{
	name = "Pumpstation refuel";
	pictureItem = "Land_FuelStation_Feed_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_FuelStation_Feed_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{4, "Exile_Item_MetalBoard"},
		{4, "Exile_Item_JunkMetal"}
	};
	tools[] =
	{
		"Exile_Item_Grinder",
		"Exile_Item_Screwdriver"
	};
	category = "Supply";
};

class MetalShelf: Exile_AbstractCraftingRecipe
{
	name = "Metalshelf";
	pictureItem = "Land_ShelvesMetal_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_ShelvesMetal_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{3, "Exile_Item_MetalBoard"},
		{5, "Exile_Item_WoodPlank"}
	};
	tools[] =
	{
		"Exile_Item_Grinder",
		"Exile_Item_Screwdriver",
		"Exile_Item_Wrench"
	};
	category = "Storages";
};

class RustyTank: Exile_AbstractCraftingRecipe
{
	name = "Tank";
	pictureItem = "Land_Tank_rust_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Tank_rust_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_WaterBarrelKit"}
	};
	tools[] =
	{
		"Exile_Item_Grinder",
		"Exile_Item_Hammer"
	};
	category = "Supply";
};

class MilitaryArea: Exile_AbstractCraftingRecipe
{
	name = "Sign Military";
	pictureItem = "Land_Sign_WarningMilitaryArea_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Sign_WarningMilitaryArea_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{2, "Exile_Item_JunkMetal"},
		{2, "Exile_Item_WoodPlank"}
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
		"Exile_Item_Grinder"
	};
	category = "Signs";
};

class Icebox: Exile_AbstractCraftingRecipe
{
	name = "Icebox";
	pictureItem = "Land_Icebox_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Icebox_F_Kit"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{2, "Exile_Item_MetalBoard"},
		{10, "DDR_Item_Canteen"},
		{1, "Exile_Item_DuctTape"}
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
		"Exile_Item_Pliers",
		"Exile_Item_Wrench"
	};
	category = "Storages";
};

class Bargate: Exile_AbstractCraftingRecipe
{
	name = "Bar Gate";
	pictureItem = "Land_BarGate_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_BarGate_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{2, "Exile_Item_JunkMetal"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
		"Exile_Item_Grinder",
		"Exile_Item_Wrench"
	};
	category = "Street Stuff";
};

class HeliPad: Exile_AbstractCraftingRecipe
{
	name = "Helipad";
	pictureItem = "Land_HelipadCivil_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_HelipadCivil_F_Kit"},
		{2, "DDR_Item_Canteen"},
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{2, "DDR_Item_Canteen_Fresh"},
		{1, "Exile_Item_DuctTape"},
		{1, "Exile_Item_Cement"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot",
		"Exile_Item_Shovel"
	};
	category = "Buildings";
};

class BagBunkerSmall: Exile_AbstractCraftingRecipe
{
	name = "Bagbunker small";
	pictureItem = "Land_BagBunker_Small_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_BagBunker_Small_F_Kit"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{3, "Exile_Item_Sand"},
		{3, "Exile_Item_WoodPlank"}
	};
	tools[] =
	{
		"Exile_Item_Handsaw",
		"Exile_Item_Hammer"
	};
	category = "Buildings";
};

class MetalWoodenRack: Exile_AbstractCraftingRecipe
{
	name = "Shelf";
	pictureItem = "Land_Metal_wooden_rack_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Metal_wooden_rack_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{1, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_MetalPole"},
		{3, "Exile_Item_WoodPlank"}
	};
	tools[] =
	{
		"Exile_Item_Grinder",
		"Exile_Item_Screwdriver"
	};
	category = "Storages";
};

class SandbagTower: Exile_AbstractCraftingRecipe
{
	name = "Sandbagtower";
	pictureItem = "Land_HBarrierTower_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_HBarrierTower_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{5, "Exile_Item_Sand"},
		{1, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_MetalPole"},
		{2, "Exile_Item_MetalWire"}
	};
	tools[] =
	{
		"Exile_Item_Handsaw",
		"Exile_Item_Hammer"
	};
	category = "Buildings";
};

class SandbagsLong: Exile_AbstractCraftingRecipe
{
	name = "Sandbags long";
	pictureItem = "Land_BagFence_Long_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_BagFence_Long_F_Kit"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{4, "Exile_Item_Sand"}
	};
	tools[] =
	{
		"Exile_Item_Shovel"
	};
	category = "Walls";
};

class LandContainer: Exile_AbstractCraftingRecipe
{
	name = "Container big lockable";
	pictureItem = "Land_Cargo20_military_green_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Cargo20_military_green_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{6, "Exile_Item_MetalBoard"}
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
		"Exile_Item_Hammer",
		"Exile_Item_Wrench",
		"Exile_Item_Grinder"
	};
	category = "Storages";
};

class Ammobox: Exile_AbstractCraftingRecipe
{
	name = "Milboxes";
	pictureItem = "Land_Pallet_MilBoxes_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Pallet_MilBoxes_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{1, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_StorageCrateKit"},
		{2, "Exile_Item_JunkMetal"}
	};
	tools[] =
	{
		"Exile_Item_Foolbox"
	};
	category = "Storages";
};

class Watercooler: Exile_AbstractCraftingRecipe
{
	name = "Watercooler refill";
	pictureItem = "Land_WaterCooler_01_new_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_WaterCooler_01_new_F_Kit"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{4, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_WaterBarrelKit"}
	};
	tools[] =
	{
		"Exile_Item_Foolbox"
	};
	category = "Supply";
};

class CncBarrier: Exile_AbstractCraftingRecipe
{
	name = "Concretebarrier";
	pictureItem = "Land_CncBarrier_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_CncBarrier_F_Kit"},
		{2,"DDR_Item_Canteen"},
		{1, "Exile_Item_CookingPot"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{1, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{1, "Exile_Item_CookingPot"},
		{2, "DDR_Item_Canteen_Fresh"}
	};
	tools[] =
	{
		"Exile_Item_Shovel"
	};
	category = "Street Stuff";
};

class Barrier1: Exile_AbstractCraftingRecipe  //thank you MrDynamite for sharing better Receipideas :)
{
    name = "1 H-Barrier";
    pictureItem = "Land_HBarrier_1_F_Kit";
    returnedItems[] =
    {
        {1, "Land_HBarrier_1_F_Kit"}
    };
    requiresFire = 0;
    requiredInteractionModelGroup = "WorkBench";
    components[] =
    {
        {2, "Exile_Item_Sand"}, // Change
		{1, "Exile_Item_MetalWire"}
    };
	tools[] =
	{
		"Exile_Item_Pliers"
	};
	category = "Walls";
};

class Barrier3: Exile_AbstractCraftingRecipe
{
    name = "3 H-Barrier";
    pictureItem = "Land_HBarrier_3_F_Kit";
    returnedItems[] =
    {
        {1, "Land_HBarrier_3_F_Kit"}
    };
    requiresFire = 0;
    requiredInteractionModelGroup = "WorkBench";
    components[] =
    {
		{4, "Exile_Item_Sand"}, // Change
		{2, "Exile_Item_MetalWire"}
    };
	tools[] =
	{
		"Exile_Item_Pliers"
	};
	category = "Walls";
};

class Barrier5: Exile_AbstractCraftingRecipe
{
    name = "5 H-Barrier";
    pictureItem = "Land_HBarrier_5_F_Kit";
    returnedItems[] =
    {    
        {1, "Land_HBarrier_5_F_Kit"}
    };
    requiresFire = 0;
    requiredInteractionModelGroup = "WorkBench";
    components[] =
    {
		{6, "Exile_Item_Sand"}, // Change
		{3, "Exile_Item_MetalWire"}
    };
	tools[] =
	{
		"Exile_Item_Pliers"
	};
	category = "Walls";
};

class BagBunker: Exile_AbstractCraftingRecipe
{
	name = "Bagbunker 2";
	pictureItem = "Land_BagBunker_Tower_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_BagBunker_Tower_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{3, "Exile_Item_Sand"},
		{1, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WoodPlank"}
	};
	tools[] =
	{
		"Exile_Item_Handsaw",
		"Exile_Item_Hammer"
	};
	category = "Buildings";
};