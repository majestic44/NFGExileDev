/*
 * Created by SSG Anhor
 * for www.znation.rocks
 * NO USE WITHOUT PERMISSION OF THE AUTHOR!
 */

ExileRouletteChairs = [];
ExileRouletteChairPositions = [];

private _vehicles = [
//MAIN TRADER
["LAND_uns_Heli_H", [6972.51, 10149.1, 34.4245], [0, 0.999999, 0.00133721], [-0.0080009, -0.00133717, 0.999967], true],
["US_Tent_1", [6959, 10166, 36.1051], [0.999986, -7.16638e-006, 0.0053265], [-0.0053265, -0.00133719, 0.999985], true],
["US_Tent_1", [6985, 10166, 36.3438], [1, -4.37114e-008, 0], [0, 0, 1], true],
["LAND_uns_motorpool1", [6972.15, 10167.4, 36.6406], [1, -4.37114e-008, 0], [0, 0, 1], true],
["Land_LampShabby_F", [6977.34, 10169.1, 37.2926], [1, -4.37114e-008, 0], [0, 0, 1], true],
["Land_LampShabby_F", [6966.98, 10169.1, 37.1844], [-1, 1.19249e-008, 0], [0, 0, 1], true],
["Exile_Locker", [6982.44, 10164.4, 34.5242], [-1, 1.19249e-008, 0], [0, 0, 1], true],
["Land_WaterCooler_01_new_F", [6982.3, 10167.2, 35.2976], [-1, 1.19249e-008, 0], [0, 0, 1], true],
["Exile_Locker", [6993.26, 7453.3, 16.6132], [0, 1, 0], [0, 0, 1], true],
["Land_WaterCooler_01_new_F", [6994.48, 7454.49, 17.3754], [-1, 1.19249e-008, 0], [0, 0, 1], true],
["uns_radio2_radio", [6986.15, 10166.3, 35.5545], [0, 1, 0], [0, 0, 1], true],
["uns_radio2_radio", [758.006, 3731.4, 20.5471], [1, -4.37114e-008, 0], [0, 0, 1], true],
["uns_radio2_radio", [6995.74, 7461.2, 18.3678], [-0.416991, -0.90891, 0], [0, 0, 1], true],
//BOAT TRADER
["Land_LampShabby_F", [5536.78, 5946.32, 3.14201], [-0.954154, 0.299315, 0], [0, 0, 1], true],
["Exile_Locker", [5551.63, 5929.78, 1.38982], [-0.987688, 0.156435, 0], [0, 0, 1], true],
["Land_WaterCooler_01_new_F", [5552.01, 5931.48, 2.14271], [-0.987131, 0.156229, 0.0341166], [0.033575, -0.00610492, 0.999418], true],
["uns_radio2_radio", [5536.61, 5943.95, 2.1223], [0.9975, -0.0706676, 0], [0, 0, 1], true],
//ROULETTE
["Tent_Open", [10266.6, 12926.6, 62.3996], [-0.338248, 0.941057, 0], [0, 0, 1], true],
["Exile_RussianRouletteChair", [10266.5, 12927.9, 60.6479], [0, 1, 0], [0, 0, 1], true],
["Exile_RussianRouletteChair", [10263.5, 12927.4, 60.6682], [-0.798635, 0.601815, 0], [0, 0, 1], true],
["Exile_RussianRouletteChair", [10264.7, 12924.1, 60.6111], [-0.121869, -0.992546, 0], [0, 0, 1], true],
["Exile_RussianRouletteChair", [10267.5, 12925.3, 60.6138], [0.777146, -0.62932, 0], [0, 0, 1], true],
["Exile_Locker", [10277.2, 12928.1, 60.5283], [0.939693, -0.34202, 0], [0, 0, 1], true],
["Land_WaterCooler_01_new_F", [10276.9, 12926.7, 61.2551], [0.939693, -0.34202, 0], [0, 0, 1], true],
//MACV BASE
["Land_Destroyer_01_hull_01_F", [758, 3686, -0.503332], [0, 1, 0], [0, 0, 1], true],
["Land_Destroyer_01_hull_02_F", [758, 3726, -0.505001], [0, 1, 0], [0, 0, 1], true],
["Land_Destroyer_01_hull_03_F", [758, 3771, -0.504999], [0, 1, 0], [0, 0, 1], true],
["Land_Destroyer_01_hull_05_F", [758, 3851, -0.507999], [0, 1, 0], [0, 0, 1], true],
["Land_Destroyer_01_hull_04_F", [758, 3816, -0.507332], [0, 1, 0], [0, 0, 1], true],
["Land_Destroyer_01_interior_03_F", [758, 3771, -0.504999], [0, 1, 0], [0, 0, 1], true],
["Land_Destroyer_01_interior_04_F", [758, 3816, -0.507332], [0, 1, 0], [0, 0, 1], true],
["Land_Destroyer_01_interior_02_F", [758, 3726, -0.505001], [0, 1, 0], [0, 0, 1], true],
["Uns_M114_artillery", [758.042, 3691.19, 12.2435], [-8.74228e-008, -0.99966, 0.0260786], [0, 0.0260786, 0.99966], true],
["Uns_M55_Quad", [758.034, 3821.69, 17.5879], [0, 1, 0], [0, 0, 1], true],
["US_Tent_MASH", [747.346, 3784.65, 9.17], [1, -4.37114e-008, 0], [0, 0, 1], true],
["Land_JetEngineStarter_01_F", [767.332, 3859.28, 10.078], [-0.403157, 0.915131, 0], [0, 0, 1], true],
//LIGHTNING
["Land_LampShabby_F", [7618.23, 5486.84, 11.1949], [-8.74228e-008, -1, 0], [0, 0, 1], true],
["Land_LampShabby_F", [7561.89, 5488.84, 12.7026], [-8.74228e-008, -1, 0], [0, 0, 1], true],
["Land_LampShabby_F", [7531.79, 5489.26, 13.1715], [-8.74228e-008, -1, 0], [0, 0, 1], true],
["Land_LampShabby_F", [7494.55, 5490.07, 13.8884], [-8.74228e-008, -1, 0], [0, 0, 1], true],
["Land_LampShabby_F", [8068.91, 5519.55, 8.42866], [-0.527369, 0.849636, 0], [0, 0, 1], true],
["Land_LampShabby_F", [8119.33, 5540.44, 9.01146], [-0.342902, 0.939371, 0], [0, 0, 1], true],
["Land_LampShabby_F", [8170.02, 5560.39, 9.14203], [-0.448374, 0.893846, 0], [0, 0, 1], true],
["Land_LampShabby_F", [8223.74, 5591.37, 7.99299], [-0.555896, 0.831252, 0], [0, 0, 1], true],
["Land_LampShabby_F", [8286.14, 5627.59, 8.23912], [-0.50541, 0.862879, 0], [0, 0, 1], true],
["Land_LampShabby_F", [8386, 5688.41, 8.82464], [0.38361, -0.923495, 0], [0, 0, 1], true],
["Land_LampShabby_F", [8329.2, 5661.81, 8.88913], [0.502017, -0.864858, 0], [0, 0, 1], true],
["Land_LampShabby_F", [8257.22, 5619.91, 7.96766], [0.548542, -0.836123, 0], [0, 0, 1], true],
["Land_LampShabby_F", [9625.87, 5883.64, 14.7236], [-0.0819475, 0.996637, 0], [0, 0, 1], true],
["Land_LampShabby_F", [9656.64, 5886.66, 15.0565], [-0.140537, 0.990075, 0], [0, 0, 1], true],
["Land_LampShabby_F", [9692.37, 5889.89, 15.0236], [-0.173691, 0.9848, 0], [0, 0, 1], true],
["Land_LampShabby_F", [9743.31, 5897.08, 16.0741], [-0.151967, 0.988386, 0], [0, 0, 1], true],
["Land_LampShabby_F", [9797.25, 5904.89, 16.4404], [-0.200426, 0.979709, 0], [0, 0, 1], true],
["Land_LampShabby_F", [10656.1, 6449.48, 6.5983], [0.147946, -0.988995, 0], [0, 0, 1], true],
["Land_LampShabby_F", [10690.8, 6451.68, 5.68301], [0.0226987, -0.999742, 0], [0, 0, 1], true],
["Land_LampShabby_F", [10734.8, 6446.18, 6.8149], [-0.0644058, -0.997924, 0], [0, 0, 1], true],
["Land_LampShabby_F", [11434.4, 6710.11, 8.29843], [0.394818, -0.918759, 0], [0, 0, 1], true],
["Land_LampShabby_F", [11483.3, 6725.81, 7.39543], [0.252535, -0.967588, 0], [0, 0, 1], true],
["Land_LampShabby_F", [11517.8, 6734.66, 7.91469], [0.283613, -0.958939, 0], [0, 0, 1], true],
["Land_LampShabby_F", [11561, 6745.62, 8.58086], [0.246277, -0.969199, 0], [0, 0, 1], true],
["Land_LampShabby_F", [11977.8, 6910.1, 8.05525], [-0.501244, 0.865306, 0], [0, 0, 1], true],
["Land_LampShabby_F", [12028.3, 6933.15, 7.16124], [-0.450381, 0.892837, 0], [0, 0, 1], true],
["Land_LampShabby_F", [12068.2, 6965.34, 7.43775], [0.442352, -0.896841, 0], [0, 0, 1], true],
["Land_LampShabby_F", [12131.1, 6968.11, 9.99678], [-0.426622, 0.90443, 0], [0, 0, 1], true],
["Land_LampShabby_F", [6736.09, 5408.43, 9.2361], [-0.108145, 0.994135, 0], [0, 0, 1], true],
["Land_LampShabby_F", [6682.58, 5410.83, 8.83817], [0.204415, -0.978884, 0], [0, 0, 1], true],
["Land_LampShabby_F", [6619.32, 5400.71, 9.98331], [0.0694451, -0.997586, 0], [0, 0, 1], true],
["Land_LampShabby_F", [6548.49, 5398.96, 12.141], [-0.0451565, -0.99898, 0], [0, 0, 1], true],
//CARRIER
["Land_Carrier_01_hull_01_F", [11074, 2846, -0.176008], [0, 1, 0], [0, 0, 1], true],
["Land_Carrier_01_hull_02_F", [11074, 2871, -0.17734], [0, 1, 0], [0, 0, 1], true],
["Land_Carrier_01_hull_03_2_F", [11059, 2906, 4.83571], [0, 1, 0], [0, 0, 1], true],
["Land_Carrier_01_hull_03_1_F", [11089, 2906, 4.81885], [0, 1, 0], [0, 0, 1], true],
["Land_Carrier_01_hull_04_2_F", [11049.5, 2951, 4.83801], [0, 1, 0], [0, 0, 1], true],
["Land_Carrier_01_hull_04_1_F", [11098.5, 2951, 4.80451], [0, 1, 0], [0, 0, 1], true],
["Land_Carrier_01_hull_05_2_F", [11049.5, 2996, 4.84134], [0, 1, 0], [0, 0, 1], true],
["Land_Carrier_01_hull_05_1_F", [11098.5, 2996, 4.77918], [0, 1, 0], [0, 0, 1], true],
["Land_Carrier_01_hull_06_2_F", [11049.5, 3041, 4.84], [0, 1, 0], [0, 0, 1], true],
["Land_Carrier_01_hull_06_1_F", [11098.5, 3041, 4.84764], [0, 1, 0], [0, 0, 1], true],
["Land_Carrier_01_hull_07_2_F", [11049.5, 3086, 4.83934], [0, 1, 0], [0, 0, 1], true],
["Land_Carrier_01_hull_07_1_F", [11098.5, 3086, 4.85454], [0, 1, 0], [0, 0, 1], true],
["Land_Carrier_01_hull_08_2_F", [11049.5, 3131, 4.83802], [0, 1, 0], [0, 0, 1], true],
["Land_Carrier_01_hull_08_1_F", [11098.5, 3131, 4.85214], [0, 1, 0], [0, 0, 1], true],
["Land_Carrier_01_hull_09_2_F", [11049.5, 3176, 4.83535], [0, 1, 0], [0, 0, 1], true],
["Land_Carrier_01_hull_09_1_F", [11098.5, 3176, 4.84496], [0, 1, 0], [0, 0, 1], true],
["Land_Carrier_01_island_01_F", [11044, 3116, 24.8174], [0, 1, 0], [0, 0, 1], true],
["Land_Carrier_01_island_02_F", [11044, 3116, 24.8174], [0, 1, 0], [0, 0, 1], true],
["Land_Carrier_01_island_03_F", [11029, 3141, 24.8451], [0, 1, 0], [0, 0, 1], true]
];

