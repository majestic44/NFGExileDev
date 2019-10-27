PRIVATE ["_player","_vehicle","_canSize","_nameVeh","_nameType","_capacity","_curFuel","_newFuel","_vtype"];

_player = player;
_vehicle = cursorTarget;
_canSize = 20;

//_canSize = getNumber(configFile >> "cfgMagazines" >> "uns_ItemFuelcan" >> "fuelcapacity");
//if (_canSize <1) then {_canSize = 20;};

_nameVeh = configFile >> "cfgVehicles" >> TypeOf(_vehicle);

//develop for types
_capacity = 20;
_vtype = TypeOf vehicle _vehicle;
if (_vtype isKindOf "Helicopter") then {_capacity=200};
if (_vtype isKindOf "Plane") then {_capacity=200};
if (_vtype isKindOf "Ship") then {_capacity=40};
if (_vtype isKindOf "StaticWeapon") then {_capacity=0};
if (_vtype isKindOf "Car") then {_capacity=80};
if (_vtype isKindOf "Truck") then {_capacity=180};
if (_vtype isKindOf "Tank") then {_capacity=120};
if (_vtype isKindOf "uns_Tank") then {_capacity=120};
if (_vtype isKindOf "Motorcycle") then {_capacity=40};

//
_nameType = getText(_nameVeh >> "displayName");
_curFuel = (fuel _vehicle * _capacity);
_newFuel = (_curFuel + _canSize);
if (_newFuel > _capacity) then {_newFuel = _capacity};
_newFuel = (_newFuel / _capacity);

_player removeMagazine "uns_ItemFuelcan";
_vehicle setfuel _newFuel;
_player addMagazine "uns_ItemFuelcanEmpty";

//playsound "fill";
_player say "fill";
_player playActionNow "Medic";
hintsilent format ["Vehicle refueled %1 L",_canSize];
sleep 6;
