PRIVATE ["_player","_vehicle","_canSize","_nameVeh","_nameType","_capacity","_curFuel","_newFuel"];

_player = player;
_vehicle = cursorTarget;
//_canSize = getNumber(configFile >> "cfgMagazines" >> "uns_ItemFuelcanEmpty" >> "fuelcapacity");
//if (_canSize <1) then {_canSize = 20;};
_canSize = 20;
_nameVeh = configFile >> "cfgVehicles" >> TypeOf(_vehicle);
_nameType = getText(_nameVeh >> "displayName");
_capacity = 100;
_curFuel = (fuel _vehicle * _capacity);
_newFuel = (_curFuel - _canSize);
_newFuel = (_newFuel / _capacity);

_player removeMagazine "uns_ItemFuelcanEmpty";
_vehicle setfuel _newFuel;
_player addMagazine "uns_ItemFuelcan";

_player say "siphon";
_player playActionNow "Medic";
hintsilent format ["Vehicle siphoned %1 L",_canSize];

sleep 6;