{
    private _vehicle = (_x select 0) createVehicle (_x select 1);
    _vehicle allowDamage false;
    _vehicle setPosWorld (_x select 1);
    _vehicle setVectorDirAndUp [_x select 2, _x select 3];
    _vehicle enableSimulationGlobal (_x select 4);
    _vehicle setVariable ["ExileIsLocked", -1, true];
    
    if (_vehicle isKindOf "Exile_RussianRouletteChair") then
    {
        ExileRouletteChairs pushBack _vehicle;
        ExileRouletteChairPositions pushBack [_x select 1, getDir _vehicle];
    };
}
forEach _vehicles;

private _mines = [
	["uns_tripwire_rgd5", [1534.01, 2749.74, 1.71445], [-1, 4.37114e-008, -0], [0, 0, 1], true]
];

{
	private _mine = createMine [_x select 0, _x select 1, [], 0];
    _mine allowDamage true;
    _mine setPosASL (_x select 1);
    _mine setVectorDirAndUp [_x select 2, _x select 3];
    _mine enableSimulationGlobal (_x select 4);
    _mine setVariable ["ExileIsLocked", -1, true];
}
forEach _mines;

private _invisibleSelections = ["zasleh", "zasleh2", "box_nato_grenades_sign_f", "box_nato_ammoord_sign_f", "box_nato_support_sign_f"];
private _simpleObjects = [
//MAIN TRADER
["csj_heli\w\csj_c_wrk.p3d", [6995.64, 10161.3, 36.7405], [-0.390689, -0.920446, -0.011865], [-0.0146602, -0.0066662, 0.99987]],
["uns_buildings\west_objects\m113ruin2.p3d", [6995.65, 10150.8, 35.7832], [0.731301, -0.682028, 0.00605567], [-0.0120076, -0.00399685, 0.99992]],
["raz_nam_obj\m\aboxes\usvehicleammo.p3d", [6957.57, 10169.1, 35.1895], [0, 1, 0], [0, 0, 1]],
["a3\structures_f_heli\furniture\officetable_01_f.p3d", [6986.07, 10165.9, 35.0028], [-1, 1.19249e-008, 0], [0, 0, 1]],
["uc\misc\barels3.p3d", [6957.12, 10162.7, 35.0353], [0, 1, 0], [0, 0, 1]],
["uns_buildings\west_objects\c_ration_16.p3d", [6961.12, 10162.1, 34.6579], [0, 1, 0], [0, 0, 1]],
["uns_firebase\uns_cabinet1.p3d", [6987.59, 10167.9, 35.1454], [-1, 1.19249e-008, 0], [0, 0, 1]],
["uns_buildings\west_objects\table.p3d", [6998.29, 7455.32, 16.6676], [0, 1, 0], [0, 0, 1]],
["raz_nam_obj\m\map\map_board.p3d", [6987, 10162.7, 35.4876], [0.854511, -0.519434, 0], [0, 0, 1]],
["uns_buildings\west_objects\mapboard.p3d", [6986.76, 10169.4, 35.5244], [0.689145, 0.724624, 0], [0, 0, 1]],
["a3\structures_f_heli\civ\constructions\weldingtrolley_01_f.p3d", [6961.25, 10165.5, 35.0563], [-0.825311, -0.564679, 0], [0, 0, 1]],
["uns_buildings\west_objects\t_sb_20_half.p3d", [6972.43, 10176.2, 34.4187], [0, 1, 0], [0, 0, 1]],
["uns_buildings\west_objects\t_sb_20_half.p3d", [6951.38, 10156, 34.3834], [-1, 1.19249e-008, 0], [0, 0, 1]],
["uns_buildings\west_objects\t_sb_20_half.p3d", [6992.62, 10155.1, 34.3686], [1, -4.37114e-008, 0], [0, 0, 1]],
["uns_buildings\west_objects\t_sb_cnr_half.p3d", [6987.55, 10139.6, 34.3151], [0, 1, 0], [0, 0, 1]],
["uns_buildings\west_objects\t_sb_cnr_half.p3d", [6956.05, 10140, 34.3522], [1, -4.37114e-008, 0], [0, 0, 1]],
["uns_buildings\west_objects\t_sb_cnr_half.p3d", [6956.49, 10171.5, 34.3813], [-8.74228e-008, -1, 0], [0, 0, 1]],
["uns_buildings\west_objects\t_sb_cnr_half.p3d", [6987.94, 10171.1, 34.4051], [-1, 1.19249e-008, 0], [0, 0, 1]],
["a3\structures_f_heli\civ\constructions\tooltrolley_02_f.p3d", [6961.6, 10163.9, 34.84], [0, 1, 0], [0, 0, 1]],
//BOAT TRADER
["uns_pbr\uns_pbr_m10.p3d", [5546.62, 5947.92, 2.0542], [-0.929668, 0.368399, 0], [0, 0, 1]],
["uns_pbr\uns_pbr_m2.p3d", [5551.93, 5965.39, 2.0542], [-0.753455, 0.6575, 0], [0, 0, 1]],
["a3\structures_f_epa\civ\camping\woodentable_small_f.p3d", [5536.55, 5944.08, 1.53957], [0.356868, 0.934155, 0], [0, 0, 1]],
["a3\structures_f\furniture\chairwood_f.p3d", [5535.48, 5944.84, 1.12018], [-0.558268, -0.829661, 0], [0, 0, 1]],
//ROULETTE
["uc\structures\furniture\chairs\kitchen_chair_a\kitchen_chair_a.p3d", [10270.6, 12930.6, 60.6305], [-0.601815, -0.798635, 0], [0, 0, 1]],
["uns_buildings\civilian_objects\uns_skull_gi.p3d", [10268.9, 12936.1, 60.6974], [-0.374607, 0.927184, 0], [0, 0, 1]],
["uns_buildings\civilian_objects\uns_skull_gi.p3d", [10267.8, 12937.4, 60.7215], [-0.374607, 0.927184, 0], [0, 0, 1]],
["uns_buildings\civilian_objects\uns_skull_gi.p3d", [10267.3, 12935.7, 60.7135], [-0.374607, 0.927184, 0], [0, 0, 1]],
["uns_buildings\civilian_objects\uns_skull_gi.p3d", [10265.9, 12934.9, 60.7448], [-0.374607, 0.927184, 0], [0, 0, 1]],
["uns_buildings\civilian_objects\uns_skull_gi.p3d", [10264.8, 12936.7, 60.7878], [-0.374607, 0.927184, 0], [0, 0, 1]],
//HAC DICH
["a3\plants_f\bush\b_arundod3s_f.p3d", [4337.47, 9701.09, 17.6676], [-0.291482, -0.956576, 0], [0, 0, 1]],
["a3\plants_f\bush\b_arundod3s_f.p3d", [4344.65, 9709.3, 17.9456], [0, 1, 0], [0, 0, 1]],
["a3\plants_f\bush\b_arundod3s_f.p3d", [4351.35, 9719.11, 17.8154], [0, 1, 0], [0, 0, 1]],
["a3\plants_f\bush\b_arundod3s_f.p3d", [4355.15, 9729.72, 17.7964], [0, 1, 0], [0, 0, 1]],
["a3\plants_f\bush\b_arundod3s_f.p3d", [4357.21, 9740.04, 16.8333], [0, 1, 0], [0, 0, 1]],
["a3\plants_f\bush\b_arundod3s_f.p3d", [4353.45, 9749.87, 18.9561], [0, 1, 0], [0, 0, 1]],
["a3\plants_f\bush\b_arundod3s_f.p3d", [4348.58, 9759.86, 18.5916], [-0.818235, 0.574884, 0], [0, 0, 1]],
["a3\plants_f\bush\b_arundod3s_f.p3d", [4342.48, 9768.34, 18.213], [-0.761966, 0.647617, 0], [0, 0, 1]],
["a3\plants_f\bush\b_arundod3s_f.p3d", [4337.65, 9777.41, 16.2063], [-0.531912, 0.8468, 0], [0, 0, 1]],
["a3\plants_f\bush\b_arundod3s_f.p3d", [4332.01, 9788.64, 16.3377], [0.88678, -0.462193, 0], [0, 0, 1]],
["a3\plants_f\bush\b_arundod3s_f.p3d", [4330.14, 9799.21, 17.6712], [-0.510567, 0.859838, 0], [0, 0, 1]],
["a3\plants_f\bush\b_arundod3s_f.p3d", [4330.23, 9809.87, 18.568], [0, 1, 0], [0, 0, 1]],
["a3\plants_f\bush\b_arundod3s_f.p3d", [4332.75, 9820.76, 18.9334], [0, 1, 0], [0, 0, 1]],
["a3\plants_f\bush\b_arundod3s_f.p3d", [4332.95, 9830.89, 19.0495], [0, 1, 0], [0, 0, 1]],
["a3\plants_f\bush\b_arundod3s_f.p3d", [4332.01, 9842.3, 19.1962], [-0.536408, 0.843959, 0], [0, 0, 1]],
["a3\plants_f\bush\b_arundod3s_f.p3d", [4329.1, 9854.59, 19.279], [0.973502, -0.228676, 0], [0, 0, 1]],
["a3\plants_f\bush\b_arundod3s_f.p3d", [4327.53, 9693.81, 17.3527], [0.644486, 0.764616, 0], [0, 0, 1]]
];

{
    private _simpleObject = createSimpleObject [_x select 0, _x select 1];
    _simpleObject setVectorDirAndUp [_x select 2, _x select 3];
    
    {
        if ((toLower _x) in _invisibleSelections) then 
        {
            _simpleObject hideSelection [_x, true];
        };
    }
    forEach (selectionNames _simpleObject);
}
forEach _simpleObjects;